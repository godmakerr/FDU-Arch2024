`ifdef VERILATOR
`include "include/common.sv"
`else

`endif

module controlUnit
    import common::*;
(
    input u32 raw_instr,
    output control_t ctl
);
    wire [6:0] f7 = raw_instr[6:0];
    wire [6:0] f7t = raw_instr[31:25];
    wire [2:0] f3 = raw_instr[14:12];
    wire [5:0] f6 = raw_instr[31:26];
    always_comb begin
        ctl = '0;
        unique case(f7)
            F7_ADDI:begin
                unique case(f3)
                    F3_ADDI:begin
                        ctl.op = ADDI;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_ADD;
                        ctl.memwrite = 1'b0;
                    end
                    F3_XORI:begin
                        ctl.op = XORI;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_XOR;
                        ctl.memwrite = 1'b0;
                    end
                    F3_ORI:begin
                        ctl.op = ORI;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_OR;
                        ctl.memwrite = 1'b0;
                    end
                    F3_ANDI:begin
                        ctl.op = ANDI;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_AND;
                        ctl.memwrite = 1'b0;
                    end
                    F3_SLTI:begin
                        ctl.op = SLTI;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_SSMALL;
                        ctl.memwrite = 1'b0;
                    end
                    F3_SLTIU:begin
                        ctl.op = SLTIU;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_USMALL;
                        ctl.memwrite = 1'b0;
                    end
                    F3_SLLI:begin
                        ctl.op = SLLI;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_LEFT;
                        ctl.memwrite = 1'b0;
                    end
                    F3_SRLI:begin
                        unique case(f6)
                            F6_SRLI:begin
                                ctl.op = SRLI;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_URIGHT;
                                ctl.memwrite = 1'b0;
                            end
                            F6_SRAI:begin
                                ctl.op = SRAI;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_SRIGHT;
                                ctl.memwrite = 1'b0;
                            end
                            default:begin
                                
                            end
                        endcase
                    end
                    default:begin
                        
                    end
                endcase
            end
            F7_LUI:begin
                ctl.op = LUI;
                ctl.regwrite = 1'b1;
                ctl.alufunc = ALU_DIRECT;
                ctl.memwrite = 1'b0;
            end
            F7_JAL:begin
                ctl.op = JAL;
                ctl.regwrite = 1'b1;
                ctl.alufunc = ALU_ADD;
                ctl.memwrite = 1'b0;
            end
            F7_BEQ:begin
                unique case(f3)
                    F3_BEQ:begin
                        ctl.op = BEQ;
                        ctl.regwrite = 1'b0;
                        ctl.alufunc = ALU_PASS;
                        ctl.memwrite = 1'b0;
                    end
                    F3_BNE:begin
                        ctl.op = BNE;
                        ctl.regwrite = 1'b0;
                        ctl.alufunc = ALU_PASS;
                        ctl.memwrite = 1'b0;
                    end
                    F3_BLT:begin
                        ctl.op = BLT;
                        ctl.regwrite = 1'b0;
                        ctl.alufunc = ALU_PASS;
                        ctl.memwrite = 1'b0;
                    end
                    F3_BGE:begin
                        ctl.op = BGE;
                        ctl.regwrite = 1'b0;
                        ctl.alufunc = ALU_PASS;
                        ctl.memwrite = 1'b0;
                    end
                    F3_BLTU:begin
                        ctl.op = BLTU;
                        ctl.regwrite = 1'b0;
                        ctl.alufunc = ALU_PASS;
                        ctl.memwrite = 1'b0;
                    end
                    F3_BGEU:begin
                        ctl.op = BGEU;
                        ctl.regwrite = 1'b0;
                        ctl.alufunc = ALU_PASS;
                        ctl.memwrite = 1'b0;
                    end
                    default:begin
                        
                    end
                endcase
            end
            F7_LD:begin
                unique case(f3)
                    F3_LD:begin
                        ctl.op = LD;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_PASS;
                        ctl.memwrite = 1'b1;
                    end
                    F3_LB:begin
                        ctl.op = LB;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_PASS;
                        ctl.memwrite = 1'b1;
                    end
                    F3_LH:begin
                        ctl.op = LH;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_PASS;
                        ctl.memwrite = 1'b1;
                    end
                    F3_LW:begin
                        ctl.op = LW;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_PASS;
                        ctl.memwrite = 1'b1;
                    end
                    F3_LBU:begin
                        ctl.op = LBU;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_PASS;
                        ctl.memwrite = 1'b1;
                    end
                    F3_LHU:begin
                        ctl.op = LHU;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_PASS;
                        ctl.memwrite = 1'b1;
                    end
                    F3_LWU:begin
                        ctl.op = LWU;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_PASS;
                        ctl.memwrite = 1'b1;
                    end
                    default:begin
                        
                    end
                endcase
            end
            F7_SD:begin
                unique case(f3)
                    F3_SD:begin
                        ctl.op = SD;
                        ctl.regwrite = 1'b0;
                        ctl.alufunc = ALU_DIRECT;
                        ctl.memwrite = 1'b1;
                    end
                    F3_SB:begin
                        ctl.op = SB;
                        ctl.regwrite = 1'b0;
                        ctl.alufunc = ALU_DIRECT;
                        ctl.memwrite = 1'b1;
                    end
                    F3_SH:begin
                        ctl.op = SH;
                        ctl.regwrite = 1'b0;
                        ctl.alufunc = ALU_DIRECT;
                        ctl.memwrite = 1'b1;
                    end
                    F3_SW:begin
                        ctl.op = SW;
                        ctl.regwrite = 1'b0;
                        ctl.alufunc = ALU_DIRECT;
                        ctl.memwrite = 1'b1;
                    end
                    default:begin
                        
                    end
                endcase
            end
            F7_ADD:begin
               unique case(f3)
                   F3_ADD:begin
                      unique case(f7t)
                          F7T_ADD:begin
                                ctl.op = ADD;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_ADD;
                                ctl.memwrite = 1'b0;
                          end
                          F7T_SUB:begin
                                ctl.op = SUB;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_SUB;
                                ctl.memwrite = 1'b0;
                          end
                          F7T_MUL:begin
                                ctl.op = MUL;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_UNKNOWN;
                                ctl.memwrite = 1'b0;
                          end
                          default:begin
                              
                          end
                      endcase 
                   end
                   F3_AND:begin
                      unique case(f7t)
                          F7T_AND:begin
                                ctl.op = AND;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_AND;
                                ctl.memwrite = 1'b0;
                          end
                          F7T_REMU:begin
                                ctl.op = REMU;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_UNKNOWN;
                                ctl.memwrite = 1'b0;
                          end
                          default:begin
                              
                          end
                      endcase 
                   end
                   F3_OR:begin
                      unique case(f7t)
                          F7T_OR:begin
                                ctl.op = OR;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_OR;
                                ctl.memwrite = 1'b0;
                          end
                          F7T_REM:begin
                                ctl.op = REM;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_UNKNOWN;
                                ctl.memwrite = 1'b0;
                          end
                          default:begin
                              
                          end
                      endcase 
                   end
                   F3_XOR:begin
                      unique case(f7t)
                          F7T_XOR:begin
                                ctl.op = XOR;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_XOR;
                                ctl.memwrite = 1'b0;
                          end
                          F7T_DIV:begin
                                ctl.op = DIV;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_UNKNOWN;
                                ctl.memwrite = 1'b0;
                          end
                          default:begin
                              
                          end
                      endcase 
                   end
                   F3_SLL:begin
                      unique case(f7t)
                          F7T_SLL:begin
                                ctl.op = SLL;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_LEFT;
                                ctl.memwrite = 1'b0;
                          end
                          default:begin
                              
                          end
                      endcase 
                   end
                   F3_SLT:begin
                      unique case(f7t)
                          F7T_SLL:begin
                                ctl.op = SLT;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_SSMALL;
                                ctl.memwrite = 1'b0;
                          end
                          default:begin
                              
                          end
                      endcase 
                   end
                   F3_SLTU:begin
                      unique case(f7t)
                          F7T_SLL:begin
                                ctl.op = SLTU;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_USMALL;
                                ctl.memwrite = 1'b0;
                          end
                          default:begin
                              
                          end
                      endcase 
                   end
                   F3_SRL:begin
                      unique case(f7t)
                          F7T_SLL:begin
                                ctl.op = SRL;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_URIGHT;
                                ctl.memwrite = 1'b0;
                          end
                          F7T_SRA:begin
                                ctl.op = SRA;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_SRIGHT;
                                ctl.memwrite = 1'b0;
                          end
                          F7T_DIVU:begin
                                ctl.op = DIVU;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_UNKNOWN;
                                ctl.memwrite = 1'b0;
                          end
                          default:begin
                              
                          end
                      endcase 
                   end
                   default:begin
                       
                   end
               endcase 
            end
            F7_AUIPC:begin
                ctl.op = AUIPC;
                ctl.regwrite = 1'b1;
                ctl.alufunc = ALU_ADD;
                ctl.memwrite = 1'b0;
            end
            F7_JALR:begin
                unique case(f3)
                    F3_JALR:begin
                        ctl.op = JALR;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_ADD;
                        ctl.memwrite = 1'b0;
                    end
                    default:begin
                        
                    end
                endcase
            end
            F7_ADDIW:begin
                unique case(f3)
                    F3_ADDIW:begin
                        ctl.op = ADDIW;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_ADD;
                        ctl.memwrite = 1'b0;
                    end
                    F3_SLLIW:begin
                        unique case(f6)
                            F6_SLLIW:begin
                                ctl.op = SLLIW;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_LEFT;
                                ctl.memwrite = 1'b0;
                            end
                            default:begin
                                
                            end
                        endcase
                    end
                    F3_SRLIW:begin
                        unique case(f6)
                            F6_SLLIW:begin
                                ctl.op = SRLIW;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_URIGHT_32;
                                ctl.memwrite = 1'b0;
                            end
                            F6_SRAIW:begin
                                ctl.op = SRAIW;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_SRIGHT_32;
                                ctl.memwrite = 1'b0;
                            end
                            default:begin
                                
                            end
                        endcase
                    end
                    default:begin
                        
                    end
                endcase
            end
            F7_ADDW:begin
                unique case(f3)
                    F3_ADDW:begin
                        unique case(f7t)
                            F7T_ADDW:begin
                                ctl.op = ADDW;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_ADD;
                                ctl.memwrite = 1'b0;
                            end
                            F7T_SUBW:begin
                                ctl.op = SUBW;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_SUB;
                                ctl.memwrite = 1'b0;
                            end
                            F7T_MULW:begin
                                ctl.op = MULW;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_UNKNOWN;
                                ctl.memwrite = 1'b0;
                            end
                            default:begin
                                
                            end
                        endcase
                    end
                    F3_SLLW:begin
                        unique case(f7t)
                            F7T_SLLW:begin
                                ctl.op = SLLW;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_LEFT;
                                ctl.memwrite = 1'b0;
                            end
                            default:begin
                                
                            end
                        endcase
                    end
                    F3_SRLW:begin
                        unique case(f7t)
                            F7T_SRLW:begin
                                ctl.op = SRLW;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_URIGHT_32;
                                ctl.memwrite = 1'b0;
                            end
                            F7T_SRAW:begin
                                ctl.op = SRAW;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_SRIGHT_32;
                                ctl.memwrite = 1'b0;
                            end
                            F7T_DIVUW:begin
                                ctl.op = DIVUW;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_UNKNOWN;
                                ctl.memwrite = 1'b0;
                            end
                            default:begin
                                
                            end
                        endcase
                    end
                    F3_DIVW:begin
                        unique case(f7t)
                            F7T_DIVW:begin
                                ctl.op = DIVW;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_UNKNOWN;
                                ctl.memwrite = 1'b0;
                            end
                            default:begin
                                
                            end
                        endcase
                    end
                    F3_REMW:begin
                        unique case(f7t)
                            F7T_REMW:begin
                                ctl.op = REMW;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_UNKNOWN;
                                ctl.memwrite = 1'b0;
                            end
                            default:begin
                                
                            end
                        endcase
                    end
                    F3_REMUW:begin
                        unique case(f7t)
                            F7T_REMUW:begin
                                ctl.op = REMUW;
                                ctl.regwrite = 1'b1;
                                ctl.alufunc = ALU_UNKNOWN;
                                ctl.memwrite = 1'b0;
                            end
                            default:begin
                                
                            end
                        endcase
                    end
                    default:begin
                        
                    end
                endcase
            end

	F7_CSRRW:begin
                 unique case(f3)
                    F3_CSRRW:begin
                        ctl.op = CSRRW;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_DIRECT;
                        ctl.memwrite = 1'b0;
                    end
                    F3_CSRRS:begin
                        ctl.op = CSRRS;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_OR;
                        ctl.memwrite = 1'b0;
                    end
                    F3_CSRRC:begin
                        ctl.op = CSRRC;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_AND;
                        ctl.memwrite = 1'b0;
                    end
                    F3_CSRRWI:begin
                        ctl.op = CSRRWI;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_DIRECT;
                        ctl.memwrite = 1'b0;
                    end
                    F3_CSRRSI:begin
                        ctl.op = CSRRSI;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_OR;
                        ctl.memwrite = 1'b0;
                    end
                    F3_CSRRCI:begin
                        ctl.op = CSRRCI;
                        ctl.regwrite = 1'b1;
                        ctl.alufunc = ALU_AND;
                        ctl.memwrite = 1'b0;
                    end
                    F3_MRET:begin
                        unique case(raw_instr)
                            F32_MRET:begin
                                ctl.op = MRET;
                                ctl.regwrite = 1'b0;
                                ctl.alufunc = ALU_UNKNOWN;
                                ctl.memwrite = 1'b0;
                            end 
                            F32_ECALL:begin
                                ctl.op = ECALL;
                                ctl.regwrite = 1'b0;
                                ctl.alufunc = ALU_UNKNOWN;
                                ctl.memwrite = 1'b0;
                            end
                            default:begin
                                
                            end
                        endcase
                    end
                    default:begin
                        
                    end
                endcase
            end
            default:begin
                
            end
        endcase
    end
    
endmodule
