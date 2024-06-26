`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module alu
	import common::*;
(
	input [63:0] a, b,
	input alufunc_t alufunc,
	output reg [63:0] c
);
	logic [31:0] half;
	always_comb begin
		c = '0;
		half = '0;
		unique case(alufunc)
		
			ALU_DIRECT: begin
			     c = a; 
			     half='0; 
			end
			ALU_ADD: begin 
			     c = a + b; 
			     half='0; 
			end
			ALU_SUB: begin 
			     c = a - b; 
			     half='0; 
			end
			ALU_AND: begin 
			     c = a & b;
			     half='0; 
			end
			ALU_OR: begin 
			     c = a | b; 
			     half='0; 
			end
			ALU_XOR: begin 
			     c = a ^ b; 
			     half='0; 
			end
			ALU_SSMALL: 
			begin 
			     c = {63'b0,  $signed(a) < $signed(b) }; 
			     half='0; 
			end
			ALU_USMALL: begin 
			     c = {63'b0,  a < b }; 
			     half='0; 
			end
			ALU_LEFT: begin 
			     c = a << b[5:0]; 
			     half='0; 
			end
			ALU_URIGHT: begin 
			     c = a >> b[5:0]; 
			     half='0; 
			end
			ALU_SRIGHT: begin 
			     c = $signed(a) >>> b[5:0]; 
			     half='0; 
			end
			ALU_URIGHT_32: begin
				half = a[31:0] >> b[5:0];
				c = {{32{half[31]}}, half };
			end
			ALU_SRIGHT_32: begin
				half = $signed(a[31:0]) >>> b[5:0];
				c = {{32{half[31]}}, half };
			end
			default: begin
				
			end
		endcase
	end
	
endmodule