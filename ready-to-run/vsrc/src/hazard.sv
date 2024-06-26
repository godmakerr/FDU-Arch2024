`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module hazard
	import common::*;
(
        input creg_addr_t dataE_dst, dataM_dst, dataW_dst,
        input creg_addr_t ra1, ra2,
        input word_t rd1, rd2,
        input u64 pc_in,
        input control_t ctl,
        input u64 offset_in,
        input instfunc_t op,

        output hazard_data_t dataH,

        input logic Iwait, Dwait,
        input logic is_bubbleE, is_bubbleM, is_bubbleW, is_bubble
);

    assign dataH.pc_out = pc_in;

    always_comb begin
        dataH.offset_out = '0;
        unique case (ctl.op)
            JALR: begin
                dataH.offset_out = (rd1 + offset_in) &~ 1;   
            end
            default: begin
                dataH.offset_out = offset_in;
            end
        endcase 
    end

    always_comb begin
        dataH.reset_IF_ID = RESET_CONTINUE;
        dataH.reset_ID_EX = RESET_RESET;
        dataH.instr_FETCH = INSTR_MAINTAIN;
        dataH.ireq_valid = 1'b0;
        dataH.instfunc = MAINTAIN;

        if (ctl.op == ADDI || ctl.op == XORI || ctl.op == ORI || ctl.op == ANDI || ctl.op == LD ||
            ctl.op == SLTI || ctl.op == SLTIU || ctl.op == SLLI || ctl.op == SRLI || ctl.op == SRAI ||
            ctl.op == ADDIW || ctl.op == SLLIW || ctl.op == SRLIW || ctl.op == SRAIW || ctl.op == LB ||
            ctl.op == LH || ctl.op == LW || ctl.op == LBU || ctl.op == LHU || ctl.op == LWU ||
            ctl.op == CSRRW  || ctl.op == CSRRS || ctl.op == CSRRC ) begin
            if (is_bubble == 0 && ((is_bubbleE == 0 && ra1 == dataE_dst) || (is_bubbleM == 0 && ra1 == dataM_dst) ||
                                   (is_bubbleW == 0 && ra1 == dataW_dst)) && ra1 != 5'b00000) begin
                dataH.reset_IF_ID = RESET_CONTINUE;
                dataH.reset_ID_EX = RESET_RESET;
                dataH.instr_FETCH = INSTR_MAINTAIN;
                dataH.ireq_valid = 1'b0;
                dataH.instfunc = MAINTAIN;
            end else begin
                dataH.reset_IF_ID = RESET_CONTINUE;
                dataH.reset_ID_EX = RESET_CONTINUE;
                dataH.instr_FETCH = INSTR_CONTINUE;
                dataH.ireq_valid = 1'b1;
                dataH.instfunc = PLUS4;
            end
        end else if (ctl.op == ADD || ctl.op == XOR || ctl.op == OR || ctl.op == AND || ctl.op == SUB || ctl.op == SD ||
                     ctl.op == SLL || ctl.op == SLT || ctl.op == SLTU || ctl.op == SRL || ctl.op == SRAIW || ctl.op == ADDW ||
                     ctl.op == SUBW || ctl.op == SLLW || ctl.op == SRLW || ctl.op == SRAW || ctl.op == SB || ctl.op == SH ||
                     ctl.op == SW || ctl.op == SRA || ctl.op == MUL || ctl.op == DIV || ctl.op == DIVU || ctl.op == REM ||
                     ctl.op == REMU || ctl.op == MULW || ctl.op == DIVW || ctl.op == DIVUW || ctl.op == REMW || ctl.op == REMUW) begin
            if (is_bubble == 0 && ((ra1 != 5'b00000 && ((is_bubbleE == 0 && ra1 == dataE_dst) ||
                                                        (is_bubbleM == 0 && ra1 == dataM_dst) ||
                                                        (is_bubbleW == 0 && ra1 == dataW_dst))) ||
                                   (ra2 != 5'b00000 && ((is_bubbleE == 0 && ra2 == dataE_dst) ||
                                                        (is_bubbleM == 0 && ra2 == dataM_dst) ||
                                                        (is_bubbleW == 0 && ra2 == dataW_dst))))) begin
                dataH.reset_IF_ID = RESET_CONTINUE;
                dataH.reset_ID_EX = RESET_RESET;
                dataH.instr_FETCH = INSTR_MAINTAIN;
                dataH.ireq_valid = 1'b0;
                dataH.instfunc = MAINTAIN;
            end else begin
                dataH.reset_IF_ID = RESET_CONTINUE;
                dataH.reset_ID_EX = RESET_CONTINUE;
                dataH.instr_FETCH = INSTR_CONTINUE;
                dataH.ireq_valid = 1'b1;
                dataH.instfunc = PLUS4;
            end
        end else if (ctl.op == BEQ || ctl.op == BNE || ctl.op == BLT || ctl.op == BGE || ctl.op == BLTU ||
                     ctl.op == BGEU) begin
            if ((ra1 != 5'b00000 && ((is_bubbleE == 0 && ra1 == dataE_dst) || (is_bubbleM == 0 && ra1 == dataM_dst) ||
                                     (is_bubbleW == 0 && ra1 == dataW_dst))) ||
                (ra2 != 5'b00000 && ((is_bubbleE == 0 && ra2 == dataE_dst) || (is_bubbleM == 0 && ra2 == dataM_dst) ||
                                     (is_bubbleW == 0 && ra2 == dataW_dst)))) begin
                dataH.reset_IF_ID = RESET_CONTINUE;
                dataH.reset_ID_EX = RESET_RESET;
                dataH.instr_FETCH = INSTR_MAINTAIN;
                dataH.ireq_valid = 1'b0;
                dataH.instfunc = MAINTAIN;
            end else begin
                dataH.reset_IF_ID = RESET_CONTINUE;
                dataH.reset_ID_EX = RESET_CONTINUE;
                dataH.instr_FETCH = INSTR_CONTINUE;
                dataH.ireq_valid = 1'b1;
                dataH.instfunc = op;
            end
        end else if (is_bubble == 0 && ctl.op == JAL) begin
            dataH.reset_IF_ID = RESET_RESET;
            dataH.reset_ID_EX = RESET_CONTINUE;
            dataH.instr_FETCH = INSTR_MAINTAIN;
            dataH.ireq_valid = 1'b1;
            dataH.instfunc = op;
        end else if (is_bubble == 0 && ctl.op == JALR) begin
            if (((is_bubbleM == 0 && ra1 == dataE_dst) || (is_bubbleM == 0 && ra1 == dataM_dst) ||
                 (is_bubbleM == 0 && ra1 == dataW_dst)) && ra1 != 5'b00000) begin
                dataH.reset_IF_ID = RESET_CONTINUE;
                dataH.reset_ID_EX = RESET_RESET;
                dataH.instr_FETCH = INSTR_MAINTAIN;
                dataH.ireq_valid = 1'b0;
                dataH.instfunc = MAINTAIN;
            end else begin
                dataH.reset_IF_ID = RESET_CONTINUE;
                dataH.reset_ID_EX = RESET_CONTINUE;
                dataH.instr_FETCH = INSTR_CONTINUE;
                dataH.ireq_valid = 1'b1;
                dataH.instfunc = JALR_P;
            end
        end else begin
            dataH.reset_IF_ID = RESET_CONTINUE;
            dataH.reset_ID_EX = RESET_CONTINUE;
            dataH.instr_FETCH = INSTR_CONTINUE;
            dataH.ireq_valid = 1'b1;
            dataH.instfunc = PLUS4;
        end
    end
    
endmodule
