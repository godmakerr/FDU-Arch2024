`ifndef __CORE_SV
`define __CORE_SV

`ifdef VERILATOR
`include "include/common.sv"
`include "src/regfile.sv"
`include "src/fetch.sv"
`include "src/pcselect.sv"
`include "src/decode.sv"
`include "src/execute.sv"
`include "src/memory.sv"
`include "src/writeback.sv"
`include "src/reg_FD.sv"
`include "src/reg_DE.sv"
`include "src/reg_EM.sv"
`include "src/reg_MW.sv"
`include "src/hazard.sv"

`endif

module core 
	import common::*;
(
	input logic clk, reset,
	output ibus_req_t  ireq,
	input  ibus_resp_t iresp,
	output dbus_req_t  dreq,
	input  dbus_resp_t dresp,
	input logic trint, swint, exint
);


    /* TODO: Add your CPU-Core here. */

    logic [63:0]       pc, pc_nxt;
    logic [31:0]       raw_instr;
    logic              handin;

    always_ff @(posedge clk) begin
        if (reset) begin
            pc <= 64'h8000_0000;
            ireq.addr <= '0;
            ireq.valid <= '1;
        end else begin
            pc <= pc_nxt;
            if (ireq.valid == 1'b0) begin
                ireq.addr <= pc_nxt;
                ireq.valid <= 1'b1;
            end else begin
                if (iresp.data_ok == 0) begin
                    ireq.addr <= ireq.addr;
                    ireq.valid <= ireq.valid;
                end else begin
                    ireq.addr <= ireq.addr;
                    ireq.valid <= 1'b0;
                end
            end
        end
    end

    always_comb begin
        raw_instr = (iresp.data_ok == 1) ? iresp.data : '0;
    end

    fetch_data_t       dataF, dataF_next, dataF_copy;
    decode_data_t      dataD, dataD_next, dataD_copy;
    execute_data_t     dataE, dataE_next, dataE_copy;
    memory_data_t      dataM, dataM_next, dataM_copy;
    writeback_data_t   dataW;
    hazard_data_t      dataH;
    creg_addr_t        ra1, ra2;
    word_t             rd1, rd2;
    u64                pcselect_mepc;
    instfunc_t         op;
    u64                offset;
    logic              Dwait, Iwait, is_jump;

    assign Dwait = dreq.valid & (~dresp.data_ok);
    assign Iwait = ireq.valid & (~iresp.data_ok);

    pcselect pcselect (
        .pc             (pc),
        .stall_pc       (dataH.pc_out),
        .op             (dataH.instfunc),
        .offset         (dataH.offset_out),
        .pc_selected    (pc_nxt),
        .Iwait          (Iwait),
        .Dwait          (Dwait),
        .ireq_valid     (ireq.valid),
        .is_bubble      (dataD.is_bubble)
    );

    fetch fetch (
        .raw_instr      (raw_instr),
        .pc             (pc),
        .instr_FETCH    (dataH.instr_FETCH),
        .dataF_next     (dataF_next),
        .dataF          (dataF),
        .Iwait          (Iwait),
        .Dwait          (Dwait),
        .ivalid         (ireq.valid)
    );

    reg_FD reg_FD (
        .clk            (clk),
        .reset          (reset),
        .reset_IF_ID    (dataH.reset_IF_ID),
        .dataF_in       (dataF),
        .dataF_out      (dataF_next),
        .last_dataF     (dataF_copy),
        .copy_dataF     (dataF_copy),
        .last_dataF_D   (dataF_next),
        .Iwait          (Iwait),
        .Dwait          (Dwait),
        .ireq_valid     (ireq.valid),
        .iresp_data_ok  (iresp.data_ok),
        .op             (op),
        .exe_is_waiting (dataE.is_waiting)
    );

    decode decode (
        .dataF          (dataF_next),
        .dataD          (dataD),
        .ra1            (ra1),
        .ra2            (ra2),
        .rd1            (rd1),
        .rd2            (rd2),
        .op             (op),
        .offset         (offset),
        .is_jump        (is_jump)
    );

    reg_DE reg_DE (
        .clk            (clk),
        .reset          (reset),
        .reset_ID_EX    (dataH.reset_ID_EX),
        .dataD_in       (dataD),
        .dataD_out      (dataD_next),
        .last_dataD     (dataD_next),
        .Iwait          (Iwait),
        .Dwait          (Dwait),
        .exe_is_waiting (dataE.is_waiting)
    );

    execute execute (
        .clk            (clk),
        .reset          (reset),
        .dataD          (dataD_next),
        .dataE          (dataE)
    );

    reg_EM reg_EM (
        .clk            (clk),
        .reset          (reset),
        .dataE_in       (dataE),
        .dataE_out      (dataE_next),
        .last_dataE     (dataE_next),
        .copy_dataE     (dataE_copy),
        .Iwait          (Iwait),
        .Dwait          (Dwait)
    );

    memory memory (
        .dataE          (dataE_next),
        .dresp          (dresp),
        .dreq           (dreq),
        .dataM          (dataM)
    );

    reg_MW reg_MW (
        .clk            (clk),
        .reset          (reset),
        .dataM_in       (dataM),
        .dataM_out      (dataM_next),
        .last_dataM     (dataM_next),
        .Iwait          (Iwait),
        .Dwait          (Dwait)
    );

    writeback writeback (
        .dataM          (dataM_next),
        .dataW          (dataW),
        .handin         (handin)
    );

    regfile regfile (
        .clk            (clk),
        .reset          (reset),
        .ra1            (ra1),
        .ra2            (ra2),
        .rd1            (rd1),
        .rd2            (rd2),
        .WE             (dataW.ctl.regwrite & ~dataW.is_bubble),
        .wa             (dataW.dst),
        .wd             (dataW.result)
    );

    hazard hazard (
        .dataE_dst      (dataE.dst),
        .dataM_dst      (dataM.dst),
        .dataW_dst      (dataW.dst),
        .ra1            (ra1),
        .ra2            (ra2),
        .rd1            (rd1),
        .rd2            (rd2),
        .pc_in          (dataD.pc),
        .ctl            (dataD.ctl),
        .offset_in      (offset),
        .op             (op),
        .dataH          (dataH),
        .Iwait          (Iwait),
        .Dwait          (Dwait),
        .is_bubbleE     (dataE.is_bubble),
        .is_bubbleM     (dataM.is_bubble),
        .is_bubbleW     (dataW.is_bubble),
        .is_bubble      (dataD.is_bubble)
    );


`ifdef VERILATOR
	DifftestInstrCommit DifftestInstrCommit(
		.clock              (clk),
		.coreid             (0),
		.index              (0),
		.valid              (handin),
		.pc                 (dataW.pc),
		.instr              (0),
		.skip               (dataW.ctl.memwrite & ~dataW.memory_address[31]),
		.isRVC              (0),
		.scFailed           (0),
		.wen                (dataW.ctl.regwrite),
		.wdest              ({3'b0, dataW.dst}),
		.wdata              (dataW.result)
	);
	      
	DifftestArchIntRegState DifftestArchIntRegState (
		.clock              (clk),
		.coreid             (0),
		.gpr_0              (regfile.register_nxt[0]),
		.gpr_1              (regfile.register_nxt[1]),
		.gpr_2              (regfile.register_nxt[2]),
		.gpr_3              (regfile.register_nxt[3]),
		.gpr_4              (regfile.register_nxt[4]),
		.gpr_5              (regfile.register_nxt[5]),
		.gpr_6              (regfile.register_nxt[6]),
		.gpr_7              (regfile.register_nxt[7]),
		.gpr_8              (regfile.register_nxt[8]),
		.gpr_9              (regfile.register_nxt[9]),
		.gpr_10             (regfile.register_nxt[10]),
		.gpr_11             (regfile.register_nxt[11]),
		.gpr_12             (regfile.register_nxt[12]),
		.gpr_13             (regfile.register_nxt[13]),
		.gpr_14             (regfile.register_nxt[14]),
		.gpr_15             (regfile.register_nxt[15]),
		.gpr_16             (regfile.register_nxt[16]),
		.gpr_17             (regfile.register_nxt[17]),
		.gpr_18             (regfile.register_nxt[18]),
		.gpr_19             (regfile.register_nxt[19]),
		.gpr_20             (regfile.register_nxt[20]),
		.gpr_21             (regfile.register_nxt[21]),
		.gpr_22             (regfile.register_nxt[22]),
		.gpr_23             (regfile.register_nxt[23]),
		.gpr_24             (regfile.register_nxt[24]),
		.gpr_25             (regfile.register_nxt[25]),
		.gpr_26             (regfile.register_nxt[26]),
		.gpr_27             (regfile.register_nxt[27]),
		.gpr_28             (regfile.register_nxt[28]),
		.gpr_29             (regfile.register_nxt[29]),
		.gpr_30             (regfile.register_nxt[30]),
		.gpr_31             (regfile.register_nxt[31])
	);

    DifftestTrapEvent DifftestTrapEvent(
		.clock              (clk),
		.coreid             (0),
		.valid              (0),
		.code               (0),
		.pc                 (0),
		.cycleCnt           (0),
		.instrCnt           (0)
	);

	DifftestCSRState DifftestCSRState(
		.clock              (clk),
		.coreid             (0),
		.priviledgeMode     (3),
		.mstatus            (0),
		.sstatus            (0 /* mstatus & 64'h800000030001e000 */),
		.mepc               (0),
		.sepc               (0),
		.mtval              (0),
		.stval              (0),
		.mtvec              (0),
		.stvec              (0),
		.mcause             (0),
		.scause             (0),
		.satp               (0),
		.mip                (0),
		.mie                (0),
		.mscratch           (0),
		.sscratch           (0),
		.mideleg            (0),
		.medeleg            (0)
	);
`endif
endmodule
`endif

