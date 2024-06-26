`ifndef COMMON_SV
`define COMMON_SV
`ifdef VERILATOR
`include "include/config.sv"
`endif

import config_pkg::*;
package common;
	// parameters
	import config_pkg::*;
	parameter XLEN = 64;
	parameter MXLEN = XLEN;
	parameter LINK_REG_ID = 1;
	parameter logic[63:0] PCINIT = 64'h00000000_80000000;

	// typedefs
	typedef logic[128:0] u129;
	typedef logic[127:0] u128;
	typedef logic[63:0] u64;
	typedef logic[43:0] u44;
	typedef logic[31:0] u32;
	typedef logic[19:0] u20;
	typedef logic[15:0] u16;
	typedef logic[14:0] u15;
	typedef logic[13:0] u14;
	typedef logic[12:0] u13;
	typedef logic[11:0] u12;
	typedef logic[10:0] u11;
	typedef logic[9:0]  u10;
	typedef logic[8:0]  u9;
	typedef logic[7:0]  u8;
	typedef logic[6:0]  u7;
	typedef logic[5:0]  u6;
	typedef logic[4:0]  u5;
	typedef logic[3:0]  u4;
	typedef logic[2:0]  u3;
	typedef logic[1:0]  u2;
	typedef logic 	    u1;

	typedef u5 creg_addr_t;
	typedef u8 strobe_t;
	typedef u12 csr_addr_t;

typedef u32 pc_t;

typedef u7 f7_t;
typedef u3 f3_t;
// F7(Head)
parameter F7_ADDI = 7'b0010011;
parameter F7_LUI = 7'b0110111;
parameter F7_JAL = 7'b1101111;
parameter F7_BEQ = 7'b1100011;
parameter F7_LD = 7'b0000011;
parameter F7_SD = 7'b0100011;
parameter F7_ADD = 7'b0110011;
parameter F7_AUIPC = 7'b0010111;
parameter F7_JALR = 7'b1100111;
parameter F7_ADDW = 7'b0111011;
parameter F7_ADDIW = 7'b0011011;
parameter F7_CSRRW = 7'b1110011;
// F3
parameter F3_CSRRW = 3'b001;
parameter F3_CSRRS = 3'b010;
parameter F3_CSRRC = 3'b011;
parameter F3_CSRRWI = 3'b101;
parameter F3_CSRRSI = 3'b110;
parameter F3_CSRRCI = 3'b111;
parameter F3_SD = 3'b011;
parameter F3_LD = 3'b011;
parameter F3_ADDI = 3'b000;
parameter F3_XORI = 3'b100;
parameter F3_ORI = 3'b110;
parameter F3_BEQ = 3'b000;
parameter F3_ANDI = 3'b111;
parameter F3_ADD = 3'b000;
parameter F3_SUB = 3'b000;
parameter F3_AND = 3'b111;
parameter F3_OR = 3'b110;
parameter F3_XOR = 3'b100;
parameter F3_JALR = 3'b000;
parameter F3_BNE = 3'b001;
parameter F3_BLT = 3'b100;
parameter F3_BGE = 3'b101;
parameter F3_BLTU = 3'b110;
parameter F3_BGEU = 3'b111;
parameter F3_SLTI = 3'b010;
parameter F3_SLTIU = 3'b011;
parameter F3_SLLI = 3'b001;
parameter F3_SRLI = 3'b101;
parameter F3_SLL = 3'b001;
parameter F3_SLT = 3'b010;
parameter F3_SLTU = 3'b011;
parameter F3_SRL = 3'b101;
parameter F3_ADDIW = 3'b000;
parameter F3_SLLIW = 3'b001;
parameter F3_SRLIW = 3'b101;
parameter F3_ADDW = 3'b000;
parameter F3_SLLW = 3'b001;
parameter F3_SRLW = 3'b101;
parameter F3_LB = 3'b000;
parameter F3_LH = 3'b001;
parameter F3_LW = 3'b010;
parameter F3_LBU = 3'b100;
parameter F3_LHU = 3'b101;
parameter F3_LWU = 3'b110;
parameter F3_SB = 3'b000;
parameter F3_SH = 3'b001;
parameter F3_SW = 3'b010;
parameter F3_DIVW = 3'b100;
parameter F3_REMW = 3'b110;
parameter F3_REMUW = 3'b111;
parameter F3_MRET = 3'b000;
// F6
parameter F6_SRLI = 6'b000000;
parameter F6_SRAI = 6'b010000;
parameter F6_SLLIW = 6'b000000;
parameter F6_SRAIW = 6'b010000;
// F7(tail)
parameter F7T_ADD = 7'b0000000;
parameter F7T_SUB = 7'b0100000;
parameter F7T_ADDW = 7'b0000000;
parameter F7T_SUBW = 7'b0100000;
parameter F7T_AND = 7'b0000000;
parameter F7T_OR = 7'b0000000;
parameter F7T_XOR = 7'b0000000;
parameter F7T_SLL = 7'b0000000;
parameter F7T_SRA = 7'b0100000;
parameter F7T_SRLW = 7'b0000000;
parameter F7T_SRAW = 7'b0100000;
parameter F7T_SLLW = 7'b0000000;
parameter F7T_MUL = 7'b0000001;
parameter F7T_DIV = 7'b0000001;
parameter F7T_DIVU = 7'b0000001;
parameter F7T_REM = 7'b0000001;
parameter F7T_REMU = 7'b0000001;
parameter F7T_MULW = 7'b0000001;
parameter F7T_DIVW = 7'b0000001;
parameter F7T_DIVUW = 7'b0000001;
parameter F7T_REMW = 7'b0000001;
parameter F7T_REMUW = 7'b0000001;

// csrs
parameter u12 CSR_MHARTID = 12'hf14;
parameter u12 CSR_MIE = 12'h304;
parameter u12 CSR_MIP = 12'h344;
parameter u12 CSR_MTVEC = 12'h305;
parameter u12 CSR_MSTATUS = 12'h300;
parameter u12 CSR_MSCRATCH = 12'h340;
parameter u12 CSR_MEPC = 12'h341;
parameter u12 CSR_SATP = 12'h180;
parameter u12 CSR_MCAUSE = 12'h342;
parameter u12 CSR_MCYCLE = 12'hb00;
parameter u12 CSR_MTVAL = 12'h343;
parameter F32_MRET = 32'b0011000_00010_00000_000_00000_1110011;
parameter F32_ECALL = 32'b000000000000_00000_000_00000_1110011;

/**
 * this file contains basic definitions and typedefs for general designs.
 */

// Vivado does not support string parameters.
`ifdef VERILATOR
`define STRING string
`else
`define STRING /* f**k vivado */
`endif

/**
 * Vivado does not support that members of a packed union
 * have different sizes. Therefore, we have to use struct
 * instead of union in Vivado.
 */
`ifdef VERILATOR
`define PACKED_UNION union packed
`else
`define PACKED_UNION struct packed
`endif

// simple compile-time assertion
`define ASSERTS(expr, message) \
    if (!(expr)) $error(message);
`define ASSERT(expr) `ASSERTS(expr, "Assertion failed.");
 
// to ignore some signals
`define UNUSED_OK(list) \
    logic _unused_ok = &{1'b0, {list}, 1'b0};

// basic data types
`define BITS(x) logic[(x)-1:0]

typedef int unsigned uint;

typedef logic     i1;
typedef `BITS(2)  i2;
typedef `BITS(3)  i3;
typedef `BITS(4)  i4;
typedef `BITS(5)  i5;
typedef `BITS(6)  i6;
typedef `BITS(7)  i7;
typedef `BITS(8)  i8;
typedef `BITS(9)  i9;
typedef `BITS(16) i16;
typedef `BITS(19) i19;
typedef `BITS(26) i26;
typedef `BITS(32) i32;
typedef `BITS(33) i33;
typedef `BITS(34) i34;
typedef `BITS(35) i35;
typedef `BITS(36) i36;
typedef `BITS(37) i37;
typedef `BITS(38) i38;
typedef `BITS(39) i39;
typedef `BITS(40) i40;
typedef `BITS(41) i41;
typedef `BITS(42) i42;
typedef `BITS(64) i64;
typedef `BITS(65) i65;
typedef `BITS(66) i66;
typedef `BITS(67) i67;
typedef `BITS(68) i68;

// for arithmetic overflow detection
typedef i65 arith_t;

// all addresses and words are 64-bit
typedef i64 addr_t;
typedef i64 word_t;

// number of bytes transferred in one memory r/w
typedef enum i3 {
    MSIZE1 = 3'b000,
    MSIZE2 = 3'b001,
    MSIZE4 = 3'b010,
    MSIZE8 = 3'b011
} msize_t;

// length of a burst transaction
// NOTE: WRAP mode in AXI3 only supports power-of-2 length.
typedef enum i8 {
    MLEN1  = 8'h00,
    MLEN2  = 8'h01,
    MLEN4  = 8'h03,
    MLEN8  = 8'h07,
    MLEN16 = 8'h0f,
    MLEN32 = 8'h1f,
    MLEN64 = 8'h3f,
    MLEN128 = 8'h7f,
    MLEN256 = 8'hff
} mlen_t;

parameter mlen_t AXI_BURST_LEN =AXI_BURST_NUM == 16 ? MLEN16 :
 							    AXI_BURST_NUM == 32 ? MLEN32 :
							    AXI_BURST_NUM == 64 ? MLEN64 :
							    AXI_BURST_NUM == 128 ? MLEN128 :
							    AXI_BURST_NUM == 256 ? MLEN256 : MLEN1;

/**
 * SOME NOTES ON BUSES
 *
 * bus naming convention:
 *  * CPU -> cache: xxx_req_t
 *  * cache -> CPU: xxx_resp_t
 *
 * in other words, caches are masters and CPU is the worker,
 * and CPU must wait for caches to complete memory transactions.
 * handshake signals are synchronized at positive edge of the clock.
 *
 * we guarantee that IBus is a subset of DBus, so that data cache can
 * be used as a instruction cache.
 * powerful students are free to design their own bus interfaces to
 * enable superscalar pipelines and other advanced techniques.
 *
 * a request on cache bus can bypass a cache instance if the address
 * is in uncached memory regions.
 */

/**
 * NOTE on strobe:
 *
 * strobe is used to mask out unused bytes in data, and
 * data are always assumed be placed at addresses aligned to
 * 4 bytes, no matter the lowest 2 bits of addr says.
 * for example, if you want to write one byte "0xcd" at 0x1f2,
 * the addr is "0x000001f2", but the data should be "0x00cd0000"
 * and the strobe should be "0b0100", rather than "0x000000cd"
 * and "0b0001".
 */

/**
 * data cache bus
 */
typedef struct packed {
    logic    valid;     // in request?
    addr_t   addr;      // target address
    msize_t  size;      // number of bytes
    strobe_t strobe;    // which bytes are enabled? set to zeros for read request
    word_t   data;      // the data to write
} dbus_req_t;

typedef struct packed {
    logic  addr_ok;     // is the address accepted by cache?
    logic  data_ok;     // is the field "data" valid?
    word_t data;        // the data read from cache
} dbus_resp_t;

/**
 * instruction cache bus
 * addr must be aligned to 4 bytes.
 *
 * basically, ibus_resp_t is the same as dbus_resp_t.
 */
typedef struct packed {
    logic  valid;       // in request?
    addr_t addr;        // target address
} ibus_req_t;

typedef struct packed {
    logic  addr_ok;     // is the address accepted by cache?
    logic  data_ok;     // is the field "data" valid?
    u32 data;           // the data read from cache
} ibus_resp_t;

`define IREQ_TO_DREQ(ireq) \
    {ireq, MSIZE4, 8'b0, 64'b0}

`define DRESP_TO_IRESP(dresp, ireq) \
    {dresp.addr_ok, dresp.data_ok, ireq.addr[2] ? dresp.data[63:32] : dresp.data[31:0]}

/**
 * cache bus: simplified burst AXI transaction interface
 */
typedef enum i2 {
    AXI_BURST_FIXED = '0,
    AXI_BURST_INCR,
    AXI_BURST_WRAP,
    AXI_BURST_RESERVED
} axi_burst_type_t;

typedef struct packed {
    logic    valid;     // in request?
    logic    is_write;  // is it a write transaction?
    msize_t  size;      // number of bytes in one burst
    addr_t   addr;      // start address
    strobe_t strobe;    // which bytes are enabled?
    word_t   data;      // the data to write
    mlen_t   len;       // number of bursts
    axi_burst_type_t burst;
} cbus_req_t;

typedef struct packed {
    logic  ready;       // is data arrived in this cycle?
    logic  last;        // is it the last word?
    word_t data;        // the data from AXI bus
} cbus_resp_t;

typedef struct packed {
	u32 raw_instr;
	u64 pc;
	u1 is_bubble;
} fetch_data_t;

typedef enum logic[6:0] { 
	UNKNOWN, ADDI, XORI, ORI, ANDI, 
	LUI, JAL, BEQ, LD, SD,
	ADD, SUB, AND, OR,
	XOR, AUIPC, JALR,

	BNE, BLT, BGE, BLTU, BGEU,
	SLTI, SLTIU, SLLI, SRLI, SRAI,
	SLL, SLT, SLTU, SRL, SRA,
	ADDIW, SLLIW, SRLIW, SRAIW,
	ADDW, SUBW, SLLW, SRLW, SRAW,

	LB, LH, LW, LBU, LHU, LWU, 
	SB, SH, SW,

	MUL, DIV, DIVU, REM, REMU,
	MULW, DIVW, DIVUW, REMW, REMUW,
	
	CSRRW, CSRRS, CSRRC, 
	CSRRWI, CSRRSI, CSRRCI,
	MRET, ECALL

 } decode_op_t;

typedef enum logic [6:0] {
	ALU_UNKNOWN, ALU_DIRECT, ALU_PASS,
	ALU_ADD, ALU_SUB, ALU_AND, ALU_OR,
	ALU_XOR,
	ALU_SSMALL, ALU_USMALL, ALU_LEFT, 
	ALU_URIGHT, ALU_SRIGHT,
	ALU_URIGHT_32, ALU_SRIGHT_32
} alufunc_t;

typedef enum logic [4:0] {
	MAINTAIN, PLUS4, BEQ_P, BEQ_N, JAL_P, JALR_P
} instfunc_t;

typedef enum logic [1:0] {
	RESET_CONTINUE, RESET_RESET
} reset_t;

typedef enum logic [1:0] {
	INSTR_CONTINUE, INSTR_MAINTAIN, 
	INSTR_CONTINUE_BUT_BUBBLE
} instr_FETCH_t;

typedef struct packed {
	decode_op_t op;
	alufunc_t alufunc;
	u1 regwrite;
	u1 memwrite;
} control_t;

typedef struct packed {
	word_t srca, srcb, immediate, shamt;
	control_t ctl;
	creg_addr_t dst;
	word_t memory_address;
	u64 pc;
	u1 is_bubble;
	u12 csr;
	u64 csr_reg_write;
} decode_data_t;

typedef struct packed {
	u64 pc;
	u64 result;
	control_t ctl;
	creg_addr_t dst;
	word_t memory_address;
	u1 is_bubble;
	u1 is_waiting;
	u12 csr;
	u64 csr_reg_write;
	u64 csr_result;
} execute_data_t;

typedef struct packed {
	u64 pc;
	u64 result;
	control_t ctl;
	creg_addr_t dst;
	word_t memory_address;
	u1 is_bubble;
	u12 csr;
	u64 csr_reg_write;
	u64 csr_result;
} memory_data_t;

typedef struct packed {
	u64 pc;
	u64 result;
	control_t ctl;
	creg_addr_t dst;
	word_t memory_address;
	u1 is_bubble;
	u12 csr;
	u64 csr_reg_write;
	u64 csr_result;
} writeback_data_t;

typedef struct packed {
	reset_t reset_IF_ID, reset_ID_EX;
	instr_FETCH_t instr_FETCH;
	logic ireq_valid;
	u64 pc_out;
	u64 offset_out;
	instfunc_t instfunc;
} hazard_data_t;

typedef struct packed {
	u1 sd;
	logic [64-2-36:0] wpri1;
	u2 sxl;
	u2 uxl;
	u9 wpri2;
	u1 tsr;
	u1 tw;
	u1 tvm;
	u1 mxr;
	u1 sum;
	u1 mprv;
	u2 xs;
	u2 fs;
	u2 mpp;
	u2 wpri3;
	u1 spp;
	u1 mpie;
	u1 wpri4;
	u1 spie;
	u1 upie;
	u1 mie;
	u1 wpri5;
	u1 sie;
	u1 uie;
} mstatus_t;

typedef struct packed {
	u4 mode;
	u16 asid;
	u44 ppn;
} satp_t;
	
	

typedef struct packed {
	u64
	mhartid, // Hardware thread Id, read-only as 0 in this work
	mie,	 // Machine interrupt-enable register
	mip,	 // Machine interrupt pending
	mtvec;	 // Machine trap-handler base address
	mstatus_t mstatus; // Machine status register
	u64
	mscratch, // Scratch register for machine trap handlers
	mepc,	 // Machine exception program counter
	mcause,  // Machine trap cause
	mcycle,  // Counter
	mtval;
	satp_t satp;	 // Supervisor address translation and protection, read-only as 0 in this work
} csr_regs_t;


endpackage
`endif

