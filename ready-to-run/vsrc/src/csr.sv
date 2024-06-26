`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module csr
    import common::*;
(
    input logic clk, reset,
	input u64 pc,
    input u1 valid, W_is_mret, D_is_mret, W_is_ecall,
	input u1 handin,
    input u12 csr_write_addr,
    input u12 csr_read_addr,
    input u64 write_data,
    output u64 read_data,
    output u64 pcselect_mepc,
    output dbus_req_t dreq,
    input dbus_resp_t dresp,
	input ibus_resp_t iresp,
    output u64 paddr,
    output logic paddr_done,
	output logic paddr_wait,
	output logic update_pc,
	output logic [63:0] ecall_pc
);

typedef enum logic [3:0] {
    IDLE,
    IDLE_LEVEL1,
    WAIT_LEVEL1,
    LEVEL1_LEVEL2,
    WAIT_LEVEL2,
    LEVEL2_LEVEL3,
    WAIT_LEVEL3,
    COMPLETE,
	WAITING,
	UPDATE_PC
} state_t;

state_t state, state_nxt;
u64 paddr_nxt;
u64 vaddr, vaddr_nxt;
u64 page_table_base, page_table_base_nxt;
u64 pte1, pte2, pte3;
u9 index1, index2, index3, index1_nxt, index2_nxt, index3_nxt;

csr_regs_t regs, regs_nxt;
u2 mode, mode_nxt;

// Intermediate signals to prevent feedback loops
u64 pte1_nxt, pte2_nxt, pte3_nxt;
assign paddr_done = (state_nxt == COMPLETE);
assign paddr_wait = (state == WAITING);

assign update_pc = (state == UPDATE_PC);
assign ecall_pc= regs_nxt.mtvec;

always_ff @(posedge clk) begin
    if (reset) begin
        mode <= 2'b11;
        state <= IDLE;
        paddr <= '0;
        vaddr <= '0;
        index1 <= '0;
        index2 <= '0;
        index3 <= '0;
        page_table_base <= '0;
        pte1 <= '0;
        pte2 <= '0;
        pte3 <= '0;
    end else begin
        regs <= regs_nxt;
        mode <= mode_nxt;
        state <= state_nxt;
        paddr <= paddr_nxt;
        vaddr <= vaddr_nxt;
        index1 <= index1_nxt;
        index2 <= index2_nxt;
        index3 <= index3_nxt;
        page_table_base <= page_table_base_nxt;
        pte1 <= pte1_nxt;
        pte2 <= pte2_nxt;
        pte3 <= pte3_nxt;
    end
end

always_comb begin
    read_data = '0;
    regs_nxt = regs;
    mode_nxt = mode;
    state_nxt = state;
    paddr_nxt = paddr;
    vaddr_nxt = vaddr;
    index1_nxt = index1;
    index2_nxt = index2;
    index3_nxt = index3;
    page_table_base_nxt = page_table_base;

    // Initialize intermediate signals
    pte1_nxt = pte1;
    pte2_nxt = pte2;
    pte3_nxt = pte3;

    // Address Translation Logic
    case (state)
        IDLE: begin
            vaddr_nxt = pc;
            if (mode == 3 || regs.satp.mode != 8) begin
                paddr_nxt = vaddr_nxt;
                state_nxt = IDLE;
            end else begin
                page_table_base_nxt = {8'b0, regs.satp.ppn, 12'b0};
                index1_nxt = vaddr_nxt[38:30];
                index2_nxt = vaddr_nxt[29:21];
                index3_nxt = vaddr_nxt[20:12];
                dreq.valid = 1'b0;
                dreq.addr = '0;
                if (dresp.data_ok) begin
                    dreq.valid = 1'b1;
                    dreq.addr = page_table_base + (u64'(index1_nxt) << 3);
					pte1_nxt = dresp.data;
                    state_nxt = IDLE_LEVEL1;
                end else begin
                    dreq.valid = 1'b1;
					index1_nxt = vaddr_nxt[38:30];
                	index2_nxt = vaddr_nxt[29:21];
               	 	index3_nxt = vaddr_nxt[20:12];
                    dreq.addr = page_table_base + (u64'(index1_nxt) << 3);
                    state_nxt = IDLE;
                end
            end
        end
        IDLE_LEVEL1: begin
            if (dresp.data_ok) begin
                dreq.valid = 1'b1;
                dreq.addr = page_table_base + (u64'(index1_nxt) << 3);
                state_nxt = IDLE_LEVEL1;
            end else begin
                state_nxt = WAIT_LEVEL1;
            end
        end
        WAIT_LEVEL1: begin
            dreq.valid = 1'b0;
            dreq.addr = '0;

            if (dresp.data_ok) begin
                dreq.valid = 1'b1;
                dreq.addr = {7'b0, pte1[54:10], 12'b0} + (u64'(index2_nxt) << 3);
                state_nxt = LEVEL1_LEVEL2;
				pte2_nxt = dresp.data;
            end else begin
                dreq.valid = 1'b1;
                dreq.addr = {7'b0, pte1[54:10], 12'b0} + (u64'(index2_nxt) << 3);
                state_nxt = WAIT_LEVEL1;
            end
        end
        LEVEL1_LEVEL2: begin
            if (dresp.data_ok) begin
                dreq.valid = 1'b1;
                dreq.addr = {7'b0, pte1[54:10], 12'b0} + (u64'(index2_nxt) << 3);
                state_nxt = LEVEL1_LEVEL2;
            end else begin
                state_nxt = WAIT_LEVEL2;
            end
        end
        WAIT_LEVEL2: begin
            dreq.valid = 1'b0;
            dreq.addr = '0;
            
            if (dresp.data_ok) begin
                dreq.valid = 1'b1;
                dreq.addr = {7'b0, pte2[54:10], 12'b0} + (u64'(index3_nxt) << 3);
                state_nxt = LEVEL2_LEVEL3;
				pte3_nxt = dresp.data;
            end else begin
                dreq.valid = 1'b1;
                dreq.addr = {7'b0, pte2[54:10], 12'b0} + (u64'(index3_nxt) << 3);
                state_nxt = WAIT_LEVEL2;
            end
        end
        LEVEL2_LEVEL3: begin
            if (dresp.data_ok) begin
                dreq.valid = 1'b1;
                dreq.addr = {7'b0, pte2[54:10], 12'b0} + (u64'(index3_nxt) << 3);
                state_nxt = LEVEL2_LEVEL3;
            end else begin
                state_nxt = WAIT_LEVEL3;
            end
        end
        WAIT_LEVEL3: begin
            paddr_nxt = {7'b0, pte3[54:10], vaddr[11:0]};
            state_nxt = COMPLETE;
        end
        COMPLETE: begin
			if (iresp.data_ok) begin
				state_nxt = WAITING;
			end else begin
            	state_nxt = COMPLETE;
			end
        end
		WAITING: begin
			if (handin) begin
				state_nxt = UPDATE_PC;
			end else begin
            	state_nxt = WAITING;
			end
		end
		UPDATE_PC: begin
			state_nxt = IDLE;
		end
        default: begin
            state_nxt = IDLE;
        end
    endcase



    unique case (csr_read_addr)
        CSR_MIE: read_data = regs.mie;
        CSR_MIP: read_data = regs.mip;
        CSR_MTVEC: read_data = regs.mtvec;
        CSR_MSTATUS: read_data = regs.mstatus;
        CSR_MSCRATCH: read_data = regs.mscratch;
        CSR_MEPC: read_data = regs.mepc;
        CSR_MCAUSE: read_data = regs.mcause;
        CSR_MCYCLE: read_data = regs.mcycle;
        CSR_MTVAL: read_data = regs.mtval;
        CSR_SATP: read_data = regs.satp;
        CSR_MHARTID: read_data = regs.mhartid;
        default: begin
            read_data = '0;
        end
    endcase
end

always_comb begin
    regs_nxt = regs;
    regs_nxt.mcycle = regs.mcycle + 1;
    mode_nxt = mode;
    if (valid) begin
        unique case (csr_write_addr)
            CSR_MIE: regs_nxt.mie = write_data;
            CSR_MIP: regs_nxt.mip = write_data;
            CSR_MTVEC: regs_nxt.mtvec = write_data;
            CSR_MSTATUS: regs_nxt.mstatus = write_data;
            CSR_MSCRATCH: regs_nxt.mscratch = write_data;
            CSR_MEPC: regs_nxt.mepc = write_data;
            CSR_MCAUSE: regs_nxt.mcause = write_data;
            CSR_MCYCLE: regs_nxt.mcycle = write_data;
            CSR_MTVAL: regs_nxt.mtval = write_data;
            CSR_SATP: regs_nxt.satp = write_data;
            CSR_MHARTID: regs_nxt.mhartid = write_data;
            default: begin
            end
        endcase
        regs_nxt.mstatus.sd = regs_nxt.mstatus.fs != 0;
    end else if (W_is_mret) begin
        regs_nxt.mstatus.mie = regs_nxt.mstatus.mpie;
        regs_nxt.mstatus.mpie = 1'b1;
        regs_nxt.mstatus.mpp = 2'b0;
        regs_nxt.mstatus.xs = 0;
        mode_nxt = regs.mstatus.mpp;
    end else if (W_is_ecall&mode !=3)  begin
		regs_nxt.mepc = pc;
		regs_nxt.mstatus.mpp = mode;
		mode_nxt = 2'b11;
		regs_nxt.mstatus.mpie = regs_nxt.mstatus.mie;
		regs_nxt.mstatus.mie = 0;
		regs_nxt.mcause = 8;///////////////////


	end
end

assign pcselect_mepc = regs.mepc;

endmodule
