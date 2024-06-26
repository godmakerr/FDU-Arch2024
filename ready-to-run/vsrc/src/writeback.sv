`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module writeback
    import common::*;
(
        
    input memory_data_t dataM,
    output writeback_data_t dataW,
    output handin,
    output u12 csr_write_addr, 
    output word_t csr_write_data,
    output u1 csr_write_valid
);

    
    assign dataW.is_bubble = dataM.is_bubble;
    always_comb begin
        dataW.pc = '0;
        dataW.result = '0;
        dataW.ctl = '0;
        dataW.dst = '0;
        dataW.memory_address = '0;
        unique case(dataM.ctl.op)
            default:begin
                dataW.pc = dataM.pc;
                dataW.result = dataM.result;
                dataW.ctl = dataM.ctl;
                dataW.dst = dataM.dst;
                dataW.memory_address = dataM.memory_address;
            end
        endcase
    end
    assign handin = ~dataM.is_bubble;
    
    assign csr_write_addr = dataM.csr;
    assign csr_write_data = dataM.csr_result;
    always_comb begin
        csr_write_valid = '0;
        unique case(dataM.ctl.op)
            CSRRW:begin
                csr_write_valid = '1;
            end
            CSRRS:begin
                csr_write_valid = '1;
            end
            CSRRC:begin
                csr_write_valid = '1;
            end
            CSRRWI:begin
                csr_write_valid = '1;
            end
            CSRRSI:begin
                csr_write_valid = '1;
            end
            CSRRCI:begin
                csr_write_valid = '1;
            end
            default:begin
                csr_write_valid = '0;
            end
        endcase
    end




endmodule
