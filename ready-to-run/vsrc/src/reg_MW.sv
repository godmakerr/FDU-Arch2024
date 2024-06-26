`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module reg_MW
    import common::*;
(
        input logic clk, reset,
        input memory_data_t dataM_in,
        output memory_data_t dataM_out,
        input memory_data_t last_dataM,
        input logic Iwait,
        input logic Dwait
);

    always_ff @ (posedge clk)
    begin

        if(reset) begin    
            dataM_out.result <= '0;
            dataM_out.pc <= 64'h8000_0000;
            dataM_out.ctl <= '0;
            dataM_out.dst <= '0;
            dataM_out.is_bubble <= 1'b1;
            dataM_out.csr <= '0;
            dataM_out.csr_reg_write <= '0;
            dataM_out.csr_result <= '1;
        end
        else if(Dwait == 1)begin
            dataM_out.result <= last_dataM.result;
            dataM_out.pc <= last_dataM.pc;
            dataM_out.ctl <= last_dataM.ctl;
            dataM_out.dst <= last_dataM.dst;
            dataM_out.is_bubble <= 1'b1;
            dataM_out.csr <= last_dataM.csr;
            dataM_out.csr_reg_write <= last_dataM.csr_reg_write;
            dataM_out.csr_result <= last_dataM.csr_result;
        end
        else begin
            dataM_out <= dataM_in;
        end
     end
    
endmodule
