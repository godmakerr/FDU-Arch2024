`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module pcselect
    import common::*;
(
    input u64 pc,
    input u64 stall_pc,
    input instfunc_t op,
    input u64 offset,
    output u64 pc_selected,
    input logic Iwait, Dwait, ireq_valid, is_bubble
);
    always_comb begin
        pc_selected = '0;
        if(Iwait  || Dwait || is_bubble) begin
            pc_selected = pc;
        end
        else if( (op == BEQ_P ||op == JAL_P ) )begin
            pc_selected = stall_pc + offset;
        end
        else if(ireq_valid == 0 && op == JALR_P )begin
            pc_selected = offset;
        end
        else if(ireq_valid == 0 && op == PLUS4)begin
            pc_selected = pc + 4;   
        end
        else if(ireq_valid == 0 && op == BEQ_N)begin
            pc_selected = stall_pc + 4; 
        end
        else if(ireq_valid == 0 )begin
            pc_selected = pc;  
        end
        else begin
            unique case (op)
                BEQ_P:begin
                    pc_selected = stall_pc + offset;
                end
                BEQ_N:begin
                    pc_selected = stall_pc + 4;
                end
                PLUS4:begin
                    pc_selected = pc + 4;
                end
                MAINTAIN:begin
                    pc_selected = pc;
                end
                JAL_P:begin
                    pc_selected = stall_pc + offset;
                end
                JALR_P:begin
                    pc_selected = offset;
                end
                default: begin
                    pc_selected = pc + 4; 
                end
            endcase
        end
    end
    
    
endmodule
