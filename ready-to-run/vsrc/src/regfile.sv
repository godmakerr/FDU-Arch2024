`ifdef VERILATOR
`include "include/common.sv"
`else

`endif
module regfile 
	import common::*;
 (
	input logic clk, reset,
	input creg_addr_t  ra1, ra2,
	output u64 rd1, rd2,
	input creg_addr_t wa,
	input logic WE,
	input [63:0] wd
);
	u64 [31:0] register, register_nxt;

	assign rd1 = register[ra1];
	assign rd2 = register[ra2];


	always_ff @(posedge clk) begin
		if (reset) begin
			register <= '0;
		end else begin
			register <= register_nxt;
			register[0] <= '0;
		end
	end
	
	for (genvar i = 1; i < 32; i++) begin
		always_comb begin
			register_nxt[i] = register[i];
				if (i == wa && WE) begin
					register_nxt[i] = wd;
				end
		end
	end
		
	

endmodule
