`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module multipler 
    import common::*;
(
    input logic clk, reset, valid,
    input [63:0]  a, b,
    output logic done,
    output [63:0]  c  
);
    enum logic { INIT, DOING } state, state_nxt;
    logic[66:0] count, count_nxt;
    logic[66:0] MULT_DELAY;
    assign MULT_DELAY = {2'b0, 1'b1, 64'b0};
    
    always_ff @(posedge clk) begin
        if (reset) begin
            {state, count} <= '0;
        end else begin
            {state, count} <= {state_nxt, count_nxt};
        end
    end
    assign done = (state_nxt == INIT);
    always_comb begin
        state_nxt = state; 
        count_nxt = count;
        unique case(state)
            INIT: begin
                if (valid) begin
                    state_nxt = DOING;
                    count_nxt = MULT_DELAY;
                end
            end
            DOING: begin
                count_nxt = {1'b0, count_nxt[66:1]};
                if (count_nxt == '0) begin
                    state_nxt = INIT;
                end
            end
        endcase
    end
    u129 p, p_nxt;
    always_comb begin
        p_nxt = p;
        unique case(state)
            INIT: begin
                p_nxt = {65'b0, a};
            end
            DOING: begin
                if (p_nxt[0]) begin
                    p_nxt[128:64] = p_nxt[128:64] + b;
            	end
            	p_nxt = {1'b0, p_nxt[128:1]};
            end
        endcase
    end
    always_ff @(posedge clk) begin
        if (reset) begin
            p <= '0;
        end else begin
            p <= p_nxt;
        end
    end
    assign c = p[63:0];
endmodule
