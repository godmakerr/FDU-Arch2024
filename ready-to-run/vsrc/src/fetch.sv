`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module fetch
    import common::*;
(
        
    input u32 raw_instr,
    input u64 pc,
    input instr_FETCH_t instr_FETCH,
    input fetch_data_t dataF_next,
    output fetch_data_t dataF,

    input logic Iwait, Dwait, ivalid
);



    always_comb begin
        dataF.raw_instr = '0;
        dataF.pc = '0;
        dataF.is_bubble = '0;
        if(ivalid == 0)begin
            dataF.raw_instr = raw_instr;
            dataF.pc = pc;
            dataF.is_bubble = 1'b1;
        end
        else begin
            unique case(instr_FETCH)
                INSTR_CONTINUE:begin
                    dataF.raw_instr = raw_instr;
                    dataF.pc = pc;
                    dataF.is_bubble = 1'b0;
                end 
                INSTR_MAINTAIN:begin
                    dataF.raw_instr = dataF_next.raw_instr;
                    dataF.pc = dataF_next.pc;
                    dataF.is_bubble = 1'b0;
                end
                default:begin
                    
                end
            endcase
        end
    end
    
endmodule
