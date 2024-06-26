`ifdef VERILATOR
`include "include/common.sv"
`endif

module Datamem 
	import common::*;
(
	input logic[63:0] raw_rd,
	input logic[63:0] raw_wd,
	output logic[63:0] rd,
	output logic[63:0] wd,
	input logic[2:0] addr,
	input msize_t msize,
	input logic mem_unsigned,
	output strobe_t strobe
);
	u1 sign_bit;
	always_comb begin
		unique case(msize)
			MSIZE1: begin 
				unique case(addr)
					3'b000: begin
						sign_bit = mem_unsigned ? 1'b0 : raw_rd[7];
						rd = {{56{sign_bit}}, raw_rd[7-:8]};
					end
					3'b001: begin
						sign_bit = mem_unsigned ? 1'b0 : raw_rd[15];
						rd = {{56{sign_bit}}, raw_rd[15-:8]};
					end
					3'b010: begin
						sign_bit = mem_unsigned ? 1'b0 : raw_rd[23];
						rd = {{56{sign_bit}}, raw_rd[23-:8]};
					end
					3'b011: begin
						sign_bit = mem_unsigned ? 1'b0 : raw_rd[31];
						rd = {{56{sign_bit}}, raw_rd[31-:8]};
					end
					3'b100: begin
						sign_bit = mem_unsigned ? 1'b0 : raw_rd[39];
						rd = {{56{sign_bit}}, raw_rd[39-:8]};
					end
					3'b101: begin
						sign_bit = mem_unsigned ? 1'b0 : raw_rd[47];
						rd = {{56{sign_bit}}, raw_rd[47-:8]};
					end
					3'b110: begin
						sign_bit = mem_unsigned ? 1'b0 : raw_rd[55];
						rd = {{56{sign_bit}}, raw_rd[55-:8]};
					end
					3'b111: begin
						sign_bit = mem_unsigned ? 1'b0 : raw_rd[63];
						rd = {{56{sign_bit}}, raw_rd[63-:8]};
					end
					default: begin
						
					end
				endcase
			end
			MSIZE2: begin
				unique case(addr[2:1])
					2'b00: begin
						sign_bit = mem_unsigned ? 1'b0 : raw_rd[15];
						rd = {{48{sign_bit}}, raw_rd[15-:16]};
					end
					2'b01: begin
						sign_bit = mem_unsigned ? 1'b0 : raw_rd[31];
						rd = {{48{sign_bit}}, raw_rd[31-:16]};
					end
					2'b10: begin
						sign_bit = mem_unsigned ? 1'b0 : raw_rd[47];
						rd = {{48{sign_bit}}, raw_rd[47-:16]};
					end
					2'b11: begin
						sign_bit = mem_unsigned ? 1'b0 : raw_rd[63];
						rd = {{48{sign_bit}}, raw_rd[63-:16]};
					end
					default: begin
						
					end
				endcase
			end
			MSIZE4: begin
				unique case(addr[2])
					1'b0: begin
						sign_bit = mem_unsigned ? 1'b0 : raw_rd[31];
						rd = {{32{sign_bit}}, raw_rd[31-:32]};
					end
					1'b1: begin
						sign_bit = mem_unsigned ? 1'b0 : raw_rd[63];
						rd = {{32{sign_bit}}, raw_rd[63-:32]};
					end
					default: begin
						
					end
				endcase
			end
			MSIZE8: begin
				rd = raw_rd;
			end
			default: begin
				
			end
		endcase
	end
	
	always_comb begin
		strobe = '0;
		wd = '0;
		unique case(msize)
			MSIZE1: begin
				unique case(addr)
					3'b000: begin
						wd[7-:8] = raw_wd[7:0];
						strobe = 8'h01;
					end
					3'b001: begin
						wd[15-:8] = raw_wd[7:0];
						strobe = 8'h02;
					end
					3'b010: begin
						wd[23-:8] = raw_wd[7:0];
						strobe = 8'h04;
					end
					3'b011: begin
						wd[31-:8] = raw_wd[7:0];
						strobe = 8'h08;
					end
					3'b100: begin
						wd[39-:8] = raw_wd[7:0];
						strobe = 8'h10;
					end
					3'b101: begin
						wd[47-:8] = raw_wd[7:0];
						strobe = 8'h20;
					end
					3'b110: begin
						wd[55-:8] = raw_wd[7:0];
						strobe = 8'h40;
					end
					3'b111: begin
						wd[63-:8] = raw_wd[7:0];
						strobe = 8'h80;
					end
					default: begin
						
					end
				endcase
			end
			MSIZE2: begin
				unique case(addr[2:1])
					2'b00: begin
						wd[15-:16] = raw_wd[15:0];
						strobe = 8'h03;
					end
					2'b01: begin
						wd[31-:16] = raw_wd[15:0];
						strobe = 8'h0c;
					end
					2'b10: begin
						wd[47-:16] = raw_wd[15:0];
						strobe = 8'h30;
					end
					2'b11: begin
						wd[63-:16] = raw_wd[15:0];
						strobe = 8'hc0;
					end
					default: begin
						
					end
				endcase
			end
			MSIZE4: begin
				unique case(addr[2])
					1'b0: begin
						wd[31-:32] = raw_wd[31:0];
						strobe = 8'h0f;
					end
					1'b1: begin
						wd[63-:32] = raw_wd[31:0];
						strobe = 8'hf0;
					end
					default: begin
						
					end
				endcase
			end
			MSIZE8: begin
				wd = raw_wd;
				strobe = '1;
			end
			default: begin
				
			end
		endcase
	end
endmodule
