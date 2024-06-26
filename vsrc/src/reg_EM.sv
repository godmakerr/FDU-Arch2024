`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module reg_EM
    import common::*;(
        input logic clk, reset,
        input execute_data_t dataE_in,
        output execute_data_t dataE_out,

        input execute_data_t last_dataE,
        output execute_data_t copy_dataE,

        input logic Iwait,
        input logic Dwait
);

    always_ff @ (posedge clk)
    begin
        copy_dataE <= dataE_in;
        if(Dwait == 1) begin
            dataE_out <= last_dataE;
        end

        else if(reset) begin    
            dataE_out.result <= '0;
            dataE_out.pc <= 64'h8000_0000;
            dataE_out.ctl <= '0;
            dataE_out.dst <= '0;
            dataE_out.is_bubble <= 1'b1;
        end
        else begin
            dataE_out <= dataE_in;
        end
     end
    
endmodule

