`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module diviter
    import common::*;
(
    input logic clk, reset, valid,
    input [63:0] a, b,
    output logic done,
    output [127:0] c
);
    enum logic { INIT, DOING } state, state_nxt;
    logic[66:0] count, count_nxt;
    logic[66:0] DIV_DELAY;
    assign DIV_DELAY= {2'b0, 1'b1, 64'b0};
    
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
                    count_nxt = DIV_DELAY;
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
                p_nxt = {p_nxt[127:0], 1'b0};
                if (p_nxt[128:64] >= {1'b0, b}) begin
                    p_nxt[128:64] -= {1'b0, b};
                    p_nxt[0] = 1'b1;
                end
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
    assign c = p[127:0];
endmodule
