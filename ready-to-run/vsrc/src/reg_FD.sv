`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module reg_FD 
import common::*;
(
    input      logic             clk, reset,
    input      reset_t           reset_IF_ID,
    input      fetch_data_t      dataF_in,
    output     fetch_data_t      dataF_out,
    input      fetch_data_t      last_dataF,
    output     fetch_data_t      copy_dataF,
    input      fetch_data_t      last_dataF_D,
    input      logic             Iwait, Dwait, ireq_valid, iresp_data_ok,
    input      instfunc_t        op,
    input      logic             exe_is_waiting
);

    logic                     hazard_reset;

    always_comb begin
        hazard_reset = '0;
        unique case(reset_IF_ID)
            RESET_CONTINUE: begin
                hazard_reset = 1'b0;
            end
            RESET_RESET: begin
                hazard_reset = 1'b1;
            end
            default: begin

            end
        endcase 
    end

    always_ff @(posedge clk) begin
        copy_dataF  <= dataF_in;
        
        if (Iwait || Dwait || exe_is_waiting == 1'b1) begin
            dataF_out.raw_instr   <= last_dataF_D.raw_instr;
            dataF_out.pc           <= last_dataF_D.pc;
            dataF_out.is_bubble    <= 1'b1;
        end else if (ireq_valid == 0 && last_dataF_D.raw_instr != 32'h0000_0000) begin
            dataF_out.raw_instr   <= last_dataF_D.raw_instr;
            dataF_out.pc           <= last_dataF_D.pc;
            dataF_out.is_bubble    <= 1'b1;
        end else if (ireq_valid == 0 && last_dataF_D.raw_instr == 32'h0000_0000) begin
            dataF_out.raw_instr   <= last_dataF.raw_instr;
            dataF_out.pc           <= last_dataF.pc;
            dataF_out.is_bubble    <= 1'b1;
        end else if (reset || hazard_reset) begin    
            dataF_out.raw_instr   <= last_dataF.raw_instr;
            dataF_out.pc           <= last_dataF.pc;
            dataF_out.is_bubble    <= 1'b1;
        end else begin
            dataF_out.raw_instr   <= dataF_in.raw_instr;
            dataF_out.pc           <= dataF_in.pc;
            dataF_out.is_bubble    <= dataF_in.is_bubble;
        end
    end
endmodule
