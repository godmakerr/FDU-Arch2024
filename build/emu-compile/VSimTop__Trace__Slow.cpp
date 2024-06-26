// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VSimTop__Syms.h"


void VSimTop___024root__traceInitSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep) VL_ATTR_COLD;

void VSimTop___024root__traceInitTop(VSimTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VSimTop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VSimTop___024root__traceInitSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+567,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+568,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+569,"io_logCtrl_log_begin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+571,"io_logCtrl_log_end",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+573,"io_logCtrl_log_level",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+575,"io_perfInfo_clean",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+576,"io_perfInfo_dump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+577,"io_uart_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+578,"io_uart_out_ch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+579,"io_uart_in_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+580,"io_uart_in_ch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+567,"SimTop clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+568,"SimTop reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+569,"SimTop io_logCtrl_log_begin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+571,"SimTop io_logCtrl_log_end",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+573,"SimTop io_logCtrl_log_level",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+575,"SimTop io_perfInfo_clean",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+576,"SimTop io_perfInfo_dump",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+577,"SimTop io_uart_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+578,"SimTop io_uart_out_ch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+579,"SimTop io_uart_in_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+580,"SimTop io_uart_in_ch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+1,"SimTop oreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+2,"SimTop oreq\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"MSIZE1", "MSIZE2", "MSIZE4", "MSIZE8"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(1, "common::msize_t", 4, 3, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+3,"SimTop oreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+4,"SimTop oreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+6,"SimTop oreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+7,"SimTop oreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        {
            const char* __VenumItemNames[]
            = {"MLEN1", "MLEN2", "MLEN4", "MLEN8", 
                                                "MLEN16", 
                                                "MLEN32", 
                                                "MLEN64", 
                                                "MLEN128", 
                                                "MLEN256"};
            const char* __VenumItemValues[]
            = {"0", "1", "11", "111", "1111", "11111", 
                                                "111111", 
                                                "1111111", 
                                                "11111111"};
            tracep->declDTypeEnum(2, "common::mlen_t", 9, 8, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+9,"SimTop oreq\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        {
            const char* __VenumItemNames[]
            = {"AXI_BURST_FIXED", "AXI_BURST_INCR", 
                                                "AXI_BURST_WRAP", 
                                                "AXI_BURST_RESERVED"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(3, "common::axi_burst_type_t", 4, 2, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+10,"SimTop oreq\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+11,"SimTop oresp\206 ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+12,"SimTop oresp\206 last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+13,"SimTop oresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+15,"SimTop trint",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+16,"SimTop swint",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+17,"SimTop exint",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+18,"SimTop ireq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+19,"SimTop ireq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+21,"SimTop iresp\206 addr_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+22,"SimTop iresp\206 data_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+23,"SimTop iresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+24,"SimTop dreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+25,"SimTop dreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+27,"SimTop dreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+28,"SimTop dreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+29,"SimTop dreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+31,"SimTop dresp\206 addr_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+32,"SimTop dresp\206 data_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+33,"SimTop dresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+35,"SimTop icreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+36,"SimTop icreq\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+37,"SimTop icreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+38,"SimTop icreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+40,"SimTop icreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+41,"SimTop icreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+43,"SimTop icreq\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+44,"SimTop icreq\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+45,"SimTop dcreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+46,"SimTop dcreq\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+47,"SimTop dcreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+48,"SimTop dcreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+50,"SimTop dcreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+51,"SimTop dcreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+53,"SimTop dcreq\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+54,"SimTop dcreq\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+55,"SimTop icresp\206 ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+56,"SimTop icresp\206 last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+57,"SimTop icresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+59,"SimTop dcresp\206 ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+60,"SimTop dcresp\206 last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+61,"SimTop dcresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+567,"SimTop core clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+568,"SimTop core reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+18,"SimTop core ireq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+19,"SimTop core ireq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+21,"SimTop core iresp\206 addr_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+22,"SimTop core iresp\206 data_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+23,"SimTop core iresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+24,"SimTop core dreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+25,"SimTop core dreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+27,"SimTop core dreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+28,"SimTop core dreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+29,"SimTop core dreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+31,"SimTop core dresp\206 addr_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+32,"SimTop core dresp\206 data_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+33,"SimTop core dresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+15,"SimTop core trint",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+16,"SimTop core swint",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+17,"SimTop core exint",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+63,"SimTop core pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+65,"SimTop core pc_nxt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+67,"SimTop core raw_instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+68,"SimTop core handin",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+69,"SimTop core dataF\206 raw_instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+70,"SimTop core dataF\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+72,"SimTop core dataF\206 is_bubble",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+73,"SimTop core dataF_next\206 raw_instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+74,"SimTop core dataF_next\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+76,"SimTop core dataF_next\206 is_bubble",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+77,"SimTop core dataF_copy\206 raw_instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+78,"SimTop core dataF_copy\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+80,"SimTop core dataF_copy\206 is_bubble",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+81,"SimTop core dataD\206 srca",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+83,"SimTop core dataD\206 srcb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+85,"SimTop core dataD\206 immediate",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+87,"SimTop core dataD\206 shamt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        {
            const char* __VenumItemNames[]
            = {"UNKNOWN", "ADDI", "XORI", "ORI", "ANDI", 
                                                "LUI", 
                                                "JAL", 
                                                "BEQ", 
                                                "LD", 
                                                "SD", 
                                                "ADD", 
                                                "SUB", 
                                                "AND", 
                                                "OR", 
                                                "XOR", 
                                                "AUIPC", 
                                                "JALR", 
                                                "BNE", 
                                                "BLT", 
                                                "BGE", 
                                                "BLTU", 
                                                "BGEU", 
                                                "SLTI", 
                                                "SLTIU", 
                                                "SLLI", 
                                                "SRLI", 
                                                "SRAI", 
                                                "SLL", 
                                                "SLT", 
                                                "SLTU", 
                                                "SRL", 
                                                "SRA", 
                                                "ADDIW", 
                                                "SLLIW", 
                                                "SRLIW", 
                                                "SRAIW", 
                                                "ADDW", 
                                                "SUBW", 
                                                "SLLW", 
                                                "SRLW", 
                                                "SRAW", 
                                                "LB", 
                                                "LH", 
                                                "LW", 
                                                "LBU", 
                                                "LHU", 
                                                "LWU", 
                                                "SB", 
                                                "SH", 
                                                "SW", 
                                                "MUL", 
                                                "DIV", 
                                                "DIVU", 
                                                "REM", 
                                                "REMU", 
                                                "MULW", 
                                                "DIVW", 
                                                "DIVUW", 
                                                "REMW", 
                                                "REMUW"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11", "100", "101", 
                                                "110", 
                                                "111", 
                                                "1000", 
                                                "1001", 
                                                "1010", 
                                                "1011", 
                                                "1100", 
                                                "1101", 
                                                "1110", 
                                                "1111", 
                                                "10000", 
                                                "10001", 
                                                "10010", 
                                                "10011", 
                                                "10100", 
                                                "10101", 
                                                "10110", 
                                                "10111", 
                                                "11000", 
                                                "11001", 
                                                "11010", 
                                                "11011", 
                                                "11100", 
                                                "11101", 
                                                "11110", 
                                                "11111", 
                                                "100000", 
                                                "100001", 
                                                "100010", 
                                                "100011", 
                                                "100100", 
                                                "100101", 
                                                "100110", 
                                                "100111", 
                                                "101000", 
                                                "101001", 
                                                "101010", 
                                                "101011", 
                                                "101100", 
                                                "101101", 
                                                "101110", 
                                                "101111", 
                                                "110000", 
                                                "110001", 
                                                "110010", 
                                                "110011", 
                                                "110100", 
                                                "110101", 
                                                "110110", 
                                                "110111", 
                                                "111000", 
                                                "111001", 
                                                "111010", 
                                                "111011"};
            tracep->declDTypeEnum(4, "common::decode_op_t", 60, 7, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+89,"SimTop core dataD\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        {
            const char* __VenumItemNames[]
            = {"ALU_UNKNOWN", "ALU_DIRECT", "ALU_PASS", 
                                                "ALU_ADD", 
                                                "ALU_SUB", 
                                                "ALU_AND", 
                                                "ALU_OR", 
                                                "ALU_XOR", 
                                                "ALU_SSMALL", 
                                                "ALU_USMALL", 
                                                "ALU_LEFT", 
                                                "ALU_URIGHT", 
                                                "ALU_SRIGHT", 
                                                "ALU_URIGHT_32", 
                                                "ALU_SRIGHT_32"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11", "100", "101", 
                                                "110", 
                                                "111", 
                                                "1000", 
                                                "1001", 
                                                "1010", 
                                                "1011", 
                                                "1100", 
                                                "1101", 
                                                "1110"};
            tracep->declDTypeEnum(5, "common::alufunc_t", 15, 7, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+90,"SimTop core dataD\206 ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+91,"SimTop core dataD\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+92,"SimTop core dataD\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+93,"SimTop core dataD\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+94,"SimTop core dataD\206 memory_address",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+96,"SimTop core dataD\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+98,"SimTop core dataD\206 is_bubble",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+99,"SimTop core dataD_next\206 srca",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+101,"SimTop core dataD_next\206 srcb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+103,"SimTop core dataD_next\206 immediate",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+105,"SimTop core dataD_next\206 shamt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+107,"SimTop core dataD_next\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+108,"SimTop core dataD_next\206 ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+109,"SimTop core dataD_next\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+110,"SimTop core dataD_next\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+111,"SimTop core dataD_next\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+112,"SimTop core dataD_next\206 memory_address",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+114,"SimTop core dataD_next\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+116,"SimTop core dataD_next\206 is_bubble",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+581,"SimTop core dataD_copy\206 srca",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+583,"SimTop core dataD_copy\206 srcb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+585,"SimTop core dataD_copy\206 immediate",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop core dataD_copy\206 shamt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+589,"SimTop core dataD_copy\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+590,"SimTop core dataD_copy\206 ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+591,"SimTop core dataD_copy\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+592,"SimTop core dataD_copy\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+593,"SimTop core dataD_copy\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+594,"SimTop core dataD_copy\206 memory_address",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+596,"SimTop core dataD_copy\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+598,"SimTop core dataD_copy\206 is_bubble",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+117,"SimTop core dataE\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+119,"SimTop core dataE\206 result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+121,"SimTop core dataE\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+122,"SimTop core dataE\206 ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+123,"SimTop core dataE\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+124,"SimTop core dataE\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+125,"SimTop core dataE\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+126,"SimTop core dataE\206 memory_address",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+128,"SimTop core dataE\206 is_bubble",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+129,"SimTop core dataE\206 is_waiting",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+130,"SimTop core dataE_next\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+132,"SimTop core dataE_next\206 result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+134,"SimTop core dataE_next\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+135,"SimTop core dataE_next\206 ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+136,"SimTop core dataE_next\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+137,"SimTop core dataE_next\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+138,"SimTop core dataE_next\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+139,"SimTop core dataE_next\206 memory_address",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+141,"SimTop core dataE_next\206 is_bubble",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+142,"SimTop core dataE_next\206 is_waiting",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+143,"SimTop core dataE_copy\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+145,"SimTop core dataE_copy\206 result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+147,"SimTop core dataE_copy\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+148,"SimTop core dataE_copy\206 ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+149,"SimTop core dataE_copy\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+150,"SimTop core dataE_copy\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+151,"SimTop core dataE_copy\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+152,"SimTop core dataE_copy\206 memory_address",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+154,"SimTop core dataE_copy\206 is_bubble",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+155,"SimTop core dataE_copy\206 is_waiting",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+156,"SimTop core dataM\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+158,"SimTop core dataM\206 result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+160,"SimTop core dataM\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+161,"SimTop core dataM\206 ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+162,"SimTop core dataM\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+163,"SimTop core dataM\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+164,"SimTop core dataM\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+165,"SimTop core dataM\206 memory_address",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+167,"SimTop core dataM\206 is_bubble",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+168,"SimTop core dataM_next\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+170,"SimTop core dataM_next\206 result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+172,"SimTop core dataM_next\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+173,"SimTop core dataM_next\206 ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+174,"SimTop core dataM_next\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+175,"SimTop core dataM_next\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+176,"SimTop core dataM_next\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+177,"SimTop core dataM_next\206 memory_address",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+179,"SimTop core dataM_next\206 is_bubble",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+599,"SimTop core dataM_copy\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+601,"SimTop core dataM_copy\206 result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+603,"SimTop core dataM_copy\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+604,"SimTop core dataM_copy\206 ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+605,"SimTop core dataM_copy\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+606,"SimTop core dataM_copy\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+607,"SimTop core dataM_copy\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+608,"SimTop core dataM_copy\206 memory_address",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+610,"SimTop core dataM_copy\206 is_bubble",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+180,"SimTop core dataW\206 pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+182,"SimTop core dataW\206 result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+184,"SimTop core dataW\206 ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+185,"SimTop core dataW\206 ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+186,"SimTop core dataW\206 ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+187,"SimTop core dataW\206 ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+188,"SimTop core dataW\206 dst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+189,"SimTop core dataW\206 memory_address",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+191,"SimTop core dataW\206 is_bubble",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        {
            const char* __VenumItemNames[]
            = {"RESET_CONTINUE", "RESET_RESET"};
            const char* __VenumItemValues[]
            = {"0", "1"};
            tracep->declDTypeEnum(6, "common::reset_t", 2, 2, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+192,"SimTop core dataH\206 reset_IF_ID",6, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+193,"SimTop core dataH\206 reset_ID_EX",6, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        {
            const char* __VenumItemNames[]
            = {"INSTR_CONTINUE", "INSTR_MAINTAIN", 
                                                "INSTR_CONTINUE_BUT_BUBBLE"};
            const char* __VenumItemValues[]
            = {"0", "1", "10"};
            tracep->declDTypeEnum(7, "common::instr_FETCH_t", 3, 2, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+194,"SimTop core dataH\206 instr_FETCH",7, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+195,"SimTop core dataH\206 ireq_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+196,"SimTop core dataH\206 pc_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+198,"SimTop core dataH\206 offset_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        {
            const char* __VenumItemNames[]
            = {"MAINTAIN", "PLUS4", "BEQ_P", "BEQ_N", 
                                                "JAL_P", 
                                                "JALR_P"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11", "100", "101"};
            tracep->declDTypeEnum(8, "common::instfunc_t", 6, 5, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+200,"SimTop core dataH\206 instfunc",8, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+201,"SimTop core ra1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declBus(c+202,"SimTop core ra2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+203,"SimTop core rd1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+205,"SimTop core rd2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+611,"SimTop core pcselect_mepc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+207,"SimTop core op",8, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
        tracep->declQuad(c+208,"SimTop core offset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+210,"SimTop core Dwait",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+211,"SimTop core Iwait",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+212,"SimTop core is_jump",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+63,"SimTop core pcselect pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+196,"SimTop core pcselect stall_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+200,"SimTop core pcselect op",8,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+198,"SimTop core pcselect offset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+65,"SimTop core pcselect pc_selected",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+211,"SimTop core pcselect Iwait",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+210,"SimTop core pcselect Dwait",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+213,"SimTop core pcselect ireq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+98,"SimTop core pcselect is_bubble",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+67,"SimTop core fetch raw_instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+63,"SimTop core fetch pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+194,"SimTop core fetch instr_FETCH",7,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+73,"SimTop core fetch dataF_next\206 raw_instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+74,"SimTop core fetch dataF_next\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+76,"SimTop core fetch dataF_next\206 is_bubble",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+69,"SimTop core fetch dataF\206 raw_instr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+70,"SimTop core fetch dataF\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+72,"SimTop core fetch dataF\206 is_bubble",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+211,"SimTop core fetch Iwait",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+210,"SimTop core fetch Dwait",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+213,"SimTop core fetch ivalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+567,"SimTop core reg_FD clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+568,"SimTop core reg_FD reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+192,"SimTop core reg_FD reset_IF_ID",6,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+69,"SimTop core reg_FD dataF_in\206 raw_instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+70,"SimTop core reg_FD dataF_in\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+72,"SimTop core reg_FD dataF_in\206 is_bubble",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+73,"SimTop core reg_FD dataF_out\206 raw_instr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+74,"SimTop core reg_FD dataF_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+76,"SimTop core reg_FD dataF_out\206 is_bubble",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+77,"SimTop core reg_FD last_dataF\206 raw_instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+78,"SimTop core reg_FD last_dataF\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+80,"SimTop core reg_FD last_dataF\206 is_bubble",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+77,"SimTop core reg_FD copy_dataF\206 raw_instr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+78,"SimTop core reg_FD copy_dataF\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+80,"SimTop core reg_FD copy_dataF\206 is_bubble",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+73,"SimTop core reg_FD last_dataF_D\206 raw_instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+74,"SimTop core reg_FD last_dataF_D\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+76,"SimTop core reg_FD last_dataF_D\206 is_bubble",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+211,"SimTop core reg_FD Iwait",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+210,"SimTop core reg_FD Dwait",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+213,"SimTop core reg_FD ireq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+214,"SimTop core reg_FD iresp_data_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+207,"SimTop core reg_FD op",8,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+129,"SimTop core reg_FD exe_is_waiting",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+215,"SimTop core reg_FD hazard_reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+73,"SimTop core decode dataF\206 raw_instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declQuad(c+74,"SimTop core decode dataF\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+76,"SimTop core decode dataF\206 is_bubble",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+81,"SimTop core decode dataD\206 srca",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+83,"SimTop core decode dataD\206 srcb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+85,"SimTop core decode dataD\206 immediate",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+87,"SimTop core decode dataD\206 shamt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+89,"SimTop core decode dataD\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+90,"SimTop core decode dataD\206 ctl\206 alufunc",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+91,"SimTop core decode dataD\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+92,"SimTop core decode dataD\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+93,"SimTop core decode dataD\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+94,"SimTop core decode dataD\206 memory_address",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+96,"SimTop core decode dataD\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+98,"SimTop core decode dataD\206 is_bubble",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+201,"SimTop core decode ra1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+202,"SimTop core decode ra2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+203,"SimTop core decode rd1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+205,"SimTop core decode rd2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+207,"SimTop core decode op",8,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+208,"SimTop core decode offset",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+212,"SimTop core decode is_jump",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+216,"SimTop core decode ctl\206 op",4, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+217,"SimTop core decode ctl\206 alufunc",5, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBit(c+218,"SimTop core decode ctl\206 regwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+219,"SimTop core decode ctl\206 memwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+73,"SimTop core decode controlUnit raw_instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+216,"SimTop core decode controlUnit ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+217,"SimTop core decode controlUnit ctl\206 alufunc",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+218,"SimTop core decode controlUnit ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+219,"SimTop core decode controlUnit ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+220,"SimTop core decode controlUnit f7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+221,"SimTop core decode controlUnit f7t",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+222,"SimTop core decode controlUnit f3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+223,"SimTop core decode controlUnit f6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 5,0);
        tracep->declBit(c+567,"SimTop core reg_DE clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+568,"SimTop core reg_DE reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+193,"SimTop core reg_DE reset_ID_EX",6,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declQuad(c+81,"SimTop core reg_DE dataD_in\206 srca",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+83,"SimTop core reg_DE dataD_in\206 srcb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+85,"SimTop core reg_DE dataD_in\206 immediate",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+87,"SimTop core reg_DE dataD_in\206 shamt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+89,"SimTop core reg_DE dataD_in\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+90,"SimTop core reg_DE dataD_in\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+91,"SimTop core reg_DE dataD_in\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+92,"SimTop core reg_DE dataD_in\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+93,"SimTop core reg_DE dataD_in\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+94,"SimTop core reg_DE dataD_in\206 memory_address",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+96,"SimTop core reg_DE dataD_in\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+98,"SimTop core reg_DE dataD_in\206 is_bubble",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+99,"SimTop core reg_DE dataD_out\206 srca",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+101,"SimTop core reg_DE dataD_out\206 srcb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+103,"SimTop core reg_DE dataD_out\206 immediate",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+105,"SimTop core reg_DE dataD_out\206 shamt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+107,"SimTop core reg_DE dataD_out\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+108,"SimTop core reg_DE dataD_out\206 ctl\206 alufunc",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+109,"SimTop core reg_DE dataD_out\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+110,"SimTop core reg_DE dataD_out\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+111,"SimTop core reg_DE dataD_out\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+112,"SimTop core reg_DE dataD_out\206 memory_address",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+114,"SimTop core reg_DE dataD_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+116,"SimTop core reg_DE dataD_out\206 is_bubble",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+99,"SimTop core reg_DE last_dataD\206 srca",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+101,"SimTop core reg_DE last_dataD\206 srcb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+103,"SimTop core reg_DE last_dataD\206 immediate",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+105,"SimTop core reg_DE last_dataD\206 shamt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+107,"SimTop core reg_DE last_dataD\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+108,"SimTop core reg_DE last_dataD\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+109,"SimTop core reg_DE last_dataD\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+110,"SimTop core reg_DE last_dataD\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+111,"SimTop core reg_DE last_dataD\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+112,"SimTop core reg_DE last_dataD\206 memory_address",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+114,"SimTop core reg_DE last_dataD\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+116,"SimTop core reg_DE last_dataD\206 is_bubble",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+211,"SimTop core reg_DE Iwait",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+210,"SimTop core reg_DE Dwait",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+129,"SimTop core reg_DE exe_is_waiting",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+224,"SimTop core reg_DE hazard_reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+567,"SimTop core execute clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+568,"SimTop core execute reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+99,"SimTop core execute dataD\206 srca",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+101,"SimTop core execute dataD\206 srcb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+103,"SimTop core execute dataD\206 immediate",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+105,"SimTop core execute dataD\206 shamt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+107,"SimTop core execute dataD\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+108,"SimTop core execute dataD\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+109,"SimTop core execute dataD\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+110,"SimTop core execute dataD\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+111,"SimTop core execute dataD\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+112,"SimTop core execute dataD\206 memory_address",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+114,"SimTop core execute dataD\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+116,"SimTop core execute dataD\206 is_bubble",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+117,"SimTop core execute dataE\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+119,"SimTop core execute dataE\206 result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+121,"SimTop core execute dataE\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+122,"SimTop core execute dataE\206 ctl\206 alufunc",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+123,"SimTop core execute dataE\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+124,"SimTop core execute dataE\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+125,"SimTop core execute dataE\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+126,"SimTop core execute dataE\206 memory_address",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+128,"SimTop core execute dataE\206 is_bubble",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+129,"SimTop core execute dataE\206 is_waiting",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+225,"SimTop core execute result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declArray(c+227,"SimTop core execute div_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 127,0);
        tracep->declQuad(c+231,"SimTop core execute mult_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+233,"SimTop core execute mult_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+234,"SimTop core execute div_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+235,"SimTop core execute is_mult",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+236,"SimTop core execute is_div",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+237,"SimTop core execute div_tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declQuad(c+238,"SimTop core execute alu_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+240,"SimTop core execute alu_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+238,"SimTop core execute alu a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+240,"SimTop core execute alu b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+108,"SimTop core execute alu alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declQuad(c+225,"SimTop core execute alu c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+567,"SimTop core execute multipler clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+568,"SimTop core execute multipler reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+235,"SimTop core execute multipler valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+238,"SimTop core execute multipler a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+240,"SimTop core execute multipler b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+233,"SimTop core execute multipler done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+231,"SimTop core execute multipler c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        {
            const char* __VenumItemNames[]
            = {"INIT", "DOING"};
            const char* __VenumItemValues[]
            = {"0", "1"};
            tracep->declDTypeEnum(9, "multipler.__typeimpenum21", 2, 1, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBit(c+242,"SimTop core execute multipler state",9, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+243,"SimTop core execute multipler state_nxt",9, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declArray(c+244,"SimTop core execute multipler count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 66,0);
        tracep->declArray(c+247,"SimTop core execute multipler count_nxt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 66,0);
        tracep->declArray(c+613,"SimTop core execute multipler MULT_DELAY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 66,0);
        tracep->declArray(c+250,"SimTop core execute multipler p",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 128,0);
        tracep->declArray(c+255,"SimTop core execute multipler p_nxt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 128,0);
        tracep->declBit(c+567,"SimTop core execute diviter clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+568,"SimTop core execute diviter reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+236,"SimTop core execute diviter valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+238,"SimTop core execute diviter a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+240,"SimTop core execute diviter b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+234,"SimTop core execute diviter done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declArray(c+227,"SimTop core execute diviter c",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 127,0);
        {
            const char* __VenumItemNames[]
            = {"INIT", "DOING"};
            const char* __VenumItemValues[]
            = {"0", "1"};
            tracep->declDTypeEnum(10, "diviter.__typeimpenum22", 2, 1, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBit(c+260,"SimTop core execute diviter state",10, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+261,"SimTop core execute diviter state_nxt",10, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declArray(c+262,"SimTop core execute diviter count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 66,0);
        tracep->declArray(c+265,"SimTop core execute diviter count_nxt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 66,0);
        tracep->declArray(c+613,"SimTop core execute diviter DIV_DELAY",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 66,0);
        tracep->declArray(c+268,"SimTop core execute diviter p",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 128,0);
        tracep->declArray(c+273,"SimTop core execute diviter p_nxt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 128,0);
        tracep->declBit(c+567,"SimTop core reg_EM clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+568,"SimTop core reg_EM reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+117,"SimTop core reg_EM dataE_in\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+119,"SimTop core reg_EM dataE_in\206 result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+121,"SimTop core reg_EM dataE_in\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+122,"SimTop core reg_EM dataE_in\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+123,"SimTop core reg_EM dataE_in\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+124,"SimTop core reg_EM dataE_in\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+125,"SimTop core reg_EM dataE_in\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+126,"SimTop core reg_EM dataE_in\206 memory_address",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+128,"SimTop core reg_EM dataE_in\206 is_bubble",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+129,"SimTop core reg_EM dataE_in\206 is_waiting",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+130,"SimTop core reg_EM dataE_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+132,"SimTop core reg_EM dataE_out\206 result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+134,"SimTop core reg_EM dataE_out\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+135,"SimTop core reg_EM dataE_out\206 ctl\206 alufunc",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+136,"SimTop core reg_EM dataE_out\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+137,"SimTop core reg_EM dataE_out\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+138,"SimTop core reg_EM dataE_out\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+139,"SimTop core reg_EM dataE_out\206 memory_address",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+141,"SimTop core reg_EM dataE_out\206 is_bubble",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+142,"SimTop core reg_EM dataE_out\206 is_waiting",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+130,"SimTop core reg_EM last_dataE\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+132,"SimTop core reg_EM last_dataE\206 result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+134,"SimTop core reg_EM last_dataE\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+135,"SimTop core reg_EM last_dataE\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+136,"SimTop core reg_EM last_dataE\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+137,"SimTop core reg_EM last_dataE\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+138,"SimTop core reg_EM last_dataE\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+139,"SimTop core reg_EM last_dataE\206 memory_address",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+141,"SimTop core reg_EM last_dataE\206 is_bubble",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+142,"SimTop core reg_EM last_dataE\206 is_waiting",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+143,"SimTop core reg_EM copy_dataE\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+145,"SimTop core reg_EM copy_dataE\206 result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+147,"SimTop core reg_EM copy_dataE\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+148,"SimTop core reg_EM copy_dataE\206 ctl\206 alufunc",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+149,"SimTop core reg_EM copy_dataE\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+150,"SimTop core reg_EM copy_dataE\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+151,"SimTop core reg_EM copy_dataE\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+152,"SimTop core reg_EM copy_dataE\206 memory_address",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+154,"SimTop core reg_EM copy_dataE\206 is_bubble",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+155,"SimTop core reg_EM copy_dataE\206 is_waiting",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+211,"SimTop core reg_EM Iwait",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+210,"SimTop core reg_EM Dwait",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+130,"SimTop core memory dataE\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+132,"SimTop core memory dataE\206 result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+134,"SimTop core memory dataE\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+135,"SimTop core memory dataE\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+136,"SimTop core memory dataE\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+137,"SimTop core memory dataE\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+138,"SimTop core memory dataE\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+139,"SimTop core memory dataE\206 memory_address",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+141,"SimTop core memory dataE\206 is_bubble",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+142,"SimTop core memory dataE\206 is_waiting",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+31,"SimTop core memory dresp\206 addr_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+32,"SimTop core memory dresp\206 data_ok",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+33,"SimTop core memory dresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+24,"SimTop core memory dreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+25,"SimTop core memory dreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+27,"SimTop core memory dreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+28,"SimTop core memory dreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+29,"SimTop core memory dreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+156,"SimTop core memory dataM\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+158,"SimTop core memory dataM\206 result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+160,"SimTop core memory dataM\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+161,"SimTop core memory dataM\206 ctl\206 alufunc",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+162,"SimTop core memory dataM\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+163,"SimTop core memory dataM\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+164,"SimTop core memory dataM\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+165,"SimTop core memory dataM\206 memory_address",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+167,"SimTop core memory dataM\206 is_bubble",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+278,"SimTop core memory msize",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBit(c+279,"SimTop core memory mem_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+280,"SimTop core memory readdata_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+282,"SimTop core memory writedata_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+284,"SimTop core memory strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+33,"SimTop core memory Datamem raw_rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+132,"SimTop core memory Datamem raw_wd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+280,"SimTop core memory Datamem rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+282,"SimTop core memory Datamem wd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+285,"SimTop core memory Datamem addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+278,"SimTop core memory Datamem msize",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+279,"SimTop core memory Datamem mem_unsigned",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+284,"SimTop core memory Datamem strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+286,"SimTop core memory Datamem sign_bit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+567,"SimTop core reg_MW clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+568,"SimTop core reg_MW reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+156,"SimTop core reg_MW dataM_in\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+158,"SimTop core reg_MW dataM_in\206 result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+160,"SimTop core reg_MW dataM_in\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+161,"SimTop core reg_MW dataM_in\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+162,"SimTop core reg_MW dataM_in\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+163,"SimTop core reg_MW dataM_in\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+164,"SimTop core reg_MW dataM_in\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+165,"SimTop core reg_MW dataM_in\206 memory_address",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+167,"SimTop core reg_MW dataM_in\206 is_bubble",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+168,"SimTop core reg_MW dataM_out\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+170,"SimTop core reg_MW dataM_out\206 result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+172,"SimTop core reg_MW dataM_out\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+173,"SimTop core reg_MW dataM_out\206 ctl\206 alufunc",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+174,"SimTop core reg_MW dataM_out\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+175,"SimTop core reg_MW dataM_out\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+176,"SimTop core reg_MW dataM_out\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+177,"SimTop core reg_MW dataM_out\206 memory_address",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+179,"SimTop core reg_MW dataM_out\206 is_bubble",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+168,"SimTop core reg_MW last_dataM\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+170,"SimTop core reg_MW last_dataM\206 result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+172,"SimTop core reg_MW last_dataM\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+173,"SimTop core reg_MW last_dataM\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+174,"SimTop core reg_MW last_dataM\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+175,"SimTop core reg_MW last_dataM\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+176,"SimTop core reg_MW last_dataM\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+177,"SimTop core reg_MW last_dataM\206 memory_address",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+179,"SimTop core reg_MW last_dataM\206 is_bubble",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+211,"SimTop core reg_MW Iwait",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+210,"SimTop core reg_MW Dwait",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+168,"SimTop core writeback dataM\206 pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+170,"SimTop core writeback dataM\206 result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+172,"SimTop core writeback dataM\206 ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+173,"SimTop core writeback dataM\206 ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+174,"SimTop core writeback dataM\206 ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+175,"SimTop core writeback dataM\206 ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+176,"SimTop core writeback dataM\206 dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+177,"SimTop core writeback dataM\206 memory_address",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+179,"SimTop core writeback dataM\206 is_bubble",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+180,"SimTop core writeback dataW\206 pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+182,"SimTop core writeback dataW\206 result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+184,"SimTop core writeback dataW\206 ctl\206 op",4,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+185,"SimTop core writeback dataW\206 ctl\206 alufunc",5,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+186,"SimTop core writeback dataW\206 ctl\206 regwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+187,"SimTop core writeback dataW\206 ctl\206 memwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+188,"SimTop core writeback dataW\206 dst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+189,"SimTop core writeback dataW\206 memory_address",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+191,"SimTop core writeback dataW\206 is_bubble",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+68,"SimTop core writeback handin",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+567,"SimTop core regfile clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+568,"SimTop core regfile reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+201,"SimTop core regfile ra1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+202,"SimTop core regfile ra2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+203,"SimTop core regfile rd1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+205,"SimTop core regfile rd2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+188,"SimTop core regfile wa",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+287,"SimTop core regfile WE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+182,"SimTop core regfile wd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+288,"SimTop core regfile register(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+290,"SimTop core regfile register(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+292,"SimTop core regfile register(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+294,"SimTop core regfile register(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+296,"SimTop core regfile register(4)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+298,"SimTop core regfile register(5)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+300,"SimTop core regfile register(6)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+302,"SimTop core regfile register(7)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+304,"SimTop core regfile register(8)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+306,"SimTop core regfile register(9)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+308,"SimTop core regfile register(10)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+310,"SimTop core regfile register(11)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+312,"SimTop core regfile register(12)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+314,"SimTop core regfile register(13)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+316,"SimTop core regfile register(14)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+318,"SimTop core regfile register(15)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+320,"SimTop core regfile register(16)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+322,"SimTop core regfile register(17)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+324,"SimTop core regfile register(18)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+326,"SimTop core regfile register(19)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+328,"SimTop core regfile register(20)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+330,"SimTop core regfile register(21)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+332,"SimTop core regfile register(22)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+334,"SimTop core regfile register(23)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+336,"SimTop core regfile register(24)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+338,"SimTop core regfile register(25)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+340,"SimTop core regfile register(26)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+342,"SimTop core regfile register(27)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+344,"SimTop core regfile register(28)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+346,"SimTop core regfile register(29)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+348,"SimTop core regfile register(30)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+350,"SimTop core regfile register(31)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+352,"SimTop core regfile register_nxt(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+354,"SimTop core regfile register_nxt(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+356,"SimTop core regfile register_nxt(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+358,"SimTop core regfile register_nxt(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+360,"SimTop core regfile register_nxt(4)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+362,"SimTop core regfile register_nxt(5)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+364,"SimTop core regfile register_nxt(6)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+366,"SimTop core regfile register_nxt(7)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+368,"SimTop core regfile register_nxt(8)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+370,"SimTop core regfile register_nxt(9)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+372,"SimTop core regfile register_nxt(10)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+374,"SimTop core regfile register_nxt(11)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+376,"SimTop core regfile register_nxt(12)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+378,"SimTop core regfile register_nxt(13)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+380,"SimTop core regfile register_nxt(14)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+382,"SimTop core regfile register_nxt(15)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+384,"SimTop core regfile register_nxt(16)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+386,"SimTop core regfile register_nxt(17)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+388,"SimTop core regfile register_nxt(18)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+390,"SimTop core regfile register_nxt(19)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+392,"SimTop core regfile register_nxt(20)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+394,"SimTop core regfile register_nxt(21)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+396,"SimTop core regfile register_nxt(22)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+398,"SimTop core regfile register_nxt(23)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+400,"SimTop core regfile register_nxt(24)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+402,"SimTop core regfile register_nxt(25)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+404,"SimTop core regfile register_nxt(26)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+406,"SimTop core regfile register_nxt(27)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+408,"SimTop core regfile register_nxt(28)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+410,"SimTop core regfile register_nxt(29)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+412,"SimTop core regfile register_nxt(30)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+414,"SimTop core regfile register_nxt(31)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+125,"SimTop core hazard dataE_dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+164,"SimTop core hazard dataM_dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+188,"SimTop core hazard dataW_dst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+201,"SimTop core hazard ra1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+202,"SimTop core hazard ra2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declQuad(c+203,"SimTop core hazard rd1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+205,"SimTop core hazard rd2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+96,"SimTop core hazard pc_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+89,"SimTop core hazard ctl\206 op",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+90,"SimTop core hazard ctl\206 alufunc",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBit(c+91,"SimTop core hazard ctl\206 regwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+92,"SimTop core hazard ctl\206 memwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+208,"SimTop core hazard offset_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+207,"SimTop core hazard op",8,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBus(c+192,"SimTop core hazard dataH\206 reset_IF_ID",6,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+193,"SimTop core hazard dataH\206 reset_ID_EX",6,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBus(c+194,"SimTop core hazard dataH\206 instr_FETCH",7,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+195,"SimTop core hazard dataH\206 ireq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+196,"SimTop core hazard dataH\206 pc_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+198,"SimTop core hazard dataH\206 offset_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+200,"SimTop core hazard dataH\206 instfunc",8,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
        tracep->declBit(c+211,"SimTop core hazard Iwait",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+210,"SimTop core hazard Dwait",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+128,"SimTop core hazard is_bubbleE",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+167,"SimTop core hazard is_bubbleM",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+191,"SimTop core hazard is_bubbleW",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+98,"SimTop core hazard is_bubble",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+567,"SimTop core DifftestInstrCommit clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+616,"SimTop core DifftestInstrCommit coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+616,"SimTop core DifftestInstrCommit index",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+68,"SimTop core DifftestInstrCommit valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+180,"SimTop core DifftestInstrCommit pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+617,"SimTop core DifftestInstrCommit instr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+416,"SimTop core DifftestInstrCommit skip",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+618,"SimTop core DifftestInstrCommit isRVC",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+618,"SimTop core DifftestInstrCommit scFailed",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+186,"SimTop core DifftestInstrCommit wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+417,"SimTop core DifftestInstrCommit wdest",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+182,"SimTop core DifftestInstrCommit wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+567,"SimTop core DifftestArchIntRegState clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+616,"SimTop core DifftestArchIntRegState coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+418,"SimTop core DifftestArchIntRegState gpr_0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+420,"SimTop core DifftestArchIntRegState gpr_1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+422,"SimTop core DifftestArchIntRegState gpr_2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+424,"SimTop core DifftestArchIntRegState gpr_3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+426,"SimTop core DifftestArchIntRegState gpr_4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+428,"SimTop core DifftestArchIntRegState gpr_5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+430,"SimTop core DifftestArchIntRegState gpr_6",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+432,"SimTop core DifftestArchIntRegState gpr_7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+434,"SimTop core DifftestArchIntRegState gpr_8",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+436,"SimTop core DifftestArchIntRegState gpr_9",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+438,"SimTop core DifftestArchIntRegState gpr_10",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+440,"SimTop core DifftestArchIntRegState gpr_11",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+442,"SimTop core DifftestArchIntRegState gpr_12",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+444,"SimTop core DifftestArchIntRegState gpr_13",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+446,"SimTop core DifftestArchIntRegState gpr_14",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+448,"SimTop core DifftestArchIntRegState gpr_15",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+450,"SimTop core DifftestArchIntRegState gpr_16",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+452,"SimTop core DifftestArchIntRegState gpr_17",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+454,"SimTop core DifftestArchIntRegState gpr_18",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+456,"SimTop core DifftestArchIntRegState gpr_19",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+458,"SimTop core DifftestArchIntRegState gpr_20",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+460,"SimTop core DifftestArchIntRegState gpr_21",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+462,"SimTop core DifftestArchIntRegState gpr_22",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+464,"SimTop core DifftestArchIntRegState gpr_23",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+466,"SimTop core DifftestArchIntRegState gpr_24",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+468,"SimTop core DifftestArchIntRegState gpr_25",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+470,"SimTop core DifftestArchIntRegState gpr_26",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+472,"SimTop core DifftestArchIntRegState gpr_27",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+474,"SimTop core DifftestArchIntRegState gpr_28",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+476,"SimTop core DifftestArchIntRegState gpr_29",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+478,"SimTop core DifftestArchIntRegState gpr_30",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+480,"SimTop core DifftestArchIntRegState gpr_31",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+567,"SimTop core DifftestTrapEvent clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+616,"SimTop core DifftestTrapEvent coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+618,"SimTop core DifftestTrapEvent valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+619,"SimTop core DifftestTrapEvent code",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+620,"SimTop core DifftestTrapEvent pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+620,"SimTop core DifftestTrapEvent cycleCnt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+620,"SimTop core DifftestTrapEvent instrCnt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+567,"SimTop core DifftestCSRState clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+616,"SimTop core DifftestCSRState coreid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+622,"SimTop core DifftestCSRState priviledgeMode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declQuad(c+620,"SimTop core DifftestCSRState mstatus",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+620,"SimTop core DifftestCSRState sstatus",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+620,"SimTop core DifftestCSRState mepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+620,"SimTop core DifftestCSRState sepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+620,"SimTop core DifftestCSRState mtval",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+620,"SimTop core DifftestCSRState stval",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+620,"SimTop core DifftestCSRState mtvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+620,"SimTop core DifftestCSRState stvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+620,"SimTop core DifftestCSRState mcause",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+620,"SimTop core DifftestCSRState scause",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+620,"SimTop core DifftestCSRState satp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+620,"SimTop core DifftestCSRState mip",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+620,"SimTop core DifftestCSRState mie",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+620,"SimTop core DifftestCSRState mscratch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+620,"SimTop core DifftestCSRState sscratch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+620,"SimTop core DifftestCSRState mideleg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declQuad(c+620,"SimTop core DifftestCSRState medeleg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+18,"SimTop icvt ireq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+19,"SimTop icvt ireq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+21,"SimTop icvt iresp\206 addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+22,"SimTop icvt iresp\206 data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+23,"SimTop icvt iresp\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+35,"SimTop icvt icreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+36,"SimTop icvt icreq\206 is_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+37,"SimTop icvt icreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+38,"SimTop icvt icreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+40,"SimTop icvt icreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+41,"SimTop icvt icreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+43,"SimTop icvt icreq\206 len",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+44,"SimTop icvt icreq\206 burst",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+55,"SimTop icvt icresp\206 ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+56,"SimTop icvt icresp\206 last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+57,"SimTop icvt icresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+482,"SimTop icvt dresp\206 addr_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+483,"SimTop icvt dresp\206 data_ok",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declQuad(c+484,"SimTop icvt dresp\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+213,"SimTop icvt inst dreq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+486,"SimTop icvt inst dreq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+623,"SimTop icvt inst dreq\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+624,"SimTop icvt inst dreq\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+625,"SimTop icvt inst dreq\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+482,"SimTop icvt inst dresp\206 addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+483,"SimTop icvt inst dresp\206 data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+484,"SimTop icvt inst dresp\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+35,"SimTop icvt inst dcreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+36,"SimTop icvt inst dcreq\206 is_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+37,"SimTop icvt inst dcreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+38,"SimTop icvt inst dcreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+40,"SimTop icvt inst dcreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+41,"SimTop icvt inst dcreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+43,"SimTop icvt inst dcreq\206 len",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+44,"SimTop icvt inst dcreq\206 burst",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+55,"SimTop icvt inst dcresp\206 ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+56,"SimTop icvt inst dcresp\206 last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+57,"SimTop icvt inst dcresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+488,"SimTop icvt inst okay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+24,"SimTop dcvt dreq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+25,"SimTop dcvt dreq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+27,"SimTop dcvt dreq\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+28,"SimTop dcvt dreq\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+29,"SimTop dcvt dreq\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+31,"SimTop dcvt dresp\206 addr_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+32,"SimTop dcvt dresp\206 data_ok",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+33,"SimTop dcvt dresp\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+45,"SimTop dcvt dcreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+46,"SimTop dcvt dcreq\206 is_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+47,"SimTop dcvt dcreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+48,"SimTop dcvt dcreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+50,"SimTop dcvt dcreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+51,"SimTop dcvt dcreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+53,"SimTop dcvt dcreq\206 len",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+54,"SimTop dcvt dcreq\206 burst",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+59,"SimTop dcvt dcresp\206 ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+60,"SimTop dcvt dcresp\206 last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+61,"SimTop dcvt dcresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+489,"SimTop dcvt okay",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+567,"SimTop mux clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+568,"SimTop mux reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+490,"SimTop mux ireqs(0)\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+491,"SimTop mux ireqs(0)\206 is_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+492,"SimTop mux ireqs(0)\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+493,"SimTop mux ireqs(0)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+495,"SimTop mux ireqs(0)\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+496,"SimTop mux ireqs(0)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+498,"SimTop mux ireqs(0)\206 len",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+499,"SimTop mux ireqs(0)\206 burst",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+500,"SimTop mux ireqs(1)\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+501,"SimTop mux ireqs(1)\206 is_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+502,"SimTop mux ireqs(1)\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+503,"SimTop mux ireqs(1)\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+505,"SimTop mux ireqs(1)\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+506,"SimTop mux ireqs(1)\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+508,"SimTop mux ireqs(1)\206 len",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+509,"SimTop mux ireqs(1)\206 burst",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+59,"SimTop mux iresps(0)\206 ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+60,"SimTop mux iresps(0)\206 last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+61,"SimTop mux iresps(0)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+55,"SimTop mux iresps(1)\206 ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+56,"SimTop mux iresps(1)\206 last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+57,"SimTop mux iresps(1)\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+1,"SimTop mux oreq\206 valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+2,"SimTop mux oreq\206 is_write",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+3,"SimTop mux oreq\206 size",1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+4,"SimTop mux oreq\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+6,"SimTop mux oreq\206 strobe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+7,"SimTop mux oreq\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+9,"SimTop mux oreq\206 len",2,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+10,"SimTop mux oreq\206 burst",3,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+11,"SimTop mux oresp\206 ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+12,"SimTop mux oresp\206 last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+13,"SimTop mux oresp\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+510,"SimTop mux busy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+511,"SimTop mux index",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+512,"SimTop mux select",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBit(c+513,"SimTop mux saved_req\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+514,"SimTop mux saved_req\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+515,"SimTop mux saved_req\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+516,"SimTop mux saved_req\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+518,"SimTop mux saved_req\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+519,"SimTop mux saved_req\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+521,"SimTop mux saved_req\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+522,"SimTop mux saved_req\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+523,"SimTop mux selected_req\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+524,"SimTop mux selected_req\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+525,"SimTop mux selected_req\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+526,"SimTop mux selected_req\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+528,"SimTop mux selected_req\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+529,"SimTop mux selected_req\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+531,"SimTop mux selected_req\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+532,"SimTop mux selected_req\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+533,"SimTop mux unnamedblk1 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+534,"SimTop mux unnamedblk2 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBit(c+567,"SimTop ram clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+568,"SimTop ram reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1,"SimTop ram oreq\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+2,"SimTop ram oreq\206 is_write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+3,"SimTop ram oreq\206 size",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declQuad(c+4,"SimTop ram oreq\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+6,"SimTop ram oreq\206 strobe",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declQuad(c+7,"SimTop ram oreq\206 data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBus(c+9,"SimTop ram oreq\206 len",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+10,"SimTop ram oreq\206 burst",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+11,"SimTop ram oresp\206 ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+12,"SimTop ram oresp\206 last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declQuad(c+13,"SimTop ram oresp\206 data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
        tracep->declBit(c+15,"SimTop ram trint",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+16,"SimTop ram swint",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+17,"SimTop ram exint",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+535,"SimTop ram saved_oreq\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+536,"SimTop ram saved_oreq\206 is_write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+537,"SimTop ram saved_oreq\206 size",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declQuad(c+538,"SimTop ram saved_oreq\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+540,"SimTop ram saved_oreq\206 strobe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declQuad(c+541,"SimTop ram saved_oreq\206 data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBus(c+543,"SimTop ram saved_oreq\206 len",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+544,"SimTop ram saved_oreq\206 burst",3, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        {
            const char* __VenumItemNames[]
            = {"NONE", "WAIT", "READ", "WRITE"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11"};
            tracep->declDTypeEnum(11, "RAMHelper2.__typeimpenum23", 4, 2, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+545,"SimTop ram state",11, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBus(c+546,"SimTop ram count_down",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+547,"SimTop ram size",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declQuad(c+548,"SimTop ram addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+550,"SimTop ram idx",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+552,"SimTop ram wrap1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+554,"SimTop ram wrap2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+556,"SimTop ram cyc_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LONGINT, false,-1, 63,0);
        tracep->declQuad(c+558,"SimTop ram ms_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LONGINT, false,-1, 63,0);
        tracep->declQuad(c+560,"SimTop ram wmask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+562,"SimTop ram mtime",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declQuad(c+564,"SimTop ram mtimecmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
        tracep->declBit(c+566,"SimTop ram msip",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    }
}

void VSimTop___024root__traceFullTop0(void* voidSelf, VerilatedFst* tracep) VL_ATTR_COLD;
void VSimTop___024root__traceChgTop0(void* voidSelf, VerilatedFst* tracep);
void VSimTop___024root__traceCleanup(void* voidSelf, VerilatedFst* /*unused*/);

void VSimTop___024root__traceRegister(VSimTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VSimTop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VSimTop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VSimTop___024root__traceCleanup, vlSelf);
    }
}

void VSimTop___024root__traceFullSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep) VL_ATTR_COLD;

void VSimTop___024root__traceFullTop0(void* voidSelf, VerilatedFst* tracep) {
    VSimTop___024root* const __restrict vlSelf = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VSimTop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VSimTop___024root__traceFullSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp426;
    VlWide<3>/*95:0*/ __Vtemp427;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                       >> 0x16U))));
        tracep->fullBit(oldp+2,((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                       >> 0x15U))));
        tracep->fullCData(oldp+3,((7U & (vlSelf->SimTop__DOT__oreq[4U] 
                                         >> 0x12U))),3);
        tracep->fullQData(oldp+4,((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__oreq[4U])) 
                                    << 0x2eU) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__oreq[3U])) 
                                                  << 0xeU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__oreq[2U])) 
                                                    >> 0x12U)))),64);
        tracep->fullCData(oldp+6,((0xffU & (vlSelf->SimTop__DOT__oreq[2U] 
                                            >> 0xaU))),8);
        tracep->fullQData(oldp+7,((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__oreq[2U])) 
                                    << 0x36U) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__oreq[1U])) 
                                                  << 0x16U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__oreq[0U])) 
                                                    >> 0xaU)))),64);
        tracep->fullCData(oldp+9,((0xffU & (vlSelf->SimTop__DOT__oreq[0U] 
                                            >> 2U))),8);
        tracep->fullCData(oldp+10,((3U & vlSelf->SimTop__DOT__oreq[0U])),2);
        tracep->fullBit(oldp+11,((1U & (vlSelf->SimTop__DOT__oresp[2U] 
                                        >> 1U))));
        tracep->fullBit(oldp+12,((1U & vlSelf->SimTop__DOT__oresp[2U])));
        tracep->fullQData(oldp+13,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__oresp[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__oresp[0U])))),64);
        tracep->fullBit(oldp+15,(vlSelf->SimTop__DOT__trint));
        tracep->fullBit(oldp+16,(vlSelf->SimTop__DOT__swint));
        tracep->fullBit(oldp+17,(vlSelf->SimTop__DOT__exint));
        tracep->fullBit(oldp+18,((1U & vlSelf->SimTop__DOT__ireq[2U])));
        tracep->fullQData(oldp+19,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__ireq[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__ireq[0U])))),64);
        tracep->fullBit(oldp+21,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                >> 0x21U)))));
        tracep->fullBit(oldp+22,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                >> 0x20U)))));
        tracep->fullIData(oldp+23,((IData)(vlSelf->SimTop__DOT__iresp)),32);
        tracep->fullBit(oldp+24,((1U & (vlSelf->SimTop__DOT__dreq[4U] 
                                        >> 0xbU))));
        tracep->fullQData(oldp+25,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__dreq[4U])) 
                                     << 0x35U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__dreq[3U])) 
                                                   << 0x15U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__dreq[2U])) 
                                                     >> 0xbU)))),64);
        tracep->fullCData(oldp+27,((7U & (vlSelf->SimTop__DOT__dreq[2U] 
                                          >> 8U))),3);
        tracep->fullCData(oldp+28,((0xffU & vlSelf->SimTop__DOT__dreq[2U])),8);
        tracep->fullQData(oldp+29,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__dreq[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__dreq[0U])))),64);
        tracep->fullBit(oldp+31,((1U & (vlSelf->SimTop__DOT__dresp[2U] 
                                        >> 1U))));
        tracep->fullBit(oldp+32,((1U & vlSelf->SimTop__DOT__dresp[2U])));
        tracep->fullQData(oldp+33,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__dresp[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__dresp[0U])))),64);
        tracep->fullBit(oldp+35,((1U & (vlSelf->SimTop__DOT__icreq[4U] 
                                        >> 0x16U))));
        tracep->fullBit(oldp+36,((1U & (vlSelf->SimTop__DOT__icreq[4U] 
                                        >> 0x15U))));
        tracep->fullCData(oldp+37,((7U & (vlSelf->SimTop__DOT__icreq[4U] 
                                          >> 0x12U))),3);
        tracep->fullQData(oldp+38,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__icreq[4U])) 
                                     << 0x2eU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__icreq[3U])) 
                                                   << 0xeU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__icreq[2U])) 
                                                     >> 0x12U)))),64);
        tracep->fullCData(oldp+40,((0xffU & (vlSelf->SimTop__DOT__icreq[2U] 
                                             >> 0xaU))),8);
        tracep->fullQData(oldp+41,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__icreq[2U])) 
                                     << 0x36U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__icreq[1U])) 
                                                   << 0x16U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__icreq[0U])) 
                                                     >> 0xaU)))),64);
        tracep->fullCData(oldp+43,((0xffU & (vlSelf->SimTop__DOT__icreq[0U] 
                                             >> 2U))),8);
        tracep->fullCData(oldp+44,((3U & vlSelf->SimTop__DOT__icreq[0U])),2);
        tracep->fullBit(oldp+45,((1U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                        >> 0x16U))));
        tracep->fullBit(oldp+46,((1U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                        >> 0x15U))));
        tracep->fullCData(oldp+47,((7U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                          >> 0x12U))),3);
        tracep->fullQData(oldp+48,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__dcreq[4U])) 
                                     << 0x2eU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__dcreq[3U])) 
                                                   << 0xeU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__dcreq[2U])) 
                                                     >> 0x12U)))),64);
        tracep->fullCData(oldp+50,((0xffU & (vlSelf->SimTop__DOT__dcreq[2U] 
                                             >> 0xaU))),8);
        tracep->fullQData(oldp+51,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__dcreq[2U])) 
                                     << 0x36U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__dcreq[1U])) 
                                                   << 0x16U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__dcreq[0U])) 
                                                     >> 0xaU)))),64);
        tracep->fullCData(oldp+53,((0xffU & (vlSelf->SimTop__DOT__dcreq[0U] 
                                             >> 2U))),8);
        tracep->fullCData(oldp+54,((3U & vlSelf->SimTop__DOT__dcreq[0U])),2);
        tracep->fullBit(oldp+55,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                        >> 3U))));
        tracep->fullBit(oldp+56,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                        >> 2U))));
        tracep->fullQData(oldp+57,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT____Vcellout__mux__iresps[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])) 
                                                     >> 2U)))),64);
        tracep->fullBit(oldp+59,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                                        >> 1U))));
        tracep->fullBit(oldp+60,((1U & vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])));
        tracep->fullQData(oldp+61,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT____Vcellout__mux__iresps[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT____Vcellout__mux__iresps[0U])))),64);
        tracep->fullQData(oldp+63,(vlSelf->SimTop__DOT__core__DOT__pc),64);
        tracep->fullQData(oldp+65,(vlSelf->SimTop__DOT__core__DOT____Vcellout__pcselect__pc_selected),64);
        tracep->fullIData(oldp+67,(((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                   >> 0x20U)))
                                     ? (IData)(vlSelf->SimTop__DOT__iresp)
                                     : 0U)),32);
        tracep->fullBit(oldp+68,((1U & (~ vlSelf->SimTop__DOT__core__DOT__dataM_next[0U]))));
        tracep->fullIData(oldp+69,(((vlSelf->SimTop__DOT__core__DOT__dataF[3U] 
                                     << 0x1fU) | (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                                  >> 1U))),32);
        tracep->fullQData(oldp+70,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataF[2U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataF[1U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataF[0U])) 
                                                     >> 1U)))),64);
        tracep->fullBit(oldp+72,((1U & vlSelf->SimTop__DOT__core__DOT__dataF[0U])));
        tracep->fullIData(oldp+73,(((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                     << 0x1fU) | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                  >> 1U))),32);
        tracep->fullQData(oldp+74,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataF_next[1U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataF_next[0U])) 
                                                     >> 1U)))),64);
        tracep->fullBit(oldp+76,((1U & vlSelf->SimTop__DOT__core__DOT__dataF_next[0U])));
        tracep->fullIData(oldp+77,(((vlSelf->SimTop__DOT__core__DOT__dataF_copy[3U] 
                                     << 0x1fU) | (vlSelf->SimTop__DOT__core__DOT__dataF_copy[2U] 
                                                  >> 1U))),32);
        tracep->fullQData(oldp+78,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataF_copy[2U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataF_copy[1U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataF_copy[0U])) 
                                                     >> 1U)))),64);
        tracep->fullBit(oldp+80,((1U & vlSelf->SimTop__DOT__core__DOT__dataF_copy[0U])));
        tracep->fullQData(oldp+81,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD[0xcU])) 
                                     << 0x2aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD[0xbU])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD[0xaU])) 
                                                     >> 0x16U)))),64);
        tracep->fullQData(oldp+83,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD[0xaU])) 
                                     << 0x2aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD[9U])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD[8U])) 
                                                     >> 0x16U)))),64);
        tracep->fullQData(oldp+85,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD[8U])) 
                                     << 0x2aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD[7U])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD[6U])) 
                                                     >> 0x16U)))),64);
        tracep->fullQData(oldp+87,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD[6U])) 
                                     << 0x2aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD[5U])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD[4U])) 
                                                     >> 0x16U)))),64);
        tracep->fullCData(oldp+89,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                             >> 0xfU))),7);
        tracep->fullCData(oldp+90,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                             >> 8U))),7);
        tracep->fullBit(oldp+91,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                        >> 7U))));
        tracep->fullBit(oldp+92,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                        >> 6U))));
        tracep->fullCData(oldp+93,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                             >> 1U))),5);
        tracep->fullQData(oldp+94,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD[4U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD[3U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                                     >> 1U)))),64);
        tracep->fullQData(oldp+96,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD[1U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD[0U])) 
                                                     >> 1U)))),64);
        tracep->fullBit(oldp+98,((1U & vlSelf->SimTop__DOT__core__DOT__dataD[0U])));
        tracep->fullQData(oldp+99,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                     << 0x2aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                                   << 0xaU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                     >> 0x16U)))),64);
        tracep->fullQData(oldp+101,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                      << 0x2aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                                    << 0xaU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                      >> 0x16U)))),64);
        tracep->fullQData(oldp+103,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                      << 0x2aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_next[7U])) 
                                                    << 0xaU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_next[6U])) 
                                                      >> 0x16U)))),64);
        tracep->fullQData(oldp+105,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_next[6U])) 
                                      << 0x2aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_next[5U])) 
                                                    << 0xaU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])) 
                                                      >> 0x16U)))),64);
        tracep->fullCData(oldp+107,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                              >> 0xfU))),7);
        tracep->fullCData(oldp+108,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                              >> 8U))),7);
        tracep->fullBit(oldp+109,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                         >> 7U))));
        tracep->fullBit(oldp+110,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                         >> 6U))));
        tracep->fullCData(oldp+111,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                              >> 1U))),5);
        tracep->fullQData(oldp+112,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_next[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_next[2U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+114,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_next[2U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_next[1U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_next[0U])) 
                                                      >> 1U)))),64);
        tracep->fullBit(oldp+116,((1U & vlSelf->SimTop__DOT__core__DOT__dataD_next[0U])));
        tracep->fullQData(oldp+117,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE[6U])) 
                                      << 0x29U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE[5U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE[4U])) 
                                                      >> 0x17U)))),64);
        tracep->fullQData(oldp+119,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE[4U])) 
                                      << 0x29U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE[3U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE[2U])) 
                                                      >> 0x17U)))),64);
        tracep->fullCData(oldp+121,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                              >> 0x10U))),7);
        tracep->fullCData(oldp+122,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                              >> 9U))),7);
        tracep->fullBit(oldp+123,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                         >> 8U))));
        tracep->fullBit(oldp+124,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                         >> 7U))));
        tracep->fullCData(oldp+125,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                              >> 2U))),5);
        tracep->fullQData(oldp+126,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE[0U])) 
                                                      >> 2U)))),64);
        tracep->fullBit(oldp+128,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                         >> 1U))));
        tracep->fullBit(oldp+129,((1U & vlSelf->SimTop__DOT__core__DOT__dataE[0U])));
        tracep->fullQData(oldp+130,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                      << 0x29U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                      >> 0x17U)))),64);
        tracep->fullQData(oldp+132,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                      << 0x29U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_next[3U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                      >> 0x17U)))),64);
        tracep->fullCData(oldp+134,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                              >> 0x10U))),7);
        tracep->fullCData(oldp+135,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                              >> 9U))),7);
        tracep->fullBit(oldp+136,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                         >> 8U))));
        tracep->fullBit(oldp+137,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                         >> 7U))));
        tracep->fullCData(oldp+138,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                              >> 2U))),5);
        tracep->fullQData(oldp+139,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                      >> 2U)))),64);
        tracep->fullBit(oldp+141,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                         >> 1U))));
        tracep->fullBit(oldp+142,((1U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])));
        tracep->fullQData(oldp+143,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_copy[6U])) 
                                      << 0x29U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_copy[5U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_copy[4U])) 
                                                      >> 0x17U)))),64);
        tracep->fullQData(oldp+145,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_copy[4U])) 
                                      << 0x29U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_copy[3U])) 
                                                    << 9U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_copy[2U])) 
                                                      >> 0x17U)))),64);
        tracep->fullCData(oldp+147,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataE_copy[2U] 
                                              >> 0x10U))),7);
        tracep->fullCData(oldp+148,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataE_copy[2U] 
                                              >> 9U))),7);
        tracep->fullBit(oldp+149,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_copy[2U] 
                                         >> 8U))));
        tracep->fullBit(oldp+150,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_copy[2U] 
                                         >> 7U))));
        tracep->fullCData(oldp+151,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataE_copy[2U] 
                                              >> 2U))),5);
        tracep->fullQData(oldp+152,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_copy[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_copy[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_copy[0U])) 
                                                      >> 2U)))),64);
        tracep->fullBit(oldp+154,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_copy[0U] 
                                         >> 1U))));
        tracep->fullBit(oldp+155,((1U & vlSelf->SimTop__DOT__core__DOT__dataE_copy[0U])));
        tracep->fullQData(oldp+156,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM[6U])) 
                                      << 0x2aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM[5U])) 
                                                    << 0xaU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM[4U])) 
                                                      >> 0x16U)))),64);
        tracep->fullQData(oldp+158,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM[4U])) 
                                      << 0x2aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM[3U])) 
                                                    << 0xaU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM[2U])) 
                                                      >> 0x16U)))),64);
        tracep->fullCData(oldp+160,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                              >> 0xfU))),7);
        tracep->fullCData(oldp+161,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                              >> 8U))),7);
        tracep->fullBit(oldp+162,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                         >> 7U))));
        tracep->fullBit(oldp+163,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                         >> 6U))));
        tracep->fullCData(oldp+164,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                              >> 1U))),5);
        tracep->fullQData(oldp+165,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM[2U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM[1U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM[0U])) 
                                                      >> 1U)))),64);
        tracep->fullBit(oldp+167,((1U & vlSelf->SimTop__DOT__core__DOT__dataM[0U])));
        tracep->fullQData(oldp+168,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM_next[6U])) 
                                      << 0x2aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM_next[5U])) 
                                                    << 0xaU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM_next[4U])) 
                                                      >> 0x16U)))),64);
        tracep->fullQData(oldp+170,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM_next[4U])) 
                                      << 0x2aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM_next[3U])) 
                                                    << 0xaU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM_next[2U])) 
                                                      >> 0x16U)))),64);
        tracep->fullCData(oldp+172,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataM_next[2U] 
                                              >> 0xfU))),7);
        tracep->fullCData(oldp+173,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataM_next[2U] 
                                              >> 8U))),7);
        tracep->fullBit(oldp+174,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_next[2U] 
                                         >> 7U))));
        tracep->fullBit(oldp+175,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_next[2U] 
                                         >> 6U))));
        tracep->fullCData(oldp+176,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataM_next[2U] 
                                              >> 1U))),5);
        tracep->fullQData(oldp+177,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM_next[2U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM_next[1U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM_next[0U])) 
                                                      >> 1U)))),64);
        tracep->fullBit(oldp+179,((1U & vlSelf->SimTop__DOT__core__DOT__dataM_next[0U])));
        tracep->fullQData(oldp+180,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                      << 0x2aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                                    << 0xaU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                                                      >> 0x16U)))),64);
        tracep->fullQData(oldp+182,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                                      << 0x2aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                                    << 0xaU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                      >> 0x16U)))),64);
        tracep->fullCData(oldp+184,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                              >> 0xfU))),7);
        tracep->fullCData(oldp+185,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                              >> 8U))),7);
        tracep->fullBit(oldp+186,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                         >> 7U))));
        tracep->fullBit(oldp+187,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                         >> 6U))));
        tracep->fullCData(oldp+188,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                              >> 1U))),5);
        tracep->fullQData(oldp+189,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataW[1U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataW[0U])) 
                                                      >> 1U)))),64);
        tracep->fullBit(oldp+191,((1U & vlSelf->SimTop__DOT__core__DOT__dataW[0U])));
        tracep->fullCData(oldp+192,((3U & (vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                                           >> 0xaU))),2);
        tracep->fullCData(oldp+193,((3U & (vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                                           >> 8U))),2);
        tracep->fullCData(oldp+194,((3U & (vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                                           >> 6U))),2);
        tracep->fullBit(oldp+195,((1U & (vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                                         >> 5U))));
        tracep->fullQData(oldp+196,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataH[4U])) 
                                      << 0x3bU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataH[3U])) 
                                                    << 0x1bU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataH[2U])) 
                                                      >> 5U)))),64);
        tracep->fullQData(oldp+198,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataH[2U])) 
                                      << 0x3bU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataH[1U])) 
                                                    << 0x1bU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataH[0U])) 
                                                      >> 5U)))),64);
        tracep->fullCData(oldp+200,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataH[0U])),5);
        tracep->fullCData(oldp+201,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                              >> 0x10U))),5);
        tracep->fullCData(oldp+202,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                              >> 0x15U))),5);
        tracep->fullQData(oldp+203,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1),64);
        tracep->fullQData(oldp+205,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2),64);
        tracep->fullCData(oldp+207,(vlSelf->SimTop__DOT__core__DOT__op),5);
        tracep->fullQData(oldp+208,(vlSelf->SimTop__DOT__core__DOT__offset),64);
        tracep->fullBit(oldp+210,(vlSelf->SimTop__DOT__core__DOT__Dwait));
        tracep->fullBit(oldp+211,(vlSelf->SimTop__DOT__core__DOT__Iwait));
        tracep->fullBit(oldp+212,(((~ vlSelf->SimTop__DOT__core__DOT__dataF_next[0U]) 
                                   & ((2U == (IData)(vlSelf->SimTop__DOT__core__DOT__op)) 
                                      | (4U == (IData)(vlSelf->SimTop__DOT__core__DOT__op))))));
        tracep->fullBit(oldp+213,((1U & vlSelf->SimTop__DOT__ireq[2U])));
        tracep->fullBit(oldp+214,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                 >> 0x20U)))));
        tracep->fullBit(oldp+215,(vlSelf->SimTop__DOT__core__DOT__reg_FD__DOT__hazard_reset));
        tracep->fullCData(oldp+216,((0x7fU & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                              >> 9U))),7);
        tracep->fullCData(oldp+217,((0x7fU & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                              >> 2U))),7);
        tracep->fullBit(oldp+218,((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                         >> 1U))));
        tracep->fullBit(oldp+219,((1U & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))));
        tracep->fullCData(oldp+220,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                              >> 1U))),7);
        tracep->fullCData(oldp+221,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                               << 6U) 
                                              | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                 >> 0x1aU)))),7);
        tracep->fullCData(oldp+222,((7U & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                           >> 0xdU))),3);
        tracep->fullCData(oldp+223,((0x3fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                               << 5U) 
                                              | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                 >> 0x1bU)))),6);
        tracep->fullBit(oldp+224,(vlSelf->SimTop__DOT__core__DOT__reg_DE__DOT__hazard_reset));
        tracep->fullQData(oldp+225,(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c),64);
        __Vtemp426[0U] = vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U];
        __Vtemp426[1U] = vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[1U];
        __Vtemp426[2U] = vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U];
        __Vtemp426[3U] = vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[3U];
        tracep->fullWData(oldp+227,(__Vtemp426),128);
        tracep->fullQData(oldp+231,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p[0U])))),64);
        tracep->fullBit(oldp+233,((1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__state_nxt)))));
        tracep->fullBit(oldp+234,((1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__state_nxt)))));
        tracep->fullBit(oldp+235,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__is_mult));
        tracep->fullBit(oldp+236,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__is_div));
        tracep->fullIData(oldp+237,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__div_tmp),32);
        tracep->fullQData(oldp+238,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a),64);
        tracep->fullQData(oldp+240,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b),64);
        tracep->fullBit(oldp+242,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__state));
        tracep->fullBit(oldp+243,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__state_nxt));
        tracep->fullWData(oldp+244,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__count),67);
        tracep->fullWData(oldp+247,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__count_nxt),67);
        tracep->fullWData(oldp+250,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p),129);
        tracep->fullWData(oldp+255,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt),129);
        tracep->fullBit(oldp+260,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__state));
        tracep->fullBit(oldp+261,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__state_nxt));
        tracep->fullWData(oldp+262,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__count),67);
        tracep->fullWData(oldp+265,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__count_nxt),67);
        tracep->fullWData(oldp+268,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p),129);
        tracep->fullWData(oldp+273,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt),129);
        tracep->fullCData(oldp+278,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize),3);
        tracep->fullBit(oldp+279,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__mem_unsigned));
        tracep->fullQData(oldp+280,(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd),64);
        tracep->fullQData(oldp+282,(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd),64);
        tracep->fullCData(oldp+284,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe),8);
        tracep->fullCData(oldp+285,((7U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                           >> 2U))),3);
        tracep->fullBit(oldp+286,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit));
        tracep->fullBit(oldp+287,(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE));
        tracep->fullQData(oldp+288,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0U])))),64);
        tracep->fullQData(oldp+290,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[2U])))),64);
        tracep->fullQData(oldp+292,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[4U])))),64);
        tracep->fullQData(oldp+294,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[6U])))),64);
        tracep->fullQData(oldp+296,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[8U])))),64);
        tracep->fullQData(oldp+298,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0xbU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0xaU])))),64);
        tracep->fullQData(oldp+300,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0xdU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0xcU])))),64);
        tracep->fullQData(oldp+302,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0xfU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0xeU])))),64);
        tracep->fullQData(oldp+304,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x11U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x10U])))),64);
        tracep->fullQData(oldp+306,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x13U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x12U])))),64);
        tracep->fullQData(oldp+308,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x15U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x14U])))),64);
        tracep->fullQData(oldp+310,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x17U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x16U])))),64);
        tracep->fullQData(oldp+312,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x19U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x18U])))),64);
        tracep->fullQData(oldp+314,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x1bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x1aU])))),64);
        tracep->fullQData(oldp+316,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x1dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x1cU])))),64);
        tracep->fullQData(oldp+318,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x1fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x1eU])))),64);
        tracep->fullQData(oldp+320,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x21U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x20U])))),64);
        tracep->fullQData(oldp+322,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x23U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x22U])))),64);
        tracep->fullQData(oldp+324,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x25U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x24U])))),64);
        tracep->fullQData(oldp+326,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x27U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x26U])))),64);
        tracep->fullQData(oldp+328,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x29U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x28U])))),64);
        tracep->fullQData(oldp+330,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x2bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x2aU])))),64);
        tracep->fullQData(oldp+332,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x2dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x2cU])))),64);
        tracep->fullQData(oldp+334,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x2fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x2eU])))),64);
        tracep->fullQData(oldp+336,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x31U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x30U])))),64);
        tracep->fullQData(oldp+338,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x33U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x32U])))),64);
        tracep->fullQData(oldp+340,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x35U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x34U])))),64);
        tracep->fullQData(oldp+342,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x37U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x36U])))),64);
        tracep->fullQData(oldp+344,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x39U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x38U])))),64);
        tracep->fullQData(oldp+346,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x3bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x3aU])))),64);
        tracep->fullQData(oldp+348,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x3dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x3cU])))),64);
        tracep->fullQData(oldp+350,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x3fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x3eU])))),64);
        tracep->fullQData(oldp+352,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0U])))),64);
        tracep->fullQData(oldp+354,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[2U])))),64);
        tracep->fullQData(oldp+356,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[4U])))),64);
        tracep->fullQData(oldp+358,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[6U])))),64);
        tracep->fullQData(oldp+360,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[8U])))),64);
        tracep->fullQData(oldp+362,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xbU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xaU])))),64);
        tracep->fullQData(oldp+364,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xdU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xcU])))),64);
        tracep->fullQData(oldp+366,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xfU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xeU])))),64);
        tracep->fullQData(oldp+368,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x11U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x10U])))),64);
        tracep->fullQData(oldp+370,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x13U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x12U])))),64);
        tracep->fullQData(oldp+372,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x15U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x14U])))),64);
        tracep->fullQData(oldp+374,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x17U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x16U])))),64);
        tracep->fullQData(oldp+376,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x19U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x18U])))),64);
        tracep->fullQData(oldp+378,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1aU])))),64);
        tracep->fullQData(oldp+380,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1cU])))),64);
        tracep->fullQData(oldp+382,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1eU])))),64);
        tracep->fullQData(oldp+384,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x21U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x20U])))),64);
        tracep->fullQData(oldp+386,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x23U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x22U])))),64);
        tracep->fullQData(oldp+388,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x25U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x24U])))),64);
        tracep->fullQData(oldp+390,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x27U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x26U])))),64);
        tracep->fullQData(oldp+392,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x29U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x28U])))),64);
        tracep->fullQData(oldp+394,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2aU])))),64);
        tracep->fullQData(oldp+396,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2cU])))),64);
        tracep->fullQData(oldp+398,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2eU])))),64);
        tracep->fullQData(oldp+400,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x31U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x30U])))),64);
        tracep->fullQData(oldp+402,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x33U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x32U])))),64);
        tracep->fullQData(oldp+404,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x35U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x34U])))),64);
        tracep->fullQData(oldp+406,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x37U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x36U])))),64);
        tracep->fullQData(oldp+408,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x39U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x38U])))),64);
        tracep->fullQData(oldp+410,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3aU])))),64);
        tracep->fullQData(oldp+412,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3cU])))),64);
        tracep->fullQData(oldp+414,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3eU])))),64);
        tracep->fullBit(oldp+416,((1U & ((vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                          >> 6U) & 
                                         (~ vlSelf->SimTop__DOT__core__DOT__dataW[1U])))));
        tracep->fullCData(oldp+417,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                              >> 1U))),8);
        tracep->fullQData(oldp+418,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0U])))),64);
        tracep->fullQData(oldp+420,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[2U])))),64);
        tracep->fullQData(oldp+422,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[4U])))),64);
        tracep->fullQData(oldp+424,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[6U])))),64);
        tracep->fullQData(oldp+426,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[8U])))),64);
        tracep->fullQData(oldp+428,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xbU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xaU])))),64);
        tracep->fullQData(oldp+430,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xdU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xcU])))),64);
        tracep->fullQData(oldp+432,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xfU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xeU])))),64);
        tracep->fullQData(oldp+434,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x11U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x10U])))),64);
        tracep->fullQData(oldp+436,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x13U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x12U])))),64);
        tracep->fullQData(oldp+438,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x15U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x14U])))),64);
        tracep->fullQData(oldp+440,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x17U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x16U])))),64);
        tracep->fullQData(oldp+442,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x19U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x18U])))),64);
        tracep->fullQData(oldp+444,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1aU])))),64);
        tracep->fullQData(oldp+446,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1cU])))),64);
        tracep->fullQData(oldp+448,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1eU])))),64);
        tracep->fullQData(oldp+450,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x21U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x20U])))),64);
        tracep->fullQData(oldp+452,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x23U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x22U])))),64);
        tracep->fullQData(oldp+454,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x25U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x24U])))),64);
        tracep->fullQData(oldp+456,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x27U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x26U])))),64);
        tracep->fullQData(oldp+458,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x29U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x28U])))),64);
        tracep->fullQData(oldp+460,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2aU])))),64);
        tracep->fullQData(oldp+462,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2cU])))),64);
        tracep->fullQData(oldp+464,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2eU])))),64);
        tracep->fullQData(oldp+466,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x31U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x30U])))),64);
        tracep->fullQData(oldp+468,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x33U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x32U])))),64);
        tracep->fullQData(oldp+470,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x35U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x34U])))),64);
        tracep->fullQData(oldp+472,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x37U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x36U])))),64);
        tracep->fullQData(oldp+474,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x39U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x38U])))),64);
        tracep->fullQData(oldp+476,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3bU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3aU])))),64);
        tracep->fullQData(oldp+478,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3dU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3cU])))),64);
        tracep->fullQData(oldp+480,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3fU])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3eU])))),64);
        tracep->fullBit(oldp+482,((1U & (vlSelf->SimTop__DOT__icvt__DOT__dresp[2U] 
                                         >> 1U))));
        tracep->fullBit(oldp+483,((1U & vlSelf->SimTop__DOT__icvt__DOT__dresp[2U])));
        tracep->fullQData(oldp+484,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__icvt__DOT__dresp[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__icvt__DOT__dresp[0U])))),64);
        tracep->fullQData(oldp+486,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__ireq[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__ireq[0U])))),64);
        tracep->fullBit(oldp+488,((1U & ((vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                          >> 3U) & 
                                         (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                          >> 2U)))));
        tracep->fullBit(oldp+489,((1U & ((vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                                          >> 1U) & 
                                         vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U]))));
        tracep->fullBit(oldp+490,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+491,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+492,((7U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+493,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+495,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U] 
                                              >> 0xaU))),8);
        tracep->fullQData(oldp+496,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+498,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U] 
                                              >> 2U))),8);
        tracep->fullCData(oldp+499,((3U & vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U])),2);
        tracep->fullBit(oldp+500,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                         >> 0xdU))));
        tracep->fullBit(oldp+501,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                         >> 0xcU))));
        tracep->fullCData(oldp+502,((7U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                           >> 9U))),3);
        tracep->fullQData(oldp+503,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U])) 
                                      << 0x37U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[8U])) 
                                                    << 0x17U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U])) 
                                                      >> 9U)))),64);
        tracep->fullCData(oldp+505,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U] 
                                              >> 1U))),8);
        tracep->fullQData(oldp+506,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[6U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[5U])) 
                                                      >> 1U)))),64);
        tracep->fullCData(oldp+508,((0xffU & ((vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[5U] 
                                               << 7U) 
                                              | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                                 >> 0x19U)))),8);
        tracep->fullCData(oldp+509,((3U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                           >> 0x17U))),2);
        tracep->fullBit(oldp+510,(vlSelf->SimTop__DOT__mux__DOT__busy));
        tracep->fullIData(oldp+511,(vlSelf->SimTop__DOT__mux__DOT__index),32);
        tracep->fullIData(oldp+512,(vlSelf->SimTop__DOT__mux__DOT__select),32);
        tracep->fullBit(oldp+513,((1U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+514,((1U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+515,((7U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+516,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__mux__DOT__saved_req[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__mux__DOT__saved_req[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__mux__DOT__saved_req[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+518,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__saved_req[2U] 
                                              >> 0xaU))),8);
        tracep->fullQData(oldp+519,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__mux__DOT__saved_req[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__mux__DOT__saved_req[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__mux__DOT__saved_req[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+521,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__saved_req[0U] 
                                              >> 2U))),8);
        tracep->fullCData(oldp+522,((3U & vlSelf->SimTop__DOT__mux__DOT__saved_req[0U])),2);
        tracep->fullBit(oldp+523,((1U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+524,((1U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+525,((7U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+526,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__mux__DOT__selected_req[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__mux__DOT__selected_req[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__mux__DOT__selected_req[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+528,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__selected_req[2U] 
                                              >> 0xaU))),8);
        tracep->fullQData(oldp+529,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__mux__DOT__selected_req[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__mux__DOT__selected_req[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__mux__DOT__selected_req[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+531,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__selected_req[0U] 
                                              >> 2U))),8);
        tracep->fullCData(oldp+532,((3U & vlSelf->SimTop__DOT__mux__DOT__selected_req[0U])),2);
        tracep->fullIData(oldp+533,(vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+534,(vlSelf->SimTop__DOT__mux__DOT__unnamedblk2__DOT__i),32);
        tracep->fullBit(oldp+535,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+536,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+537,((7U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                           >> 0x12U))),3);
        tracep->fullQData(oldp+538,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U])) 
                                      << 0x2eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__ram__DOT__saved_oreq[3U])) 
                                                    << 0xeU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                                      >> 0x12U)))),64);
        tracep->fullCData(oldp+540,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U] 
                                              >> 0xaU))),8);
        tracep->fullQData(oldp+541,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                      << 0x36U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__ram__DOT__saved_oreq[1U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])) 
                                                      >> 0xaU)))),64);
        tracep->fullCData(oldp+543,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U] 
                                              >> 2U))),8);
        tracep->fullCData(oldp+544,((3U & vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])),2);
        tracep->fullCData(oldp+545,(vlSelf->SimTop__DOT__ram__DOT__state),2);
        tracep->fullCData(oldp+546,(vlSelf->SimTop__DOT__ram__DOT__count_down),8);
        tracep->fullCData(oldp+547,(vlSelf->SimTop__DOT__ram__DOT__size),4);
        tracep->fullQData(oldp+548,(vlSelf->SimTop__DOT__ram__DOT__addr),64);
        tracep->fullQData(oldp+550,(vlSelf->SimTop__DOT__ram__DOT__idx),64);
        tracep->fullQData(oldp+552,(vlSelf->SimTop__DOT__ram__DOT__wrap1),64);
        tracep->fullQData(oldp+554,(vlSelf->SimTop__DOT__ram__DOT__wrap2),64);
        tracep->fullQData(oldp+556,(vlSelf->SimTop__DOT__ram__DOT__cyc_cnt),64);
        tracep->fullQData(oldp+558,(vlSelf->SimTop__DOT__ram__DOT__ms_cnt),64);
        tracep->fullQData(oldp+560,(vlSelf->SimTop__DOT__ram__DOT__wmask),64);
        tracep->fullQData(oldp+562,(vlSelf->SimTop__DOT__ram__DOT__mtime),64);
        tracep->fullQData(oldp+564,(vlSelf->SimTop__DOT__ram__DOT__mtimecmp),64);
        tracep->fullBit(oldp+566,(vlSelf->SimTop__DOT__ram__DOT__msip));
        tracep->fullBit(oldp+567,(vlSelf->clock));
        tracep->fullBit(oldp+568,(vlSelf->reset));
        tracep->fullQData(oldp+569,(vlSelf->io_logCtrl_log_begin),64);
        tracep->fullQData(oldp+571,(vlSelf->io_logCtrl_log_end),64);
        tracep->fullQData(oldp+573,(vlSelf->io_logCtrl_log_level),64);
        tracep->fullBit(oldp+575,(vlSelf->io_perfInfo_clean));
        tracep->fullBit(oldp+576,(vlSelf->io_perfInfo_dump));
        tracep->fullBit(oldp+577,(vlSelf->io_uart_out_valid));
        tracep->fullCData(oldp+578,(vlSelf->io_uart_out_ch),8);
        tracep->fullBit(oldp+579,(vlSelf->io_uart_in_valid));
        tracep->fullCData(oldp+580,(vlSelf->io_uart_in_ch),8);
        tracep->fullQData(oldp+581,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_copy[0xcU])) 
                                      << 0x2aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_copy[0xbU])) 
                                                    << 0xaU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_copy[0xaU])) 
                                                      >> 0x16U)))),64);
        tracep->fullQData(oldp+583,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_copy[0xaU])) 
                                      << 0x2aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_copy[9U])) 
                                                    << 0xaU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_copy[8U])) 
                                                      >> 0x16U)))),64);
        tracep->fullQData(oldp+585,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_copy[8U])) 
                                      << 0x2aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_copy[7U])) 
                                                    << 0xaU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_copy[6U])) 
                                                      >> 0x16U)))),64);
        tracep->fullQData(oldp+587,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_copy[6U])) 
                                      << 0x2aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_copy[5U])) 
                                                    << 0xaU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_copy[4U])) 
                                                      >> 0x16U)))),64);
        tracep->fullCData(oldp+589,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD_copy[4U] 
                                              >> 0xfU))),7);
        tracep->fullCData(oldp+590,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD_copy[4U] 
                                              >> 8U))),7);
        tracep->fullBit(oldp+591,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_copy[4U] 
                                         >> 7U))));
        tracep->fullBit(oldp+592,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_copy[4U] 
                                         >> 6U))));
        tracep->fullCData(oldp+593,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD_copy[4U] 
                                              >> 1U))),5);
        tracep->fullQData(oldp+594,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_copy[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_copy[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_copy[2U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+596,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataD_copy[2U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_copy[1U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_copy[0U])) 
                                                      >> 1U)))),64);
        tracep->fullBit(oldp+598,((1U & vlSelf->SimTop__DOT__core__DOT__dataD_copy[0U])));
        tracep->fullQData(oldp+599,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM_copy[6U])) 
                                      << 0x2aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM_copy[5U])) 
                                                    << 0xaU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM_copy[4U])) 
                                                      >> 0x16U)))),64);
        tracep->fullQData(oldp+601,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM_copy[4U])) 
                                      << 0x2aU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM_copy[3U])) 
                                                    << 0xaU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM_copy[2U])) 
                                                      >> 0x16U)))),64);
        tracep->fullCData(oldp+603,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataM_copy[2U] 
                                              >> 0xfU))),7);
        tracep->fullCData(oldp+604,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataM_copy[2U] 
                                              >> 8U))),7);
        tracep->fullBit(oldp+605,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_copy[2U] 
                                         >> 7U))));
        tracep->fullBit(oldp+606,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_copy[2U] 
                                         >> 6U))));
        tracep->fullCData(oldp+607,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataM_copy[2U] 
                                              >> 1U))),5);
        tracep->fullQData(oldp+608,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataM_copy[2U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataM_copy[1U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataM_copy[0U])) 
                                                      >> 1U)))),64);
        tracep->fullBit(oldp+610,((1U & vlSelf->SimTop__DOT__core__DOT__dataM_copy[0U])));
        tracep->fullQData(oldp+611,(vlSelf->SimTop__DOT__core__DOT__pcselect_mepc),64);
        __Vtemp427[0U] = 0U;
        __Vtemp427[1U] = 0U;
        __Vtemp427[2U] = 1U;
        tracep->fullWData(oldp+613,(__Vtemp427),67);
        tracep->fullCData(oldp+616,(0U),8);
        tracep->fullIData(oldp+617,(0U),32);
        tracep->fullBit(oldp+618,(0U));
        tracep->fullCData(oldp+619,(0U),3);
        tracep->fullQData(oldp+620,(0ULL),64);
        tracep->fullCData(oldp+622,(3U),2);
        tracep->fullCData(oldp+623,(2U),3);
        tracep->fullCData(oldp+624,(0U),8);
        tracep->fullQData(oldp+625,(0ULL),64);
    }
}
