`ifdef VERILATOR
`include "include/common.sv"
`include "src/controlUnit.sv"
`else

`endif

module decode 
    import common::*;
(
    input fetch_data_t dataF,
    output decode_data_t dataD,

    output creg_addr_t ra1, ra2,
    input word_t rd1, rd2,

    output instfunc_t op,
    output u64 offset,

    output logic is_jump
);

    always_comb begin
        is_jump = '0;
        if(dataF.is_bubble ==0 && 
        (op == BEQ_P || op == JAL_P) ) begin
            is_jump = 1'b1;
        end
        else begin
            is_jump = 1'b0; 
        end
    end

    control_t ctl;
    controlUnit controlUnit(
        .raw_instr(dataF.raw_instr),
        .ctl(ctl)
    );

    assign dataD.srca = rd1;
    assign dataD.srcb = rd2;
    assign dataD.ctl = ctl;
    assign dataD.dst = dataF.raw_instr[11:7];
    assign dataD.pc = dataF.pc;
    assign dataD.is_bubble = dataF.is_bubble;

    always_comb begin
        op = PLUS4;
        unique case(ctl.op)
            BEQ:begin
                if(rd1 == rd2)begin
                    op = BEQ_P; 
                end
                else begin
                     op = BEQ_N; 
                end
            end
            BNE:begin
                if(rd1 != rd2)begin
                    op = BEQ_P; 
                end
                else begin
                     op = BEQ_N; 
                end
            end
            BLT:begin
                if( $signed(rd1) < $signed(rd2) )begin
                    op = BEQ_P; 
                end
                else begin
                     op = BEQ_N; 
                end
            end
            BGE:begin
                if( $signed(rd1) >= $signed(rd2) )begin
                    op = BEQ_P; 
                end
                else begin
                     op = BEQ_N; 
                end
            end
            BLTU:begin
                if(rd1 < rd2)begin
                    op = BEQ_P; 
                end
                else begin
                     op = BEQ_N; 
                end
            end
            BGEU:begin
                if(rd1 >= rd2)begin
                    op = BEQ_P; 
                end
                else begin
                     op = BEQ_N; 
                end
            end

            JAL:begin
                op = JAL_P;
            end
            default:begin
                op = PLUS4; 
            end
        endcase 
    end

    always_comb begin
        dataD.immediate = '0;
        unique case(ctl.op)
            LUI:begin
                dataD.immediate = {{32{dataF.raw_instr[31]}}, dataF.raw_instr[31:12], {12{1'b0}} };
            end
            AUIPC:begin
                dataD.immediate = {{32{dataF.raw_instr[31]}}, dataF.raw_instr[31:12], {12{1'b0}} };
            end
            SLTI:begin
                dataD.immediate = {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:20]};
            end
            SLTIU:begin
                dataD.immediate = {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:20]};
            end
            ADDIW:begin
                dataD.immediate = {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:20]};
            end 
            default: begin
                dataD.immediate = {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:20]};
            end
        endcase
    end


    assign ra1 = dataF.raw_instr[19:15];
    assign ra2 = dataF.raw_instr[24:20];


    always_comb begin
        dataD.memory_address = '0;
        unique case(ctl.op)
            LD: begin
                dataD.memory_address = rd1 + {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:20] };
            end
            LB: begin
                dataD.memory_address = rd1 + {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:20] };
            end
            LH: begin
                dataD.memory_address = rd1 + {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:20] };
            end
            LW: begin
                dataD.memory_address = rd1 + {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:20] };
            end
            LBU: begin
                dataD.memory_address = rd1 + {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:20] };
            end
            LHU: begin
                dataD.memory_address = rd1 + {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:20] };
            end
            LWU: begin
                dataD.memory_address = rd1 + {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:20] };
            end
            SD: begin
                dataD.memory_address = rd1 + {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:25], dataF.raw_instr[11:7] };
            end
            SB: begin
                dataD.memory_address = rd1 + {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:25], dataF.raw_instr[11:7] };
            end
            SH: begin
                dataD.memory_address = rd1 + {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:25], dataF.raw_instr[11:7] };
            end
            SW: begin
                dataD.memory_address = rd1 + {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:25], dataF.raw_instr[11:7] };
            end
            default: begin
                dataD.memory_address = '0;
            end
        endcase
    end

    always_comb begin
        offset = '0;
        unique case(ctl.op)
            BEQ:begin
                offset = {{52{dataF.raw_instr[31]}}, dataF.raw_instr[7], dataF.raw_instr[30:25], dataF.raw_instr[11:8], 1'b0 };
            end
            BNE:begin
                offset = {{52{dataF.raw_instr[31]}}, dataF.raw_instr[7], dataF.raw_instr[30:25], dataF.raw_instr[11:8], 1'b0 };
            end
            BLT:begin
                offset = {{52{dataF.raw_instr[31]}}, dataF.raw_instr[7], dataF.raw_instr[30:25], dataF.raw_instr[11:8], 1'b0 };
            end
            BGE:begin
                offset = {{52{dataF.raw_instr[31]}}, dataF.raw_instr[7], dataF.raw_instr[30:25], dataF.raw_instr[11:8], 1'b0 };
            end
            BLTU:begin
                offset = {{52{dataF.raw_instr[31]}}, dataF.raw_instr[7], dataF.raw_instr[30:25], dataF.raw_instr[11:8], 1'b0 };
            end
            BGEU:begin
                offset = {{52{dataF.raw_instr[31]}}, dataF.raw_instr[7], dataF.raw_instr[30:25], dataF.raw_instr[11:8], 1'b0 };
            end
            JAL:begin
                offset = {{44{dataF.raw_instr[31]}}, dataF.raw_instr[19:12], dataF.raw_instr[20], dataF.raw_instr[30:21], 1'b0  };
            end
            JALR:begin
                offset = {{52{dataF.raw_instr[31]}}, dataF.raw_instr[31:20] };
            end
            default: begin
                offset = '0;
            end
        endcase
    end


    assign dataD.shamt = {{58'b0}, dataF.raw_instr[25:20]};


endmodule
