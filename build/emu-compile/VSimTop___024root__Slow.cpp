// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop___024root.h"
#include "VSimTop__Syms.h"

#include "verilated_dpi.h"

//==========


void VSimTop___024root___ctor_var_reset(VSimTop___024root* vlSelf);

VSimTop___024root::VSimTop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VSimTop___024root___ctor_var_reset(this);
}

void VSimTop___024root::__Vconfigure(VSimTop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VSimTop___024root::~VSimTop___024root() {
}

void VSimTop___024root___initial__TOP__1(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->io_uart_out_valid = 0U;
    vlSelf->io_uart_out_ch = 0U;
    vlSelf->io_uart_in_valid = 0U;
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__mux__DOT____Vxrand2);
    vlSelf->SimTop__DOT__mux__DOT____Vxrand3 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(151, vlSelf->SimTop__DOT__mux__DOT____Vxrand1);
}

void VSimTop___024unit____Vdpiimwrap_get_switch_TOP____024unit(IData/*31:0*/ &get_switch__Vfuncrtn);
void VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(CData/*0:0*/ en, QData/*63:0*/ rIdx, QData/*63:0*/ &ram_read_helper__Vfuncrtn);

void VSimTop___024root___settle__TOP__3(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___settle__TOP__3\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp248;
    VlWide<3>/*95:0*/ __Vtemp251;
    VlWide<3>/*95:0*/ __Vtemp253;
    VlWide<3>/*95:0*/ __Vtemp256;
    VlWide<3>/*95:0*/ __Vtemp260;
    VlWide<3>/*95:0*/ __Vtemp261;
    VlWide<3>/*95:0*/ __Vtemp262;
    VlWide<5>/*159:0*/ __Vtemp263;
    VlWide<4>/*127:0*/ __Vtemp264;
    VlWide<5>/*159:0*/ __Vtemp265;
    VlWide<5>/*159:0*/ __Vtemp266;
    VlWide<3>/*95:0*/ __Vtemp270;
    VlWide<3>/*95:0*/ __Vtemp271;
    VlWide<3>/*95:0*/ __Vtemp274;
    VlWide<3>/*95:0*/ __Vtemp275;
    VlWide<3>/*95:0*/ __Vtemp276;
    VlWide<5>/*159:0*/ __Vtemp277;
    VlWide<5>/*159:0*/ __Vtemp327;
    // Body
    if ((1U & (~ VL_ONEHOT0_I((((0x3aU == (0x7fU & 
                                           (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                            >> 0xfU))) 
                                << 1U) | (0x38U == 
                                          (0x7fU & 
                                           (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                            >> 0xfU)))))))) {
        if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("[%0t] %%Error: execute.sv:475: Assertion failed in %NSimTop.core.execute: synthesis parallel_case, but multiple matches found\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/cs/arch-2024/build/../vsrc/src/execute.sv", 475, "");
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__state) 
                               << 1U) | (1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__state)))))))) {
        if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("[%0t] %%Error: multipler.sv:31: Assertion failed in %NSimTop.core.execute.multipler: synthesis parallel_case, but multiple matches found\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/cs/arch-2024/build/../vsrc/src/multipler.sv", 31, "");
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__state) 
                               << 1U) | (1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__state)))))))) {
        if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("[%0t] %%Error: multipler.sv:49: Assertion failed in %NSimTop.core.execute.multipler: synthesis parallel_case, but multiple matches found\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/cs/arch-2024/build/../vsrc/src/multipler.sv", 49, "");
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__state) 
                               << 1U) | (1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__state)))))))) {
        if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("[%0t] %%Error: diviter.sv:31: Assertion failed in %NSimTop.core.execute.diviter: synthesis parallel_case, but multiple matches found\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/cs/arch-2024/build/../vsrc/src/diviter.sv", 31, "");
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__state) 
                               << 1U) | (1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__state)))))))) {
        if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("[%0t] %%Error: diviter.sv:49: Assertion failed in %NSimTop.core.execute.diviter: synthesis parallel_case, but multiple matches found\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/cs/arch-2024/build/../vsrc/src/diviter.sv", 49, "");
        }
    }
    if (vlSelf->SimTop__DOT__mux__DOT__busy) {
        vlSelf->SimTop__DOT__mux__DOT__unnamedblk2__DOT__i = 2U;
    }
    vlSelf->SimTop__DOT__core__DOT__dataM[0U] = ((0xfffffffeU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                                                 | (1U 
                                                    & (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                       >> 1U)));
    vlSelf->SimTop__DOT__core__DOT__dataE[4U] = ((0x7fffffU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataE[4U]) 
                                                 | ((IData)(
                                                            (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataD_next[2U])) 
                                                              << 0x3fU) 
                                                             | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[1U])) 
                                                                 << 0x1fU) 
                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0U])) 
                                                                   >> 1U)))) 
                                                    << 0x17U));
    vlSelf->SimTop__DOT__core__DOT__dataE[5U] = (((IData)(
                                                          (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataD_next[2U])) 
                                                            << 0x3fU) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataD_next[1U])) 
                                                               << 0x1fU) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0U])) 
                                                                 >> 1U)))) 
                                                  >> 9U) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataD_next[2U])) 
                                                               << 0x3fU) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[1U])) 
                                                                  << 0x1fU) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0U])) 
                                                                    >> 1U))) 
                                                             >> 0x20U)) 
                                                    << 0x17U));
    vlSelf->SimTop__DOT__core__DOT__dataE[6U] = ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataD_next[2U])) 
                                                            << 0x3fU) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataD_next[1U])) 
                                                               << 0x1fU) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0U])) 
                                                                 >> 1U))) 
                                                          >> 0x20U)) 
                                                 >> 9U);
    vlSelf->SimTop__DOT__core__DOT__dataE[0U] = ((3U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataE[0U]) 
                                                 | (0xfffffffcU 
                                                    & (vlSelf->SimTop__DOT__core__DOT__dataD_next[2U] 
                                                       << 1U)));
    vlSelf->SimTop__DOT__core__DOT__dataE[1U] = (((2U 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataD_next[3U] 
                                                      << 1U)) 
                                                  | (vlSelf->SimTop__DOT__core__DOT__dataD_next[2U] 
                                                     >> 0x1fU)) 
                                                 | (0xfffffffcU 
                                                    & (vlSelf->SimTop__DOT__core__DOT__dataD_next[3U] 
                                                       << 1U)));
    vlSelf->SimTop__DOT__core__DOT__dataE[2U] = ((0xff800000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataE[2U]) 
                                                 | (((2U 
                                                      & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                                         << 1U)) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataD_next[3U] 
                                                        >> 0x1fU)) 
                                                    | (0x7ffffcU 
                                                       & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                                          << 1U))));
    vlSelf->SimTop__DOT__core__DOT__execute__DOT__div_tmp 
        = ((0x38U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                               >> 0xfU))) ? ((IData)(1U) 
                                             + (~ vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U]))
            : ((0x3aU == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                   >> 0xfU))) ? ((IData)(1U) 
                                                 + 
                                                 (~ 
                                                  vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U]))
                : 0U));
    vlSelf->SimTop__DOT__core__DOT__dataD[0U] = vlSelf->SimTop__DOT__core__DOT__dataF_next[0U];
    vlSelf->SimTop__DOT__core__DOT__dataD[1U] = vlSelf->SimTop__DOT__core__DOT__dataF_next[1U];
    vlSelf->SimTop__DOT__core__DOT__dataD[2U] = ((0xfffffffeU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD[2U]) 
                                                 | (1U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U]));
    vlSelf->SimTop__DOT__core__DOT__dataD[4U] = ((0x3fffffU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD[4U]) 
                                                 | ((IData)((QData)((IData)(
                                                                            (0x3fU 
                                                                             & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))) 
                                                    << 0x16U));
    vlSelf->SimTop__DOT__core__DOT__dataD[5U] = (((IData)((QData)((IData)(
                                                                          (0x3fU 
                                                                           & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                              >> 0x15U))))) 
                                                  >> 0xaU) 
                                                 | ((IData)(
                                                            ((QData)((IData)(
                                                                             (0x3fU 
                                                                              & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))) 
                                                             >> 0x20U)) 
                                                    << 0x16U));
    vlSelf->SimTop__DOT__core__DOT__dataD[6U] = ((0xffc00000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD[6U]) 
                                                 | ((IData)(
                                                            ((QData)((IData)(
                                                                             (0x3fU 
                                                                              & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))) 
                                                             >> 0x20U)) 
                                                    >> 0xaU));
    vlSelf->SimTop__DOT__icreq[0U] = 0U;
    vlSelf->SimTop__DOT__icreq[1U] = 0U;
    vlSelf->SimTop__DOT__icreq[2U] = ((IData)((((QData)((IData)(
                                                                vlSelf->SimTop__DOT__ireq[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__ireq[0U])))) 
                                      << 0x12U);
    vlSelf->SimTop__DOT__icreq[3U] = (((IData)((((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__ireq[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__ireq[0U])))) 
                                       >> 0xeU) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__ireq[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->SimTop__DOT__ireq[0U]))) 
                                                            >> 0x20U)) 
                                                   << 0x12U));
    vlSelf->SimTop__DOT__icreq[4U] = (0x80000U | ((0x400000U 
                                                   & (vlSelf->SimTop__DOT__ireq[2U] 
                                                      << 0x16U)) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__ireq[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__ireq[0U]))) 
                                                              >> 0x20U)) 
                                                     >> 0xeU)));
    vlSelf->SimTop__DOT__core__DOT__memory__DOT__mem_unsigned 
        = (1U & ((~ (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                     >> 0x16U)) & ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                    >> 0x15U) & ((~ 
                                                  (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                   >> 0x14U)) 
                                                 & ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                     >> 0x13U) 
                                                    & ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                        >> 0x12U) 
                                                       & ((~ 
                                                           (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                            >> 0x11U)) 
                                                          | (~ 
                                                             (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                              >> 0x10U)))))))));
    vlSelf->SimTop__DOT__core__DOT__execute__DOT__is_div 
        = ((~ (((0ULL != (((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataD_next[2U])) 
                           << 0x3fU) | (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[1U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD_next[0U])) 
                                           >> 1U)))) 
                & (~ vlSelf->SimTop__DOT__core__DOT__dataD_next[0U])) 
               & ((0x32U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                      >> 0xfU))) | 
                  (0x37U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                      >> 0xfU)))))) 
           & (((0ULL != (((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataD_next[2U])) 
                          << 0x3fU) | (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[1U])) 
                                        << 0x1fU) | 
                                       ((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0U])) 
                                        >> 1U)))) & 
               (~ vlSelf->SimTop__DOT__core__DOT__dataD_next[0U])) 
              & ((((((((0x33U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                           >> 0xfU))) 
                       | (0x34U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                             >> 0xfU)))) 
                      | (0x35U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                            >> 0xfU)))) 
                     | (0x36U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                           >> 0xfU)))) 
                    | (0x38U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                          >> 0xfU)))) 
                   | (0x39U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                         >> 0xfU)))) 
                  | (0x3aU == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                        >> 0xfU)))) 
                 | (0x3bU == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                       >> 0xfU))))));
    vlSelf->SimTop__DOT__core__DOT__execute__DOT__is_mult 
        = (((0ULL != (((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataD_next[2U])) 
                       << 0x3fU) | (((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataD_next[1U])) 
                                     << 0x1fU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataD_next[0U])) 
                                                  >> 1U)))) 
            & (~ vlSelf->SimTop__DOT__core__DOT__dataD_next[0U])) 
           & ((0x32U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                  >> 0xfU))) | (0x37U 
                                                == 
                                                (0x7fU 
                                                 & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                                    >> 0xfU)))));
    if ((0x200000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])) {
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b = 0ULL;
    } else {
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a 
            = ((0x100000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                ? ((0x80000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                    ? ((0x40000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                        ? ((0x20000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                            ? 0ULL : ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                       ? ((0x8000U 
                                           & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                           ? (QData)((IData)(
                                                             ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                               << 0xaU) 
                                                              | (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU] 
                                                                 >> 0x16U))))
                                           : ((0x200000U 
                                               & vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])
                                               ? (1ULL 
                                                  + (QData)((IData)(
                                                                    (~ 
                                                                     ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                       << 0xaU) 
                                                                      | (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU] 
                                                                         >> 0x16U))))))
                                               : (QData)((IData)(
                                                                 ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                   << 0xaU) 
                                                                  | (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU] 
                                                                     >> 0x16U))))))
                                       : ((0x8000U 
                                           & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                           ? (QData)((IData)(
                                                             ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                               << 0xaU) 
                                                              | (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU] 
                                                                 >> 0x16U))))
                                           : ((0x200000U 
                                               & vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])
                                               ? (1ULL 
                                                  + (QData)((IData)(
                                                                    (~ 
                                                                     ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                       << 0xaU) 
                                                                      | (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU] 
                                                                         >> 0x16U))))))
                                               : (QData)((IData)(
                                                                 ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                   << 0xaU) 
                                                                  | (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU] 
                                                                     >> 0x16U))))))))
                        : ((0x20000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                            ? ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                ? ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         >> 0x16U)))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         >> 0x16U))))
                                : ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? ((0x200000U & 
                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])
                                        ? (1ULL + (~ 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                                     << 0x2aU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                                        << 0xaU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                          >> 0x16U)))))
                                        : (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                            << 0x2aU) 
                                           | (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                               << 0xaU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                 >> 0x16U))))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         >> 0x16U)))))
                            : ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                ? ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? ((0x200000U & 
                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])
                                        ? (1ULL + (~ 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                                     << 0x2aU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                                        << 0xaU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                          >> 0x16U)))))
                                        : (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                            << 0x2aU) 
                                           | (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                               << 0xaU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                 >> 0x16U))))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         >> 0x16U))))
                                : ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                         >> 0x16U)))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                         >> 0x16U)))))))
                    : ((0x40000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                        ? ((0x20000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                            ? ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                ? ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                         >> 0x16U)))
                                    : 0ULL) : 0ULL)
                            : ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                ? 0ULL : ((0x8000U 
                                           & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                           ? 0ULL : (QData)((IData)(
                                                                    ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                      << 0xaU) 
                                                                     | (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU] 
                                                                        >> 0x16U)))))))
                        : ((0x20000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                            ? ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                ? ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (QData)((IData)(
                                                      ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                        << 0xaU) 
                                                       | (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU] 
                                                          >> 0x16U))))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         >> 0x16U))))
                                : ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         >> 0x16U)))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         >> 0x16U)))))
                            : ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                ? ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (QData)((IData)(
                                                      ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                        << 0xaU) 
                                                       | (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU] 
                                                          >> 0x16U))))
                                    : (QData)((IData)(
                                                      ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                        << 0xaU) 
                                                       | (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU] 
                                                          >> 0x16U)))))
                                : ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         >> 0x16U)))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         >> 0x16U))))))))
                : ((0x80000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                    ? ((0x40000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                        ? ((0x20000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                            ? ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                ? ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         >> 0x16U)))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         >> 0x16U))))
                                : ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         >> 0x16U)))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         >> 0x16U)))))
                            : ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                ? ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         >> 0x16U)))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         >> 0x16U))))
                                : ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         >> 0x16U)))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         >> 0x16U))))))
                        : ((0x20000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                            ? ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                ? ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         >> 0x16U)))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         >> 0x16U))))
                                : 0ULL) : ((0x10000U 
                                            & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                            ? 0ULL : 
                                           ((0x8000U 
                                             & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                             ? 0ULL
                                             : (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__dataD_next[2U])) 
                                                 << 0x3fU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataD_next[1U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_next[0U])) 
                                                      >> 1U)))))))
                    : ((0x40000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                        ? ((0x20000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                            ? ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                ? ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[2U])) 
                                        << 0x3fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[1U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD_next[0U])) 
                                           >> 1U)))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         >> 0x16U))))
                                : ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         >> 0x16U)))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         >> 0x16U)))))
                            : ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                ? ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         >> 0x16U)))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         >> 0x16U))))
                                : ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                         >> 0x16U)))
                                    : 0ULL))) : ((0x20000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                  ? 
                                                 ((0x10000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                   ? 
                                                  ((0x8000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                    ? 0ULL
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_next[2U])) 
                                                     << 0x3fU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[1U])) 
                                                        << 0x1fU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataD_next[0U])) 
                                                          >> 1U))))
                                                   : 
                                                  ((0x8000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                     << 0x2aU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[7U])) 
                                                        << 0xaU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataD_next[6U])) 
                                                          >> 0x16U)))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                                     << 0x2aU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                                        << 0xaU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                          >> 0x16U)))))
                                                  : 
                                                 ((0x10000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                   ? 
                                                  ((0x8000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                                     << 0x2aU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                                        << 0xaU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                          >> 0x16U)))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                                     << 0x2aU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                                        << 0xaU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                          >> 0x16U))))
                                                   : 
                                                  ((0x8000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                                     << 0x2aU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                                        << 0xaU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                          >> 0x16U)))
                                                    : 0ULL))))));
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b 
            = ((0x100000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                ? ((0x80000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                    ? ((0x40000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                        ? ((0x20000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                            ? 0ULL : ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                       ? ((0x8000U 
                                           & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                           ? (QData)((IData)(
                                                             ((vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                               << 0xaU) 
                                                              | (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                                 >> 0x16U))))
                                           : ((0x200000U 
                                               & vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])
                                               ? (1ULL 
                                                  + (QData)((IData)(
                                                                    (~ 
                                                                     ((vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                                       << 0xaU) 
                                                                      | (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                                         >> 0x16U))))))
                                               : (QData)((IData)(
                                                                 ((vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                                   << 0xaU) 
                                                                  | (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                                     >> 0x16U))))))
                                       : ((0x8000U 
                                           & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                           ? (QData)((IData)(
                                                             ((vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                               << 0xaU) 
                                                              | (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                                 >> 0x16U))))
                                           : ((0x200000U 
                                               & vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])
                                               ? (1ULL 
                                                  + (QData)((IData)(
                                                                    (~ 
                                                                     ((vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                                       << 0xaU) 
                                                                      | (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                                         >> 0x16U))))))
                                               : (QData)((IData)(
                                                                 ((vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                                   << 0xaU) 
                                                                  | (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                                     >> 0x16U))))))))
                        : ((0x20000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                            ? ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                ? ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                         >> 0x16U)))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                         >> 0x16U))))
                                : ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? ((0x200000U & 
                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])
                                        ? (1ULL + (~ 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                     << 0x2aU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                                        << 0xaU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                          >> 0x16U)))))
                                        : (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                            << 0x2aU) 
                                           | (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                               << 0xaU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                 >> 0x16U))))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                         >> 0x16U)))))
                            : ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                ? ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? ((0x200000U & 
                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])
                                        ? (1ULL + (~ 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                     << 0x2aU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                                        << 0xaU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                          >> 0x16U)))))
                                        : (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                            << 0x2aU) 
                                           | (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                               << 0xaU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                 >> 0x16U))))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                         >> 0x16U))))
                                : 0ULL))) : ((0x40000U 
                                              & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                              ? ((0x20000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                  ? 0ULL
                                                  : 
                                                 ((0x10000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                   ? 0ULL
                                                   : 
                                                  ((0x8000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                    ? 0ULL
                                                    : (QData)((IData)(
                                                                      (0x1fU 
                                                                       & (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                                          >> 0x16U)))))))
                                              : ((0x20000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                  ? 
                                                 ((0x10000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                   ? 
                                                  ((0x8000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                    ? (QData)((IData)(
                                                                      (0x1fU 
                                                                       & (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                                          >> 0x16U))))
                                                    : (QData)((IData)(
                                                                      (0x1fU 
                                                                       & (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                                          >> 0x16U)))))
                                                   : 
                                                  ((0x8000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                     << 0x2aU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                                        << 0xaU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                          >> 0x16U)))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                     << 0x2aU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                                        << 0xaU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                          >> 0x16U)))))
                                                  : 
                                                 ((0x10000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                   ? 
                                                  ((0x8000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_next[6U])) 
                                                     << 0x2aU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[5U])) 
                                                        << 0xaU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])) 
                                                          >> 0x16U)))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_next[6U])) 
                                                     << 0x2aU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[5U])) 
                                                        << 0xaU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])) 
                                                          >> 0x16U))))
                                                   : 
                                                  ((0x8000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                     << 0x2aU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[7U])) 
                                                        << 0xaU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataD_next[6U])) 
                                                          >> 0x16U)))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                     << 0x2aU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[7U])) 
                                                        << 0xaU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataD_next[6U])) 
                                                          >> 0x16U))))))))
                : ((0x80000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                    ? ((0x40000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                        ? ((0x20000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                            ? ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                ? ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                         >> 0x16U)))
                                    : (QData)((IData)(
                                                      (0x3fU 
                                                       & (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                          >> 0x16U)))))
                                : ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                         >> 0x16U)))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                         >> 0x16U)))))
                            : ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                ? ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                         >> 0x16U)))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[6U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[5U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])) 
                                         >> 0x16U))))
                                : ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[6U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[5U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])) 
                                         >> 0x16U)))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[6U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[5U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])) 
                                         >> 0x16U))))))
                        : ((0x20000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                            ? ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                ? ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[7U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[6U])) 
                                         >> 0x16U)))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[7U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[6U])) 
                                         >> 0x16U))))
                                : 0ULL) : ((0x10000U 
                                            & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                            ? 0ULL : 
                                           ((0x8000U 
                                             & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                             ? 0ULL
                                             : 4ULL))))
                    : ((0x40000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                        ? ((0x20000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                            ? ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                ? ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[7U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[6U])) 
                                         >> 0x16U)))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                         >> 0x16U))))
                                : ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                         >> 0x16U)))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                         >> 0x16U)))))
                            : ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                ? ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                         >> 0x16U)))
                                    : (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                         >> 0x16U))))
                                : 0ULL)) : ((0x20000U 
                                             & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                             ? ((0x10000U 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                 ? 
                                                ((0x8000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                  ? 0ULL
                                                  : 4ULL)
                                                 : 
                                                ((0x8000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                  ? 0ULL
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_next[7U])) 
                                                      << 0xaU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[6U])) 
                                                        >> 0x16U)))))
                                             : ((0x10000U 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                 ? 
                                                ((0x8000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_next[7U])) 
                                                      << 0xaU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[6U])) 
                                                        >> 0x16U)))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_next[7U])) 
                                                      << 0xaU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[6U])) 
                                                        >> 0x16U))))
                                                 : 
                                                ((0x8000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataD_next[7U])) 
                                                      << 0xaU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[6U])) 
                                                        >> 0x16U)))
                                                  : 0ULL))))));
    }
    vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2 
        = (((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[
                            (((IData)(0x3fU) + (0x7c0U 
                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                   >> 0xfU))) 
                             >> 5U)])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[
                                                                   (0x3eU 
                                                                    & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                       >> 0x14U))])));
    vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
        = (((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[
                            (((IData)(0x3fU) + (0x7c0U 
                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                   >> 0xaU))) 
                             >> 5U)])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[
                                                                   (0x3eU 
                                                                    & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                       >> 0xfU))])));
    vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0U;
    if ((0x80U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
        if ((0x40U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
            if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                          >> 5U)))) {
                if ((0x10U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                    if ((8U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                        if ((4U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                            if ((2U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0xc0eU;
                            }
                        }
                    }
                } else if ((8U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                    if ((4U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                        if ((2U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                            if ((0U == (7U & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                              >> 0xdU)))) {
                                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x200eU;
                            }
                        }
                    }
                } else if ((4U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                    if ((2U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                        if ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                = ((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])
                                    ? ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])
                                        ? 0x2a08U : 0x2808U)
                                    : ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])
                                        ? 0x2608U : 0x2408U));
                        } else if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                             >> 0xeU)))) {
                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                = ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])
                                    ? 0x2208U : 0xe08U);
                        }
                    }
                }
            }
        }
    } else if ((0x40U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
        if ((0x20U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
            if ((0x10U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                              >> 3U)))) {
                    if ((4U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                        if ((2U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                            if ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                                if ((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                                    if ((0x2000U & 
                                         vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                                        if ((1U == 
                                             (0x7fU 
                                              & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                  << 6U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                    >> 0x1aU))))) {
                                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x7602U;
                                        }
                                    } else if ((1U 
                                                == 
                                                (0x7fU 
                                                 & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                     << 6U) 
                                                    | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                       >> 0x1aU))))) {
                                        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x7402U;
                                    }
                                } else if ((0x2000U 
                                            & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                                    if ((0U == (0x7fU 
                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                    << 6U) 
                                                   | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                      >> 0x1aU))))) {
                                        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x4e36U;
                                    } else if ((0x20U 
                                                == 
                                                (0x7fU 
                                                 & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                     << 6U) 
                                                    | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                       >> 0x1aU))))) {
                                        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x503aU;
                                    } else if ((1U 
                                                == 
                                                (0x7fU 
                                                 & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                     << 6U) 
                                                    | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                       >> 0x1aU))))) {
                                        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x7202U;
                                    }
                                    if ((1U & (~ VL_ONEHOT0_I(
                                                              (((1U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                      << 6U) 
                                                                     | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                        >> 0x1aU)))) 
                                                                << 2U) 
                                                               | (((0x20U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                         << 6U) 
                                                                        | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                           >> 0x1aU)))) 
                                                                   << 1U) 
                                                                  | (0U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                          << 6U) 
                                                                         | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                            >> 0x1aU)))))))))) {
                                        if (VL_UNLIKELY(
                                                        vlSymsp->_vm_contextp__->assertOn())) {
                                            VL_WRITEF("[%0t] %%Error: controlUnit.sv:481: Assertion failed in %NSimTop.core.decode.controlUnit: synthesis parallel_case, but multiple matches found\n",
                                                      64,
                                                      VL_TIME_UNITED_Q(1),
                                                      -12,
                                                      vlSymsp->name());
                                            VL_STOP_MT("/home/cs/arch-2024/build/../vsrc/src/controlUnit.sv", 481, "");
                                        }
                                    }
                                } else if ((1U == (0x7fU 
                                                   & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                       << 6U) 
                                                      | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                         >> 0x1aU))))) {
                                    vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x7002U;
                                }
                            } else if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                 >> 0xeU)))) {
                                if ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                                    if ((0U == (0x7fU 
                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                    << 6U) 
                                                   | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                      >> 0x1aU))))) {
                                        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x4c2aU;
                                    }
                                } else {
                                    if ((1U & (~ VL_ONEHOT0_I(
                                                              (((1U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                      << 6U) 
                                                                     | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                        >> 0x1aU)))) 
                                                                << 2U) 
                                                               | (((0x20U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                         << 6U) 
                                                                        | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                           >> 0x1aU)))) 
                                                                   << 1U) 
                                                                  | (0U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                          << 6U) 
                                                                         | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                            >> 0x1aU)))))))))) {
                                        if (VL_UNLIKELY(
                                                        vlSymsp->_vm_contextp__->assertOn())) {
                                            VL_WRITEF("[%0t] %%Error: controlUnit.sv:443: Assertion failed in %NSimTop.core.decode.controlUnit: synthesis parallel_case, but multiple matches found\n",
                                                      64,
                                                      VL_TIME_UNITED_Q(1),
                                                      -12,
                                                      vlSymsp->name());
                                            VL_STOP_MT("/home/cs/arch-2024/build/../vsrc/src/controlUnit.sv", 443, "");
                                        }
                                    }
                                    if ((0U == (0x7fU 
                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                    << 6U) 
                                                   | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                      >> 0x1aU))))) {
                                        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x480eU;
                                    } else if ((0x20U 
                                                == 
                                                (0x7fU 
                                                 & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                     << 6U) 
                                                    | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                       >> 0x1aU))))) {
                                        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x4a12U;
                                    } else if ((1U 
                                                == 
                                                (0x7fU 
                                                 & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                     << 6U) 
                                                    | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                       >> 0x1aU))))) {
                                        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x6e02U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((8U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                if ((4U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                    if ((2U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0xa06U;
                    }
                }
            } else if ((4U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                if ((2U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                    if ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                        if ((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                            if ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                                if ((1U & (~ VL_ONEHOT0_I(
                                                          (((1U 
                                                             == 
                                                             (0x7fU 
                                                              & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                  << 6U) 
                                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                    >> 0x1aU)))) 
                                                            << 1U) 
                                                           | (0U 
                                                              == 
                                                              (0x7fU 
                                                               & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                   << 6U) 
                                                                  | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                     >> 0x1aU))))))))) {
                                    if (VL_UNLIKELY(
                                                    vlSymsp->_vm_contextp__->assertOn())) {
                                        VL_WRITEF("[%0t] %%Error: controlUnit.sv:251: Assertion failed in %NSimTop.core.decode.controlUnit: synthesis parallel_case, but multiple matches found\n",
                                                  64,
                                                  VL_TIME_UNITED_Q(1),
                                                  -12,
                                                  vlSymsp->name());
                                        VL_STOP_MT("/home/cs/arch-2024/build/../vsrc/src/controlUnit.sv", 251, "");
                                    }
                                }
                                if ((0U == (0x7fU & 
                                            ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                              << 6U) 
                                             | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                >> 0x1aU))))) {
                                    vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x1816U;
                                } else if ((1U == (0x7fU 
                                                   & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                       << 6U) 
                                                      | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                         >> 0x1aU))))) {
                                    vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x6c02U;
                                }
                            } else {
                                if ((1U & (~ VL_ONEHOT0_I(
                                                          (((1U 
                                                             == 
                                                             (0x7fU 
                                                              & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                  << 6U) 
                                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                    >> 0x1aU)))) 
                                                            << 1U) 
                                                           | (0U 
                                                              == 
                                                              (0x7fU 
                                                               & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                   << 6U) 
                                                                  | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                     >> 0x1aU))))))))) {
                                    if (VL_UNLIKELY(
                                                    vlSymsp->_vm_contextp__->assertOn())) {
                                        VL_WRITEF("[%0t] %%Error: controlUnit.sv:270: Assertion failed in %NSimTop.core.decode.controlUnit: synthesis parallel_case, but multiple matches found\n",
                                                  64,
                                                  VL_TIME_UNITED_Q(1),
                                                  -12,
                                                  vlSymsp->name());
                                        VL_STOP_MT("/home/cs/arch-2024/build/../vsrc/src/controlUnit.sv", 270, "");
                                    }
                                }
                                if ((0U == (0x7fU & 
                                            ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                              << 6U) 
                                             | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                >> 0x1aU))))) {
                                    vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x1a1aU;
                                } else if ((1U == (0x7fU 
                                                   & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                       << 6U) 
                                                      | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                         >> 0x1aU))))) {
                                    vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x6a02U;
                                }
                            }
                        } else if ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                            if ((1U & (~ VL_ONEHOT0_I(
                                                      (((1U 
                                                         == 
                                                         (0x7fU 
                                                          & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                              << 6U) 
                                                             | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                >> 0x1aU)))) 
                                                        << 2U) 
                                                       | (((0x20U 
                                                            == 
                                                            (0x7fU 
                                                             & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                 << 6U) 
                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                   >> 0x1aU)))) 
                                                           << 1U) 
                                                          | (0U 
                                                             == 
                                                             (0x7fU 
                                                              & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                  << 6U) 
                                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                    >> 0x1aU)))))))))) {
                                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                                    VL_WRITEF("[%0t] %%Error: controlUnit.sv:347: Assertion failed in %NSimTop.core.decode.controlUnit: synthesis parallel_case, but multiple matches found\n",
                                              64,VL_TIME_UNITED_Q(1),
                                              -12,vlSymsp->name());
                                    VL_STOP_MT("/home/cs/arch-2024/build/../vsrc/src/controlUnit.sv", 347, "");
                                }
                            }
                            if ((0U == (0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                  << 6U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                    >> 0x1aU))))) {
                                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x3c2eU;
                            } else if ((0x20U == (0x7fU 
                                                  & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                      << 6U) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                        >> 0x1aU))))) {
                                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x3e32U;
                            } else if ((1U == (0x7fU 
                                               & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                   << 6U) 
                                                  | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                     >> 0x1aU))))) {
                                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x6802U;
                            }
                        } else {
                            if ((1U & (~ VL_ONEHOT0_I(
                                                      (((1U 
                                                         == 
                                                         (0x7fU 
                                                          & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                              << 6U) 
                                                             | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                >> 0x1aU)))) 
                                                        << 1U) 
                                                       | (0U 
                                                          == 
                                                          (0x7fU 
                                                           & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                               << 6U) 
                                                              | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                 >> 0x1aU))))))))) {
                                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                                    VL_WRITEF("[%0t] %%Error: controlUnit.sv:289: Assertion failed in %NSimTop.core.decode.controlUnit: synthesis parallel_case, but multiple matches found\n",
                                              64,VL_TIME_UNITED_Q(1),
                                              -12,vlSymsp->name());
                                    VL_STOP_MT("/home/cs/arch-2024/build/../vsrc/src/controlUnit.sv", 289, "");
                                }
                            }
                            if ((0U == (0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                  << 6U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                    >> 0x1aU))))) {
                                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x1c1eU;
                            } else if ((1U == (0x7fU 
                                               & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                   << 6U) 
                                                  | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                     >> 0x1aU))))) {
                                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x6602U;
                            }
                        }
                    } else if ((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                        if ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                            if ((0U == (0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                  << 6U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                    >> 0x1aU))))) {
                                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x3a26U;
                            }
                        } else if ((0U == (0x7fU & 
                                           ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                             << 6U) 
                                            | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                               >> 0x1aU))))) {
                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x3822U;
                        }
                    } else if ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                        if ((0U == (0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                              << 6U) 
                                             | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                >> 0x1aU))))) {
                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x362aU;
                        }
                    } else {
                        if ((1U & (~ VL_ONEHOT0_I((
                                                   ((1U 
                                                     == 
                                                     (0x7fU 
                                                      & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                          << 6U) 
                                                         | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                            >> 0x1aU)))) 
                                                    << 2U) 
                                                   | (((0x20U 
                                                        == 
                                                        (0x7fU 
                                                         & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                             << 6U) 
                                                            | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                               >> 0x1aU)))) 
                                                       << 1U) 
                                                      | (0U 
                                                         == 
                                                         (0x7fU 
                                                          & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                              << 6U) 
                                                             | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                >> 0x1aU)))))))))) {
                            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                                VL_WRITEF("[%0t] %%Error: controlUnit.sv:226: Assertion failed in %NSimTop.core.decode.controlUnit: synthesis parallel_case, but multiple matches found\n",
                                          64,VL_TIME_UNITED_Q(1),
                                          -12,vlSymsp->name());
                                VL_STOP_MT("/home/cs/arch-2024/build/../vsrc/src/controlUnit.sv", 226, "");
                            }
                        }
                        if ((0U == (0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                              << 6U) 
                                             | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                >> 0x1aU))))) {
                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x140eU;
                        } else if ((0x20U == (0x7fU 
                                              & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                  << 6U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                    >> 0x1aU))))) {
                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x1612U;
                        } else if ((1U == (0x7fU & 
                                           ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                             << 6U) 
                                            | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                               >> 0x1aU))))) {
                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x6402U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                             >> 4U)))) {
            if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                          >> 3U)))) {
                if ((4U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                    if ((2U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                        if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                      >> 0xfU)))) {
                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                = ((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])
                                    ? ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])
                                        ? 0x1205U : 0x6205U)
                                    : ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])
                                        ? 0x6005U : 0x5e05U));
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
        if ((0x10U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
            if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                          >> 3U)))) {
                if ((4U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                    if ((2U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                        if ((0U == (7U & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                          >> 0xdU)))) {
                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x400eU;
                        } else if ((1U == (7U & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                 >> 0xdU)))) {
                            if ((0U == (0x3fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                  << 5U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                    >> 0x1bU))))) {
                                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x422aU;
                            }
                        } else if ((5U == (7U & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                 >> 0xdU)))) {
                            if ((1U & (~ VL_ONEHOT0_I(
                                                      (((0x10U 
                                                         == 
                                                         (0x3fU 
                                                          & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                              << 5U) 
                                                             | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                >> 0x1bU)))) 
                                                        << 1U) 
                                                       | (0U 
                                                          == 
                                                          (0x3fU 
                                                           & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                               << 5U) 
                                                              | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                 >> 0x1bU))))))))) {
                                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                                    VL_WRITEF("[%0t] %%Error: controlUnit.sv:417: Assertion failed in %NSimTop.core.decode.controlUnit: synthesis parallel_case, but multiple matches found\n",
                                              64,VL_TIME_UNITED_Q(1),
                                              -12,vlSymsp->name());
                                    VL_STOP_MT("/home/cs/arch-2024/build/../vsrc/src/controlUnit.sv", 417, "");
                                }
                            }
                            if ((0U == (0x3fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                  << 5U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                    >> 0x1bU))))) {
                                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x4436U;
                            } else if ((0x10U == (0x3fU 
                                                  & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                      << 5U) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                        >> 0x1bU))))) {
                                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x463aU;
                            }
                        }
                        if ((1U & (~ VL_ONEHOT0_I((
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                         >> 0xdU))) 
                                                    << 2U) 
                                                   | (((1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                            >> 0xdU))) 
                                                       << 1U) 
                                                      | (0U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                             >> 0xdU))))))))) {
                            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                                VL_WRITEF("[%0t] %%Error: controlUnit.sv:396: Assertion failed in %NSimTop.core.decode.controlUnit: synthesis parallel_case, but multiple matches found\n",
                                          64,VL_TIME_UNITED_Q(1),
                                          -12,vlSymsp->name());
                                VL_STOP_MT("/home/cs/arch-2024/build/../vsrc/src/controlUnit.sv", 396, "");
                            }
                        }
                    }
                }
            }
        } else if ((8U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
            if ((4U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                if ((2U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                    vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x1e0eU;
                }
            }
        } else if ((4U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
            if ((2U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                if ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                    if ((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                            = ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])
                                ? 0x816U : 0x61aU);
                    } else if ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                        if ((1U & (~ VL_ONEHOT0_I((
                                                   ((0x10U 
                                                     == 
                                                     (0x3fU 
                                                      & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                          << 5U) 
                                                         | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                            >> 0x1bU)))) 
                                                    << 1U) 
                                                   | (0U 
                                                      == 
                                                      (0x3fU 
                                                       & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                           << 5U) 
                                                          | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                             >> 0x1bU))))))))) {
                            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                                VL_WRITEF("[%0t] %%Error: controlUnit.sv:65: Assertion failed in %NSimTop.core.decode.controlUnit: synthesis parallel_case, but multiple matches found\n",
                                          64,VL_TIME_UNITED_Q(1),
                                          -12,vlSymsp->name());
                                VL_STOP_MT("/home/cs/arch-2024/build/../vsrc/src/controlUnit.sv", 65, "");
                            }
                        }
                        if ((0U == (0x3fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                              << 5U) 
                                             | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                >> 0x1bU))))) {
                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x322eU;
                        } else if ((0x10U == (0x3fU 
                                              & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                  << 5U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                    >> 0x1bU))))) {
                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x3432U;
                        }
                    } else {
                        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x41eU;
                    }
                } else {
                    vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                        = ((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])
                            ? ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])
                                ? 0x2e26U : 0x2c22U)
                            : ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])
                                ? 0x302aU : 0x20eU));
                }
            }
        }
    } else if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                         >> 4U)))) {
        if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                      >> 3U)))) {
            if ((4U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                if ((2U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                    if ((0x8000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                        if ((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) {
                            if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                          >> 0xdU)))) {
                                vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl = 0x5c0bU;
                            }
                        } else {
                            vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                                = ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])
                                    ? 0x5a0bU : 0x580bU);
                        }
                    } else {
                        vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl 
                            = ((0x4000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])
                                ? ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])
                                    ? 0x100bU : 0x560bU)
                                : ((0x2000U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])
                                    ? 0x540bU : 0x520bU));
                    }
                }
            }
        }
    }
    vlSelf->SimTop__DOT__ram__DOT__idx = ((0x80000000ULL 
                                           < vlSelf->SimTop__DOT__ram__DOT__addr)
                                           ? ((vlSelf->SimTop__DOT__ram__DOT__addr 
                                               - 0x80000000ULL) 
                                              >> 3U)
                                           : 0ULL);
    vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize 
        = ((0x400000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
            ? 3U : ((0x200000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                     ? ((0x100000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                         ? ((0x80000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                             ? 3U : ((0x40000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                      ? 3U : ((0x20000U 
                                               & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                               ? 3U
                                               : ((0x10000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                   ? 2U
                                                   : 1U))))
                         : ((0x80000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                             ? ((0x40000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                 ? ((0x20000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                     ? ((0x10000U & 
                                         vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                         ? 0U : 2U)
                                     : ((0x10000U & 
                                         vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                         ? 1U : 0U))
                                 : ((0x20000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                     ? ((0x10000U & 
                                         vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                         ? 2U : 1U)
                                     : ((0x10000U & 
                                         vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                         ? 0U : 3U)))
                             : 3U)) : 3U));
    vlSelf->SimTop__DOT__core__DOT__dataW[0U] = ((0xfffffffeU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataW[0U]) 
                                                 | (1U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataM_next[0U]));
    vlSelf->SimTop__DOT__core__DOT__dataW[0U] = (1U 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataW[0U]);
    vlSelf->SimTop__DOT__core__DOT__dataW[1U] = 0U;
    vlSelf->SimTop__DOT__core__DOT__dataW[2U] = 0U;
    vlSelf->SimTop__DOT__core__DOT__dataW[3U] = 0U;
    vlSelf->SimTop__DOT__core__DOT__dataW[4U] = 0U;
    vlSelf->SimTop__DOT__core__DOT__dataW[5U] = 0U;
    vlSelf->SimTop__DOT__core__DOT__dataW[6U] = 0U;
    vlSelf->SimTop__DOT__core__DOT__dataW[0U] = ((1U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataW[0U]) 
                                                 | (0xfffffffeU 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataM_next[0U]));
    vlSelf->SimTop__DOT__core__DOT__dataW[1U] = ((1U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataM_next[1U]) 
                                                 | (0xfffffffeU 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataM_next[1U]));
    vlSelf->SimTop__DOT__core__DOT__dataW[2U] = ((1U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataM_next[2U]) 
                                                 | (0xfffffffeU 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataM_next[2U]));
    vlSelf->SimTop__DOT__core__DOT__dataW[3U] = ((1U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataM_next[3U]) 
                                                 | (0xfffffffeU 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataM_next[3U]));
    vlSelf->SimTop__DOT__core__DOT__dataW[4U] = ((1U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataM_next[4U]) 
                                                 | (0xfffffffeU 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataM_next[4U]));
    vlSelf->SimTop__DOT__core__DOT__dataW[5U] = ((1U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataM_next[5U]) 
                                                 | (0xfffffffeU 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataM_next[5U]));
    vlSelf->SimTop__DOT__core__DOT__dataW[6U] = (0x3fffffU 
                                                 & ((1U 
                                                     & vlSelf->SimTop__DOT__core__DOT__dataM_next[6U]) 
                                                    | (0x3ffffeU 
                                                       & vlSelf->SimTop__DOT__core__DOT__dataM_next[6U])));
    vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__state_nxt 
        = vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__state;
    vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__count_nxt[0U] 
        = vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__count[0U];
    vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__count_nxt[1U] 
        = vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__count[1U];
    vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__count_nxt[2U] 
        = vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__count[2U];
    if (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__state) {
        if (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__state) {
            __Vtemp251[0U] = ((vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__count_nxt[1U] 
                               << 0x1fU) | (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__count_nxt[0U] 
                                            >> 1U));
            __Vtemp251[1U] = ((vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__count_nxt[2U] 
                               << 0x1fU) | (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__count_nxt[1U] 
                                            >> 1U));
            __Vtemp251[2U] = (3U & (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__count_nxt[2U] 
                                    >> 1U));
            VL_EXTEND_WW(67,66, __Vtemp248, __Vtemp251);
            vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__count_nxt[0U] 
                = __Vtemp248[0U];
            vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__count_nxt[1U] 
                = __Vtemp248[1U];
            vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__count_nxt[2U] 
                = __Vtemp248[2U];
            if ((0U == ((vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__count_nxt[0U] 
                         | vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__count_nxt[1U]) 
                        | vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__count_nxt[2U]))) {
                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__state_nxt = 0U;
            }
        }
    } else if (vlSelf->SimTop__DOT__core__DOT__execute__DOT__is_div) {
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__state_nxt = 1U;
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__count_nxt[0U] = 0U;
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__count_nxt[1U] = 0U;
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__count_nxt[2U] = 1U;
    }
    vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__state_nxt 
        = vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__state;
    vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__count_nxt[0U] 
        = vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__count[0U];
    vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__count_nxt[1U] 
        = vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__count[1U];
    vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__count_nxt[2U] 
        = vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__count[2U];
    if (vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__state) {
        if (vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__state) {
            __Vtemp256[0U] = ((vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__count_nxt[1U] 
                               << 0x1fU) | (vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__count_nxt[0U] 
                                            >> 1U));
            __Vtemp256[1U] = ((vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__count_nxt[2U] 
                               << 0x1fU) | (vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__count_nxt[1U] 
                                            >> 1U));
            __Vtemp256[2U] = (3U & (vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__count_nxt[2U] 
                                    >> 1U));
            VL_EXTEND_WW(67,66, __Vtemp253, __Vtemp256);
            vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__count_nxt[0U] 
                = __Vtemp253[0U];
            vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__count_nxt[1U] 
                = __Vtemp253[1U];
            vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__count_nxt[2U] 
                = __Vtemp253[2U];
            if ((0U == ((vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__count_nxt[0U] 
                         | vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__count_nxt[1U]) 
                        | vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__count_nxt[2U]))) {
                vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__state_nxt = 0U;
            }
        }
    } else if (vlSelf->SimTop__DOT__core__DOT__execute__DOT__is_mult) {
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__state_nxt = 1U;
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__count_nxt[0U] = 0U;
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__count_nxt[1U] = 0U;
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__count_nxt[2U] = 1U;
    }
    vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[0U] 
        = vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p[0U];
    vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[1U] 
        = vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p[1U];
    vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[2U] 
        = vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p[2U];
    vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[3U] 
        = vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p[3U];
    vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[4U] 
        = vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p[4U];
    if (vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__state) {
        if (vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__state) {
            if ((1U & vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[0U])) {
                __Vtemp260[0U] = vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[2U];
                __Vtemp260[1U] = vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[3U];
                __Vtemp260[2U] = vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[4U];
                VL_EXTEND_WQ(65,64, __Vtemp261, vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b);
                VL_ADD_W(3, __Vtemp262, __Vtemp260, __Vtemp261);
                vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[2U] 
                    = __Vtemp262[0U];
                vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[3U] 
                    = __Vtemp262[1U];
                vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[4U] 
                    = (1U & __Vtemp262[2U]);
            }
            __Vtemp264[0U] = ((vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[1U] 
                               << 0x1fU) | (vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[0U] 
                                            >> 1U));
            __Vtemp264[1U] = ((vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[2U] 
                               << 0x1fU) | (vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[1U] 
                                            >> 1U));
            __Vtemp264[2U] = ((vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[3U] 
                               << 0x1fU) | (vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[2U] 
                                            >> 1U));
            __Vtemp264[3U] = ((vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[4U] 
                               << 0x1fU) | (vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[3U] 
                                            >> 1U));
            VL_EXTEND_WW(129,128, __Vtemp263, __Vtemp264);
            vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[0U] 
                = __Vtemp263[0U];
            vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[1U] 
                = __Vtemp263[1U];
            vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[2U] 
                = __Vtemp263[2U];
            vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[3U] 
                = __Vtemp263[3U];
            vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[4U] 
                = __Vtemp263[4U];
        }
    } else {
        VL_EXTEND_WQ(129,64, __Vtemp265, vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a);
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[0U] 
            = __Vtemp265[0U];
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[1U] 
            = __Vtemp265[1U];
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[2U] 
            = __Vtemp265[2U];
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[3U] 
            = __Vtemp265[3U];
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt[4U] 
            = __Vtemp265[4U];
    }
    vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[0U] 
        = vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U];
    vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[1U] 
        = vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[1U];
    vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[2U] 
        = vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U];
    vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[3U] 
        = vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[3U];
    vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[4U] 
        = vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[4U];
    if (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__state) {
        if (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__state) {
            __Vtemp266[1U] = ((vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[0U] 
                               >> 0x1fU) | (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[1U] 
                                            << 1U));
            __Vtemp266[2U] = ((vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[1U] 
                               >> 0x1fU) | (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[2U] 
                                            << 1U));
            __Vtemp266[3U] = ((vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[2U] 
                               >> 0x1fU) | (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[3U] 
                                            << 1U));
            __Vtemp266[4U] = (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[3U] 
                              >> 0x1fU);
            vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[0U] 
                = (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[0U] 
                   << 1U);
            vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[1U] 
                = __Vtemp266[1U];
            vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[2U] 
                = __Vtemp266[2U];
            vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[3U] 
                = __Vtemp266[3U];
            vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[4U] 
                = __Vtemp266[4U];
            __Vtemp270[0U] = vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[2U];
            __Vtemp270[1U] = vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[3U];
            __Vtemp270[2U] = (1U & vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[4U]);
            VL_EXTEND_WQ(65,64, __Vtemp271, vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b);
            if (VL_GTE_W(3, __Vtemp270, __Vtemp271)) {
                __Vtemp274[0U] = vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[2U];
                __Vtemp274[1U] = vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[3U];
                __Vtemp274[2U] = vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[4U];
                VL_EXTEND_WQ(65,64, __Vtemp275, vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b);
                VL_SUB_W(3, __Vtemp276, __Vtemp274, __Vtemp275);
                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[2U] 
                    = __Vtemp276[0U];
                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[3U] 
                    = __Vtemp276[1U];
                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[4U] 
                    = (1U & __Vtemp276[2U]);
                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[0U] 
                    = (1U | vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[0U]);
            }
        }
    } else {
        VL_EXTEND_WQ(129,64, __Vtemp277, vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a);
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[0U] 
            = __Vtemp277[0U];
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[1U] 
            = __Vtemp277[1U];
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[2U] 
            = __Vtemp277[2U];
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[3U] 
            = __Vtemp277[3U];
        vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt[4U] 
            = __Vtemp277[4U];
    }
    vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c = 0ULL;
    if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                  >> 0xeU)))) {
        if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                      >> 0xdU)))) {
            if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                          >> 0xcU)))) {
                if ((0x800U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])) {
                    if ((0x400U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])) {
                        if ((0x200U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])) {
                            if ((1U & (~ (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                          >> 8U)))) {
                                vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                    = (((QData)((IData)(
                                                        (- (IData)(
                                                                   (((0x1fU 
                                                                      >= 
                                                                      (0x3fU 
                                                                       & (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)))
                                                                      ? 
                                                                     VL_SHIFTRS_III(32,32,6, (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a), 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)))
                                                                      : 
                                                                     (- 
                                                                      ((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a) 
                                                                       >> 0x1fU))) 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0x1fU 
                                                                      >= 
                                                                      (0x3fU 
                                                                       & (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)))
                                                                      ? 
                                                                     VL_SHIFTRS_III(32,32,6, (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a), 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)))
                                                                      : 
                                                                     (- 
                                                                      ((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a) 
                                                                       >> 0x1fU))))));
                            }
                        } else {
                            vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                = ((0x100U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (((0x1fU 
                                                                      >= 
                                                                      (0x3fU 
                                                                       & (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)))
                                                                      ? 
                                                                     ((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a) 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)))
                                                                      : 0U) 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0x1fU 
                                                                      >= 
                                                                      (0x3fU 
                                                                       & (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)))
                                                                      ? 
                                                                     ((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a) 
                                                                      >> 
                                                                      (0x3fU 
                                                                       & (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)))
                                                                      : 0U))))
                                    : VL_SHIFTRS_QQI(64,64,6, vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a, 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b))));
                        }
                    } else {
                        vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                            = ((0x200U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                ? ((0x100U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a 
                                       >> (0x3fU & (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)))
                                    : (vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a 
                                       << (0x3fU & (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b))))
                                : ((0x100U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                    ? (QData)((IData)(
                                                      (vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a 
                                                       < vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)))
                                    : (QData)((IData)(
                                                      VL_LTS_IQQ(1,64,64, vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a, vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)))));
                    }
                } else if ((0x400U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])) {
                    vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                        = ((0x200U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                            ? ((0x100U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                ? (vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a 
                                   ^ vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)
                                : (vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a 
                                   | vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b))
                            : ((0x100U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                ? (vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a 
                                   & vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)
                                : (vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a 
                                   - vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b)));
                } else if ((0x200U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])) {
                    if ((0x100U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])) {
                        vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                            = (vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a 
                               + vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b);
                    }
                } else if ((0x100U & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])) {
                    vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                        = vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a;
                }
            }
        }
    }
    vlSelf->SimTop__DOT__core__DOT__dataD[8U] = ((0x3fffffU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD[8U]) 
                                                 | ((IData)(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2) 
                                                    << 0x16U));
    vlSelf->SimTop__DOT__core__DOT__dataD[9U] = (((IData)(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2) 
                                                  >> 0xaU) 
                                                 | ((IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2 
                                                             >> 0x20U)) 
                                                    << 0x16U));
    vlSelf->SimTop__DOT__core__DOT__dataD[0xaU] = (
                                                   ((IData)(
                                                            (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2 
                                                             >> 0x20U)) 
                                                    >> 0xaU) 
                                                   | ((IData)(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1) 
                                                      << 0x16U));
    vlSelf->SimTop__DOT__core__DOT__dataD[0xbU] = (
                                                   ((IData)(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1) 
                                                    >> 0xaU) 
                                                   | ((IData)(
                                                              (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                               >> 0x20U)) 
                                                      << 0x16U));
    vlSelf->SimTop__DOT__core__DOT__dataD[0xcU] = ((IData)(
                                                           (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                            >> 0x20U)) 
                                                   >> 0xaU);
    if ((0x8000U & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))) {
        vlSelf->SimTop__DOT__core__DOT__offset = 0ULL;
        vlSelf->SimTop__DOT__core__DOT__op = 1U;
    } else {
        vlSelf->SimTop__DOT__core__DOT__offset = ((0x4000U 
                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                   ? 0ULL
                                                   : 
                                                  ((0x2000U 
                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                    ? 
                                                   ((0x1000U 
                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                     ? 0ULL
                                                     : 
                                                    ((0x800U 
                                                      & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                      ? 
                                                     ((0x400U 
                                                       & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                       ? 0ULL
                                                       : 
                                                      ((0x200U 
                                                        & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0x800U 
                                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                               << 3U)) 
                                                                           | ((0x7e0U 
                                                                               & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)) 
                                                                              | (0x1eU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 8U)))))))
                                                        : 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0x800U 
                                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                               << 3U)) 
                                                                           | ((0x7e0U 
                                                                               & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)) 
                                                                              | (0x1eU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 8U)))))))))
                                                      : 
                                                     ((0x400U 
                                                       & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                       ? 
                                                      ((0x200U 
                                                        & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0x800U 
                                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                               << 3U)) 
                                                                           | ((0x7e0U 
                                                                               & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)) 
                                                                              | (0x1eU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 8U)))))))
                                                        : 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0x800U 
                                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                               << 3U)) 
                                                                           | ((0x7e0U 
                                                                               & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)) 
                                                                              | (0x1eU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 8U))))))))
                                                       : 
                                                      ((0x200U 
                                                        & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0x800U 
                                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                               << 3U)) 
                                                                           | ((0x7e0U 
                                                                               & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)) 
                                                                              | (0x1eU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 8U)))))))
                                                        : 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (0xfffU 
                                                                           & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                               << 0xbU) 
                                                                              | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))))))
                                                    : 
                                                   ((0x1000U 
                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                     ? 0ULL
                                                     : 
                                                    ((0x800U 
                                                      & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                      ? 
                                                     ((0x400U 
                                                       & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                       ? 
                                                      ((0x200U 
                                                        & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0x800U 
                                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                               << 3U)) 
                                                                           | ((0x7e0U 
                                                                               & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)) 
                                                                              | (0x1eU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 8U)))))))
                                                        : 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                         << 0x14U) 
                                                        | (QData)((IData)(
                                                                          ((0xff000U 
                                                                            & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                               >> 1U)) 
                                                                           | ((0x800U 
                                                                               & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0xaU)) 
                                                                              | (0x7feU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))))
                                                       : 0ULL)
                                                      : 0ULL))));
        vlSelf->SimTop__DOT__core__DOT__op = ((0x4000U 
                                               & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                               ? 1U
                                               : ((0x2000U 
                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                   ? 
                                                  ((0x1000U 
                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                    ? 1U
                                                    : 
                                                   ((0x800U 
                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                     ? 
                                                    ((0x400U 
                                                      & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                      ? 1U
                                                      : 
                                                     ((0x200U 
                                                       & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                       ? 
                                                      ((vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                        >= vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2)
                                                        ? 2U
                                                        : 3U)
                                                       : 
                                                      ((vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                        < vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2)
                                                        ? 2U
                                                        : 3U)))
                                                     : 
                                                    ((0x400U 
                                                      & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                      ? 
                                                     ((0x200U 
                                                       & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                       ? 
                                                      (VL_GTES_IQQ(1,64,64, vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1, vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2)
                                                        ? 2U
                                                        : 3U)
                                                       : 
                                                      (VL_LTS_IQQ(1,64,64, vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1, vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2)
                                                        ? 2U
                                                        : 3U))
                                                      : 
                                                     ((0x200U 
                                                       & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                       ? 
                                                      ((vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                        != vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2)
                                                        ? 2U
                                                        : 3U)
                                                       : 1U))))
                                                   : 
                                                  ((0x1000U 
                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                    ? 1U
                                                    : 
                                                   ((0x800U 
                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                     ? 
                                                    ((0x400U 
                                                      & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                      ? 
                                                     ((0x200U 
                                                       & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                       ? 
                                                      ((vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                        == vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2)
                                                        ? 2U
                                                        : 3U)
                                                       : 4U)
                                                      : 1U)
                                                     : 1U))));
    }
    vlSelf->SimTop__DOT__core__DOT__dataD[4U] = ((0xffc00001U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD[4U]) 
                                                 | (0xfffffffeU 
                                                    & (((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                                        << 6U) 
                                                       | (0x3eU 
                                                          & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                             >> 7U)))));
    vlSelf->SimTop__DOT__core__DOT__dataD[6U] = (0x3fffffU 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataD[6U]);
    vlSelf->SimTop__DOT__core__DOT__dataD[7U] = 0U;
    vlSelf->SimTop__DOT__core__DOT__dataD[8U] = (0xffc00000U 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataD[8U]);
    vlSelf->SimTop__DOT__core__DOT__dataD[6U] = ((0x3fffffU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD[6U]) 
                                                 | ((IData)(
                                                            ((0x8000U 
                                                              & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                              ? 
                                                             (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                               << 0xcU) 
                                                              | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                              : 
                                                             ((0x4000U 
                                                               & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                               ? 
                                                              ((0x2000U 
                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                ? 
                                                               (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                 << 0xcU) 
                                                                | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                : 
                                                               ((0x1000U 
                                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                 ? 
                                                                (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                  << 0xcU) 
                                                                 | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                 : 
                                                                ((0x800U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 
                                                                 (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                   << 0xcU) 
                                                                  | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                  : 
                                                                 ((0x400U 
                                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                   ? 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                   : 
                                                                  ((0x200U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                    : 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))))))
                                                               : 
                                                              ((0x2000U 
                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                ? 
                                                               ((0x1000U 
                                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                 ? 
                                                                (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                  << 0xcU) 
                                                                 | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                 : 
                                                                ((0x800U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 
                                                                 ((0x400U 
                                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                   ? 
                                                                  ((0x200U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                    : 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                   : 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                  : 
                                                                 (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                   << 0xcU) 
                                                                  | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))))
                                                                : 
                                                               ((0x1000U 
                                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                 ? 
                                                                ((0x800U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 
                                                                 ((0x400U 
                                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                   ? 
                                                                  ((0x200U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 
                                                                   (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U]))))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                (0xfffff000U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0x1fU) 
                                                                                | (0x7ffff000U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 1U)))))))
                                                                    : 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                   : 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                  : 
                                                                 (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                   << 0xcU) 
                                                                  | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                 : 
                                                                ((0x800U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 
                                                                 ((0x400U 
                                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                   ? 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                   : 
                                                                  ((0x200U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 
                                                                   (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U]))))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                (0xfffff000U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0x1fU) 
                                                                                | (0x7ffff000U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 1U)))))))
                                                                    : 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))))
                                                                  : 
                                                                 (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                   << 0xcU) 
                                                                  | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))))))) 
                                                    << 0x16U));
    vlSelf->SimTop__DOT__core__DOT__dataD[7U] = (((IData)(
                                                          ((0x8000U 
                                                            & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                            ? 
                                                           (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                             << 0xcU) 
                                                            | (QData)((IData)(
                                                                              (0xfffU 
                                                                               & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                            : 
                                                           ((0x4000U 
                                                             & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                             ? 
                                                            ((0x2000U 
                                                              & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                              ? 
                                                             (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                               << 0xcU) 
                                                              | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                              : 
                                                             ((0x1000U 
                                                               & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                               ? 
                                                              (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                << 0xcU) 
                                                               | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                               : 
                                                              ((0x800U 
                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                ? 
                                                               (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                 << 0xcU) 
                                                                | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                : 
                                                               ((0x400U 
                                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                 ? 
                                                                (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                  << 0xcU) 
                                                                 | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                 : 
                                                                ((0x200U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 
                                                                 (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                   << 0xcU) 
                                                                  | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                  : 
                                                                 (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                   << 0xcU) 
                                                                  | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))))))
                                                             : 
                                                            ((0x2000U 
                                                              & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                              ? 
                                                             ((0x1000U 
                                                               & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                               ? 
                                                              (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                << 0xcU) 
                                                               | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                               : 
                                                              ((0x800U 
                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                ? 
                                                               ((0x400U 
                                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                 ? 
                                                                ((0x200U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 
                                                                 (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                   << 0xcU) 
                                                                  | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                  : 
                                                                 (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                   << 0xcU) 
                                                                  | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                 : 
                                                                (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                  << 0xcU) 
                                                                 | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                : 
                                                               (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                 << 0xcU) 
                                                                | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))))
                                                              : 
                                                             ((0x1000U 
                                                               & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                               ? 
                                                              ((0x800U 
                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                ? 
                                                               ((0x400U 
                                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                 ? 
                                                                ((0x200U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 
                                                                 (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U]))))) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                (0xfffff000U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0x1fU) 
                                                                                | (0x7ffff000U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 1U)))))))
                                                                  : 
                                                                 (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                   << 0xcU) 
                                                                  | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                 : 
                                                                (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                  << 0xcU) 
                                                                 | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                : 
                                                               (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                 << 0xcU) 
                                                                | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                               : 
                                                              ((0x800U 
                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                ? 
                                                               ((0x400U 
                                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                 ? 
                                                                (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                  << 0xcU) 
                                                                 | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                 : 
                                                                ((0x200U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 
                                                                 (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U]))))) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                (0xfffff000U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0x1fU) 
                                                                                | (0x7ffff000U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 1U)))))))
                                                                  : 
                                                                 (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                   << 0xcU) 
                                                                  | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))))
                                                                : 
                                                               (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                 << 0xcU) 
                                                                | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))))))) 
                                                  >> 0xaU) 
                                                 | ((IData)(
                                                            (((0x8000U 
                                                               & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                               ? 
                                                              (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                << 0xcU) 
                                                               | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                               : 
                                                              ((0x4000U 
                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                ? 
                                                               ((0x2000U 
                                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                 ? 
                                                                (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                  << 0xcU) 
                                                                 | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                 : 
                                                                ((0x1000U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 
                                                                 (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                   << 0xcU) 
                                                                  | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                  : 
                                                                 ((0x800U 
                                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                   ? 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                   : 
                                                                  ((0x400U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                    : 
                                                                   ((0x200U 
                                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                     ? 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                     : 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))))))
                                                                : 
                                                               ((0x2000U 
                                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                 ? 
                                                                ((0x1000U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 
                                                                 (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                   << 0xcU) 
                                                                  | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                  : 
                                                                 ((0x800U 
                                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                   ? 
                                                                  ((0x400U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 
                                                                   ((0x200U 
                                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                     ? 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                     : 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                    : 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                   : 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))))
                                                                 : 
                                                                ((0x1000U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 
                                                                 ((0x800U 
                                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                   ? 
                                                                  ((0x400U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 
                                                                   ((0x200U 
                                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                     ? 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U]))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                (0xfffff000U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0x1fU) 
                                                                                | (0x7ffff000U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 1U)))))))
                                                                     : 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                    : 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                   : 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                  : 
                                                                 ((0x800U 
                                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                   ? 
                                                                  ((0x400U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                    : 
                                                                   ((0x200U 
                                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                     ? 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U]))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                (0xfffff000U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0x1fU) 
                                                                                | (0x7ffff000U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 1U)))))))
                                                                     : 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))))
                                                                   : 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))))))) 
                                                             >> 0x20U)) 
                                                    << 0x16U));
    vlSelf->SimTop__DOT__core__DOT__dataD[8U] = ((0xffc00000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD[8U]) 
                                                 | ((IData)(
                                                            (((0x8000U 
                                                               & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                               ? 
                                                              (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                << 0xcU) 
                                                               | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                               : 
                                                              ((0x4000U 
                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                ? 
                                                               ((0x2000U 
                                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                 ? 
                                                                (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                  << 0xcU) 
                                                                 | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                 : 
                                                                ((0x1000U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 
                                                                 (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                   << 0xcU) 
                                                                  | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                  : 
                                                                 ((0x800U 
                                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                   ? 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                   : 
                                                                  ((0x400U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                    : 
                                                                   ((0x200U 
                                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                     ? 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                     : 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))))))
                                                                : 
                                                               ((0x2000U 
                                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                 ? 
                                                                ((0x1000U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 
                                                                 (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                   << 0xcU) 
                                                                  | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                  : 
                                                                 ((0x800U 
                                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                   ? 
                                                                  ((0x400U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 
                                                                   ((0x200U 
                                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                     ? 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                     : 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                    : 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                   : 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))))
                                                                 : 
                                                                ((0x1000U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 
                                                                 ((0x800U 
                                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                   ? 
                                                                  ((0x400U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 
                                                                   ((0x200U 
                                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                     ? 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U]))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                (0xfffff000U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0x1fU) 
                                                                                | (0x7ffff000U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 1U)))))))
                                                                     : 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                    : 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                   : 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                  : 
                                                                 ((0x800U 
                                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                   ? 
                                                                  ((0x400U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                     << 0xcU) 
                                                                    | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))
                                                                    : 
                                                                   ((0x200U 
                                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                     ? 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U]))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                (0xfffff000U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0x1fU) 
                                                                                | (0x7ffff000U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 1U)))))))
                                                                     : 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))))
                                                                   : 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))))))) 
                                                             >> 0x20U)) 
                                                    >> 0xaU));
    vlSelf->SimTop__DOT__core__DOT__dataD[2U] = (1U 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataD[2U]);
    vlSelf->SimTop__DOT__core__DOT__dataD[3U] = 0U;
    vlSelf->SimTop__DOT__core__DOT__dataD[4U] = (0xfffffffeU 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataD[4U]);
    vlSelf->SimTop__DOT__core__DOT__dataD[2U] = ((1U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD[2U]) 
                                                 | ((IData)(
                                                            ((0x8000U 
                                                              & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                              ? 0ULL
                                                              : 
                                                             ((0x4000U 
                                                               & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                               ? 
                                                              ((0x2000U 
                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                ? 
                                                               ((0x1000U 
                                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                 ? 0ULL
                                                                 : 
                                                                ((0x800U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 0ULL
                                                                  : 
                                                                 ((0x400U 
                                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                   ? 0ULL
                                                                   : 
                                                                  ((0x200U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 
                                                                   (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                    + 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                ((0xfe0U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (0x7e0U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 8U)))))))
                                                                    : 
                                                                   (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                    + 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                ((0xfe0U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (0x7e0U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 8U)))))))))))
                                                                : 
                                                               ((0x1000U 
                                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                 ? 
                                                                ((0x800U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 
                                                                 ((0x400U 
                                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                   ? 
                                                                  ((0x200U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 
                                                                   (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                    + 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                ((0xfe0U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (0x7e0U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 8U)))))))
                                                                    : 
                                                                   (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                    + 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))))
                                                                   : 
                                                                  ((0x200U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 
                                                                   (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                    + 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                    : 
                                                                   (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                    + 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))))
                                                                  : 
                                                                 ((0x400U 
                                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                   ? 
                                                                  ((0x200U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 
                                                                   (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                    + 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                    : 
                                                                   (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                    + 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))))
                                                                   : 
                                                                  ((0x200U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 
                                                                   (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                    + 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                    : 0ULL)))
                                                                 : 0ULL))
                                                               : 
                                                              ((0x2000U 
                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                ? 0ULL
                                                                : 
                                                               ((0x1000U 
                                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                 ? 
                                                                ((0x800U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 0ULL
                                                                  : 
                                                                 ((0x400U 
                                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                   ? 0ULL
                                                                   : 
                                                                  ((0x200U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 
                                                                   (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                    + 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                ((0xfe0U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (0x7e0U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 8U)))))))
                                                                    : 
                                                                   (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                    + 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))))))
                                                                 : 0ULL))))) 
                                                    << 1U));
    vlSelf->SimTop__DOT__core__DOT__dataD[3U] = (((IData)(
                                                          ((0x8000U 
                                                            & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                            ? 0ULL
                                                            : 
                                                           ((0x4000U 
                                                             & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                             ? 
                                                            ((0x2000U 
                                                              & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                              ? 
                                                             ((0x1000U 
                                                               & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                               ? 0ULL
                                                               : 
                                                              ((0x800U 
                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                ? 0ULL
                                                                : 
                                                               ((0x400U 
                                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                 ? 0ULL
                                                                 : 
                                                                ((0x200U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 
                                                                 (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                  + 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                ((0xfe0U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (0x7e0U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 8U)))))))
                                                                  : 
                                                                 (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                  + 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                ((0xfe0U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (0x7e0U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 8U)))))))))))
                                                              : 
                                                             ((0x1000U 
                                                               & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                               ? 
                                                              ((0x800U 
                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                ? 
                                                               ((0x400U 
                                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                 ? 
                                                                ((0x200U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 
                                                                 (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                  + 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                ((0xfe0U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (0x7e0U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 8U)))))))
                                                                  : 
                                                                 (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                  + 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))))
                                                                 : 
                                                                ((0x200U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 
                                                                 (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                  + 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                  : 
                                                                 (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                  + 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))))
                                                                : 
                                                               ((0x400U 
                                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                 ? 
                                                                ((0x200U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 
                                                                 (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                  + 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                  : 
                                                                 (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                  + 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))))
                                                                 : 
                                                                ((0x200U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 
                                                                 (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                  + 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                  : 0ULL)))
                                                               : 0ULL))
                                                             : 
                                                            ((0x2000U 
                                                              & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                              ? 0ULL
                                                              : 
                                                             ((0x1000U 
                                                               & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                               ? 
                                                              ((0x800U 
                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                ? 0ULL
                                                                : 
                                                               ((0x400U 
                                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                 ? 0ULL
                                                                 : 
                                                                ((0x200U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 
                                                                 (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                  + 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                ((0xfe0U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (0x7e0U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 8U)))))))
                                                                  : 
                                                                 (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                  + 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                    << 0xcU) 
                                                                   | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))))))
                                                               : 0ULL))))) 
                                                  >> 0x1fU) 
                                                 | ((IData)(
                                                            (((0x8000U 
                                                               & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                               ? 0ULL
                                                               : 
                                                              ((0x4000U 
                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                ? 
                                                               ((0x2000U 
                                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                 ? 
                                                                ((0x1000U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 0ULL
                                                                  : 
                                                                 ((0x800U 
                                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                   ? 0ULL
                                                                   : 
                                                                  ((0x400U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 0ULL
                                                                    : 
                                                                   ((0x200U 
                                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                     ? 
                                                                    (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                     + 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                ((0xfe0U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (0x7e0U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 8U)))))))
                                                                     : 
                                                                    (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                     + 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                ((0xfe0U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (0x7e0U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 8U)))))))))))
                                                                 : 
                                                                ((0x1000U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 
                                                                 ((0x800U 
                                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                   ? 
                                                                  ((0x400U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 
                                                                   ((0x200U 
                                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                     ? 
                                                                    (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                     + 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                ((0xfe0U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (0x7e0U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 8U)))))))
                                                                     : 
                                                                    (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                     + 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))))
                                                                    : 
                                                                   ((0x200U 
                                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                     ? 
                                                                    (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                     + 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                     : 
                                                                    (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                     + 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))))
                                                                   : 
                                                                  ((0x400U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 
                                                                   ((0x200U 
                                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                     ? 
                                                                    (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                     + 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                     : 
                                                                    (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                     + 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))))
                                                                    : 
                                                                   ((0x200U 
                                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                     ? 
                                                                    (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                     + 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                     : 0ULL)))
                                                                  : 0ULL))
                                                                : 
                                                               ((0x2000U 
                                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                 ? 0ULL
                                                                 : 
                                                                ((0x1000U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 
                                                                 ((0x800U 
                                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                   ? 0ULL
                                                                   : 
                                                                  ((0x400U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 0ULL
                                                                    : 
                                                                   ((0x200U 
                                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                     ? 
                                                                    (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                     + 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                ((0xfe0U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (0x7e0U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 8U)))))))
                                                                     : 
                                                                    (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                     + 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))))))
                                                                  : 0ULL)))) 
                                                             >> 0x20U)) 
                                                    << 1U));
    vlSelf->SimTop__DOT__core__DOT__dataD[4U] = ((0xfffffffeU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataD[4U]) 
                                                 | ((IData)(
                                                            (((0x8000U 
                                                               & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                               ? 0ULL
                                                               : 
                                                              ((0x4000U 
                                                                & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                ? 
                                                               ((0x2000U 
                                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                 ? 
                                                                ((0x1000U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 0ULL
                                                                  : 
                                                                 ((0x800U 
                                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                   ? 0ULL
                                                                   : 
                                                                  ((0x400U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 0ULL
                                                                    : 
                                                                   ((0x200U 
                                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                     ? 
                                                                    (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                     + 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                ((0xfe0U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (0x7e0U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 8U)))))))
                                                                     : 
                                                                    (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                     + 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                ((0xfe0U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (0x7e0U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 8U)))))))))))
                                                                 : 
                                                                ((0x1000U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 
                                                                 ((0x800U 
                                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                   ? 
                                                                  ((0x400U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 
                                                                   ((0x200U 
                                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                     ? 
                                                                    (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                     + 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                ((0xfe0U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (0x7e0U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 8U)))))))
                                                                     : 
                                                                    (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                     + 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))))
                                                                    : 
                                                                   ((0x200U 
                                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                     ? 
                                                                    (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                     + 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                     : 
                                                                    (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                     + 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))))
                                                                   : 
                                                                  ((0x400U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 
                                                                   ((0x200U 
                                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                     ? 
                                                                    (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                     + 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                     : 
                                                                    (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                     + 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))))
                                                                    : 
                                                                   ((0x200U 
                                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                     ? 
                                                                    (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                     + 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))))))
                                                                     : 0ULL)))
                                                                  : 0ULL))
                                                                : 
                                                               ((0x2000U 
                                                                 & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                 ? 0ULL
                                                                 : 
                                                                ((0x1000U 
                                                                  & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                  ? 
                                                                 ((0x800U 
                                                                   & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                   ? 0ULL
                                                                   : 
                                                                  ((0x400U 
                                                                    & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                    ? 0ULL
                                                                    : 
                                                                   ((0x200U 
                                                                     & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))
                                                                     ? 
                                                                    (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                     + 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                ((0xfe0U 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (0x7e0U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U)))) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 8U)))))))
                                                                     : 
                                                                    (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                     + 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U])))) 
                                                                       << 0xcU) 
                                                                      | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                                                << 0xbU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                                                >> 0x15U))))))))))
                                                                  : 0ULL)))) 
                                                             >> 0x20U)) 
                                                    >> 0x1fU));
    vlSelf->SimTop__DOT__oresp[0U] = 0U;
    vlSelf->SimTop__DOT__oresp[1U] = 0U;
    vlSelf->SimTop__DOT__oresp[2U] = 0U;
    if (VL_ONEHOT0_I((((3U == (IData)(vlSelf->SimTop__DOT__ram__DOT__state)) 
                       << 1U) | (2U == (IData)(vlSelf->SimTop__DOT__ram__DOT__state))))) {
        if ((2U == (IData)(vlSelf->SimTop__DOT__ram__DOT__state))) {
            vlSelf->SimTop__DOT__oresp[2U] = (3U & 
                                              (2U | 
                                               (0U 
                                                == (IData)(vlSelf->SimTop__DOT__ram__DOT__count_down))));
            if ((0x40600008ULL == vlSelf->SimTop__DOT__ram__DOT__addr)) {
                vlSelf->SimTop__DOT__oresp[0U] = 0U;
                vlSelf->SimTop__DOT__oresp[1U] = 0U;
            } else if ((0x38000000ULL == vlSelf->SimTop__DOT__ram__DOT__addr)) {
                vlSelf->SimTop__DOT__oresp[0U] = (IData)((QData)((IData)(vlSelf->SimTop__DOT__ram__DOT__msip)));
                vlSelf->SimTop__DOT__oresp[1U] = (IData)(
                                                         ((QData)((IData)(vlSelf->SimTop__DOT__ram__DOT__msip)) 
                                                          >> 0x20U));
            } else if ((0x38004000ULL == vlSelf->SimTop__DOT__ram__DOT__addr)) {
                vlSelf->SimTop__DOT__oresp[0U] = (IData)(vlSelf->SimTop__DOT__ram__DOT__mtimecmp);
                vlSelf->SimTop__DOT__oresp[1U] = (IData)(
                                                         (vlSelf->SimTop__DOT__ram__DOT__mtimecmp 
                                                          >> 0x20U));
            } else if ((0x3800bff8ULL == vlSelf->SimTop__DOT__ram__DOT__addr)) {
                vlSelf->SimTop__DOT__oresp[0U] = (IData)(vlSelf->SimTop__DOT__ram__DOT__mtime);
                vlSelf->SimTop__DOT__oresp[1U] = (IData)(
                                                         (vlSelf->SimTop__DOT__ram__DOT__mtime 
                                                          >> 0x20U));
            } else if ((0x20003000ULL == vlSelf->SimTop__DOT__ram__DOT__addr)) {
                vlSelf->SimTop__DOT__oresp[0U] = (IData)(vlSelf->SimTop__DOT__ram__DOT__ms_cnt);
                vlSelf->SimTop__DOT__oresp[1U] = (IData)(
                                                         (vlSelf->SimTop__DOT__ram__DOT__ms_cnt 
                                                          >> 0x20U));
            } else if ((0x23333008ULL == vlSelf->SimTop__DOT__ram__DOT__addr)) {
                VSimTop___024unit____Vdpiimwrap_get_switch_TOP____024unit(vlSelf->__Vfunc_get_switch__5__Vfuncout);
                vlSelf->SimTop__DOT__oresp[0U] = (IData)((QData)((IData)(vlSelf->__Vfunc_get_switch__5__Vfuncout)));
                vlSelf->SimTop__DOT__oresp[1U] = (IData)(
                                                         ((QData)((IData)(vlSelf->__Vfunc_get_switch__5__Vfuncout)) 
                                                          >> 0x20U));
            } else {
                VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(1U, vlSelf->SimTop__DOT__ram__DOT__idx, vlSelf->__Vfunc_ram_read_helper__6__Vfuncout);
                vlSelf->SimTop__DOT__oresp[0U] = (IData)(vlSelf->__Vfunc_ram_read_helper__6__Vfuncout);
                vlSelf->SimTop__DOT__oresp[1U] = (IData)(
                                                         (vlSelf->__Vfunc_ram_read_helper__6__Vfuncout 
                                                          >> 0x20U));
            }
            if ((1U & (~ VL_ONEHOT0_I((((0x23333008ULL 
                                         == vlSelf->SimTop__DOT__ram__DOT__addr) 
                                        << 5U) | ((
                                                   (0x20003000ULL 
                                                    == vlSelf->SimTop__DOT__ram__DOT__addr) 
                                                   << 4U) 
                                                  | (((0x3800bff8ULL 
                                                       == vlSelf->SimTop__DOT__ram__DOT__addr) 
                                                      << 3U) 
                                                     | (((0x38004000ULL 
                                                          == vlSelf->SimTop__DOT__ram__DOT__addr) 
                                                         << 2U) 
                                                        | (((0x38000000ULL 
                                                             == vlSelf->SimTop__DOT__ram__DOT__addr) 
                                                            << 1U) 
                                                           | (0x40600008ULL 
                                                              == vlSelf->SimTop__DOT__ram__DOT__addr)))))))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: ram.sv:239: Assertion failed in %NSimTop.ram: synthesis parallel_case, but multiple matches found\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("src/test/vsrc/common/ram.sv", 239, "");
                }
            }
        } else if ((3U == (IData)(vlSelf->SimTop__DOT__ram__DOT__state))) {
            vlSelf->SimTop__DOT__oresp[2U] = (3U & 
                                              (2U | 
                                               (0U 
                                                == (IData)(vlSelf->SimTop__DOT__ram__DOT__count_down))));
        } else {
            vlSelf->SimTop__DOT__oresp[0U] = 0U;
            vlSelf->SimTop__DOT__oresp[1U] = 0U;
            vlSelf->SimTop__DOT__oresp[2U] = 0U;
        }
    } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
        VL_WRITEF("[%0t] %%Error: ram.sv:236: Assertion failed in %NSimTop.ram: 'unique if' statement violated\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("src/test/vsrc/common/ram.sv", 236, "");
    }
    vlSelf->SimTop__DOT__dreq[2U] = ((0xfffff8ffU & 
                                      vlSelf->SimTop__DOT__dreq[2U]) 
                                     | ((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize) 
                                        << 8U));
    vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 0U;
    vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd = 0ULL;
    if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize))) {
            if ((1U & (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize))) {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd 
                    = (((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                        << 0x29U) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_next[3U])) 
                                      << 9U) | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                >> 0x17U)));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 0xffU;
            } else {
                if ((0x10U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) {
                    if ((0x10U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) {
                        vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd 
                            = ((0xffffffffULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd) 
                               | ((QData)((IData)((
                                                   (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                    << 9U) 
                                                   | (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                      >> 0x17U)))) 
                                  << 0x20U));
                        vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 0xf0U;
                    }
                } else {
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd 
                        = ((0xffffffff00000000ULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd) 
                           | (IData)((IData)(((vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                               << 9U) 
                                              | (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                 >> 0x17U)))));
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 0xfU;
                }
                if ((1U & (~ VL_ONEHOT0_I(((2U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                  >> 3U)) 
                                           | (1U & 
                                              (~ (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                  >> 4U)))))))) {
                    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                        VL_WRITEF("[%0t] %%Error: DataMem.sv:173: Assertion failed in %NSimTop.core.memory.Datamem: synthesis parallel_case, but multiple matches found\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -12,vlSymsp->name());
                        VL_STOP_MT("/home/cs/arch-2024/build/../vsrc/src/DataMem.sv", 173, "");
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize))) {
            if ((0x10U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) {
                if ((8U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) {
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd 
                        = ((0xffffffffffffULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd) 
                           | ((QData)((IData)((0xffffU 
                                               & ((vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                   << 9U) 
                                                  | (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                     >> 0x17U))))) 
                              << 0x30U));
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 0xc0U;
                } else {
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd 
                        = ((0xffff0000ffffffffULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd) 
                           | ((QData)((IData)((0xffffU 
                                               & ((vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                   << 9U) 
                                                  | (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                     >> 0x17U))))) 
                              << 0x20U));
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 0x30U;
                }
            } else if ((8U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd 
                    = ((0xffffffff0000ffffULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd) 
                       | ((QData)((IData)((0xffffU 
                                           & ((vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                               << 9U) 
                                              | (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                 >> 0x17U))))) 
                          << 0x10U));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 0xcU;
            } else {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd 
                    = ((0xffffffffffff0000ULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd) 
                       | (IData)((IData)((0xffffU & 
                                          ((vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                            << 9U) 
                                           | (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                              >> 0x17U))))));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 3U;
            }
        } else if ((0x10U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) {
            if ((8U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) {
                if ((4U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) {
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd 
                        = ((0xffffffffffffffULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                  >> 0x17U)))) 
                              << 0x38U));
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 0x80U;
                } else {
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd 
                        = ((0xff00ffffffffffffULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                  >> 0x17U)))) 
                              << 0x30U));
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 0x40U;
                }
            } else if ((4U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd 
                    = ((0xffff00ffffffffffULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd) 
                       | ((QData)((IData)((0xffU & 
                                           (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                            >> 0x17U)))) 
                          << 0x28U));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 0x20U;
            } else {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd 
                    = ((0xffffff00ffffffffULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd) 
                       | ((QData)((IData)((0xffU & 
                                           (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                            >> 0x17U)))) 
                          << 0x20U));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 0x10U;
            }
        } else if ((8U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) {
            if ((4U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd 
                    = ((0xffffffff00ffffffULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd) 
                       | ((QData)((IData)((0xffU & 
                                           (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                            >> 0x17U)))) 
                          << 0x18U));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 8U;
            } else {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd 
                    = ((0xffffffffff00ffffULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd) 
                       | ((QData)((IData)((0xffU & 
                                           (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                            >> 0x17U)))) 
                          << 0x10U));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 4U;
            }
        } else if ((4U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) {
            vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd 
                = ((0xffffffffffff00ffULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd) 
                   | ((QData)((IData)((0xffU & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                >> 0x17U)))) 
                      << 8U));
            vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 2U;
        } else {
            vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd 
                = ((0xffffffffffffff00ULL & vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd) 
                   | (IData)((IData)((0xffU & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                               >> 0x17U)))));
            vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe = 1U;
        }
    }
    vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE 
        = (1U & ((vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                  >> 7U) & (~ vlSelf->SimTop__DOT__core__DOT__dataW[0U])));
    vlSelf->SimTop__DOT__core__DOT__dataE[0U] = (0xfffffffcU 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataE[0U]);
    vlSelf->SimTop__DOT__core__DOT__dataE[0U] = ((0xfffffffcU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataE[0U]) 
                                                 | (3U 
                                                    & ((((0ULL 
                                                          != 
                                                          (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataD_next[2U])) 
                                                            << 0x3fU) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataD_next[1U])) 
                                                               << 0x1fU) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0U])) 
                                                                 >> 1U)))) 
                                                         & (~ 
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_next[0U])) 
                                                        & ((0x32U 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                                                >> 0xfU))) 
                                                           | (0x37U 
                                                              == 
                                                              (0x7fU 
                                                               & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                                                  >> 0xfU)))))
                                                        ? 
                                                       (- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__state_nxt)))
                                                        : 
                                                       ((((0ULL 
                                                           != 
                                                           (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__core__DOT__dataD_next[2U])) 
                                                             << 0x3fU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[1U])) 
                                                                << 0x1fU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0U])) 
                                                                  >> 1U)))) 
                                                          & (~ 
                                                             vlSelf->SimTop__DOT__core__DOT__dataD_next[0U])) 
                                                         & ((((((((0x33U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                                                       >> 0xfU))) 
                                                                  | (0x34U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                                                         >> 0xfU)))) 
                                                                 | (0x35U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                                                        >> 0xfU)))) 
                                                                | (0x36U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                                                       >> 0xfU)))) 
                                                               | (0x38U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                                                      >> 0xfU)))) 
                                                              | (0x39U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                                                     >> 0xfU)))) 
                                                             | (0x3aU 
                                                                == 
                                                                (0x7fU 
                                                                 & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                                                    >> 0xfU)))) 
                                                            | (0x3bU 
                                                               == 
                                                               (0x7fU 
                                                                & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                                                   >> 0xfU)))))
                                                         ? 
                                                        (- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__state_nxt)))
                                                         : 
                                                        (2U 
                                                         & (vlSelf->SimTop__DOT__core__DOT__dataD_next[0U] 
                                                            << 1U))))));
    vlSelf->SimTop__DOT__core__DOT__dataE[2U] = (0x7fffffU 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataE[2U]);
    vlSelf->SimTop__DOT__core__DOT__dataE[3U] = 0U;
    vlSelf->SimTop__DOT__core__DOT__dataE[4U] = (0xff800000U 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataE[4U]);
    vlSelf->SimTop__DOT__core__DOT__dataE[2U] = ((0x7fffffU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataE[2U]) 
                                                 | ((IData)(
                                                            ((0x200000U 
                                                              & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                              ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c
                                                              : 
                                                             ((0x100000U 
                                                               & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                               ? 
                                                              ((0x80000U 
                                                                & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                ? 
                                                               ((0x40000U 
                                                                 & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                 ? 
                                                                ((0x20000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                  ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c
                                                                  : 
                                                                 ((0x10000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                   ? 
                                                                  ((0x8000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                    ? 
                                                                   ((0U 
                                                                     == 
                                                                     ((vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                                       << 0xaU) 
                                                                      | (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                                         >> 0x16U)))
                                                                     ? 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                                >> 0x15U)))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU] 
                                                                                >> 0x16U)))))
                                                                     : 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U] 
                                                                                >> 0x1fU))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U]))))
                                                                    : 
                                                                   ((0U 
                                                                     == 
                                                                     ((vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                                       << 0xaU) 
                                                                      | (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                                         >> 0x16U)))
                                                                     ? 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                                >> 0x15U)))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU] 
                                                                                >> 0x16U)))))
                                                                     : 
                                                                    ((0x200000U 
                                                                      & vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])
                                                                      ? 
                                                                     (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__div_tmp 
                                                                                >> 0x1fU))))) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__div_tmp)))
                                                                      : 
                                                                     (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U] 
                                                                                >> 0x1fU))))) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U]))))))
                                                                   : 
                                                                  ((0x8000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                    ? 
                                                                   ((0U 
                                                                     == 
                                                                     ((vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                                       << 0xaU) 
                                                                      | (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                                         >> 0x16U)))
                                                                     ? 0xffffffffffffffffULL
                                                                     : 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U] 
                                                                                >> 0x1fU))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U]))))
                                                                    : 
                                                                   ((0U 
                                                                     == 
                                                                     ((vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                                       << 0xaU) 
                                                                      | (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                                         >> 0x16U)))
                                                                     ? 0xffffffffffffffffULL
                                                                     : 
                                                                    ((1U 
                                                                      & (((~ 
                                                                           (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                            >> 0x15U)) 
                                                                          & (~ 
                                                                             (vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                                              >> 0x15U))) 
                                                                         | ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                             & vlSelf->SimTop__DOT__core__DOT__dataD_next[9U]) 
                                                                            >> 0x15U)))
                                                                      ? 
                                                                     (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U] 
                                                                                >> 0x1fU))))) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U])))
                                                                      : 
                                                                     (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__div_tmp 
                                                                                >> 0x1fU))))) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U]))))))))))
                                                                 : 
                                                                ((0x20000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                  ? 
                                                                 ((0x10000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                   ? 
                                                                  ((0x8000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                    ? 
                                                                   (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p[0U] 
                                                                                >> 0x1fU))))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p[0U])))
                                                                    : 
                                                                   ((0ULL 
                                                                     == 
                                                                     (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                                       << 0x2aU) 
                                                                      | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                                                          << 0xaU) 
                                                                         | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                                            >> 0x16U))))
                                                                     ? 
                                                                    (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                                                      << 0x2aU) 
                                                                     | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                                                         << 0xaU) 
                                                                        | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                                           >> 0x16U)))
                                                                     : 
                                                                    (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[3U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U])))))
                                                                   : 
                                                                  ((0x8000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                    ? 
                                                                   ((0ULL 
                                                                     == 
                                                                     (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                                       << 0x2aU) 
                                                                      | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                                                          << 0xaU) 
                                                                         | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                                            >> 0x16U))))
                                                                     ? 
                                                                    (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                                                      << 0x2aU) 
                                                                     | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                                                         << 0xaU) 
                                                                        | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                                           >> 0x16U)))
                                                                     : 
                                                                    ((0x200000U 
                                                                      & vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])
                                                                      ? 
                                                                     (1ULL 
                                                                      + 
                                                                      (~ 
                                                                       (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[3U])) 
                                                                         << 0x20U) 
                                                                        | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U])))))
                                                                      : 
                                                                     (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[3U])) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U])))))
                                                                    : 
                                                                   ((0ULL 
                                                                     == 
                                                                     (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                                       << 0x2aU) 
                                                                      | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                                                          << 0xaU) 
                                                                         | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                                            >> 0x16U))))
                                                                     ? 0xffffffffffffffffULL
                                                                     : 
                                                                    (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U]))))))
                                                                  : 
                                                                 ((0x10000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                   ? 
                                                                  ((0x8000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                    ? 
                                                                   ((0ULL 
                                                                     == 
                                                                     (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                                       << 0x2aU) 
                                                                      | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                                                          << 0xaU) 
                                                                         | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                                            >> 0x16U))))
                                                                     ? 0xffffffffffffffffULL
                                                                     : 
                                                                    ((1U 
                                                                      & (((~ 
                                                                           (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU] 
                                                                            >> 0x15U)) 
                                                                          & (~ 
                                                                             (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU] 
                                                                              >> 0x15U))) 
                                                                         | ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU] 
                                                                             & vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU]) 
                                                                            >> 0x15U)))
                                                                      ? 
                                                                     (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[1U])) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U])))
                                                                      : 
                                                                     (1ULL 
                                                                      + 
                                                                      (~ 
                                                                       (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[1U])) 
                                                                         << 0x20U) 
                                                                        | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U])))))))
                                                                    : 
                                                                   (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p[0U]))))
                                                                   : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)))
                                                                : 
                                                               ((0x40000U 
                                                                 & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                 ? 
                                                                ((0x20000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                  ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c
                                                                  : 
                                                                 ((0x10000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                   ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c
                                                                   : 
                                                                  ((0x8000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                    ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c
                                                                    : 
                                                                   (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c))))))
                                                                 : 
                                                                ((0x20000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                  ? 
                                                                 ((0x10000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                   ? 
                                                                  ((0x8000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                    ? 
                                                                   (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)))
                                                                    : 
                                                                   (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c))))
                                                                   : 
                                                                  ((0x8000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                    ? 
                                                                   (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)))
                                                                    : 
                                                                   (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)))))
                                                                  : 
                                                                 ((0x10000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                   ? 
                                                                  ((0x8000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                    ? 
                                                                   (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)))
                                                                    : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)
                                                                   : 
                                                                  ((0x8000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                    ? 
                                                                   (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)))
                                                                    : 
                                                                   (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c))))))))
                                                               : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c))) 
                                                    << 0x17U));
    vlSelf->SimTop__DOT__core__DOT__dataE[3U] = (((IData)(
                                                          ((0x200000U 
                                                            & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                            ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c
                                                            : 
                                                           ((0x100000U 
                                                             & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                             ? 
                                                            ((0x80000U 
                                                              & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                              ? 
                                                             ((0x40000U 
                                                               & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                               ? 
                                                              ((0x20000U 
                                                                & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c
                                                                : 
                                                               ((0x10000U 
                                                                 & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                 ? 
                                                                ((0x8000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                  ? 
                                                                 ((0U 
                                                                   == 
                                                                   ((vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                                     << 0xaU) 
                                                                    | (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                                       >> 0x16U)))
                                                                   ? 
                                                                  (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                                >> 0x15U)))))) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU] 
                                                                                >> 0x16U)))))
                                                                   : 
                                                                  (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U] 
                                                                                >> 0x1fU))))) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U]))))
                                                                  : 
                                                                 ((0U 
                                                                   == 
                                                                   ((vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                                     << 0xaU) 
                                                                    | (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                                       >> 0x16U)))
                                                                   ? 
                                                                  (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                                >> 0x15U)))))) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU] 
                                                                                >> 0x16U)))))
                                                                   : 
                                                                  ((0x200000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])
                                                                    ? 
                                                                   (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__div_tmp 
                                                                                >> 0x1fU))))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__div_tmp)))
                                                                    : 
                                                                   (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U] 
                                                                                >> 0x1fU))))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U]))))))
                                                                 : 
                                                                ((0x8000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                  ? 
                                                                 ((0U 
                                                                   == 
                                                                   ((vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                                     << 0xaU) 
                                                                    | (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                                       >> 0x16U)))
                                                                   ? 0xffffffffffffffffULL
                                                                   : 
                                                                  (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U] 
                                                                                >> 0x1fU))))) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U]))))
                                                                  : 
                                                                 ((0U 
                                                                   == 
                                                                   ((vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                                     << 0xaU) 
                                                                    | (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                                       >> 0x16U)))
                                                                   ? 0xffffffffffffffffULL
                                                                   : 
                                                                  ((1U 
                                                                    & (((~ 
                                                                         (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                          >> 0x15U)) 
                                                                        & (~ 
                                                                           (vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                                            >> 0x15U))) 
                                                                       | ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                           & vlSelf->SimTop__DOT__core__DOT__dataD_next[9U]) 
                                                                          >> 0x15U)))
                                                                    ? 
                                                                   (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U] 
                                                                                >> 0x1fU))))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U])))
                                                                    : 
                                                                   (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__div_tmp 
                                                                                >> 0x1fU))))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U]))))))))))
                                                               : 
                                                              ((0x20000U 
                                                                & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                ? 
                                                               ((0x10000U 
                                                                 & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                 ? 
                                                                ((0x8000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                  ? 
                                                                 (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p[0U] 
                                                                                >> 0x1fU))))) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p[0U])))
                                                                  : 
                                                                 ((0ULL 
                                                                   == 
                                                                   (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                                     << 0x2aU) 
                                                                    | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                                                        << 0xaU) 
                                                                       | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                                          >> 0x16U))))
                                                                   ? 
                                                                  (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                                                    << 0x2aU) 
                                                                   | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                                                       << 0xaU) 
                                                                      | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                                         >> 0x16U)))
                                                                   : 
                                                                  (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[3U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U])))))
                                                                 : 
                                                                ((0x8000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                  ? 
                                                                 ((0ULL 
                                                                   == 
                                                                   (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                                     << 0x2aU) 
                                                                    | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                                                        << 0xaU) 
                                                                       | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                                          >> 0x16U))))
                                                                   ? 
                                                                  (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                                                    << 0x2aU) 
                                                                   | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                                                       << 0xaU) 
                                                                      | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                                         >> 0x16U)))
                                                                   : 
                                                                  ((0x200000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])
                                                                    ? 
                                                                   (1ULL 
                                                                    + 
                                                                    (~ 
                                                                     (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[3U])) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U])))))
                                                                    : 
                                                                   (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[3U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U])))))
                                                                  : 
                                                                 ((0ULL 
                                                                   == 
                                                                   (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                                     << 0x2aU) 
                                                                    | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                                                        << 0xaU) 
                                                                       | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                                          >> 0x16U))))
                                                                   ? 0xffffffffffffffffULL
                                                                   : 
                                                                  (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U]))))))
                                                                : 
                                                               ((0x10000U 
                                                                 & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                 ? 
                                                                ((0x8000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                  ? 
                                                                 ((0ULL 
                                                                   == 
                                                                   (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                                     << 0x2aU) 
                                                                    | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                                                        << 0xaU) 
                                                                       | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                                          >> 0x16U))))
                                                                   ? 0xffffffffffffffffULL
                                                                   : 
                                                                  ((1U 
                                                                    & (((~ 
                                                                         (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU] 
                                                                          >> 0x15U)) 
                                                                        & (~ 
                                                                           (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU] 
                                                                            >> 0x15U))) 
                                                                       | ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU] 
                                                                           & vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU]) 
                                                                          >> 0x15U)))
                                                                    ? 
                                                                   (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U])))
                                                                    : 
                                                                   (1ULL 
                                                                    + 
                                                                    (~ 
                                                                     (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[1U])) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U])))))))
                                                                  : 
                                                                 (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p[1U])) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p[0U]))))
                                                                 : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)))
                                                              : 
                                                             ((0x40000U 
                                                               & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                               ? 
                                                              ((0x20000U 
                                                                & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c
                                                                : 
                                                               ((0x10000U 
                                                                 & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                 ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c
                                                                 : 
                                                                ((0x8000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                  ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c
                                                                  : 
                                                                 (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c))))))
                                                               : 
                                                              ((0x20000U 
                                                                & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                ? 
                                                               ((0x10000U 
                                                                 & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                 ? 
                                                                ((0x8000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                  ? 
                                                                 (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)))
                                                                  : 
                                                                 (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c))))
                                                                 : 
                                                                ((0x8000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                  ? 
                                                                 (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)))
                                                                  : 
                                                                 (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)))))
                                                                : 
                                                               ((0x10000U 
                                                                 & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                 ? 
                                                                ((0x8000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                  ? 
                                                                 (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)))
                                                                  : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)
                                                                 : 
                                                                ((0x8000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                  ? 
                                                                 (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)))
                                                                  : 
                                                                 (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c))))))))
                                                             : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c))) 
                                                  >> 9U) 
                                                 | ((IData)(
                                                            (((0x200000U 
                                                               & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                               ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c
                                                               : 
                                                              ((0x100000U 
                                                                & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                ? 
                                                               ((0x80000U 
                                                                 & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                 ? 
                                                                ((0x40000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                  ? 
                                                                 ((0x20000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                   ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c
                                                                   : 
                                                                  ((0x10000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                    ? 
                                                                   ((0x8000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                     ? 
                                                                    ((0U 
                                                                      == 
                                                                      ((vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                                        << 0xaU) 
                                                                       | (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                                          >> 0x16U)))
                                                                      ? 
                                                                     (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                                >> 0x15U)))))) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU] 
                                                                                >> 0x16U)))))
                                                                      : 
                                                                     (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U] 
                                                                                >> 0x1fU))))) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U]))))
                                                                     : 
                                                                    ((0U 
                                                                      == 
                                                                      ((vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                                        << 0xaU) 
                                                                       | (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                                          >> 0x16U)))
                                                                      ? 
                                                                     (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                                >> 0x15U)))))) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU] 
                                                                                >> 0x16U)))))
                                                                      : 
                                                                     ((0x200000U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])
                                                                       ? 
                                                                      (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__div_tmp 
                                                                                >> 0x1fU))))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__div_tmp)))
                                                                       : 
                                                                      (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U] 
                                                                                >> 0x1fU))))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U]))))))
                                                                    : 
                                                                   ((0x8000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                     ? 
                                                                    ((0U 
                                                                      == 
                                                                      ((vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                                        << 0xaU) 
                                                                       | (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                                          >> 0x16U)))
                                                                      ? 0xffffffffffffffffULL
                                                                      : 
                                                                     (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U] 
                                                                                >> 0x1fU))))) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U]))))
                                                                     : 
                                                                    ((0U 
                                                                      == 
                                                                      ((vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                                        << 0xaU) 
                                                                       | (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                                          >> 0x16U)))
                                                                      ? 0xffffffffffffffffULL
                                                                      : 
                                                                     ((1U 
                                                                       & (((~ 
                                                                            (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                             >> 0x15U)) 
                                                                           & (~ 
                                                                              (vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                                               >> 0x15U))) 
                                                                          | ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                              & vlSelf->SimTop__DOT__core__DOT__dataD_next[9U]) 
                                                                             >> 0x15U)))
                                                                       ? 
                                                                      (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U] 
                                                                                >> 0x1fU))))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U])))
                                                                       : 
                                                                      (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__div_tmp 
                                                                                >> 0x1fU))))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U]))))))))))
                                                                  : 
                                                                 ((0x20000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                   ? 
                                                                  ((0x10000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                    ? 
                                                                   ((0x8000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                     ? 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p[0U] 
                                                                                >> 0x1fU))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p[0U])))
                                                                     : 
                                                                    ((0ULL 
                                                                      == 
                                                                      (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                                        << 0x2aU) 
                                                                       | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                                                           << 0xaU) 
                                                                          | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                                             >> 0x16U))))
                                                                      ? 
                                                                     (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                                                       << 0x2aU) 
                                                                      | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                                                          << 0xaU) 
                                                                         | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                                            >> 0x16U)))
                                                                      : 
                                                                     (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[3U])) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U])))))
                                                                    : 
                                                                   ((0x8000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                     ? 
                                                                    ((0ULL 
                                                                      == 
                                                                      (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                                        << 0x2aU) 
                                                                       | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                                                           << 0xaU) 
                                                                          | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                                             >> 0x16U))))
                                                                      ? 
                                                                     (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                                                       << 0x2aU) 
                                                                      | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                                                          << 0xaU) 
                                                                         | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                                            >> 0x16U)))
                                                                      : 
                                                                     ((0x200000U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])
                                                                       ? 
                                                                      (1ULL 
                                                                       + 
                                                                       (~ 
                                                                        (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[3U])) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U])))))
                                                                       : 
                                                                      (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[3U])) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U])))))
                                                                     : 
                                                                    ((0ULL 
                                                                      == 
                                                                      (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                                        << 0x2aU) 
                                                                       | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                                                           << 0xaU) 
                                                                          | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                                             >> 0x16U))))
                                                                      ? 0xffffffffffffffffULL
                                                                      : 
                                                                     (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[1U])) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U]))))))
                                                                   : 
                                                                  ((0x10000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                    ? 
                                                                   ((0x8000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                     ? 
                                                                    ((0ULL 
                                                                      == 
                                                                      (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                                        << 0x2aU) 
                                                                       | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                                                           << 0xaU) 
                                                                          | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                                             >> 0x16U))))
                                                                      ? 0xffffffffffffffffULL
                                                                      : 
                                                                     ((1U 
                                                                       & (((~ 
                                                                            (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU] 
                                                                             >> 0x15U)) 
                                                                           & (~ 
                                                                              (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU] 
                                                                               >> 0x15U))) 
                                                                          | ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU] 
                                                                              & vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU]) 
                                                                             >> 0x15U)))
                                                                       ? 
                                                                      (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[1U])) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U])))
                                                                       : 
                                                                      (1ULL 
                                                                       + 
                                                                       (~ 
                                                                        (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[1U])) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U])))))))
                                                                     : 
                                                                    (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p[0U]))))
                                                                    : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)))
                                                                 : 
                                                                ((0x40000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                  ? 
                                                                 ((0x20000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                   ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c
                                                                   : 
                                                                  ((0x10000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                    ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c
                                                                    : 
                                                                   ((0x8000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                     ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c
                                                                     : 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c))))))
                                                                  : 
                                                                 ((0x20000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                   ? 
                                                                  ((0x10000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                    ? 
                                                                   ((0x8000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                     ? 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)))
                                                                     : 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c))))
                                                                    : 
                                                                   ((0x8000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                     ? 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)))
                                                                     : 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)))))
                                                                   : 
                                                                  ((0x10000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                    ? 
                                                                   ((0x8000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                     ? 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)))
                                                                     : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)
                                                                    : 
                                                                   ((0x8000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                     ? 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)))
                                                                     : 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c))))))))
                                                                : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)) 
                                                             >> 0x20U)) 
                                                    << 0x17U));
    vlSelf->SimTop__DOT__core__DOT__dataE[4U] = ((0xff800000U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataE[4U]) 
                                                 | ((IData)(
                                                            (((0x200000U 
                                                               & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                               ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c
                                                               : 
                                                              ((0x100000U 
                                                                & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                ? 
                                                               ((0x80000U 
                                                                 & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                 ? 
                                                                ((0x40000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                  ? 
                                                                 ((0x20000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                   ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c
                                                                   : 
                                                                  ((0x10000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                    ? 
                                                                   ((0x8000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                     ? 
                                                                    ((0U 
                                                                      == 
                                                                      ((vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                                        << 0xaU) 
                                                                       | (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                                          >> 0x16U)))
                                                                      ? 
                                                                     (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                                >> 0x15U)))))) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU] 
                                                                                >> 0x16U)))))
                                                                      : 
                                                                     (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U] 
                                                                                >> 0x1fU))))) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U]))))
                                                                     : 
                                                                    ((0U 
                                                                      == 
                                                                      ((vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                                        << 0xaU) 
                                                                       | (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                                          >> 0x16U)))
                                                                      ? 
                                                                     (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                                >> 0x15U)))))) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                                << 0xaU) 
                                                                                | (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU] 
                                                                                >> 0x16U)))))
                                                                      : 
                                                                     ((0x200000U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])
                                                                       ? 
                                                                      (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__div_tmp 
                                                                                >> 0x1fU))))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__div_tmp)))
                                                                       : 
                                                                      (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U] 
                                                                                >> 0x1fU))))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U]))))))
                                                                    : 
                                                                   ((0x8000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                     ? 
                                                                    ((0U 
                                                                      == 
                                                                      ((vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                                        << 0xaU) 
                                                                       | (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                                          >> 0x16U)))
                                                                      ? 0xffffffffffffffffULL
                                                                      : 
                                                                     (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U] 
                                                                                >> 0x1fU))))) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U]))))
                                                                     : 
                                                                    ((0U 
                                                                      == 
                                                                      ((vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                                        << 0xaU) 
                                                                       | (vlSelf->SimTop__DOT__core__DOT__dataD_next[8U] 
                                                                          >> 0x16U)))
                                                                      ? 0xffffffffffffffffULL
                                                                      : 
                                                                     ((1U 
                                                                       & (((~ 
                                                                            (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                             >> 0x15U)) 
                                                                           & (~ 
                                                                              (vlSelf->SimTop__DOT__core__DOT__dataD_next[9U] 
                                                                               >> 0x15U))) 
                                                                          | ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU] 
                                                                              & vlSelf->SimTop__DOT__core__DOT__dataD_next[9U]) 
                                                                             >> 0x15U)))
                                                                       ? 
                                                                      (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U] 
                                                                                >> 0x1fU))))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U])))
                                                                       : 
                                                                      (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__div_tmp 
                                                                                >> 0x1fU))))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                (~ 
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U]))))))))))
                                                                  : 
                                                                 ((0x20000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                   ? 
                                                                  ((0x10000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                    ? 
                                                                   ((0x8000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                     ? 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p[0U] 
                                                                                >> 0x1fU))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p[0U])))
                                                                     : 
                                                                    ((0ULL 
                                                                      == 
                                                                      (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                                        << 0x2aU) 
                                                                       | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                                                           << 0xaU) 
                                                                          | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                                             >> 0x16U))))
                                                                      ? 
                                                                     (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                                                       << 0x2aU) 
                                                                      | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                                                          << 0xaU) 
                                                                         | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                                            >> 0x16U)))
                                                                      : 
                                                                     (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[3U])) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U])))))
                                                                    : 
                                                                   ((0x8000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                     ? 
                                                                    ((0ULL 
                                                                      == 
                                                                      (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                                        << 0x2aU) 
                                                                       | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                                                           << 0xaU) 
                                                                          | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                                             >> 0x16U))))
                                                                      ? 
                                                                     (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                                                       << 0x2aU) 
                                                                      | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                                                          << 0xaU) 
                                                                         | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                                            >> 0x16U)))
                                                                      : 
                                                                     ((0x200000U 
                                                                       & vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])
                                                                       ? 
                                                                      (1ULL 
                                                                       + 
                                                                       (~ 
                                                                        (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[3U])) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U])))))
                                                                       : 
                                                                      (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[3U])) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U])))))
                                                                     : 
                                                                    ((0ULL 
                                                                      == 
                                                                      (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                                        << 0x2aU) 
                                                                       | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                                                           << 0xaU) 
                                                                          | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                                             >> 0x16U))))
                                                                      ? 0xffffffffffffffffULL
                                                                      : 
                                                                     (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[1U])) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U]))))))
                                                                   : 
                                                                  ((0x10000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                    ? 
                                                                   ((0x8000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                     ? 
                                                                    ((0ULL 
                                                                      == 
                                                                      (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                                                        << 0x2aU) 
                                                                       | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                                                           << 0xaU) 
                                                                          | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                                                             >> 0x16U))))
                                                                      ? 0xffffffffffffffffULL
                                                                      : 
                                                                     ((1U 
                                                                       & (((~ 
                                                                            (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU] 
                                                                             >> 0x15U)) 
                                                                           & (~ 
                                                                              (vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU] 
                                                                               >> 0x15U))) 
                                                                          | ((vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU] 
                                                                              & vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU]) 
                                                                             >> 0x15U)))
                                                                       ? 
                                                                      (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[1U])) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U])))
                                                                       : 
                                                                      (1ULL 
                                                                       + 
                                                                       (~ 
                                                                        (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[1U])) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U])))))))
                                                                     : 
                                                                    (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p[1U])) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p[0U]))))
                                                                    : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)))
                                                                 : 
                                                                ((0x40000U 
                                                                  & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                  ? 
                                                                 ((0x20000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                   ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c
                                                                   : 
                                                                  ((0x10000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                    ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c
                                                                    : 
                                                                   ((0x8000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                     ? vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c
                                                                     : 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c))))))
                                                                  : 
                                                                 ((0x20000U 
                                                                   & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                   ? 
                                                                  ((0x10000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                    ? 
                                                                   ((0x8000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                     ? 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)))
                                                                     : 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c))))
                                                                    : 
                                                                   ((0x8000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                     ? 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)))
                                                                     : 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)))))
                                                                   : 
                                                                  ((0x10000U 
                                                                    & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                    ? 
                                                                   ((0x8000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                     ? 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)))
                                                                     : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)
                                                                    : 
                                                                   ((0x8000U 
                                                                     & vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])
                                                                     ? 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)))
                                                                     : 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c 
                                                                                >> 0x1fU))))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c))))))))
                                                                : vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c)) 
                                                             >> 0x20U)) 
                                                    >> 9U));
    vlSelf->SimTop__DOT__core__DOT__dataH[2U] = ((0x1fU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataH[2U]) 
                                                 | ((IData)(
                                                            (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                                              << 0x3fU) 
                                                             | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD[1U])) 
                                                                 << 0x1fU) 
                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD[0U])) 
                                                                   >> 1U)))) 
                                                    << 5U));
    vlSelf->SimTop__DOT__core__DOT__dataH[3U] = (((IData)(
                                                          (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                                            << 0x3fU) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataD[1U])) 
                                                               << 0x1fU) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD[0U])) 
                                                                 >> 1U)))) 
                                                  >> 0x1bU) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                                               << 0x3fU) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD[1U])) 
                                                                  << 0x1fU) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD[0U])) 
                                                                    >> 1U))) 
                                                             >> 0x20U)) 
                                                    << 5U));
    vlSelf->SimTop__DOT__core__DOT__dataH[4U] = ((0xfe0U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataH[4U]) 
                                                 | (0xfffU 
                                                    & ((IData)(
                                                               ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                                                  << 0x3fU) 
                                                                 | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD[1U])) 
                                                                     << 0x1fU) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataD[0U])) 
                                                                       >> 1U))) 
                                                                >> 0x20U)) 
                                                       >> 0x1bU)));
    vlSelf->SimTop__DOT__core__DOT__dataH[0U] = (0x1fU 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataH[0U]);
    vlSelf->SimTop__DOT__core__DOT__dataH[1U] = 0U;
    vlSelf->SimTop__DOT__core__DOT__dataH[2U] = (0xffffffe0U 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataH[2U]);
    vlSelf->SimTop__DOT__core__DOT__dataH[0U] = ((0x1fU 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataH[0U]) 
                                                 | ((IData)(
                                                            ((0x10U 
                                                              == 
                                                              (0x7fU 
                                                               & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                                  >> 0xfU)))
                                                              ? 
                                                             (0xfffffffffffffffeULL 
                                                              & (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                 + vlSelf->SimTop__DOT__core__DOT__offset))
                                                              : vlSelf->SimTop__DOT__core__DOT__offset)) 
                                                    << 5U));
    vlSelf->SimTop__DOT__core__DOT__dataH[1U] = (((IData)(
                                                          ((0x10U 
                                                            == 
                                                            (0x7fU 
                                                             & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                                >> 0xfU)))
                                                            ? 
                                                           (0xfffffffffffffffeULL 
                                                            & (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                               + vlSelf->SimTop__DOT__core__DOT__offset))
                                                            : vlSelf->SimTop__DOT__core__DOT__offset)) 
                                                  >> 0x1bU) 
                                                 | ((IData)(
                                                            (((0x10U 
                                                               == 
                                                               (0x7fU 
                                                                & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                                   >> 0xfU)))
                                                               ? 
                                                              (0xfffffffffffffffeULL 
                                                               & (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                  + vlSelf->SimTop__DOT__core__DOT__offset))
                                                               : vlSelf->SimTop__DOT__core__DOT__offset) 
                                                             >> 0x20U)) 
                                                    << 5U));
    vlSelf->SimTop__DOT__core__DOT__dataH[2U] = ((0xffffffe0U 
                                                  & vlSelf->SimTop__DOT__core__DOT__dataH[2U]) 
                                                 | ((IData)(
                                                            (((0x10U 
                                                               == 
                                                               (0x7fU 
                                                                & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                                   >> 0xfU)))
                                                               ? 
                                                              (0xfffffffffffffffeULL 
                                                               & (vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1 
                                                                  + vlSelf->SimTop__DOT__core__DOT__offset))
                                                               : vlSelf->SimTop__DOT__core__DOT__offset) 
                                                             >> 0x20U)) 
                                                    >> 0x1bU));
    vlSelf->SimTop__DOT____Vcellout__mux__iresps[0U] = 0U;
    vlSelf->SimTop__DOT____Vcellout__mux__iresps[1U] = 0U;
    vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] = 0U;
    vlSelf->SimTop__DOT____Vcellout__mux__iresps[3U] = 0U;
    vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] = 0U;
    if (vlSelf->SimTop__DOT__mux__DOT__busy) {
        if ((0U == vlSelf->SimTop__DOT__mux__DOT__index)) {
            vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[0U] 
                = vlSelf->SimTop__DOT__oresp[0U];
            vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[1U] 
                = vlSelf->SimTop__DOT__oresp[1U];
            vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[2U] 
                = vlSelf->SimTop__DOT__oresp[2U];
            vlSelf->SimTop__DOT____Vcellout__mux__iresps[0U] 
                = vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[0U];
            vlSelf->SimTop__DOT____Vcellout__mux__iresps[1U] 
                = vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[1U];
            vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                = ((0xfffffffcU & vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U]) 
                   | vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[2U]);
        }
        if ((1U == vlSelf->SimTop__DOT__mux__DOT__index)) {
            vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[0U] 
                = vlSelf->SimTop__DOT__oresp[0U];
            vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[1U] 
                = vlSelf->SimTop__DOT__oresp[1U];
            vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[2U] 
                = vlSelf->SimTop__DOT__oresp[2U];
            vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                = ((3U & vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U]) 
                   | (vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[0U] 
                      << 2U));
            vlSelf->SimTop__DOT____Vcellout__mux__iresps[3U] 
                = ((vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[0U] 
                    >> 0x1eU) | (vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[1U] 
                                 << 2U));
            vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                = (0xfU & ((vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[1U] 
                            >> 0x1eU) | (vlSelf->SimTop__DOT__mux__DOT____Vlvbound4[2U] 
                                         << 2U)));
        }
    }
    if ((0x400000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
        vlSelf->SimTop__DOT__dreq[2U] = (0x7ffU & vlSelf->SimTop__DOT__dreq[2U]);
        vlSelf->SimTop__DOT__dreq[3U] = 0U;
        vlSelf->SimTop__DOT__dreq[4U] = 0U;
        vlSelf->SimTop__DOT__dreq[0U] = 0U;
        vlSelf->SimTop__DOT__dreq[1U] = 0U;
        vlSelf->SimTop__DOT__dreq[2U] = (0xffffff00U 
                                         & vlSelf->SimTop__DOT__dreq[2U]);
    } else if ((0x200000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
        if ((0x100000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
            if ((0x80000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
                vlSelf->SimTop__DOT__dreq[2U] = (0x7ffU 
                                                 & vlSelf->SimTop__DOT__dreq[2U]);
                vlSelf->SimTop__DOT__dreq[3U] = 0U;
                vlSelf->SimTop__DOT__dreq[4U] = 0U;
                vlSelf->SimTop__DOT__dreq[0U] = 0U;
                vlSelf->SimTop__DOT__dreq[1U] = 0U;
                vlSelf->SimTop__DOT__dreq[2U] = (0xffffff00U 
                                                 & vlSelf->SimTop__DOT__dreq[2U]);
            } else if ((0x40000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
                vlSelf->SimTop__DOT__dreq[2U] = (0x7ffU 
                                                 & vlSelf->SimTop__DOT__dreq[2U]);
                vlSelf->SimTop__DOT__dreq[3U] = 0U;
                vlSelf->SimTop__DOT__dreq[4U] = 0U;
                vlSelf->SimTop__DOT__dreq[0U] = 0U;
                vlSelf->SimTop__DOT__dreq[1U] = 0U;
                vlSelf->SimTop__DOT__dreq[2U] = (0xffffff00U 
                                                 & vlSelf->SimTop__DOT__dreq[2U]);
            } else if ((0x20000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
                vlSelf->SimTop__DOT__dreq[2U] = (0x7ffU 
                                                 & vlSelf->SimTop__DOT__dreq[2U]);
                vlSelf->SimTop__DOT__dreq[3U] = 0U;
                vlSelf->SimTop__DOT__dreq[4U] = 0U;
                vlSelf->SimTop__DOT__dreq[0U] = 0U;
                vlSelf->SimTop__DOT__dreq[1U] = 0U;
                vlSelf->SimTop__DOT__dreq[2U] = (0xffffff00U 
                                                 & vlSelf->SimTop__DOT__dreq[2U]);
            } else if ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
                vlSelf->SimTop__DOT__dreq[2U] = ((0x7ffU 
                                                  & vlSelf->SimTop__DOT__dreq[2U]) 
                                                 | ((IData)(
                                                            (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                              << 0x3eU) 
                                                             | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                                 << 0x1eU) 
                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                                   >> 2U)))) 
                                                    << 0xbU));
                vlSelf->SimTop__DOT__dreq[3U] = (((IData)(
                                                          (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                            << 0x3eU) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                               << 0x1eU) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                                 >> 2U)))) 
                                                  >> 0x15U) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                               << 0x3eU) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                                  << 0x1eU) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                                    >> 2U))) 
                                                             >> 0x20U)) 
                                                    << 0xbU));
                vlSelf->SimTop__DOT__dreq[4U] = (0xfffU 
                                                 & (((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                                << 0x3eU) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                                   << 0x1eU) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                                     >> 2U))) 
                                                              >> 0x20U)) 
                                                     >> 0x15U) 
                                                    | (0x800U 
                                                       & ((~ 
                                                           (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                            >> 1U)) 
                                                          << 0xbU))));
                vlSelf->SimTop__DOT__dreq[0U] = (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd);
                vlSelf->SimTop__DOT__dreq[1U] = (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd 
                                                         >> 0x20U));
                vlSelf->SimTop__DOT__dreq[2U] = ((0xffffff00U 
                                                  & vlSelf->SimTop__DOT__dreq[2U]) 
                                                 | (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe));
            } else {
                vlSelf->SimTop__DOT__dreq[2U] = ((0x7ffU 
                                                  & vlSelf->SimTop__DOT__dreq[2U]) 
                                                 | ((IData)(
                                                            (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                              << 0x3eU) 
                                                             | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                                 << 0x1eU) 
                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                                   >> 2U)))) 
                                                    << 0xbU));
                vlSelf->SimTop__DOT__dreq[3U] = (((IData)(
                                                          (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                            << 0x3eU) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                               << 0x1eU) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                                 >> 2U)))) 
                                                  >> 0x15U) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                               << 0x3eU) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                                  << 0x1eU) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                                    >> 2U))) 
                                                             >> 0x20U)) 
                                                    << 0xbU));
                vlSelf->SimTop__DOT__dreq[4U] = (0xfffU 
                                                 & (((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                                << 0x3eU) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                                   << 0x1eU) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                                     >> 2U))) 
                                                              >> 0x20U)) 
                                                     >> 0x15U) 
                                                    | (0x800U 
                                                       & ((~ 
                                                           (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                            >> 1U)) 
                                                          << 0xbU))));
                vlSelf->SimTop__DOT__dreq[0U] = (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd);
                vlSelf->SimTop__DOT__dreq[1U] = (IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd 
                                                         >> 0x20U));
                vlSelf->SimTop__DOT__dreq[2U] = ((0xffffff00U 
                                                  & vlSelf->SimTop__DOT__dreq[2U]) 
                                                 | (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe));
            }
        } else if ((0x80000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
            if ((0x40000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
                if ((0x20000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
                    if ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
                        vlSelf->SimTop__DOT__dreq[2U] 
                            = ((0x7ffU & vlSelf->SimTop__DOT__dreq[2U]) 
                               | ((IData)((((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                 >> 2U)))) 
                                  << 0xbU));
                        vlSelf->SimTop__DOT__dreq[3U] 
                            = (((IData)((((QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                               >> 2U)))) 
                                >> 0x15U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                        << 0x3eU) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                           << 0x1eU) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                             >> 2U))) 
                                                      >> 0x20U)) 
                                             << 0xbU));
                        vlSelf->SimTop__DOT__dreq[4U] 
                            = (0xfffU & (((IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                     << 0x3eU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                        << 0x1eU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                          >> 2U))) 
                                                   >> 0x20U)) 
                                          >> 0x15U) 
                                         | (0x800U 
                                            & ((~ (
                                                   vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                   >> 1U)) 
                                               << 0xbU))));
                        vlSelf->SimTop__DOT__dreq[0U] 
                            = (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd);
                        vlSelf->SimTop__DOT__dreq[1U] 
                            = (IData)((vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd 
                                       >> 0x20U));
                        vlSelf->SimTop__DOT__dreq[2U] 
                            = ((0xffffff00U & vlSelf->SimTop__DOT__dreq[2U]) 
                               | (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe));
                    } else {
                        vlSelf->SimTop__DOT__dreq[2U] 
                            = ((0x7ffU & vlSelf->SimTop__DOT__dreq[2U]) 
                               | ((IData)((((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                 >> 2U)))) 
                                  << 0xbU));
                        vlSelf->SimTop__DOT__dreq[3U] 
                            = (((IData)((((QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                               >> 2U)))) 
                                >> 0x15U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                        << 0x3eU) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                           << 0x1eU) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                             >> 2U))) 
                                                      >> 0x20U)) 
                                             << 0xbU));
                        vlSelf->SimTop__DOT__dreq[4U] 
                            = (0xfffU & (((IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                     << 0x3eU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                        << 0x1eU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                          >> 2U))) 
                                                   >> 0x20U)) 
                                          >> 0x15U) 
                                         | (0x800U 
                                            & ((~ (
                                                   vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                   >> 1U)) 
                                               << 0xbU))));
                        vlSelf->SimTop__DOT__dreq[0U] = 0U;
                        vlSelf->SimTop__DOT__dreq[1U] = 0U;
                        vlSelf->SimTop__DOT__dreq[2U] 
                            = (0xffffff00U & vlSelf->SimTop__DOT__dreq[2U]);
                    }
                } else if ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
                    vlSelf->SimTop__DOT__dreq[2U] = 
                        ((0x7ffU & vlSelf->SimTop__DOT__dreq[2U]) 
                         | ((IData)((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                      >> 2U)))) 
                            << 0xbU));
                    vlSelf->SimTop__DOT__dreq[3U] = 
                        (((IData)((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                    >> 2U)))) 
                          >> 0x15U) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                  << 0x3eU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                     << 0x1eU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                       >> 2U))) 
                                                >> 0x20U)) 
                                       << 0xbU));
                    vlSelf->SimTop__DOT__dreq[4U] = 
                        (0xfffU & (((IData)(((((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                    >> 2U))) 
                                             >> 0x20U)) 
                                    >> 0x15U) | (0x800U 
                                                 & ((~ 
                                                     (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                      >> 1U)) 
                                                    << 0xbU))));
                    vlSelf->SimTop__DOT__dreq[0U] = 0U;
                    vlSelf->SimTop__DOT__dreq[1U] = 0U;
                    vlSelf->SimTop__DOT__dreq[2U] = 
                        (0xffffff00U & vlSelf->SimTop__DOT__dreq[2U]);
                } else {
                    vlSelf->SimTop__DOT__dreq[2U] = 
                        ((0x7ffU & vlSelf->SimTop__DOT__dreq[2U]) 
                         | ((IData)((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                      >> 2U)))) 
                            << 0xbU));
                    vlSelf->SimTop__DOT__dreq[3U] = 
                        (((IData)((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                    >> 2U)))) 
                          >> 0x15U) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                  << 0x3eU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                     << 0x1eU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                       >> 2U))) 
                                                >> 0x20U)) 
                                       << 0xbU));
                    vlSelf->SimTop__DOT__dreq[4U] = 
                        (0xfffU & (((IData)(((((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                    >> 2U))) 
                                             >> 0x20U)) 
                                    >> 0x15U) | (0x800U 
                                                 & ((~ 
                                                     (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                      >> 1U)) 
                                                    << 0xbU))));
                    vlSelf->SimTop__DOT__dreq[0U] = 0U;
                    vlSelf->SimTop__DOT__dreq[1U] = 0U;
                    vlSelf->SimTop__DOT__dreq[2U] = 
                        (0xffffff00U & vlSelf->SimTop__DOT__dreq[2U]);
                }
            } else if ((0x20000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
                if ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
                    vlSelf->SimTop__DOT__dreq[2U] = 
                        ((0x7ffU & vlSelf->SimTop__DOT__dreq[2U]) 
                         | ((IData)((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                      >> 2U)))) 
                            << 0xbU));
                    vlSelf->SimTop__DOT__dreq[3U] = 
                        (((IData)((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                    >> 2U)))) 
                          >> 0x15U) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                  << 0x3eU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                     << 0x1eU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                       >> 2U))) 
                                                >> 0x20U)) 
                                       << 0xbU));
                    vlSelf->SimTop__DOT__dreq[4U] = 
                        (0xfffU & (((IData)(((((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                    >> 2U))) 
                                             >> 0x20U)) 
                                    >> 0x15U) | (0x800U 
                                                 & ((~ 
                                                     (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                      >> 1U)) 
                                                    << 0xbU))));
                    vlSelf->SimTop__DOT__dreq[0U] = 0U;
                    vlSelf->SimTop__DOT__dreq[1U] = 0U;
                    vlSelf->SimTop__DOT__dreq[2U] = 
                        (0xffffff00U & vlSelf->SimTop__DOT__dreq[2U]);
                } else {
                    vlSelf->SimTop__DOT__dreq[2U] = 
                        ((0x7ffU & vlSelf->SimTop__DOT__dreq[2U]) 
                         | ((IData)((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                    << 0x1eU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                      >> 2U)))) 
                            << 0xbU));
                    vlSelf->SimTop__DOT__dreq[3U] = 
                        (((IData)((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                    >> 2U)))) 
                          >> 0x15U) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                  << 0x3eU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                     << 0x1eU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                       >> 2U))) 
                                                >> 0x20U)) 
                                       << 0xbU));
                    vlSelf->SimTop__DOT__dreq[4U] = 
                        (0xfffU & (((IData)(((((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                               << 0x3eU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                    >> 2U))) 
                                             >> 0x20U)) 
                                    >> 0x15U) | (0x800U 
                                                 & ((~ 
                                                     (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                      >> 1U)) 
                                                    << 0xbU))));
                    vlSelf->SimTop__DOT__dreq[0U] = 0U;
                    vlSelf->SimTop__DOT__dreq[1U] = 0U;
                    vlSelf->SimTop__DOT__dreq[2U] = 
                        (0xffffff00U & vlSelf->SimTop__DOT__dreq[2U]);
                }
            } else if ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
                vlSelf->SimTop__DOT__dreq[2U] = ((0x7ffU 
                                                  & vlSelf->SimTop__DOT__dreq[2U]) 
                                                 | ((IData)(
                                                            (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                              << 0x3eU) 
                                                             | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                                 << 0x1eU) 
                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                                   >> 2U)))) 
                                                    << 0xbU));
                vlSelf->SimTop__DOT__dreq[3U] = (((IData)(
                                                          (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                            << 0x3eU) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                               << 0x1eU) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                                 >> 2U)))) 
                                                  >> 0x15U) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                               << 0x3eU) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                                  << 0x1eU) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                                    >> 2U))) 
                                                             >> 0x20U)) 
                                                    << 0xbU));
                vlSelf->SimTop__DOT__dreq[4U] = (0xfffU 
                                                 & (((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                                << 0x3eU) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                                   << 0x1eU) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                                     >> 2U))) 
                                                              >> 0x20U)) 
                                                     >> 0x15U) 
                                                    | (0x800U 
                                                       & ((~ 
                                                           (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                            >> 1U)) 
                                                          << 0xbU))));
                vlSelf->SimTop__DOT__dreq[0U] = 0U;
                vlSelf->SimTop__DOT__dreq[1U] = 0U;
                vlSelf->SimTop__DOT__dreq[2U] = (0xffffff00U 
                                                 & vlSelf->SimTop__DOT__dreq[2U]);
            } else {
                vlSelf->SimTop__DOT__dreq[2U] = (0x7ffU 
                                                 & vlSelf->SimTop__DOT__dreq[2U]);
                vlSelf->SimTop__DOT__dreq[3U] = 0U;
                vlSelf->SimTop__DOT__dreq[4U] = 0U;
                vlSelf->SimTop__DOT__dreq[0U] = 0U;
                vlSelf->SimTop__DOT__dreq[1U] = 0U;
                vlSelf->SimTop__DOT__dreq[2U] = (0xffffff00U 
                                                 & vlSelf->SimTop__DOT__dreq[2U]);
            }
        } else {
            vlSelf->SimTop__DOT__dreq[2U] = (0x7ffU 
                                             & vlSelf->SimTop__DOT__dreq[2U]);
            vlSelf->SimTop__DOT__dreq[3U] = 0U;
            vlSelf->SimTop__DOT__dreq[4U] = 0U;
            vlSelf->SimTop__DOT__dreq[0U] = 0U;
            vlSelf->SimTop__DOT__dreq[1U] = 0U;
            vlSelf->SimTop__DOT__dreq[2U] = (0xffffff00U 
                                             & vlSelf->SimTop__DOT__dreq[2U]);
        }
    } else if ((0x100000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
        vlSelf->SimTop__DOT__dreq[2U] = (0x7ffU & vlSelf->SimTop__DOT__dreq[2U]);
        vlSelf->SimTop__DOT__dreq[3U] = 0U;
        vlSelf->SimTop__DOT__dreq[4U] = 0U;
        vlSelf->SimTop__DOT__dreq[0U] = 0U;
        vlSelf->SimTop__DOT__dreq[1U] = 0U;
        vlSelf->SimTop__DOT__dreq[2U] = (0xffffff00U 
                                         & vlSelf->SimTop__DOT__dreq[2U]);
    } else if ((0x80000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
        if ((0x40000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
            vlSelf->SimTop__DOT__dreq[2U] = (0x7ffU 
                                             & vlSelf->SimTop__DOT__dreq[2U]);
            vlSelf->SimTop__DOT__dreq[3U] = 0U;
            vlSelf->SimTop__DOT__dreq[4U] = 0U;
            vlSelf->SimTop__DOT__dreq[0U] = 0U;
            vlSelf->SimTop__DOT__dreq[1U] = 0U;
            vlSelf->SimTop__DOT__dreq[2U] = (0xffffff00U 
                                             & vlSelf->SimTop__DOT__dreq[2U]);
        } else if ((0x20000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
            vlSelf->SimTop__DOT__dreq[2U] = (0x7ffU 
                                             & vlSelf->SimTop__DOT__dreq[2U]);
            vlSelf->SimTop__DOT__dreq[3U] = 0U;
            vlSelf->SimTop__DOT__dreq[4U] = 0U;
            vlSelf->SimTop__DOT__dreq[0U] = 0U;
            vlSelf->SimTop__DOT__dreq[1U] = 0U;
            vlSelf->SimTop__DOT__dreq[2U] = (0xffffff00U 
                                             & vlSelf->SimTop__DOT__dreq[2U]);
        } else if ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
            vlSelf->SimTop__DOT__dreq[2U] = ((0x7ffU 
                                              & vlSelf->SimTop__DOT__dreq[2U]) 
                                             | ((IData)(
                                                        (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                          << 0x3eU) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                             << 0x1eU) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                               >> 2U)))) 
                                                << 0xbU));
            vlSelf->SimTop__DOT__dreq[3U] = (((IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                        << 0x3eU) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                           << 0x1eU) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                             >> 2U)))) 
                                              >> 0x15U) 
                                             | ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                           << 0x3eU) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                              << 0x1eU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                                >> 2U))) 
                                                         >> 0x20U)) 
                                                << 0xbU));
            vlSelf->SimTop__DOT__dreq[4U] = (0xfffU 
                                             & (((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                            << 0x3eU) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                               << 0x1eU) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                                 >> 2U))) 
                                                          >> 0x20U)) 
                                                 >> 0x15U) 
                                                | (0x800U 
                                                   & ((~ 
                                                       (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                        >> 1U)) 
                                                      << 0xbU))));
            vlSelf->SimTop__DOT__dreq[0U] = (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd);
            vlSelf->SimTop__DOT__dreq[1U] = (IData)(
                                                    (vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd 
                                                     >> 0x20U));
            vlSelf->SimTop__DOT__dreq[2U] = ((0xffffff00U 
                                              & vlSelf->SimTop__DOT__dreq[2U]) 
                                             | (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe));
        } else {
            vlSelf->SimTop__DOT__dreq[2U] = ((0x7ffU 
                                              & vlSelf->SimTop__DOT__dreq[2U]) 
                                             | ((IData)(
                                                        (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                          << 0x3eU) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                             << 0x1eU) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                               >> 2U)))) 
                                                << 0xbU));
            vlSelf->SimTop__DOT__dreq[3U] = (((IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                        << 0x3eU) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                           << 0x1eU) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                             >> 2U)))) 
                                              >> 0x15U) 
                                             | ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                           << 0x3eU) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                              << 0x1eU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                                >> 2U))) 
                                                         >> 0x20U)) 
                                                << 0xbU));
            vlSelf->SimTop__DOT__dreq[4U] = (0xfffU 
                                             & (((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                                            << 0x3eU) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                                               << 0x1eU) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                                                 >> 2U))) 
                                                          >> 0x20U)) 
                                                 >> 0x15U) 
                                                | (0x800U 
                                                   & ((~ 
                                                       (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                        >> 1U)) 
                                                      << 0xbU))));
            vlSelf->SimTop__DOT__dreq[0U] = 0U;
            vlSelf->SimTop__DOT__dreq[1U] = 0U;
            vlSelf->SimTop__DOT__dreq[2U] = (0xffffff00U 
                                             & vlSelf->SimTop__DOT__dreq[2U]);
        }
    } else {
        vlSelf->SimTop__DOT__dreq[2U] = (0x7ffU & vlSelf->SimTop__DOT__dreq[2U]);
        vlSelf->SimTop__DOT__dreq[3U] = 0U;
        vlSelf->SimTop__DOT__dreq[4U] = 0U;
        vlSelf->SimTop__DOT__dreq[0U] = 0U;
        vlSelf->SimTop__DOT__dreq[1U] = 0U;
        vlSelf->SimTop__DOT__dreq[2U] = (0xffffff00U 
                                         & vlSelf->SimTop__DOT__dreq[2U]);
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[2U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[2U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[3U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[3U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[2U]))) 
                   >> 0x20U));
    if (((1U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                          >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[2U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[3U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[4U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[4U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[5U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[5U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[4U]))) 
                   >> 0x20U));
    if (((2U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                          >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[4U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[5U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[6U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[7U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[6U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[7U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[7U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[6U]))) 
                   >> 0x20U));
    if (((3U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                          >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[6U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[7U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[8U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[9U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[8U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[9U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[9U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[8U]))) 
                   >> 0x20U));
    if (((4U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                          >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[8U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[9U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xaU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0xbU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0xaU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xbU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0xbU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0xaU]))) 
                   >> 0x20U));
    if (((5U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                          >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xaU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xbU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xcU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0xdU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0xcU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xdU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0xdU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0xcU]))) 
                   >> 0x20U));
    if (((6U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                          >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xcU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xdU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xeU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0xfU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0xeU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xfU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0xfU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0xeU]))) 
                   >> 0x20U));
    if (((7U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                          >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xeU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xfU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x10U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x11U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x10U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x11U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x11U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x10U]))) 
                   >> 0x20U));
    if (((8U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                          >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x10U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x11U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x12U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x13U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x12U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x13U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x13U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x12U]))) 
                   >> 0x20U));
    if (((9U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                          >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x12U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x13U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x14U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x15U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x14U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x15U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x15U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x14U]))) 
                   >> 0x20U));
    if (((0xaU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                            >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x14U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x15U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x16U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x17U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x16U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x17U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x17U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x16U]))) 
                   >> 0x20U));
    if (((0xbU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                            >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x16U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x17U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x18U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x19U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x18U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x19U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x19U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x18U]))) 
                   >> 0x20U));
    if (((0xcU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                            >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x18U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x19U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1aU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x1bU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x1aU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1bU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x1bU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x1aU]))) 
                   >> 0x20U));
    if (((0xdU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                            >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1aU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1bU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1cU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x1dU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x1cU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1dU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x1dU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x1cU]))) 
                   >> 0x20U));
    if (((0xeU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                            >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1cU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1dU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1eU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x1fU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x1eU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1fU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x1fU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x1eU]))) 
                   >> 0x20U));
    if (((0xfU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                            >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1eU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1fU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x20U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x21U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x20U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x21U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x21U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x20U]))) 
                   >> 0x20U));
    if (((0x10U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x20U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x21U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x22U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x23U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x22U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x23U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x23U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x22U]))) 
                   >> 0x20U));
    if (((0x11U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x22U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x23U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x24U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x25U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x24U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x25U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x25U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x24U]))) 
                   >> 0x20U));
    if (((0x12U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x24U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x25U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x26U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x27U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x26U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x27U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x27U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x26U]))) 
                   >> 0x20U));
    if (((0x13U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x26U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x27U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x28U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x29U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x28U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x29U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x29U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x28U]))) 
                   >> 0x20U));
    if (((0x14U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x28U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x29U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2aU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x2bU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x2aU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2bU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x2bU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x2aU]))) 
                   >> 0x20U));
    if (((0x15U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2aU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2bU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2cU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x2dU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x2cU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2dU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x2dU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x2cU]))) 
                   >> 0x20U));
    if (((0x16U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2cU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2dU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2eU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x2fU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x2eU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2fU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x2fU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x2eU]))) 
                   >> 0x20U));
    if (((0x17U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2eU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2fU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x30U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x31U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x30U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x31U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x31U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x30U]))) 
                   >> 0x20U));
    if (((0x18U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x30U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x31U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x32U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x33U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x32U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x33U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x33U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x32U]))) 
                   >> 0x20U));
    if (((0x19U == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x32U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x33U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x34U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x35U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x34U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x35U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x35U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x34U]))) 
                   >> 0x20U));
    if (((0x1aU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x34U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x35U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x36U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x37U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x36U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x37U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x37U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x36U]))) 
                   >> 0x20U));
    if (((0x1bU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x36U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x37U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x38U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x39U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x38U]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x39U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x39U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x38U]))) 
                   >> 0x20U));
    if (((0x1cU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x38U] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x39U] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3aU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x3bU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x3aU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3bU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x3bU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x3aU]))) 
                   >> 0x20U));
    if (((0x1dU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3aU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3bU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3cU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x3dU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x3cU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3dU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x3dU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x3cU]))) 
                   >> 0x20U));
    if (((0x1eU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3cU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3dU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3eU] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x3fU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x3eU]))));
    vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3fU] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x3fU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x3eU]))) 
                   >> 0x20U));
    if (((0x1fU == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                             >> 1U))) & (IData)(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE))) {
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3eU] 
            = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                        << 0x2aU) | (((QData)((IData)(
                                                      vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                      << 0xaU) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                  >> 0x16U))));
        vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3fU] 
            = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                         << 0x2aU) | (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                       << 0xaU) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                                   >> 0x16U))) 
                       >> 0x20U));
    }
    vlSelf->SimTop__DOT__icvt__DOT__dresp[0U] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U])) 
                                                          << 0x3eU) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT____Vcellout__mux__iresps[3U])) 
                                                             << 0x1eU) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])) 
                                                               >> 2U))));
    vlSelf->SimTop__DOT__icvt__DOT__dresp[1U] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U])) 
                                                           << 0x3eU) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT____Vcellout__mux__iresps[3U])) 
                                                              << 0x1eU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])) 
                                                                >> 2U))) 
                                                         >> 0x20U));
    vlSelf->SimTop__DOT__icvt__DOT__dresp[2U] = (3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                                                   >> 3U) 
                                                                  & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                                                     >> 2U))))));
    vlSelf->SimTop__DOT__dresp[0U] = (IData)((((QData)((IData)(
                                                               vlSelf->SimTop__DOT____Vcellout__mux__iresps[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->SimTop__DOT____Vcellout__mux__iresps[0U]))));
    vlSelf->SimTop__DOT__dresp[1U] = (IData)(((((QData)((IData)(
                                                                vlSelf->SimTop__DOT____Vcellout__mux__iresps[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT____Vcellout__mux__iresps[0U]))) 
                                              >> 0x20U));
    vlSelf->SimTop__DOT__dresp[2U] = (3U & (- (IData)(
                                                      (1U 
                                                       & ((vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                                                           >> 1U) 
                                                          & vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])))));
    __Vtemp327[3U] = ((0x3ffU & ((IData)((((QData)((IData)(
                                                           vlSelf->SimTop__DOT__dreq[4U])) 
                                           << 0x35U) 
                                          | (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__dreq[3U])) 
                                              << 0x15U) 
                                             | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__dreq[2U])) 
                                                >> 0xbU)))) 
                                 >> 0xeU)) | ((0x3fc00U 
                                               & ((IData)(
                                                          (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__dreq[4U])) 
                                                            << 0x35U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__dreq[3U])) 
                                                               << 0x15U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__dreq[2U])) 
                                                                 >> 0xbU)))) 
                                                  >> 0xeU)) 
                                              | ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__dreq[4U])) 
                                                            << 0x35U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__dreq[3U])) 
                                                               << 0x15U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__dreq[2U])) 
                                                                 >> 0xbU))) 
                                                          >> 0x20U)) 
                                                 << 0x12U)));
    __Vtemp327[4U] = ((0x3ffU & ((IData)(((((QData)((IData)(
                                                            vlSelf->SimTop__DOT__dreq[4U])) 
                                            << 0x35U) 
                                           | (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__dreq[3U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__dreq[2U])) 
                                                 >> 0xbU))) 
                                          >> 0x20U)) 
                                 >> 0xeU)) | ((((2U 
                                                 & (vlSelf->SimTop__DOT__dreq[4U] 
                                                    >> 0xaU)) 
                                                | (0U 
                                                   != 
                                                   (0xffU 
                                                    & vlSelf->SimTop__DOT__dreq[2U]))) 
                                               << 0x15U) 
                                              | ((0x1c0000U 
                                                  & (vlSelf->SimTop__DOT__dreq[2U] 
                                                     << 0xaU)) 
                                                 | (0x3fc00U 
                                                    & ((IData)(
                                                               ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__dreq[4U])) 
                                                                  << 0x35U) 
                                                                 | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__dreq[3U])) 
                                                                     << 0x15U) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__dreq[2U])) 
                                                                       >> 0xbU))) 
                                                                >> 0x20U)) 
                                                       >> 0xeU)))));
    vlSelf->SimTop__DOT__dcreq[0U] = ((IData)((((QData)((IData)(
                                                                vlSelf->SimTop__DOT__dreq[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__dreq[0U])))) 
                                      << 0xaU);
    vlSelf->SimTop__DOT__dcreq[1U] = (((IData)((((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__dreq[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__dreq[0U])))) 
                                       >> 0x16U) | 
                                      ((IData)(((((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__dreq[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__dreq[0U]))) 
                                                >> 0x20U)) 
                                       << 0xaU));
    vlSelf->SimTop__DOT__dcreq[2U] = ((((IData)((((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__dreq[4U])) 
                                                  << 0x35U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__dreq[3U])) 
                                                     << 0x15U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__dreq[2U])) 
                                                       >> 0xbU)))) 
                                        << 0x12U) | 
                                       (0x3fc00U & 
                                        (vlSelf->SimTop__DOT__dreq[2U] 
                                         << 0xaU))) 
                                      | ((IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__dreq[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SimTop__DOT__dreq[0U]))) 
                                                  >> 0x20U)) 
                                         >> 0x16U));
    vlSelf->SimTop__DOT__dcreq[3U] = __Vtemp327[3U];
    vlSelf->SimTop__DOT__dcreq[4U] = __Vtemp327[4U];
    vlSelf->SimTop__DOT__iresp = (((QData)((IData)(
                                                   (3U 
                                                    & vlSelf->SimTop__DOT__icvt__DOT__dresp[2U]))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((4U 
                                                                 & vlSelf->SimTop__DOT__ireq[0U])
                                                                 ? 
                                                                vlSelf->SimTop__DOT__icvt__DOT__dresp[1U]
                                                                 : 
                                                                vlSelf->SimTop__DOT__icvt__DOT__dresp[0U]))));
    vlSelf->SimTop__DOT__core__DOT__Dwait = (1U & (
                                                   (vlSelf->SimTop__DOT__dreq[4U] 
                                                    >> 0xbU) 
                                                   & (~ 
                                                      vlSelf->SimTop__DOT__dresp[2U])));
    if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize))) {
            if ((1U & (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize))) {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                    = (((QData)((IData)(vlSelf->SimTop__DOT__dresp[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__dresp[0U])));
            } else {
                if ((0x10U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) {
                    if ((0x10U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) {
                        vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit 
                            = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__mem_unsigned)) 
                                     & (vlSelf->SimTop__DOT__dresp[1U] 
                                        >> 0x1fU)));
                        vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                            = (((QData)((IData)((- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit))))) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__dresp[1U])));
                    }
                } else {
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit 
                        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__mem_unsigned)) 
                                 & (vlSelf->SimTop__DOT__dresp[0U] 
                                    >> 0x1fU)));
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                        = (((QData)((IData)((- (IData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit))))) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->SimTop__DOT__dresp[0U])));
                }
                if ((1U & (~ VL_ONEHOT0_I(((2U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                  >> 3U)) 
                                           | (1U & 
                                              (~ (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                  >> 4U)))))))) {
                    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                        VL_WRITEF("[%0t] %%Error: DataMem.sv:83: Assertion failed in %NSimTop.core.memory.Datamem: synthesis parallel_case, but multiple matches found\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  -12,vlSymsp->name());
                        VL_STOP_MT("/home/cs/arch-2024/build/../vsrc/src/DataMem.sv", 83, "");
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize))) {
            if ((0x10U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) {
                if ((8U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) {
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit 
                        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__mem_unsigned)) 
                                 & (vlSelf->SimTop__DOT__dresp[1U] 
                                    >> 0x1fU)));
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                        = (((- (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit))) 
                            << 0x10U) | (QData)((IData)(
                                                        (vlSelf->SimTop__DOT__dresp[1U] 
                                                         >> 0x10U))));
                } else {
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit 
                        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__mem_unsigned)) 
                                 & (vlSelf->SimTop__DOT__dresp[1U] 
                                    >> 0xfU)));
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                        = (((- (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & vlSelf->SimTop__DOT__dresp[1U]))));
                }
            } else if ((8U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit 
                    = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__mem_unsigned)) 
                             & (vlSelf->SimTop__DOT__dresp[0U] 
                                >> 0x1fU)));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                    = (((- (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit))) 
                        << 0x10U) | (QData)((IData)(
                                                    (vlSelf->SimTop__DOT__dresp[0U] 
                                                     >> 0x10U))));
            } else {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit 
                    = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__mem_unsigned)) 
                             & (vlSelf->SimTop__DOT__dresp[0U] 
                                >> 0xfU)));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                    = (((- (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit))) 
                        << 0x10U) | (QData)((IData)(
                                                    (0xffffU 
                                                     & vlSelf->SimTop__DOT__dresp[0U]))));
            }
        } else if ((0x10U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) {
            if ((8U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) {
                if ((4U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) {
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit 
                        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__mem_unsigned)) 
                                 & (vlSelf->SimTop__DOT__dresp[1U] 
                                    >> 0x1fU)));
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                        = (((- (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit))) 
                            << 8U) | (QData)((IData)(
                                                     (vlSelf->SimTop__DOT__dresp[1U] 
                                                      >> 0x18U))));
                } else {
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit 
                        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__mem_unsigned)) 
                                 & (vlSelf->SimTop__DOT__dresp[1U] 
                                    >> 0x17U)));
                    vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                        = (((- (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit))) 
                            << 8U) | (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->SimTop__DOT__dresp[1U] 
                                                         >> 0x10U)))));
                }
            } else if ((4U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit 
                    = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__mem_unsigned)) 
                             & (vlSelf->SimTop__DOT__dresp[1U] 
                                >> 0xfU)));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                    = (((- (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit))) 
                        << 8U) | (QData)((IData)((0xffU 
                                                  & (vlSelf->SimTop__DOT__dresp[1U] 
                                                     >> 8U)))));
            } else {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit 
                    = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__mem_unsigned)) 
                             & (vlSelf->SimTop__DOT__dresp[1U] 
                                >> 7U)));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                    = (((- (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit))) 
                        << 8U) | (QData)((IData)((0xffU 
                                                  & vlSelf->SimTop__DOT__dresp[1U]))));
            }
        } else if ((8U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) {
            if ((4U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit 
                    = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__mem_unsigned)) 
                             & (vlSelf->SimTop__DOT__dresp[0U] 
                                >> 0x1fU)));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                    = (((- (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit))) 
                        << 8U) | (QData)((IData)((vlSelf->SimTop__DOT__dresp[0U] 
                                                  >> 0x18U))));
            } else {
                vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit 
                    = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__mem_unsigned)) 
                             & (vlSelf->SimTop__DOT__dresp[0U] 
                                >> 0x17U)));
                vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                    = (((- (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit))) 
                        << 8U) | (QData)((IData)((0xffU 
                                                  & (vlSelf->SimTop__DOT__dresp[0U] 
                                                     >> 0x10U)))));
            }
        } else if ((4U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) {
            vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit 
                = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__mem_unsigned)) 
                         & (vlSelf->SimTop__DOT__dresp[0U] 
                            >> 0xfU)));
            vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                = (((- (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit))) 
                    << 8U) | (QData)((IData)((0xffU 
                                              & (vlSelf->SimTop__DOT__dresp[0U] 
                                                 >> 8U)))));
        } else {
            vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit 
                = (1U & ((~ (IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__mem_unsigned)) 
                         & (vlSelf->SimTop__DOT__dresp[0U] 
                            >> 7U)));
            vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                = (((- (QData)((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit))) 
                    << 8U) | (QData)((IData)((0xffU 
                                              & vlSelf->SimTop__DOT__dresp[0U]))));
        }
    }
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U] 
        = vlSelf->SimTop__DOT__dcreq[0U];
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[1U] 
        = vlSelf->SimTop__DOT__dcreq[1U];
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U] 
        = vlSelf->SimTop__DOT__dcreq[2U];
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[3U] 
        = vlSelf->SimTop__DOT__dcreq[3U];
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
        = ((vlSelf->SimTop__DOT__icreq[0U] << 0x17U) 
           | vlSelf->SimTop__DOT__dcreq[4U]);
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[5U] 
        = ((vlSelf->SimTop__DOT__icreq[0U] >> 9U) | 
           (vlSelf->SimTop__DOT__icreq[1U] << 0x17U));
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[6U] 
        = ((vlSelf->SimTop__DOT__icreq[1U] >> 9U) | 
           (vlSelf->SimTop__DOT__icreq[2U] << 0x17U));
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U] 
        = ((vlSelf->SimTop__DOT__icreq[2U] >> 9U) | 
           (vlSelf->SimTop__DOT__icreq[3U] << 0x17U));
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[8U] 
        = ((vlSelf->SimTop__DOT__icreq[3U] >> 9U) | 
           (vlSelf->SimTop__DOT__icreq[4U] << 0x17U));
    vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
        = (vlSelf->SimTop__DOT__icreq[4U] >> 9U);
    vlSelf->SimTop__DOT__core__DOT__Iwait = (1U & (
                                                   vlSelf->SimTop__DOT__ireq[2U] 
                                                   & (~ (IData)(
                                                                (vlSelf->SimTop__DOT__iresp 
                                                                 >> 0x20U)))));
    vlSelf->SimTop__DOT__core__DOT__dataM[0U] = (1U 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataM[0U]);
    vlSelf->SimTop__DOT__core__DOT__dataM[1U] = 0U;
    vlSelf->SimTop__DOT__core__DOT__dataM[2U] = 0U;
    vlSelf->SimTop__DOT__core__DOT__dataM[3U] = 0U;
    vlSelf->SimTop__DOT__core__DOT__dataM[4U] = 0U;
    vlSelf->SimTop__DOT__core__DOT__dataM[5U] = 0U;
    vlSelf->SimTop__DOT__core__DOT__dataM[6U] = 0U;
    if ((0x400000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
        vlSelf->SimTop__DOT__core__DOT__dataM[0U] = 
            ((1U & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
             | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                 << 0x1fU) | (0x7ffffffeU & (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                             >> 1U))));
        vlSelf->SimTop__DOT__core__DOT__dataM[1U] = 
            ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                    >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                << 0x1fU) | (0x7ffffffeU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                >> 1U))));
        vlSelf->SimTop__DOT__core__DOT__dataM[2U] = 
            ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                    >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                << 0x1fU) | (0x7ffffffeU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                >> 1U))));
        vlSelf->SimTop__DOT__core__DOT__dataM[3U] = 
            ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                    >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                << 0x1fU) | (0x7ffffffeU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                >> 1U))));
        vlSelf->SimTop__DOT__core__DOT__dataM[4U] = 
            ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                    >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                << 0x1fU) | (0x7ffffffeU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                                >> 1U))));
        vlSelf->SimTop__DOT__core__DOT__dataM[5U] = 
            ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                    >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                << 0x1fU) | (0x7ffffffeU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                                >> 1U))));
        vlSelf->SimTop__DOT__core__DOT__dataM[6U] = 
            (0x3fffffU & ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                 >> 1U)) | (0x3ffffeU 
                                            & (vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                               >> 1U))));
    } else if ((0x200000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
        if ((0x100000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
            vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                = ((1U & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                   | (((0x80000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                        ? ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                            << 0x1eU) | (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                         >> 2U)) : 
                       ((0x40000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                         ? ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                             << 0x1eU) | (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                          >> 2U)) : 
                        ((0x20000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                          ? ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                              << 0x1eU) | (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                           >> 2U)) : 
                         ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                           ? ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                               << 0x1eU) | (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                            >> 2U))
                           : ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                               << 0x1eU) | (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                            >> 2U)))))) 
                      << 1U));
            vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                = ((((0x80000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                      ? ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                          << 0x1eU) | (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                       >> 2U)) : ((0x40000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                   ? 
                                                  ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                    << 0x1eU) 
                                                   | (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                      >> 2U))
                                                   : 
                                                  ((0x20000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                    ? 
                                                   ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                       >> 2U))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                     ? 
                                                    ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                        >> 2U))
                                                     : 
                                                    ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                        >> 2U)))))) 
                    >> 0x1fU) | (((0x80000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                   ? ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                       << 0x1eU) | 
                                      (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                       >> 2U)) : ((0x40000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                   ? 
                                                  ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                    << 0x1eU) 
                                                   | (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                      >> 2U))
                                                   : 
                                                  ((0x20000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                    ? 
                                                   ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                       >> 2U))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                     ? 
                                                    ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                        >> 2U))
                                                     : 
                                                    ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                        >> 2U)))))) 
                                 << 1U));
            vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                = ((((0x80000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                      ? ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                          << 0x1eU) | (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                       >> 2U)) : ((0x40000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                   ? 
                                                  ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                    << 0x1eU) 
                                                   | (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                      >> 2U))
                                                   : 
                                                  ((0x20000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                    ? 
                                                   ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                       >> 2U))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                     ? 
                                                    ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                        >> 2U))
                                                     : 
                                                    ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                        >> 2U)))))) 
                    >> 0x1fU) | (((0x80000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                   ? ((vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                       << 0x1eU) | 
                                      (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                       >> 2U)) : ((0x40000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                   ? 
                                                  ((vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                    << 0x1eU) 
                                                   | (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                      >> 2U))
                                                   : 
                                                  ((0x20000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                    ? 
                                                   ((vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                       >> 2U))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                     ? 
                                                    ((vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                        >> 2U))
                                                     : 
                                                    ((vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                        >> 2U)))))) 
                                 << 1U));
            vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                = ((((0x80000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                      ? ((vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                          << 0x1eU) | (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                       >> 2U)) : ((0x40000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                   ? 
                                                  ((vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                    << 0x1eU) 
                                                   | (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                      >> 2U))
                                                   : 
                                                  ((0x20000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                    ? 
                                                   ((vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                       >> 2U))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                     ? 
                                                    ((vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                        >> 2U))
                                                     : 
                                                    ((vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                        >> 2U)))))) 
                    >> 0x1fU) | (((0x80000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                   ? ((vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                       << 0x1eU) | 
                                      (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                       >> 2U)) : ((0x40000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                   ? 
                                                  ((vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                                    << 0x1eU) 
                                                   | (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                      >> 2U))
                                                   : 
                                                  ((0x20000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                    ? 
                                                   ((vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                       >> 2U))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                     ? 
                                                    ((vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                        >> 2U))
                                                     : 
                                                    ((vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                        >> 2U)))))) 
                                 << 1U));
            vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                = ((((0x80000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                      ? ((vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                          << 0x1eU) | (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                       >> 2U)) : ((0x40000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                   ? 
                                                  ((vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                                    << 0x1eU) 
                                                   | (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                      >> 2U))
                                                   : 
                                                  ((0x20000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                    ? 
                                                   ((vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                       >> 2U))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                     ? 
                                                    ((vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                        >> 2U))
                                                     : 
                                                    ((vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                        >> 2U)))))) 
                    >> 0x1fU) | (((0x80000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                   ? ((vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                       << 0x1eU) | 
                                      (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                       >> 2U)) : ((0x40000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                   ? 
                                                  ((vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                                    << 0x1eU) 
                                                   | (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                                      >> 2U))
                                                   : 
                                                  ((0x20000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                    ? 
                                                   ((vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                                       >> 2U))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                     ? 
                                                    ((vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                                        >> 2U))
                                                     : 
                                                    ((vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                                        >> 2U)))))) 
                                 << 1U));
            vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                = ((((0x80000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                      ? ((vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                          << 0x1eU) | (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                       >> 2U)) : ((0x40000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                   ? 
                                                  ((vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                                    << 0x1eU) 
                                                   | (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                                      >> 2U))
                                                   : 
                                                  ((0x20000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                    ? 
                                                   ((vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                                       >> 2U))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                     ? 
                                                    ((vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                                        >> 2U))
                                                     : 
                                                    ((vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                                        >> 2U)))))) 
                    >> 0x1fU) | (((0x80000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                   ? ((vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                       << 0x1eU) | 
                                      (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                       >> 2U)) : ((0x40000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                   ? 
                                                  ((vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                                    << 0x1eU) 
                                                   | (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                                      >> 2U))
                                                   : 
                                                  ((0x20000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                    ? 
                                                   ((vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                                       >> 2U))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                     ? 
                                                    ((vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                                        >> 2U))
                                                     : 
                                                    ((vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                                        >> 2U)))))) 
                                 << 1U));
            vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                = (0x3fffffU & ((((0x80000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                   ? ((vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                       << 0x1eU) | 
                                      (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                       >> 2U)) : ((0x40000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                   ? 
                                                  ((vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                                    << 0x1eU) 
                                                   | (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                                      >> 2U))
                                                   : 
                                                  ((0x20000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                    ? 
                                                   ((vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                                       >> 2U))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                     ? 
                                                    ((vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                                        >> 2U))
                                                     : 
                                                    ((vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                                      << 0x1eU) 
                                                     | (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                                        >> 2U)))))) 
                                 >> 0x1fU) | (0x3ffffeU 
                                              & (((0x80000U 
                                                   & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                   ? 
                                                  (vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                                   >> 2U)
                                                   : 
                                                  ((0x40000U 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                    ? 
                                                   (vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                                    >> 2U)
                                                    : 
                                                   ((0x20000U 
                                                     & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                     ? 
                                                    (vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                                     >> 2U)
                                                     : 
                                                    ((0x10000U 
                                                      & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])
                                                      ? 
                                                     (vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                                      >> 2U)
                                                      : 
                                                     (vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                                      >> 2U))))) 
                                                 << 1U))));
        } else if ((0x80000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
            if ((0x40000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
                if ((0x20000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
                    if ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
                        vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                            = ((1U & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                               | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                   << 0x1fU) | (0x7ffffffeU 
                                                & (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                   >> 1U))));
                        vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                            = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                      >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                  << 0x1fU) 
                                                 | (0x7ffffffeU 
                                                    & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                       >> 1U))));
                        vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                            = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                      >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                  << 0x1fU) 
                                                 | (0x7ffffffeU 
                                                    & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                       >> 1U))));
                        vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                            = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                      >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                                  << 0x1fU) 
                                                 | (0x7ffffffeU 
                                                    & (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                       >> 1U))));
                        vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                            = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                      >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                                  << 0x1fU) 
                                                 | (0x7ffffffeU 
                                                    & (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                                       >> 1U))));
                        vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                            = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                      >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                                  << 0x1fU) 
                                                 | (0x7ffffffeU 
                                                    & (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                                       >> 1U))));
                        vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                            = (0x3fffffU & ((1U & (
                                                   vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                                   >> 1U)) 
                                            | (0x3ffffeU 
                                               & (vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                                  >> 1U))));
                    } else {
                        vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                            = ((0x3fU & vlSelf->SimTop__DOT__core__DOT__dataM[2U]) 
                               | (((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd) 
                                   << 0x16U) | (0x3fffc0U 
                                                & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                   >> 1U))));
                        vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                            = ((0x3fU & ((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd) 
                                         >> 0xaU)) 
                               | ((0x3fffc0U & ((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd) 
                                                >> 0xaU)) 
                                  | ((IData)((vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                                              >> 0x20U)) 
                                     << 0x16U)));
                        vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                            = ((0x3fU & ((IData)((vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                                                  >> 0x20U)) 
                                         >> 0xaU)) 
                               | ((0x3fffc0U & ((IData)(
                                                        (vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                                                         >> 0x20U)) 
                                                >> 0xaU)) 
                                  | ((IData)((((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                               << 0x29U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                  << 9U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                    >> 0x17U)))) 
                                     << 0x16U)));
                        vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                            = ((0x3fU & ((IData)((((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                   << 0x29U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                      << 9U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                        >> 0x17U)))) 
                                         >> 0xaU)) 
                               | ((0x3fffc0U & ((IData)(
                                                        (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                          << 0x29U) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                             << 9U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                               >> 0x17U)))) 
                                                >> 0xaU)) 
                                  | ((IData)(((((QData)((IData)(
                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                << 0x29U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                     >> 0x17U))) 
                                              >> 0x20U)) 
                                     << 0x16U)));
                        vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                            = (0x3fffffU & ((0x3fU 
                                             & ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                           << 0x29U) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                                >> 0x17U))) 
                                                         >> 0x20U)) 
                                                >> 0xaU)) 
                                            | (0x3fffc0U 
                                               & ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                             << 0x29U) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                                  >> 0x17U))) 
                                                           >> 0x20U)) 
                                                  >> 0xaU))));
                        vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                            = ((1U & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                               | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                   << 0x1fU) | (0x7ffffffeU 
                                                & (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                   >> 1U))));
                        vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                            = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                      >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                  << 0x1fU) 
                                                 | (0x7ffffffeU 
                                                    & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                       >> 1U))));
                        vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                            = ((0xffffffc0U & vlSelf->SimTop__DOT__core__DOT__dataM[2U]) 
                               | ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                         >> 1U)) | 
                                  (0x3eU & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                            >> 1U))));
                    }
                } else if ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
                    vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                        = ((0x3fU & vlSelf->SimTop__DOT__core__DOT__dataM[2U]) 
                           | (((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd) 
                               << 0x16U) | (0x3fffc0U 
                                            & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                               >> 1U))));
                    vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                        = ((0x3fU & ((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd) 
                                     >> 0xaU)) | ((0x3fffc0U 
                                                   & ((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd) 
                                                      >> 0xaU)) 
                                                  | ((IData)(
                                                             (vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                                                              >> 0x20U)) 
                                                     << 0x16U)));
                    vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                        = ((0x3fU & ((IData)((vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                                              >> 0x20U)) 
                                     >> 0xaU)) | ((0x3fffc0U 
                                                   & ((IData)(
                                                              (vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                                                               >> 0x20U)) 
                                                      >> 0xaU)) 
                                                  | ((IData)(
                                                             (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                               << 0x29U) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                                  << 9U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                                    >> 0x17U)))) 
                                                     << 0x16U)));
                    vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                        = ((0x3fU & ((IData)((((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                               << 0x29U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                  << 9U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                    >> 0x17U)))) 
                                     >> 0xaU)) | ((0x3fffc0U 
                                                   & ((IData)(
                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                                << 0x29U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                                   << 9U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                                     >> 0x17U)))) 
                                                      >> 0xaU)) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                                << 0x29U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                                   << 9U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                                     >> 0x17U))) 
                                                              >> 0x20U)) 
                                                     << 0x16U)));
                    vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                        = (0x3fffffU & ((0x3fU & ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                             << 0x29U) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                                  >> 0x17U))) 
                                                           >> 0x20U)) 
                                                  >> 0xaU)) 
                                        | (0x3fffc0U 
                                           & ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                         << 0x29U) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                            << 9U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                              >> 0x17U))) 
                                                       >> 0x20U)) 
                                              >> 0xaU))));
                    vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                        = ((1U & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                           | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                               << 0x1fU) | (0x7ffffffeU 
                                            & (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                               >> 1U))));
                    vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                        = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                  >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                              << 0x1fU) 
                                             | (0x7ffffffeU 
                                                & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                   >> 1U))));
                    vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                        = ((0xffffffc0U & vlSelf->SimTop__DOT__core__DOT__dataM[2U]) 
                           | ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                     >> 1U)) | (0x3eU 
                                                & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                   >> 1U))));
                } else {
                    vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                        = ((0x3fU & vlSelf->SimTop__DOT__core__DOT__dataM[2U]) 
                           | (((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd) 
                               << 0x16U) | (0x3fffc0U 
                                            & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                               >> 1U))));
                    vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                        = ((0x3fU & ((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd) 
                                     >> 0xaU)) | ((0x3fffc0U 
                                                   & ((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd) 
                                                      >> 0xaU)) 
                                                  | ((IData)(
                                                             (vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                                                              >> 0x20U)) 
                                                     << 0x16U)));
                    vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                        = ((0x3fU & ((IData)((vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                                              >> 0x20U)) 
                                     >> 0xaU)) | ((0x3fffc0U 
                                                   & ((IData)(
                                                              (vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                                                               >> 0x20U)) 
                                                      >> 0xaU)) 
                                                  | ((IData)(
                                                             (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                               << 0x29U) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                                  << 9U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                                    >> 0x17U)))) 
                                                     << 0x16U)));
                    vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                        = ((0x3fU & ((IData)((((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                               << 0x29U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                  << 9U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                    >> 0x17U)))) 
                                     >> 0xaU)) | ((0x3fffc0U 
                                                   & ((IData)(
                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                                << 0x29U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                                   << 9U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                                     >> 0x17U)))) 
                                                      >> 0xaU)) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                                << 0x29U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                                   << 9U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                                     >> 0x17U))) 
                                                              >> 0x20U)) 
                                                     << 0x16U)));
                    vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                        = (0x3fffffU & ((0x3fU & ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                             << 0x29U) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                                  >> 0x17U))) 
                                                           >> 0x20U)) 
                                                  >> 0xaU)) 
                                        | (0x3fffc0U 
                                           & ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                         << 0x29U) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                            << 9U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                              >> 0x17U))) 
                                                       >> 0x20U)) 
                                              >> 0xaU))));
                    vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                        = ((1U & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                           | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                               << 0x1fU) | (0x7ffffffeU 
                                            & (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                               >> 1U))));
                    vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                        = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                  >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                              << 0x1fU) 
                                             | (0x7ffffffeU 
                                                & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                   >> 1U))));
                    vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                        = ((0xffffffc0U & vlSelf->SimTop__DOT__core__DOT__dataM[2U]) 
                           | ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                     >> 1U)) | (0x3eU 
                                                & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                   >> 1U))));
                }
            } else if ((0x20000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
                if ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
                    vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                        = ((0x3fU & vlSelf->SimTop__DOT__core__DOT__dataM[2U]) 
                           | (((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd) 
                               << 0x16U) | (0x3fffc0U 
                                            & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                               >> 1U))));
                    vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                        = ((0x3fU & ((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd) 
                                     >> 0xaU)) | ((0x3fffc0U 
                                                   & ((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd) 
                                                      >> 0xaU)) 
                                                  | ((IData)(
                                                             (vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                                                              >> 0x20U)) 
                                                     << 0x16U)));
                    vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                        = ((0x3fU & ((IData)((vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                                              >> 0x20U)) 
                                     >> 0xaU)) | ((0x3fffc0U 
                                                   & ((IData)(
                                                              (vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                                                               >> 0x20U)) 
                                                      >> 0xaU)) 
                                                  | ((IData)(
                                                             (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                               << 0x29U) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                                  << 9U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                                    >> 0x17U)))) 
                                                     << 0x16U)));
                    vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                        = ((0x3fU & ((IData)((((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                               << 0x29U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                  << 9U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                    >> 0x17U)))) 
                                     >> 0xaU)) | ((0x3fffc0U 
                                                   & ((IData)(
                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                                << 0x29U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                                   << 9U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                                     >> 0x17U)))) 
                                                      >> 0xaU)) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                                << 0x29U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                                   << 9U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                                     >> 0x17U))) 
                                                              >> 0x20U)) 
                                                     << 0x16U)));
                    vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                        = (0x3fffffU & ((0x3fU & ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                             << 0x29U) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                                  >> 0x17U))) 
                                                           >> 0x20U)) 
                                                  >> 0xaU)) 
                                        | (0x3fffc0U 
                                           & ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                         << 0x29U) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                            << 9U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                              >> 0x17U))) 
                                                       >> 0x20U)) 
                                              >> 0xaU))));
                    vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                        = ((1U & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                           | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                               << 0x1fU) | (0x7ffffffeU 
                                            & (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                               >> 1U))));
                    vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                        = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                  >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                              << 0x1fU) 
                                             | (0x7ffffffeU 
                                                & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                   >> 1U))));
                    vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                        = ((0xffffffc0U & vlSelf->SimTop__DOT__core__DOT__dataM[2U]) 
                           | ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                     >> 1U)) | (0x3eU 
                                                & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                   >> 1U))));
                } else {
                    vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                        = ((0x3fU & vlSelf->SimTop__DOT__core__DOT__dataM[2U]) 
                           | (((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd) 
                               << 0x16U) | (0x3fffc0U 
                                            & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                               >> 1U))));
                    vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                        = ((0x3fU & ((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd) 
                                     >> 0xaU)) | ((0x3fffc0U 
                                                   & ((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd) 
                                                      >> 0xaU)) 
                                                  | ((IData)(
                                                             (vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                                                              >> 0x20U)) 
                                                     << 0x16U)));
                    vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                        = ((0x3fU & ((IData)((vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                                              >> 0x20U)) 
                                     >> 0xaU)) | ((0x3fffc0U 
                                                   & ((IData)(
                                                              (vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                                                               >> 0x20U)) 
                                                      >> 0xaU)) 
                                                  | ((IData)(
                                                             (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                               << 0x29U) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                                  << 9U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                                    >> 0x17U)))) 
                                                     << 0x16U)));
                    vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                        = ((0x3fU & ((IData)((((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                               << 0x29U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                  << 9U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                    >> 0x17U)))) 
                                     >> 0xaU)) | ((0x3fffc0U 
                                                   & ((IData)(
                                                              (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                                << 0x29U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                                   << 9U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                                     >> 0x17U)))) 
                                                      >> 0xaU)) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                                << 0x29U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                                   << 9U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                                     >> 0x17U))) 
                                                              >> 0x20U)) 
                                                     << 0x16U)));
                    vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                        = (0x3fffffU & ((0x3fU & ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                             << 0x29U) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                                << 9U) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                                  >> 0x17U))) 
                                                           >> 0x20U)) 
                                                  >> 0xaU)) 
                                        | (0x3fffc0U 
                                           & ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                         << 0x29U) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                            << 9U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                              >> 0x17U))) 
                                                       >> 0x20U)) 
                                              >> 0xaU))));
                    vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                        = ((1U & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                           | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                               << 0x1fU) | (0x7ffffffeU 
                                            & (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                               >> 1U))));
                    vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                        = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                  >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                              << 0x1fU) 
                                             | (0x7ffffffeU 
                                                & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                   >> 1U))));
                    vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                        = ((0xffffffc0U & vlSelf->SimTop__DOT__core__DOT__dataM[2U]) 
                           | ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                     >> 1U)) | (0x3eU 
                                                & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                   >> 1U))));
                }
            } else if ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
                vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                    = ((0x3fU & vlSelf->SimTop__DOT__core__DOT__dataM[2U]) 
                       | (((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd) 
                           << 0x16U) | (0x3fffc0U & 
                                        (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                         >> 1U))));
                vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                    = ((0x3fU & ((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd) 
                                 >> 0xaU)) | ((0x3fffc0U 
                                               & ((IData)(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd) 
                                                  >> 0xaU)) 
                                              | ((IData)(
                                                         (vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                                                          >> 0x20U)) 
                                                 << 0x16U)));
                vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                    = ((0x3fU & ((IData)((vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                                          >> 0x20U)) 
                                 >> 0xaU)) | ((0x3fffc0U 
                                               & ((IData)(
                                                          (vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd 
                                                           >> 0x20U)) 
                                                  >> 0xaU)) 
                                              | ((IData)(
                                                         (((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                           << 0x29U) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                                >> 0x17U)))) 
                                                 << 0x16U)));
                vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                    = ((0x3fU & ((IData)((((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                           << 0x29U) 
                                          | (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                              << 9U) 
                                             | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                >> 0x17U)))) 
                                 >> 0xaU)) | ((0x3fffc0U 
                                               & ((IData)(
                                                          (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                            << 0x29U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                               << 9U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                                 >> 0x17U)))) 
                                                  >> 0xaU)) 
                                              | ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                            << 0x29U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                               << 9U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                                 >> 0x17U))) 
                                                          >> 0x20U)) 
                                                 << 0x16U)));
                vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                    = (0x3fffffU & ((0x3fU & ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                         << 0x29U) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                            << 9U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                              >> 0x17U))) 
                                                       >> 0x20U)) 
                                              >> 0xaU)) 
                                    | (0x3fffc0U & 
                                       ((IData)(((((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                   << 0x29U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                      << 9U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                        >> 0x17U))) 
                                                 >> 0x20U)) 
                                        >> 0xaU))));
                vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                    = ((1U & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                       | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                           << 0x1fU) | (0x7ffffffeU 
                                        & (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                           >> 1U))));
                vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                    = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                              >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                          << 0x1fU) 
                                         | (0x7ffffffeU 
                                            & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                               >> 1U))));
                vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                    = ((0xffffffc0U & vlSelf->SimTop__DOT__core__DOT__dataM[2U]) 
                       | ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                 >> 1U)) | (0x3eU & 
                                            (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                             >> 1U))));
            } else {
                vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                    = ((1U & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                       | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                           << 0x1fU) | (0x7ffffffeU 
                                        & (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                           >> 1U))));
                vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                    = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                              >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                          << 0x1fU) 
                                         | (0x7ffffffeU 
                                            & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                               >> 1U))));
                vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                    = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                              >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                          << 0x1fU) 
                                         | (0x7ffffffeU 
                                            & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                               >> 1U))));
                vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                    = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                              >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                          << 0x1fU) 
                                         | (0x7ffffffeU 
                                            & (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                               >> 1U))));
                vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                    = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                              >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                          << 0x1fU) 
                                         | (0x7ffffffeU 
                                            & (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                               >> 1U))));
                vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                    = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                              >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                          << 0x1fU) 
                                         | (0x7ffffffeU 
                                            & (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                               >> 1U))));
                vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                    = (0x3fffffU & ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                           >> 1U)) 
                                    | (0x3ffffeU & 
                                       (vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                        >> 1U))));
            }
        } else {
            vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                = ((1U & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                   | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                       << 0x1fU) | (0x7ffffffeU & (
                                                   vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                   >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                          >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                      << 0x1fU) | (0x7ffffffeU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                      >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                          >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                      << 0x1fU) | (0x7ffffffeU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                      >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                          >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                      << 0x1fU) | (0x7ffffffeU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                      >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                          >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                      << 0x1fU) | (0x7ffffffeU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                                      >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                          >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                      << 0x1fU) | (0x7ffffffeU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                                      >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                = (0x3fffffU & ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                       >> 1U)) | (0x3ffffeU 
                                                  & (vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                                     >> 1U))));
        }
    } else if ((0x100000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
        vlSelf->SimTop__DOT__core__DOT__dataM[0U] = 
            ((1U & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
             | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                 << 0x1fU) | (0x7ffffffeU & (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                             >> 1U))));
        vlSelf->SimTop__DOT__core__DOT__dataM[1U] = 
            ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                    >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                << 0x1fU) | (0x7ffffffeU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                >> 1U))));
        vlSelf->SimTop__DOT__core__DOT__dataM[2U] = 
            ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                    >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                << 0x1fU) | (0x7ffffffeU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                >> 1U))));
        vlSelf->SimTop__DOT__core__DOT__dataM[3U] = 
            ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                    >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                << 0x1fU) | (0x7ffffffeU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                >> 1U))));
        vlSelf->SimTop__DOT__core__DOT__dataM[4U] = 
            ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                    >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                << 0x1fU) | (0x7ffffffeU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                                >> 1U))));
        vlSelf->SimTop__DOT__core__DOT__dataM[5U] = 
            ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                    >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                << 0x1fU) | (0x7ffffffeU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                                >> 1U))));
        vlSelf->SimTop__DOT__core__DOT__dataM[6U] = 
            (0x3fffffU & ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                 >> 1U)) | (0x3ffffeU 
                                            & (vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                               >> 1U))));
    } else if ((0x80000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
        if ((0x40000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
            vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                = ((1U & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                   | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                       << 0x1fU) | (0x7ffffffeU & (
                                                   vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                   >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                          >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                      << 0x1fU) | (0x7ffffffeU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                      >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                          >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                      << 0x1fU) | (0x7ffffffeU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                      >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                          >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                      << 0x1fU) | (0x7ffffffeU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                      >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                          >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                      << 0x1fU) | (0x7ffffffeU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                                      >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                          >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                      << 0x1fU) | (0x7ffffffeU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                                      >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                = (0x3fffffU & ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                       >> 1U)) | (0x3ffffeU 
                                                  & (vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                                     >> 1U))));
        } else if ((0x20000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
            vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                = ((1U & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                   | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                       << 0x1fU) | (0x7ffffffeU & (
                                                   vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                   >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                          >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                      << 0x1fU) | (0x7ffffffeU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                      >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                          >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                      << 0x1fU) | (0x7ffffffeU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                      >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                          >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                      << 0x1fU) | (0x7ffffffeU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                      >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                          >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                      << 0x1fU) | (0x7ffffffeU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                                      >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                          >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                      << 0x1fU) | (0x7ffffffeU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                                      >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                = (0x3fffffU & ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                       >> 1U)) | (0x3ffffeU 
                                                  & (vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                                     >> 1U))));
        } else if ((0x10000U & vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) {
            vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                = ((1U & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                   | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                       << 0x1fU) | (0x7ffffffeU & (
                                                   vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                   >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                          >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                      << 0x1fU) | (0x7ffffffeU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                      >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                          >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                      << 0x1fU) | (0x7ffffffeU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                      >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                          >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                      << 0x1fU) | (0x7ffffffeU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                      >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                          >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                      << 0x1fU) | (0x7ffffffeU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                                      >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                          >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                      << 0x1fU) | (0x7ffffffeU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                                      >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                = (0x3fffffU & ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                       >> 1U)) | (0x3ffffeU 
                                                  & (vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                                     >> 1U))));
        } else {
            vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                = ((0x3fU & vlSelf->SimTop__DOT__core__DOT__dataM[2U]) 
                   | (((IData)((((QData)((IData)(vlSelf->SimTop__DOT__dresp[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__dresp[0U])))) 
                       << 0x16U) | (0x3fffc0U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                 >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[3U] 
                = ((0x3fU & ((IData)((((QData)((IData)(
                                                       vlSelf->SimTop__DOT__dresp[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__dresp[0U])))) 
                             >> 0xaU)) | ((0x3fffc0U 
                                           & ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__dresp[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->SimTop__DOT__dresp[0U])))) 
                                              >> 0xaU)) 
                                          | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__dresp[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->SimTop__DOT__dresp[0U]))) 
                                                      >> 0x20U)) 
                                             << 0x16U)));
            vlSelf->SimTop__DOT__core__DOT__dataM[4U] 
                = ((0x3fU & ((IData)(((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dresp[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__dresp[0U]))) 
                                      >> 0x20U)) >> 0xaU)) 
                   | ((0x3fffc0U & ((IData)(((((QData)((IData)(
                                                               vlSelf->SimTop__DOT__dresp[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->SimTop__DOT__dresp[0U]))) 
                                             >> 0x20U)) 
                                    >> 0xaU)) | ((IData)(
                                                         (((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                           << 0x29U) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                                >> 0x17U)))) 
                                                 << 0x16U)));
            vlSelf->SimTop__DOT__core__DOT__dataM[5U] 
                = ((0x3fU & ((IData)((((QData)((IData)(
                                                       vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                       << 0x29U) | 
                                      (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                        << 9U) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                  >> 0x17U)))) 
                             >> 0xaU)) | ((0x3fffc0U 
                                           & ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                        << 0x29U) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                             >> 0x17U)))) 
                                              >> 0xaU)) 
                                          | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                        << 0x29U) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                           << 9U) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                             >> 0x17U))) 
                                                      >> 0x20U)) 
                                             << 0x16U)));
            vlSelf->SimTop__DOT__core__DOT__dataM[6U] 
                = (0x3fffffU & ((0x3fU & ((IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                     << 0x29U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                        << 9U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                          >> 0x17U))) 
                                                   >> 0x20U)) 
                                          >> 0xaU)) 
                                | (0x3fffc0U & ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                                           << 0x29U) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                                              << 9U) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                                                >> 0x17U))) 
                                                         >> 0x20U)) 
                                                >> 0xaU))));
            vlSelf->SimTop__DOT__core__DOT__dataM[0U] 
                = ((1U & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                   | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                       << 0x1fU) | (0x7ffffffeU & (
                                                   vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                                   >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[1U] 
                = ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                          >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                      << 0x1fU) | (0x7ffffffeU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                      >> 1U))));
            vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                = ((0xffffffc0U & vlSelf->SimTop__DOT__core__DOT__dataM[2U]) 
                   | ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                             >> 1U)) | (0x3eU & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                 >> 1U))));
        }
    } else {
        vlSelf->SimTop__DOT__core__DOT__dataM[0U] = 
            ((1U & vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
             | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                 << 0x1fU) | (0x7ffffffeU & (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                             >> 1U))));
        vlSelf->SimTop__DOT__core__DOT__dataM[1U] = 
            ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                    >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                << 0x1fU) | (0x7ffffffeU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataE_next[1U] 
                                                >> 1U))));
        vlSelf->SimTop__DOT__core__DOT__dataM[2U] = 
            ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                    >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                << 0x1fU) | (0x7ffffffeU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                >> 1U))));
        vlSelf->SimTop__DOT__core__DOT__dataM[3U] = 
            ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                    >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                << 0x1fU) | (0x7ffffffeU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataE_next[3U] 
                                                >> 1U))));
        vlSelf->SimTop__DOT__core__DOT__dataM[4U] = 
            ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                    >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                << 0x1fU) | (0x7ffffffeU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataE_next[4U] 
                                                >> 1U))));
        vlSelf->SimTop__DOT__core__DOT__dataM[5U] = 
            ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                    >> 1U)) | ((vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                << 0x1fU) | (0x7ffffffeU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataE_next[5U] 
                                                >> 1U))));
        vlSelf->SimTop__DOT__core__DOT__dataM[6U] = 
            (0x3fffffU & ((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                 >> 1U)) | (0x3ffffeU 
                                            & (vlSelf->SimTop__DOT__core__DOT__dataE_next[6U] 
                                               >> 1U))));
    }
    vlSelf->SimTop__DOT__mux__DOT__select = 0U;
    vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i = 0U;
    {
        while (VL_GTS_III(1,32,32, 2U, vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i)) {
            if ((1U & ((0x12dU >= (0x1ffU & ((IData)(0x96U) 
                                             + ((IData)(0x97U) 
                                                * vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i))))
                        ? (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                           (0xfU & (((IData)(0x96U) 
                                     + ((IData)(0x97U) 
                                        * vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i)) 
                                    >> 5U))] >> (0x1fU 
                                                 & ((IData)(0x96U) 
                                                    + 
                                                    ((IData)(0x97U) 
                                                     * vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i))))
                        : (IData)(vlSelf->SimTop__DOT__mux__DOT____Vxrand3)))) {
                vlSelf->SimTop__DOT__mux__DOT__select 
                    = vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i;
                goto __Vlabel1;
            }
            vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i);
        }
        __Vlabel1: ;
    }
    if (vlSelf->SimTop__DOT__mux__DOT__busy) {
        vlSelf->SimTop__DOT__oreq[0U] = ((0x12dU >= 
                                          (0x1ffU & 
                                           ((IData)(0x97U) 
                                            * vlSelf->SimTop__DOT__mux__DOT__index)))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x97U) 
                                                   * vlSelf->SimTop__DOT__mux__DOT__index)))
                                               ? 0U
                                               : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x97U) 
                                                        * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlSelf->SimTop__DOT__mux__DOT__index))))) 
                                             | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                (0xfU 
                                                 & (((IData)(0x97U) 
                                                     * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x97U) 
                                                    * vlSelf->SimTop__DOT__mux__DOT__index))))
                                          : vlSelf->SimTop__DOT__mux__DOT____Vxrand1[0U]);
        vlSelf->SimTop__DOT__oreq[1U] = ((0x12dU >= 
                                          (0x1ffU & 
                                           ((IData)(0x97U) 
                                            * vlSelf->SimTop__DOT__mux__DOT__index)))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x97U) 
                                                   * vlSelf->SimTop__DOT__mux__DOT__index)))
                                               ? 0U
                                               : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                  ((IData)(2U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x97U) 
                                                        * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlSelf->SimTop__DOT__mux__DOT__index))))) 
                                             | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                ((IData)(1U) 
                                                 + 
                                                 (0xfU 
                                                  & (((IData)(0x97U) 
                                                      * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                     >> 5U)))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x97U) 
                                                    * vlSelf->SimTop__DOT__mux__DOT__index))))
                                          : vlSelf->SimTop__DOT__mux__DOT____Vxrand1[1U]);
        vlSelf->SimTop__DOT__oreq[2U] = ((0x12dU >= 
                                          (0x1ffU & 
                                           ((IData)(0x97U) 
                                            * vlSelf->SimTop__DOT__mux__DOT__index)))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x97U) 
                                                   * vlSelf->SimTop__DOT__mux__DOT__index)))
                                               ? 0U
                                               : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                  ((IData)(3U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x97U) 
                                                        * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlSelf->SimTop__DOT__mux__DOT__index))))) 
                                             | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                ((IData)(2U) 
                                                 + 
                                                 (0xfU 
                                                  & (((IData)(0x97U) 
                                                      * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                     >> 5U)))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x97U) 
                                                    * vlSelf->SimTop__DOT__mux__DOT__index))))
                                          : vlSelf->SimTop__DOT__mux__DOT____Vxrand1[2U]);
        vlSelf->SimTop__DOT__oreq[3U] = ((0x12dU >= 
                                          (0x1ffU & 
                                           ((IData)(0x97U) 
                                            * vlSelf->SimTop__DOT__mux__DOT__index)))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x97U) 
                                                   * vlSelf->SimTop__DOT__mux__DOT__index)))
                                               ? 0U
                                               : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                  ((IData)(4U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x97U) 
                                                        * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlSelf->SimTop__DOT__mux__DOT__index))))) 
                                             | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                ((IData)(3U) 
                                                 + 
                                                 (0xfU 
                                                  & (((IData)(0x97U) 
                                                      * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                     >> 5U)))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0x97U) 
                                                    * vlSelf->SimTop__DOT__mux__DOT__index))))
                                          : vlSelf->SimTop__DOT__mux__DOT____Vxrand1[3U]);
        vlSelf->SimTop__DOT__oreq[4U] = (0x7fffffU 
                                         & ((0x12dU 
                                             >= (0x1ffU 
                                                 & ((IData)(0x97U) 
                                                    * vlSelf->SimTop__DOT__mux__DOT__index)))
                                             ? (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x97U) 
                                                      * vlSelf->SimTop__DOT__mux__DOT__index)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                  ((IData)(5U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x97U) 
                                                        * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlSelf->SimTop__DOT__mux__DOT__index))))) 
                                                | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                                   ((IData)(4U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0x97U) 
                                                         * vlSelf->SimTop__DOT__mux__DOT__index) 
                                                        >> 5U)))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x97U) 
                                                       * vlSelf->SimTop__DOT__mux__DOT__index))))
                                             : vlSelf->SimTop__DOT__mux__DOT____Vxrand1[4U]));
    } else {
        vlSelf->SimTop__DOT__oreq[0U] = 0U;
        vlSelf->SimTop__DOT__oreq[1U] = 0U;
        vlSelf->SimTop__DOT__oreq[2U] = 0U;
        vlSelf->SimTop__DOT__oreq[3U] = 0U;
        vlSelf->SimTop__DOT__oreq[4U] = 0U;
    }
    vlSelf->SimTop__DOT__core__DOT__dataH[4U] = (0x140U 
                                                 | (0x1fU 
                                                    & vlSelf->SimTop__DOT__core__DOT__dataH[4U]));
    vlSelf->SimTop__DOT__core__DOT__dataH[0U] = (0xffffffe0U 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataH[0U]);
    if (((((((((((((((((((((1U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                            >> 0xfU))) 
                           | (2U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                              >> 0xfU)))) 
                          | (3U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                             >> 0xfU)))) 
                         | (4U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                            >> 0xfU)))) 
                        | (8U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                           >> 0xfU)))) 
                       | (0x16U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                             >> 0xfU)))) 
                      | (0x17U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                            >> 0xfU)))) 
                     | (0x18U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                           >> 0xfU)))) 
                    | (0x19U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                          >> 0xfU)))) 
                   | (0x1aU == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                         >> 0xfU)))) 
                  | (0x20U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                        >> 0xfU)))) 
                 | (0x21U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                       >> 0xfU)))) 
                | (0x22U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                      >> 0xfU)))) | 
               (0x23U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                   >> 0xfU)))) | (0x29U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                      >> 0xfU)))) 
             | (0x2aU == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                   >> 0xfU)))) | (0x2bU 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                      >> 0xfU)))) 
           | (0x2cU == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                 >> 0xfU)))) | (0x2dU 
                                                == 
                                                (0x7fU 
                                                 & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                    >> 0xfU)))) 
         | (0x2eU == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                               >> 0xfU))))) {
        if ((((~ vlSelf->SimTop__DOT__core__DOT__dataD[0U]) 
              & ((((~ (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                       >> 1U)) & ((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                            >> 0x10U)) 
                                  == (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                               >> 2U)))) 
                  | ((~ vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                     & ((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                  >> 0x10U)) == (0x1fU 
                                                 & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                    >> 1U))))) 
                 | ((~ vlSelf->SimTop__DOT__core__DOT__dataW[0U]) 
                    & ((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                 >> 0x10U)) == (0x1fU 
                                                & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                   >> 1U)))))) 
             & (0U != (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                >> 0x10U))))) {
            vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                = (0x140U | (0x1fU & vlSelf->SimTop__DOT__core__DOT__dataH[4U]));
            vlSelf->SimTop__DOT__core__DOT__dataH[0U] 
                = (0xffffffe0U & vlSelf->SimTop__DOT__core__DOT__dataH[0U]);
        } else {
            vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                = (0x20U | (0x1fU & vlSelf->SimTop__DOT__core__DOT__dataH[4U]));
            vlSelf->SimTop__DOT__core__DOT__dataH[0U] 
                = (1U | (0xffffffe0U & vlSelf->SimTop__DOT__core__DOT__dataH[0U]));
        }
    } else if (((((((((((((((((((((((((((((((0xaU == 
                                             (0x7fU 
                                              & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                 >> 0xfU))) 
                                            | (0xeU 
                                               == (0x7fU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                      >> 0xfU)))) 
                                           | (0xdU 
                                              == (0x7fU 
                                                  & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                     >> 0xfU)))) 
                                          | (0xcU == 
                                             (0x7fU 
                                              & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                 >> 0xfU)))) 
                                         | (0xbU == 
                                            (0x7fU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                >> 0xfU)))) 
                                        | (9U == (0x7fU 
                                                  & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                     >> 0xfU)))) 
                                       | (0x1bU == 
                                          (0x7fU & 
                                           (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                            >> 0xfU)))) 
                                      | (0x1cU == (0x7fU 
                                                   & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                      >> 0xfU)))) 
                                     | (0x1dU == (0x7fU 
                                                  & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                     >> 0xfU)))) 
                                    | (0x1eU == (0x7fU 
                                                 & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                    >> 0xfU)))) 
                                   | (0x23U == (0x7fU 
                                                & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                   >> 0xfU)))) 
                                  | (0x24U == (0x7fU 
                                               & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                  >> 0xfU)))) 
                                 | (0x25U == (0x7fU 
                                              & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                 >> 0xfU)))) 
                                | (0x26U == (0x7fU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                >> 0xfU)))) 
                               | (0x27U == (0x7fU & 
                                            (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                             >> 0xfU)))) 
                              | (0x28U == (0x7fU & 
                                           (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                            >> 0xfU)))) 
                             | (0x2fU == (0x7fU & (
                                                   vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                   >> 0xfU)))) 
                            | (0x30U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                  >> 0xfU)))) 
                           | (0x31U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                 >> 0xfU)))) 
                          | (0x1fU == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                >> 0xfU)))) 
                         | (0x32U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                               >> 0xfU)))) 
                        | (0x33U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                              >> 0xfU)))) 
                       | (0x34U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                             >> 0xfU)))) 
                      | (0x35U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                            >> 0xfU)))) 
                     | (0x36U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                           >> 0xfU)))) 
                    | (0x37U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                          >> 0xfU)))) 
                   | (0x38U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                         >> 0xfU)))) 
                  | (0x39U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                        >> 0xfU)))) 
                 | (0x3aU == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                       >> 0xfU)))) 
                | (0x3bU == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                      >> 0xfU))))) {
        if (((~ vlSelf->SimTop__DOT__core__DOT__dataD[0U]) 
             & (((0U != (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                  >> 0x10U))) & (((
                                                   (~ 
                                                    (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                                     >> 1U)) 
                                                   & ((0x1fU 
                                                       & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                          >> 0x10U)) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                          >> 2U)))) 
                                                  | ((~ 
                                                      vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                                                     & ((0x1fU 
                                                         & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                            >> 0x10U)) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                            >> 1U))))) 
                                                 | ((~ 
                                                     vlSelf->SimTop__DOT__core__DOT__dataW[0U]) 
                                                    & ((0x1fU 
                                                        & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                           >> 0x10U)) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                           >> 1U)))))) 
                | ((0U != (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                    >> 0x15U))) & (
                                                   (((~ 
                                                      (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                                       >> 1U)) 
                                                     & ((0x1fU 
                                                         & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                            >> 0x15U)) 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                            >> 2U)))) 
                                                    | ((~ 
                                                        vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                                                       & ((0x1fU 
                                                           & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                              >> 0x15U)) 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                              >> 1U))))) 
                                                   | ((~ 
                                                       vlSelf->SimTop__DOT__core__DOT__dataW[0U]) 
                                                      & ((0x1fU 
                                                          & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                             >> 0x15U)) 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                             >> 1U))))))))) {
            vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                = (0x140U | (0x1fU & vlSelf->SimTop__DOT__core__DOT__dataH[4U]));
            vlSelf->SimTop__DOT__core__DOT__dataH[0U] 
                = (0xffffffe0U & vlSelf->SimTop__DOT__core__DOT__dataH[0U]);
        } else {
            vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                = (0x20U | (0x1fU & vlSelf->SimTop__DOT__core__DOT__dataH[4U]));
            vlSelf->SimTop__DOT__core__DOT__dataH[0U] 
                = (1U | (0xffffffe0U & vlSelf->SimTop__DOT__core__DOT__dataH[0U]));
        }
    } else if (((((((7U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                     >> 0xfU))) | (0x11U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                       >> 0xfU)))) 
                   | (0x12U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                         >> 0xfU)))) 
                  | (0x13U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                        >> 0xfU)))) 
                 | (0x14U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                       >> 0xfU)))) 
                | (0x15U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                      >> 0xfU))))) {
        if ((((0U != (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                               >> 0x10U))) & ((((~ 
                                                 (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                                  >> 1U)) 
                                                & ((0x1fU 
                                                    & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                       >> 0x10U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                       >> 2U)))) 
                                               | ((~ 
                                                   vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                                                  & ((0x1fU 
                                                      & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                         >> 0x10U)) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                         >> 1U))))) 
                                              | ((~ 
                                                  vlSelf->SimTop__DOT__core__DOT__dataW[0U]) 
                                                 & ((0x1fU 
                                                     & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                        >> 0x10U)) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                        >> 1U)))))) 
             | ((0U != (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                 >> 0x15U))) & ((((~ 
                                                   (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                                    >> 1U)) 
                                                  & ((0x1fU 
                                                      & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                         >> 0x15U)) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                         >> 2U)))) 
                                                 | ((~ 
                                                     vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                                                    & ((0x1fU 
                                                        & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                           >> 0x15U)) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                           >> 1U))))) 
                                                | ((~ 
                                                    vlSelf->SimTop__DOT__core__DOT__dataW[0U]) 
                                                   & ((0x1fU 
                                                       & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                          >> 0x15U)) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                          >> 1U)))))))) {
            vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                = (0x140U | (0x1fU & vlSelf->SimTop__DOT__core__DOT__dataH[4U]));
            vlSelf->SimTop__DOT__core__DOT__dataH[0U] 
                = (0xffffffe0U & vlSelf->SimTop__DOT__core__DOT__dataH[0U]);
        } else {
            vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                = (0x20U | (0x1fU & vlSelf->SimTop__DOT__core__DOT__dataH[4U]));
            vlSelf->SimTop__DOT__core__DOT__dataH[0U] 
                = ((0xffffffe0U & vlSelf->SimTop__DOT__core__DOT__dataH[0U]) 
                   | (IData)(vlSelf->SimTop__DOT__core__DOT__op));
        }
    } else if (((~ vlSelf->SimTop__DOT__core__DOT__dataD[0U]) 
                & (6U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                   >> 0xfU))))) {
        vlSelf->SimTop__DOT__core__DOT__dataH[4U] = 
            (0x460U | (0x1fU & vlSelf->SimTop__DOT__core__DOT__dataH[4U]));
        vlSelf->SimTop__DOT__core__DOT__dataH[0U] = 
            ((0xffffffe0U & vlSelf->SimTop__DOT__core__DOT__dataH[0U]) 
             | (IData)(vlSelf->SimTop__DOT__core__DOT__op));
    } else if (((~ vlSelf->SimTop__DOT__core__DOT__dataD[0U]) 
                & (0x10U == (0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                      >> 0xfU))))) {
        if ((((((~ vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                & ((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                             >> 0x10U)) == (0x1fU & 
                                            (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                             >> 2U)))) 
               | ((~ vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                  & ((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                               >> 0x10U)) == (0x1fU 
                                              & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                 >> 1U))))) 
              | ((~ vlSelf->SimTop__DOT__core__DOT__dataM[0U]) 
                 & ((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                              >> 0x10U)) == (0x1fU 
                                             & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                >> 1U))))) 
             & (0U != (0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                >> 0x10U))))) {
            vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                = (0x140U | (0x1fU & vlSelf->SimTop__DOT__core__DOT__dataH[4U]));
            vlSelf->SimTop__DOT__core__DOT__dataH[0U] 
                = (0xffffffe0U & vlSelf->SimTop__DOT__core__DOT__dataH[0U]);
        } else {
            vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                = (0x20U | (0x1fU & vlSelf->SimTop__DOT__core__DOT__dataH[4U]));
            vlSelf->SimTop__DOT__core__DOT__dataH[0U] 
                = (5U | (0xffffffe0U & vlSelf->SimTop__DOT__core__DOT__dataH[0U]));
        }
    } else {
        vlSelf->SimTop__DOT__core__DOT__dataH[4U] = 
            (0x20U | (0x1fU & vlSelf->SimTop__DOT__core__DOT__dataH[4U]));
        vlSelf->SimTop__DOT__core__DOT__dataH[0U] = 
            (1U | (0xffffffe0U & vlSelf->SimTop__DOT__core__DOT__dataH[0U]));
    }
    if ((0x12dU >= (0x1ffU & ((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select)))) {
        vlSelf->SimTop__DOT__mux__DOT__selected_req[0U] 
            = (((0U == (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select)))
                 ? 0U : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                         ((IData)(1U) + (0xfU & (((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__mux__DOT__select) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__mux__DOT__select))))) 
               | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                  (0xfU & (((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select) 
                           >> 5U))] >> (0x1fU & ((IData)(0x97U) 
                                                 * vlSelf->SimTop__DOT__mux__DOT__select))));
        vlSelf->SimTop__DOT__mux__DOT__selected_req[1U] 
            = (((0U == (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select)))
                 ? 0U : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                         ((IData)(2U) + (0xfU & (((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__mux__DOT__select) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__mux__DOT__select))))) 
               | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                  ((IData)(1U) + (0xfU & (((IData)(0x97U) 
                                           * vlSelf->SimTop__DOT__mux__DOT__select) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select))));
        vlSelf->SimTop__DOT__mux__DOT__selected_req[2U] 
            = (((0U == (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select)))
                 ? 0U : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                         ((IData)(3U) + (0xfU & (((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__mux__DOT__select) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__mux__DOT__select))))) 
               | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                  ((IData)(2U) + (0xfU & (((IData)(0x97U) 
                                           * vlSelf->SimTop__DOT__mux__DOT__select) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select))));
        vlSelf->SimTop__DOT__mux__DOT__selected_req[3U] 
            = (((0U == (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select)))
                 ? 0U : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                         ((IData)(4U) + (0xfU & (((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__mux__DOT__select) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x97U) 
                                                  * vlSelf->SimTop__DOT__mux__DOT__select))))) 
               | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                  ((IData)(3U) + (0xfU & (((IData)(0x97U) 
                                           * vlSelf->SimTop__DOT__mux__DOT__select) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x97U) * vlSelf->SimTop__DOT__mux__DOT__select))));
        vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
            = (0x7fffffU & (((0U == (0x1fU & ((IData)(0x97U) 
                                              * vlSelf->SimTop__DOT__mux__DOT__select)))
                              ? 0U : (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                                      ((IData)(5U) 
                                       + (0xfU & (((IData)(0x97U) 
                                                   * vlSelf->SimTop__DOT__mux__DOT__select) 
                                                  >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x97U) 
                                                * vlSelf->SimTop__DOT__mux__DOT__select))))) 
                            | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[
                               ((IData)(4U) + (0xfU 
                                               & (((IData)(0x97U) 
                                                   * vlSelf->SimTop__DOT__mux__DOT__select) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0x97U) 
                                            * vlSelf->SimTop__DOT__mux__DOT__select)))));
    } else {
        vlSelf->SimTop__DOT__mux__DOT__selected_req[0U] 
            = vlSelf->SimTop__DOT__mux__DOT____Vxrand2[0U];
        vlSelf->SimTop__DOT__mux__DOT__selected_req[1U] 
            = vlSelf->SimTop__DOT__mux__DOT____Vxrand2[1U];
        vlSelf->SimTop__DOT__mux__DOT__selected_req[2U] 
            = vlSelf->SimTop__DOT__mux__DOT____Vxrand2[2U];
        vlSelf->SimTop__DOT__mux__DOT__selected_req[3U] 
            = vlSelf->SimTop__DOT__mux__DOT____Vxrand2[3U];
        vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
            = (0x7fffffU & vlSelf->SimTop__DOT__mux__DOT____Vxrand2[4U]);
    }
    vlSelf->SimTop__DOT__ram__DOT__wmask = ((0xffffffffffff0000ULL 
                                             & vlSelf->SimTop__DOT__ram__DOT__wmask) 
                                            | (IData)((IData)(
                                                              ((0xff00U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0xbU)))) 
                                                                   << 8U)) 
                                                               | (0xffU 
                                                                  & (- (IData)(
                                                                               (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0xaU)))))))));
    vlSelf->SimTop__DOT__ram__DOT__wmask = ((0xffffffff0000ffffULL 
                                             & vlSelf->SimTop__DOT__ram__DOT__wmask) 
                                            | ((QData)((IData)(
                                                               ((0xff00U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0xdU)))) 
                                                                    << 8U)) 
                                                                | (0xffU 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0xcU)))))))) 
                                               << 0x10U));
    vlSelf->SimTop__DOT__ram__DOT__wmask = ((0xffff0000ffffffffULL 
                                             & vlSelf->SimTop__DOT__ram__DOT__wmask) 
                                            | ((QData)((IData)(
                                                               ((0xff00U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0xfU)))) 
                                                                    << 8U)) 
                                                                | (0xffU 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0xeU)))))))) 
                                               << 0x20U));
    vlSelf->SimTop__DOT__ram__DOT__wmask = ((0xffffffffffffULL 
                                             & vlSelf->SimTop__DOT__ram__DOT__wmask) 
                                            | ((QData)((IData)(
                                                               ((0xff00U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0x11U)))) 
                                                                    << 8U)) 
                                                                | (0xffU 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->SimTop__DOT__oreq[2U] 
                                                                                >> 0x10U)))))))) 
                                               << 0x30U));
    if ((1U & (~ VL_ONEHOT0_I((((1U == (3U & (vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                                              >> 0xaU))) 
                                << 1U) | (0U == (3U 
                                                 & (vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                                                    >> 0xaU)))))))) {
        if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("[%0t] %%Error: reg_FD.sv:26: Assertion failed in %NSimTop.core.reg_FD: synthesis parallel_case, but multiple matches found\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/cs/arch-2024/build/../vsrc/src/reg_FD.sv", 26, "");
        }
    }
    if ((1U & (~ VL_ONEHOT0_I((((1U == (3U & (vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                                              >> 8U))) 
                                << 1U) | (0U == (3U 
                                                 & (vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                                                    >> 8U)))))))) {
        if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("[%0t] %%Error: reg_DE.sv:23: Assertion failed in %NSimTop.core.reg_DE: synthesis parallel_case, but multiple matches found\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("/home/cs/arch-2024/build/../vsrc/src/reg_DE.sv", 23, "");
        }
    }
    vlSelf->SimTop__DOT__core__DOT__reg_FD__DOT__hazard_reset = 0U;
    if ((0U == (3U & (vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                      >> 0xaU)))) {
        vlSelf->SimTop__DOT__core__DOT__reg_FD__DOT__hazard_reset = 0U;
    } else if ((1U == (3U & (vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                             >> 0xaU)))) {
        vlSelf->SimTop__DOT__core__DOT__reg_FD__DOT__hazard_reset = 1U;
    }
    vlSelf->SimTop__DOT__core__DOT__reg_DE__DOT__hazard_reset = 0U;
    if ((0U == (3U & (vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                      >> 8U)))) {
        vlSelf->SimTop__DOT__core__DOT__reg_DE__DOT__hazard_reset = 0U;
    } else if ((1U == (3U & (vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                             >> 8U)))) {
        vlSelf->SimTop__DOT__core__DOT__reg_DE__DOT__hazard_reset = 1U;
    }
    vlSelf->SimTop__DOT__core__DOT__dataF[0U] = 0U;
    vlSelf->SimTop__DOT__core__DOT__dataF[1U] = 0U;
    vlSelf->SimTop__DOT__core__DOT__dataF[2U] = 0U;
    vlSelf->SimTop__DOT__core__DOT__dataF[3U] = 0U;
    if ((1U & vlSelf->SimTop__DOT__ireq[2U])) {
        if ((0U == (3U & (vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                          >> 6U)))) {
            vlSelf->SimTop__DOT__core__DOT__dataF[0U] 
                = ((IData)(vlSelf->SimTop__DOT__core__DOT__pc) 
                   << 1U);
            vlSelf->SimTop__DOT__core__DOT__dataF[1U] 
                = (((IData)(vlSelf->SimTop__DOT__core__DOT__pc) 
                    >> 0x1fU) | ((IData)((vlSelf->SimTop__DOT__core__DOT__pc 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                = (((IData)((vlSelf->SimTop__DOT__core__DOT__pc 
                             >> 0x20U)) >> 0x1fU) | 
                   (((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                    >> 0x20U))) ? (IData)(vlSelf->SimTop__DOT__iresp)
                      : 0U) << 1U));
            vlSelf->SimTop__DOT__core__DOT__dataF[3U] 
                = (((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                   >> 0x20U))) ? (IData)(vlSelf->SimTop__DOT__iresp)
                     : 0U) >> 0x1fU);
        } else if ((1U == (3U & (vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                                 >> 6U)))) {
            vlSelf->SimTop__DOT__core__DOT__dataF[0U] 
                = (0xfffffffeU & vlSelf->SimTop__DOT__core__DOT__dataF_next[0U]);
            vlSelf->SimTop__DOT__core__DOT__dataF[1U] 
                = ((1U & vlSelf->SimTop__DOT__core__DOT__dataF_next[1U]) 
                   | (0xfffffffeU & vlSelf->SimTop__DOT__core__DOT__dataF_next[1U]));
            vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                = ((1U & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U]) 
                   | (0xfffffffeU & vlSelf->SimTop__DOT__core__DOT__dataF_next[2U]));
            vlSelf->SimTop__DOT__core__DOT__dataF[3U] 
                = (1U & vlSelf->SimTop__DOT__core__DOT__dataF_next[3U]);
        }
        if ((1U & (~ VL_ONEHOT0_I((((1U == (3U & (vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                                                  >> 6U))) 
                                    << 1U) | (0U == 
                                              (3U & 
                                               (vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                                                >> 6U)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: fetch.sv:32: Assertion failed in %NSimTop.core.fetch: synthesis parallel_case, but multiple matches found\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("/home/cs/arch-2024/build/../vsrc/src/fetch.sv", 32, "");
            }
        }
    } else {
        vlSelf->SimTop__DOT__core__DOT__dataF[0U] = 
            (1U | ((IData)(vlSelf->SimTop__DOT__core__DOT__pc) 
                   << 1U));
        vlSelf->SimTop__DOT__core__DOT__dataF[1U] = 
            (((IData)(vlSelf->SimTop__DOT__core__DOT__pc) 
              >> 0x1fU) | ((IData)((vlSelf->SimTop__DOT__core__DOT__pc 
                                    >> 0x20U)) << 1U));
        vlSelf->SimTop__DOT__core__DOT__dataF[2U] = 
            (((IData)((vlSelf->SimTop__DOT__core__DOT__pc 
                       >> 0x20U)) >> 0x1fU) | (((1U 
                                                 & (IData)(
                                                           (vlSelf->SimTop__DOT__iresp 
                                                            >> 0x20U)))
                                                 ? (IData)(vlSelf->SimTop__DOT__iresp)
                                                 : 0U) 
                                               << 1U));
        vlSelf->SimTop__DOT__core__DOT__dataF[3U] = 
            (((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                             >> 0x20U))) ? (IData)(vlSelf->SimTop__DOT__iresp)
               : 0U) >> 0x1fU);
    }
    vlSelf->SimTop__DOT__core__DOT____Vcellout__pcselect__pc_selected 
        = ((1U & (((IData)(vlSelf->SimTop__DOT__core__DOT__Iwait) 
                   | (IData)(vlSelf->SimTop__DOT__core__DOT__Dwait)) 
                  | vlSelf->SimTop__DOT__core__DOT__dataD[0U]))
            ? vlSelf->SimTop__DOT__core__DOT__pc : 
           (((2U == (0x1fU & vlSelf->SimTop__DOT__core__DOT__dataH[0U])) 
             | (4U == (0x1fU & vlSelf->SimTop__DOT__core__DOT__dataH[0U])))
             ? ((((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataH[4U])) 
                  << 0x3bU) | (((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataH[3U])) 
                                << 0x1bU) | ((QData)((IData)(
                                                             vlSelf->SimTop__DOT__core__DOT__dataH[2U])) 
                                             >> 5U))) 
                + (((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataH[2U])) 
                    << 0x3bU) | (((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataH[1U])) 
                                  << 0x1bU) | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__core__DOT__dataH[0U])) 
                                               >> 5U))))
             : (((~ vlSelf->SimTop__DOT__ireq[2U]) 
                 & (5U == (0x1fU & vlSelf->SimTop__DOT__core__DOT__dataH[0U])))
                 ? (((QData)((IData)(vlSelf->SimTop__DOT__core__DOT__dataH[2U])) 
                     << 0x3bU) | (((QData)((IData)(
                                                   vlSelf->SimTop__DOT__core__DOT__dataH[1U])) 
                                   << 0x1bU) | ((QData)((IData)(
                                                                vlSelf->SimTop__DOT__core__DOT__dataH[0U])) 
                                                >> 5U)))
                 : (((~ vlSelf->SimTop__DOT__ireq[2U]) 
                     & (1U == (0x1fU & vlSelf->SimTop__DOT__core__DOT__dataH[0U])))
                     ? (4ULL + vlSelf->SimTop__DOT__core__DOT__pc)
                     : (((~ vlSelf->SimTop__DOT__ireq[2U]) 
                         & (3U == (0x1fU & vlSelf->SimTop__DOT__core__DOT__dataH[0U])))
                         ? (4ULL + (((QData)((IData)(
                                                     vlSelf->SimTop__DOT__core__DOT__dataH[4U])) 
                                     << 0x3bU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataH[3U])) 
                                                   << 0x1bU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataH[2U])) 
                                                     >> 5U))))
                         : ((1U & vlSelf->SimTop__DOT__ireq[2U])
                             ? ((0x10U & vlSelf->SimTop__DOT__core__DOT__dataH[0U])
                                 ? (4ULL + vlSelf->SimTop__DOT__core__DOT__pc)
                                 : ((8U & vlSelf->SimTop__DOT__core__DOT__dataH[0U])
                                     ? (4ULL + vlSelf->SimTop__DOT__core__DOT__pc)
                                     : ((4U & vlSelf->SimTop__DOT__core__DOT__dataH[0U])
                                         ? ((2U & vlSelf->SimTop__DOT__core__DOT__dataH[0U])
                                             ? (4ULL 
                                                + vlSelf->SimTop__DOT__core__DOT__pc)
                                             : ((1U 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataH[0U])
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__core__DOT__dataH[2U])) 
                                                  << 0x3bU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__core__DOT__dataH[1U])) 
                                                     << 0x1bU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__core__DOT__dataH[0U])) 
                                                       >> 5U)))
                                                 : 
                                                ((((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataH[4U])) 
                                                   << 0x3bU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataH[3U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataH[2U])) 
                                                        >> 5U))) 
                                                 + 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataH[2U])) 
                                                   << 0x3bU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataH[1U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataH[0U])) 
                                                        >> 5U))))))
                                         : ((2U & vlSelf->SimTop__DOT__core__DOT__dataH[0U])
                                             ? ((1U 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataH[0U])
                                                 ? 
                                                (4ULL 
                                                 + 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataH[4U])) 
                                                   << 0x3bU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataH[3U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataH[2U])) 
                                                        >> 5U))))
                                                 : 
                                                ((((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataH[4U])) 
                                                   << 0x3bU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataH[3U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataH[2U])) 
                                                        >> 5U))) 
                                                 + 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__core__DOT__dataH[2U])) 
                                                   << 0x3bU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__core__DOT__dataH[1U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__core__DOT__dataH[0U])) 
                                                        >> 5U)))))
                                             : ((1U 
                                                 & vlSelf->SimTop__DOT__core__DOT__dataH[0U])
                                                 ? 
                                                (4ULL 
                                                 + vlSelf->SimTop__DOT__core__DOT__pc)
                                                 : vlSelf->SimTop__DOT__core__DOT__pc)))))
                             : vlSelf->SimTop__DOT__core__DOT__pc))))));
}
