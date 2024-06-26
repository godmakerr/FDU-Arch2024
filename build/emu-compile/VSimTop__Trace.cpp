// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VSimTop__Syms.h"


void VSimTop___024root__traceChgSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep);

void VSimTop___024root__traceChgTop0(void* voidSelf, VerilatedFst* tracep) {
    VSimTop___024root* const __restrict vlSelf = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VSimTop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VSimTop___024root__traceChgSub0(VSimTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp428;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                          >> 0x16U))));
            tracep->chgBit(oldp+1,((1U & (vlSelf->SimTop__DOT__oreq[4U] 
                                          >> 0x15U))));
            tracep->chgCData(oldp+2,((7U & (vlSelf->SimTop__DOT__oreq[4U] 
                                            >> 0x12U))),3);
            tracep->chgQData(oldp+3,((((QData)((IData)(
                                                       vlSelf->SimTop__DOT__oreq[4U])) 
                                       << 0x2eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[3U])) 
                                        << 0xeU) | 
                                       ((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[2U])) 
                                        >> 0x12U)))),64);
            tracep->chgCData(oldp+5,((0xffU & (vlSelf->SimTop__DOT__oreq[2U] 
                                               >> 0xaU))),8);
            tracep->chgQData(oldp+6,((((QData)((IData)(
                                                       vlSelf->SimTop__DOT__oreq[2U])) 
                                       << 0x36U) | 
                                      (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[1U])) 
                                        << 0x16U) | 
                                       ((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oreq[0U])) 
                                        >> 0xaU)))),64);
            tracep->chgCData(oldp+8,((0xffU & (vlSelf->SimTop__DOT__oreq[0U] 
                                               >> 2U))),8);
            tracep->chgCData(oldp+9,((3U & vlSelf->SimTop__DOT__oreq[0U])),2);
            tracep->chgBit(oldp+10,((1U & (vlSelf->SimTop__DOT__oresp[2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+11,((1U & vlSelf->SimTop__DOT__oresp[2U])));
            tracep->chgQData(oldp+12,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__oresp[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__oresp[0U])))),64);
            tracep->chgBit(oldp+14,(vlSelf->SimTop__DOT__trint));
            tracep->chgBit(oldp+15,(vlSelf->SimTop__DOT__swint));
            tracep->chgBit(oldp+16,(vlSelf->SimTop__DOT__exint));
            tracep->chgBit(oldp+17,((1U & vlSelf->SimTop__DOT__ireq[2U])));
            tracep->chgQData(oldp+18,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__ireq[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__ireq[0U])))),64);
            tracep->chgBit(oldp+20,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                   >> 0x21U)))));
            tracep->chgBit(oldp+21,((1U & (IData)((vlSelf->SimTop__DOT__iresp 
                                                   >> 0x20U)))));
            tracep->chgIData(oldp+22,((IData)(vlSelf->SimTop__DOT__iresp)),32);
            tracep->chgBit(oldp+23,((1U & (vlSelf->SimTop__DOT__dreq[4U] 
                                           >> 0xbU))));
            tracep->chgQData(oldp+24,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dreq[4U])) 
                                        << 0x35U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__dreq[3U])) 
                                         << 0x15U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__dreq[2U])) 
                                           >> 0xbU)))),64);
            tracep->chgCData(oldp+26,((7U & (vlSelf->SimTop__DOT__dreq[2U] 
                                             >> 8U))),3);
            tracep->chgCData(oldp+27,((0xffU & vlSelf->SimTop__DOT__dreq[2U])),8);
            tracep->chgQData(oldp+28,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dreq[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__dreq[0U])))),64);
            tracep->chgBit(oldp+30,((1U & (vlSelf->SimTop__DOT__dresp[2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+31,((1U & vlSelf->SimTop__DOT__dresp[2U])));
            tracep->chgQData(oldp+32,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dresp[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__dresp[0U])))),64);
            tracep->chgBit(oldp+34,((1U & (vlSelf->SimTop__DOT__icreq[4U] 
                                           >> 0x16U))));
            tracep->chgBit(oldp+35,((1U & (vlSelf->SimTop__DOT__icreq[4U] 
                                           >> 0x15U))));
            tracep->chgCData(oldp+36,((7U & (vlSelf->SimTop__DOT__icreq[4U] 
                                             >> 0x12U))),3);
            tracep->chgQData(oldp+37,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__icreq[4U])) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__icreq[3U])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__icreq[2U])) 
                                         >> 0x12U)))),64);
            tracep->chgCData(oldp+39,((0xffU & (vlSelf->SimTop__DOT__icreq[2U] 
                                                >> 0xaU))),8);
            tracep->chgQData(oldp+40,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__icreq[2U])) 
                                        << 0x36U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__icreq[1U])) 
                                         << 0x16U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__icreq[0U])) 
                                           >> 0xaU)))),64);
            tracep->chgCData(oldp+42,((0xffU & (vlSelf->SimTop__DOT__icreq[0U] 
                                                >> 2U))),8);
            tracep->chgCData(oldp+43,((3U & vlSelf->SimTop__DOT__icreq[0U])),2);
            tracep->chgBit(oldp+44,((1U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                           >> 0x16U))));
            tracep->chgBit(oldp+45,((1U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                           >> 0x15U))));
            tracep->chgCData(oldp+46,((7U & (vlSelf->SimTop__DOT__dcreq[4U] 
                                             >> 0x12U))),3);
            tracep->chgQData(oldp+47,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dcreq[4U])) 
                                        << 0x2eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__dcreq[3U])) 
                                         << 0xeU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__dcreq[2U])) 
                                         >> 0x12U)))),64);
            tracep->chgCData(oldp+49,((0xffU & (vlSelf->SimTop__DOT__dcreq[2U] 
                                                >> 0xaU))),8);
            tracep->chgQData(oldp+50,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__dcreq[2U])) 
                                        << 0x36U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__dcreq[1U])) 
                                         << 0x16U) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__dcreq[0U])) 
                                           >> 0xaU)))),64);
            tracep->chgCData(oldp+52,((0xffU & (vlSelf->SimTop__DOT__dcreq[0U] 
                                                >> 2U))),8);
            tracep->chgCData(oldp+53,((3U & vlSelf->SimTop__DOT__dcreq[0U])),2);
            tracep->chgBit(oldp+54,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                           >> 3U))));
            tracep->chgBit(oldp+55,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                           >> 2U))));
            tracep->chgQData(oldp+56,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U])) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT____Vcellout__mux__iresps[3U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])) 
                                           >> 2U)))),64);
            tracep->chgBit(oldp+58,((1U & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                                           >> 1U))));
            tracep->chgBit(oldp+59,((1U & vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U])));
            tracep->chgQData(oldp+60,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT____Vcellout__mux__iresps[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT____Vcellout__mux__iresps[0U])))),64);
            tracep->chgQData(oldp+62,(vlSelf->SimTop__DOT__core__DOT__pc),64);
            tracep->chgQData(oldp+64,(vlSelf->SimTop__DOT__core__DOT____Vcellout__pcselect__pc_selected),64);
            tracep->chgIData(oldp+66,(((1U & (IData)(
                                                     (vlSelf->SimTop__DOT__iresp 
                                                      >> 0x20U)))
                                        ? (IData)(vlSelf->SimTop__DOT__iresp)
                                        : 0U)),32);
            tracep->chgBit(oldp+67,((1U & (~ vlSelf->SimTop__DOT__core__DOT__dataM_next[0U]))));
            tracep->chgIData(oldp+68,(((vlSelf->SimTop__DOT__core__DOT__dataF[3U] 
                                        << 0x1fU) | 
                                       (vlSelf->SimTop__DOT__core__DOT__dataF[2U] 
                                        >> 1U))),32);
            tracep->chgQData(oldp+69,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataF[2U])) 
                                        << 0x3fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataF[1U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataF[0U])) 
                                           >> 1U)))),64);
            tracep->chgBit(oldp+71,((1U & vlSelf->SimTop__DOT__core__DOT__dataF[0U])));
            tracep->chgIData(oldp+72,(((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                        << 0x1fU) | 
                                       (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                        >> 1U))),32);
            tracep->chgQData(oldp+73,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataF_next[2U])) 
                                        << 0x3fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataF_next[1U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataF_next[0U])) 
                                           >> 1U)))),64);
            tracep->chgBit(oldp+75,((1U & vlSelf->SimTop__DOT__core__DOT__dataF_next[0U])));
            tracep->chgIData(oldp+76,(((vlSelf->SimTop__DOT__core__DOT__dataF_copy[3U] 
                                        << 0x1fU) | 
                                       (vlSelf->SimTop__DOT__core__DOT__dataF_copy[2U] 
                                        >> 1U))),32);
            tracep->chgQData(oldp+77,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataF_copy[2U])) 
                                        << 0x3fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataF_copy[1U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataF_copy[0U])) 
                                           >> 1U)))),64);
            tracep->chgBit(oldp+79,((1U & vlSelf->SimTop__DOT__core__DOT__dataF_copy[0U])));
            tracep->chgQData(oldp+80,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[0xaU])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+82,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[0xaU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[9U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[8U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+84,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[8U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[7U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[6U])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+86,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[6U])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[5U])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[4U])) 
                                         >> 0x16U)))),64);
            tracep->chgCData(oldp+88,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                >> 0xfU))),7);
            tracep->chgCData(oldp+89,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                >> 8U))),7);
            tracep->chgBit(oldp+90,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                           >> 7U))));
            tracep->chgBit(oldp+91,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                           >> 6U))));
            tracep->chgCData(oldp+92,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD[4U] 
                                                >> 1U))),5);
            tracep->chgQData(oldp+93,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[4U])) 
                                        << 0x3fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[3U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                           >> 1U)))),64);
            tracep->chgQData(oldp+95,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD[2U])) 
                                        << 0x3fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD[1U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__core__DOT__dataD[0U])) 
                                           >> 1U)))),64);
            tracep->chgBit(oldp+97,((1U & vlSelf->SimTop__DOT__core__DOT__dataD[0U])));
            tracep->chgQData(oldp+98,((((QData)((IData)(
                                                        vlSelf->SimTop__DOT__core__DOT__dataD_next[0xcU])) 
                                        << 0x2aU) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xbU])) 
                                         << 0xaU) | 
                                        ((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         >> 0x16U)))),64);
            tracep->chgQData(oldp+100,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[0xaU])) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_next[9U])) 
                                            << 0xaU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                              >> 0x16U)))),64);
            tracep->chgQData(oldp+102,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[8U])) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_next[7U])) 
                                            << 0xaU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD_next[6U])) 
                                              >> 0x16U)))),64);
            tracep->chgQData(oldp+104,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[6U])) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_next[5U])) 
                                            << 0xaU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])) 
                                              >> 0x16U)))),64);
            tracep->chgCData(oldp+106,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                                 >> 0xfU))),7);
            tracep->chgCData(oldp+107,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                                 >> 8U))),7);
            tracep->chgBit(oldp+108,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                            >> 7U))));
            tracep->chgBit(oldp+109,((1U & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                            >> 6U))));
            tracep->chgCData(oldp+110,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataD_next[4U] 
                                                 >> 1U))),5);
            tracep->chgQData(oldp+111,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[4U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_next[3U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD_next[2U])) 
                                              >> 1U)))),64);
            tracep->chgQData(oldp+113,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataD_next[2U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataD_next[1U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataD_next[0U])) 
                                              >> 1U)))),64);
            tracep->chgBit(oldp+115,((1U & vlSelf->SimTop__DOT__core__DOT__dataD_next[0U])));
            tracep->chgQData(oldp+116,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[6U])) 
                                         << 0x29U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE[5U])) 
                                            << 9U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE[4U])) 
                                              >> 0x17U)))),64);
            tracep->chgQData(oldp+118,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[4U])) 
                                         << 0x29U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE[3U])) 
                                            << 9U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE[2U])) 
                                              >> 0x17U)))),64);
            tracep->chgCData(oldp+120,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                 >> 0x10U))),7);
            tracep->chgCData(oldp+121,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                 >> 9U))),7);
            tracep->chgBit(oldp+122,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                            >> 8U))));
            tracep->chgBit(oldp+123,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                            >> 7U))));
            tracep->chgCData(oldp+124,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataE[2U] 
                                                 >> 2U))),5);
            tracep->chgQData(oldp+125,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE[2U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE[0U])) 
                                              >> 2U)))),64);
            tracep->chgBit(oldp+127,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+128,((1U & vlSelf->SimTop__DOT__core__DOT__dataE[0U])));
            tracep->chgQData(oldp+129,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_next[6U])) 
                                         << 0x29U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_next[5U])) 
                                            << 9U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                              >> 0x17U)))),64);
            tracep->chgQData(oldp+131,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_next[4U])) 
                                         << 0x29U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_next[3U])) 
                                            << 9U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                              >> 0x17U)))),64);
            tracep->chgCData(oldp+133,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                 >> 0x10U))),7);
            tracep->chgCData(oldp+134,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                 >> 9U))),7);
            tracep->chgBit(oldp+135,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                            >> 8U))));
            tracep->chgBit(oldp+136,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                            >> 7U))));
            tracep->chgCData(oldp+137,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataE_next[2U] 
                                                 >> 2U))),5);
            tracep->chgQData(oldp+138,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_next[2U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_next[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])) 
                                              >> 2U)))),64);
            tracep->chgBit(oldp+140,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+141,((1U & vlSelf->SimTop__DOT__core__DOT__dataE_next[0U])));
            tracep->chgQData(oldp+142,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_copy[6U])) 
                                         << 0x29U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_copy[5U])) 
                                            << 9U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_copy[4U])) 
                                              >> 0x17U)))),64);
            tracep->chgQData(oldp+144,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_copy[4U])) 
                                         << 0x29U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_copy[3U])) 
                                            << 9U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_copy[2U])) 
                                              >> 0x17U)))),64);
            tracep->chgCData(oldp+146,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataE_copy[2U] 
                                                 >> 0x10U))),7);
            tracep->chgCData(oldp+147,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataE_copy[2U] 
                                                 >> 9U))),7);
            tracep->chgBit(oldp+148,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_copy[2U] 
                                            >> 8U))));
            tracep->chgBit(oldp+149,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_copy[2U] 
                                            >> 7U))));
            tracep->chgCData(oldp+150,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataE_copy[2U] 
                                                 >> 2U))),5);
            tracep->chgQData(oldp+151,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataE_copy[2U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataE_copy[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataE_copy[0U])) 
                                              >> 2U)))),64);
            tracep->chgBit(oldp+153,((1U & (vlSelf->SimTop__DOT__core__DOT__dataE_copy[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+154,((1U & vlSelf->SimTop__DOT__core__DOT__dataE_copy[0U])));
            tracep->chgQData(oldp+155,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM[6U])) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM[5U])) 
                                            << 0xaU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM[4U])) 
                                              >> 0x16U)))),64);
            tracep->chgQData(oldp+157,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM[4U])) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM[3U])) 
                                            << 0xaU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM[2U])) 
                                              >> 0x16U)))),64);
            tracep->chgCData(oldp+159,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                 >> 0xfU))),7);
            tracep->chgCData(oldp+160,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                 >> 8U))),7);
            tracep->chgBit(oldp+161,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                            >> 7U))));
            tracep->chgBit(oldp+162,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                            >> 6U))));
            tracep->chgCData(oldp+163,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataM[2U] 
                                                 >> 1U))),5);
            tracep->chgQData(oldp+164,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM[2U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM[1U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM[0U])) 
                                              >> 1U)))),64);
            tracep->chgBit(oldp+166,((1U & vlSelf->SimTop__DOT__core__DOT__dataM[0U])));
            tracep->chgQData(oldp+167,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM_next[6U])) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM_next[5U])) 
                                            << 0xaU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM_next[4U])) 
                                              >> 0x16U)))),64);
            tracep->chgQData(oldp+169,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM_next[4U])) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM_next[3U])) 
                                            << 0xaU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM_next[2U])) 
                                              >> 0x16U)))),64);
            tracep->chgCData(oldp+171,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataM_next[2U] 
                                                 >> 0xfU))),7);
            tracep->chgCData(oldp+172,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataM_next[2U] 
                                                 >> 8U))),7);
            tracep->chgBit(oldp+173,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_next[2U] 
                                            >> 7U))));
            tracep->chgBit(oldp+174,((1U & (vlSelf->SimTop__DOT__core__DOT__dataM_next[2U] 
                                            >> 6U))));
            tracep->chgCData(oldp+175,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataM_next[2U] 
                                                 >> 1U))),5);
            tracep->chgQData(oldp+176,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataM_next[2U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataM_next[1U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataM_next[0U])) 
                                              >> 1U)))),64);
            tracep->chgBit(oldp+178,((1U & vlSelf->SimTop__DOT__core__DOT__dataM_next[0U])));
            tracep->chgQData(oldp+179,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataW[6U])) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataW[5U])) 
                                            << 0xaU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                                              >> 0x16U)))),64);
            tracep->chgQData(oldp+181,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataW[4U])) 
                                         << 0x2aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataW[3U])) 
                                            << 0xaU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                              >> 0x16U)))),64);
            tracep->chgCData(oldp+183,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                 >> 0xfU))),7);
            tracep->chgCData(oldp+184,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                 >> 8U))),7);
            tracep->chgBit(oldp+185,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                            >> 7U))));
            tracep->chgBit(oldp+186,((1U & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                            >> 6U))));
            tracep->chgCData(oldp+187,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                 >> 1U))),5);
            tracep->chgQData(oldp+188,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataW[2U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataW[1U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataW[0U])) 
                                              >> 1U)))),64);
            tracep->chgBit(oldp+190,((1U & vlSelf->SimTop__DOT__core__DOT__dataW[0U])));
            tracep->chgCData(oldp+191,((3U & (vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                                              >> 0xaU))),2);
            tracep->chgCData(oldp+192,((3U & (vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                                              >> 8U))),2);
            tracep->chgCData(oldp+193,((3U & (vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                                              >> 6U))),2);
            tracep->chgBit(oldp+194,((1U & (vlSelf->SimTop__DOT__core__DOT__dataH[4U] 
                                            >> 5U))));
            tracep->chgQData(oldp+195,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataH[4U])) 
                                         << 0x3bU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataH[3U])) 
                                            << 0x1bU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataH[2U])) 
                                              >> 5U)))),64);
            tracep->chgQData(oldp+197,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__dataH[2U])) 
                                         << 0x3bU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__core__DOT__dataH[1U])) 
                                            << 0x1bU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__core__DOT__dataH[0U])) 
                                              >> 5U)))),64);
            tracep->chgCData(oldp+199,((0x1fU & vlSelf->SimTop__DOT__core__DOT__dataH[0U])),5);
            tracep->chgCData(oldp+200,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                 >> 0x10U))),5);
            tracep->chgCData(oldp+201,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                 >> 0x15U))),5);
            tracep->chgQData(oldp+202,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd1),64);
            tracep->chgQData(oldp+204,(vlSelf->SimTop__DOT__core__DOT____Vcellout__regfile__rd2),64);
            tracep->chgCData(oldp+206,(vlSelf->SimTop__DOT__core__DOT__op),5);
            tracep->chgQData(oldp+207,(vlSelf->SimTop__DOT__core__DOT__offset),64);
            tracep->chgBit(oldp+209,(vlSelf->SimTop__DOT__core__DOT__Dwait));
            tracep->chgBit(oldp+210,(vlSelf->SimTop__DOT__core__DOT__Iwait));
            tracep->chgBit(oldp+211,(((~ vlSelf->SimTop__DOT__core__DOT__dataF_next[0U]) 
                                      & ((2U == (IData)(vlSelf->SimTop__DOT__core__DOT__op)) 
                                         | (4U == (IData)(vlSelf->SimTop__DOT__core__DOT__op))))));
            tracep->chgBit(oldp+212,((1U & vlSelf->SimTop__DOT__ireq[2U])));
            tracep->chgBit(oldp+213,((1U & (IData)(
                                                   (vlSelf->SimTop__DOT__iresp 
                                                    >> 0x20U)))));
            tracep->chgBit(oldp+214,(vlSelf->SimTop__DOT__core__DOT__reg_FD__DOT__hazard_reset));
            tracep->chgCData(oldp+215,((0x7fU & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                                 >> 9U))),7);
            tracep->chgCData(oldp+216,((0x7fU & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                                 >> 2U))),7);
            tracep->chgBit(oldp+217,((1U & ((IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl) 
                                            >> 1U))));
            tracep->chgBit(oldp+218,((1U & (IData)(vlSelf->SimTop__DOT__core__DOT__decode__DOT__ctl))));
            tracep->chgCData(oldp+219,((0x7fU & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                 >> 1U))),7);
            tracep->chgCData(oldp+220,((0x7fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                  << 6U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                    >> 0x1aU)))),7);
            tracep->chgCData(oldp+221,((7U & (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                              >> 0xdU))),3);
            tracep->chgCData(oldp+222,((0x3fU & ((vlSelf->SimTop__DOT__core__DOT__dataF_next[3U] 
                                                  << 5U) 
                                                 | (vlSelf->SimTop__DOT__core__DOT__dataF_next[2U] 
                                                    >> 0x1bU)))),6);
            tracep->chgBit(oldp+223,(vlSelf->SimTop__DOT__core__DOT__reg_DE__DOT__hazard_reset));
            tracep->chgQData(oldp+224,(vlSelf->SimTop__DOT__core__DOT__execute__DOT____Vcellout__alu__c),64);
            __Vtemp428[0U] = vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[0U];
            __Vtemp428[1U] = vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[1U];
            __Vtemp428[2U] = vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[2U];
            __Vtemp428[3U] = vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p[3U];
            tracep->chgWData(oldp+226,(__Vtemp428),128);
            tracep->chgQData(oldp+230,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p[0U])))),64);
            tracep->chgBit(oldp+232,((1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__state_nxt)))));
            tracep->chgBit(oldp+233,((1U & (~ (IData)(vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__state_nxt)))));
            tracep->chgBit(oldp+234,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__is_mult));
            tracep->chgBit(oldp+235,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__is_div));
            tracep->chgIData(oldp+236,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__div_tmp),32);
            tracep->chgQData(oldp+237,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_a),64);
            tracep->chgQData(oldp+239,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__alu_b),64);
            tracep->chgBit(oldp+241,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__state));
            tracep->chgBit(oldp+242,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__state_nxt));
            tracep->chgWData(oldp+243,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__count),67);
            tracep->chgWData(oldp+246,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__count_nxt),67);
            tracep->chgWData(oldp+249,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p),129);
            tracep->chgWData(oldp+254,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__multipler__DOT__p_nxt),129);
            tracep->chgBit(oldp+259,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__state));
            tracep->chgBit(oldp+260,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__state_nxt));
            tracep->chgWData(oldp+261,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__count),67);
            tracep->chgWData(oldp+264,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__count_nxt),67);
            tracep->chgWData(oldp+267,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p),129);
            tracep->chgWData(oldp+272,(vlSelf->SimTop__DOT__core__DOT__execute__DOT__diviter__DOT__p_nxt),129);
            tracep->chgCData(oldp+277,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__msize),3);
            tracep->chgBit(oldp+278,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__mem_unsigned));
            tracep->chgQData(oldp+279,(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__rd),64);
            tracep->chgQData(oldp+281,(vlSelf->SimTop__DOT__core__DOT__memory__DOT____Vcellout__Datamem__wd),64);
            tracep->chgCData(oldp+283,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__strobe),8);
            tracep->chgCData(oldp+284,((7U & (vlSelf->SimTop__DOT__core__DOT__dataE_next[0U] 
                                              >> 2U))),3);
            tracep->chgBit(oldp+285,(vlSelf->SimTop__DOT__core__DOT__memory__DOT__Datamem__DOT__sign_bit));
            tracep->chgBit(oldp+286,(vlSelf->SimTop__DOT__core__DOT____Vcellinp__regfile__WE));
            tracep->chgQData(oldp+287,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0U])))),64);
            tracep->chgQData(oldp+289,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[2U])))),64);
            tracep->chgQData(oldp+291,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[4U])))),64);
            tracep->chgQData(oldp+293,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[6U])))),64);
            tracep->chgQData(oldp+295,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[8U])))),64);
            tracep->chgQData(oldp+297,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0xaU])))),64);
            tracep->chgQData(oldp+299,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0xcU])))),64);
            tracep->chgQData(oldp+301,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0xeU])))),64);
            tracep->chgQData(oldp+303,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x10U])))),64);
            tracep->chgQData(oldp+305,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x12U])))),64);
            tracep->chgQData(oldp+307,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x14U])))),64);
            tracep->chgQData(oldp+309,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x16U])))),64);
            tracep->chgQData(oldp+311,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x18U])))),64);
            tracep->chgQData(oldp+313,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x1aU])))),64);
            tracep->chgQData(oldp+315,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x1cU])))),64);
            tracep->chgQData(oldp+317,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x1eU])))),64);
            tracep->chgQData(oldp+319,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x20U])))),64);
            tracep->chgQData(oldp+321,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x22U])))),64);
            tracep->chgQData(oldp+323,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x24U])))),64);
            tracep->chgQData(oldp+325,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x26U])))),64);
            tracep->chgQData(oldp+327,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x28U])))),64);
            tracep->chgQData(oldp+329,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x2aU])))),64);
            tracep->chgQData(oldp+331,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x2cU])))),64);
            tracep->chgQData(oldp+333,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x2eU])))),64);
            tracep->chgQData(oldp+335,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x30U])))),64);
            tracep->chgQData(oldp+337,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x32U])))),64);
            tracep->chgQData(oldp+339,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x34U])))),64);
            tracep->chgQData(oldp+341,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x36U])))),64);
            tracep->chgQData(oldp+343,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x38U])))),64);
            tracep->chgQData(oldp+345,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x3aU])))),64);
            tracep->chgQData(oldp+347,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x3cU])))),64);
            tracep->chgQData(oldp+349,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register[0x3eU])))),64);
            tracep->chgQData(oldp+351,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0U])))),64);
            tracep->chgQData(oldp+353,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[2U])))),64);
            tracep->chgQData(oldp+355,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[4U])))),64);
            tracep->chgQData(oldp+357,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[6U])))),64);
            tracep->chgQData(oldp+359,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[8U])))),64);
            tracep->chgQData(oldp+361,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xaU])))),64);
            tracep->chgQData(oldp+363,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xcU])))),64);
            tracep->chgQData(oldp+365,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xeU])))),64);
            tracep->chgQData(oldp+367,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x10U])))),64);
            tracep->chgQData(oldp+369,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x12U])))),64);
            tracep->chgQData(oldp+371,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x14U])))),64);
            tracep->chgQData(oldp+373,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x16U])))),64);
            tracep->chgQData(oldp+375,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x18U])))),64);
            tracep->chgQData(oldp+377,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1aU])))),64);
            tracep->chgQData(oldp+379,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1cU])))),64);
            tracep->chgQData(oldp+381,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1eU])))),64);
            tracep->chgQData(oldp+383,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x20U])))),64);
            tracep->chgQData(oldp+385,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x22U])))),64);
            tracep->chgQData(oldp+387,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x24U])))),64);
            tracep->chgQData(oldp+389,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x26U])))),64);
            tracep->chgQData(oldp+391,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x28U])))),64);
            tracep->chgQData(oldp+393,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2aU])))),64);
            tracep->chgQData(oldp+395,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2cU])))),64);
            tracep->chgQData(oldp+397,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2eU])))),64);
            tracep->chgQData(oldp+399,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x30U])))),64);
            tracep->chgQData(oldp+401,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x32U])))),64);
            tracep->chgQData(oldp+403,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x34U])))),64);
            tracep->chgQData(oldp+405,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x36U])))),64);
            tracep->chgQData(oldp+407,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x38U])))),64);
            tracep->chgQData(oldp+409,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3aU])))),64);
            tracep->chgQData(oldp+411,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3cU])))),64);
            tracep->chgQData(oldp+413,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3eU])))),64);
            tracep->chgBit(oldp+415,((1U & ((vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                             >> 6U) 
                                            & (~ vlSelf->SimTop__DOT__core__DOT__dataW[1U])))));
            tracep->chgCData(oldp+416,((0x1fU & (vlSelf->SimTop__DOT__core__DOT__dataW[2U] 
                                                 >> 1U))),8);
            tracep->chgQData(oldp+417,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0U])))),64);
            tracep->chgQData(oldp+419,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[2U])))),64);
            tracep->chgQData(oldp+421,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[4U])))),64);
            tracep->chgQData(oldp+423,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[6U])))),64);
            tracep->chgQData(oldp+425,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[8U])))),64);
            tracep->chgQData(oldp+427,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xaU])))),64);
            tracep->chgQData(oldp+429,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xcU])))),64);
            tracep->chgQData(oldp+431,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0xeU])))),64);
            tracep->chgQData(oldp+433,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x11U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x10U])))),64);
            tracep->chgQData(oldp+435,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x13U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x12U])))),64);
            tracep->chgQData(oldp+437,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x15U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x14U])))),64);
            tracep->chgQData(oldp+439,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x17U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x16U])))),64);
            tracep->chgQData(oldp+441,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x19U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x18U])))),64);
            tracep->chgQData(oldp+443,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1aU])))),64);
            tracep->chgQData(oldp+445,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1cU])))),64);
            tracep->chgQData(oldp+447,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x1eU])))),64);
            tracep->chgQData(oldp+449,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x21U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x20U])))),64);
            tracep->chgQData(oldp+451,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x23U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x22U])))),64);
            tracep->chgQData(oldp+453,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x25U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x24U])))),64);
            tracep->chgQData(oldp+455,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x27U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x26U])))),64);
            tracep->chgQData(oldp+457,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x29U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x28U])))),64);
            tracep->chgQData(oldp+459,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2aU])))),64);
            tracep->chgQData(oldp+461,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2cU])))),64);
            tracep->chgQData(oldp+463,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x2eU])))),64);
            tracep->chgQData(oldp+465,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x31U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x30U])))),64);
            tracep->chgQData(oldp+467,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x33U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x32U])))),64);
            tracep->chgQData(oldp+469,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x35U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x34U])))),64);
            tracep->chgQData(oldp+471,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x37U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x36U])))),64);
            tracep->chgQData(oldp+473,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x39U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x38U])))),64);
            tracep->chgQData(oldp+475,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3bU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3aU])))),64);
            tracep->chgQData(oldp+477,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3dU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3cU])))),64);
            tracep->chgQData(oldp+479,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3fU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__core__DOT__regfile__DOT__register_nxt[0x3eU])))),64);
            tracep->chgBit(oldp+481,((1U & (vlSelf->SimTop__DOT__icvt__DOT__dresp[2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+482,((1U & vlSelf->SimTop__DOT__icvt__DOT__dresp[2U])));
            tracep->chgQData(oldp+483,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__icvt__DOT__dresp[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__icvt__DOT__dresp[0U])))),64);
            tracep->chgQData(oldp+485,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__ireq[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__ireq[0U])))),64);
            tracep->chgBit(oldp+487,((1U & ((vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                             >> 3U) 
                                            & (vlSelf->SimTop__DOT____Vcellout__mux__iresps[4U] 
                                               >> 2U)))));
            tracep->chgBit(oldp+488,((1U & ((vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U] 
                                             >> 1U) 
                                            & vlSelf->SimTop__DOT____Vcellout__mux__iresps[2U]))));
            tracep->chgBit(oldp+489,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+490,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+491,((7U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+492,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+494,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+495,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+497,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+498,((3U & vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[0U])),2);
            tracep->chgBit(oldp+499,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+500,((1U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+501,((7U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U] 
                                              >> 9U))),3);
            tracep->chgQData(oldp+502,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[9U])) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[8U])) 
                                            << 0x17U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U])) 
                                              >> 9U)))),64);
            tracep->chgCData(oldp+504,((0xffU & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U] 
                                                 >> 1U))),8);
            tracep->chgQData(oldp+505,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[7U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[6U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[5U])) 
                                              >> 1U)))),64);
            tracep->chgCData(oldp+507,((0xffU & ((vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[5U] 
                                                  << 7U) 
                                                 | (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                                    >> 0x19U)))),8);
            tracep->chgCData(oldp+508,((3U & (vlSelf->SimTop__DOT____Vcellinp__mux__ireqs[4U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+509,(vlSelf->SimTop__DOT__mux__DOT__busy));
            tracep->chgIData(oldp+510,(vlSelf->SimTop__DOT__mux__DOT__index),32);
            tracep->chgIData(oldp+511,(vlSelf->SimTop__DOT__mux__DOT__select),32);
            tracep->chgBit(oldp+512,((1U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+513,((1U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+514,((7U & (vlSelf->SimTop__DOT__mux__DOT__saved_req[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+515,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__mux__DOT__saved_req[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__mux__DOT__saved_req[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__mux__DOT__saved_req[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+517,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__saved_req[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+518,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__mux__DOT__saved_req[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__mux__DOT__saved_req[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__mux__DOT__saved_req[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+520,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__saved_req[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+521,((3U & vlSelf->SimTop__DOT__mux__DOT__saved_req[0U])),2);
            tracep->chgBit(oldp+522,((1U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+523,((1U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+524,((7U & (vlSelf->SimTop__DOT__mux__DOT__selected_req[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+525,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__mux__DOT__selected_req[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__mux__DOT__selected_req[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__mux__DOT__selected_req[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+527,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__selected_req[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+528,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__mux__DOT__selected_req[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__mux__DOT__selected_req[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__mux__DOT__selected_req[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+530,((0xffU & (vlSelf->SimTop__DOT__mux__DOT__selected_req[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+531,((3U & vlSelf->SimTop__DOT__mux__DOT__selected_req[0U])),2);
            tracep->chgIData(oldp+532,(vlSelf->SimTop__DOT__mux__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+533,(vlSelf->SimTop__DOT__mux__DOT__unnamedblk2__DOT__i),32);
            tracep->chgBit(oldp+534,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+535,((1U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+536,((7U & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U] 
                                              >> 0x12U))),3);
            tracep->chgQData(oldp+537,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__ram__DOT__saved_oreq[4U])) 
                                         << 0x2eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__ram__DOT__saved_oreq[3U])) 
                                            << 0xeU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                              >> 0x12U)))),64);
            tracep->chgCData(oldp+539,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U] 
                                                 >> 0xaU))),8);
            tracep->chgQData(oldp+540,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__ram__DOT__saved_oreq[2U])) 
                                         << 0x36U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__ram__DOT__saved_oreq[1U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])) 
                                              >> 0xaU)))),64);
            tracep->chgCData(oldp+542,((0xffU & (vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U] 
                                                 >> 2U))),8);
            tracep->chgCData(oldp+543,((3U & vlSelf->SimTop__DOT__ram__DOT__saved_oreq[0U])),2);
            tracep->chgCData(oldp+544,(vlSelf->SimTop__DOT__ram__DOT__state),2);
            tracep->chgCData(oldp+545,(vlSelf->SimTop__DOT__ram__DOT__count_down),8);
            tracep->chgCData(oldp+546,(vlSelf->SimTop__DOT__ram__DOT__size),4);
            tracep->chgQData(oldp+547,(vlSelf->SimTop__DOT__ram__DOT__addr),64);
            tracep->chgQData(oldp+549,(vlSelf->SimTop__DOT__ram__DOT__idx),64);
            tracep->chgQData(oldp+551,(vlSelf->SimTop__DOT__ram__DOT__wrap1),64);
            tracep->chgQData(oldp+553,(vlSelf->SimTop__DOT__ram__DOT__wrap2),64);
            tracep->chgQData(oldp+555,(vlSelf->SimTop__DOT__ram__DOT__cyc_cnt),64);
            tracep->chgQData(oldp+557,(vlSelf->SimTop__DOT__ram__DOT__ms_cnt),64);
            tracep->chgQData(oldp+559,(vlSelf->SimTop__DOT__ram__DOT__wmask),64);
            tracep->chgQData(oldp+561,(vlSelf->SimTop__DOT__ram__DOT__mtime),64);
            tracep->chgQData(oldp+563,(vlSelf->SimTop__DOT__ram__DOT__mtimecmp),64);
            tracep->chgBit(oldp+565,(vlSelf->SimTop__DOT__ram__DOT__msip));
        }
        tracep->chgBit(oldp+566,(vlSelf->clock));
        tracep->chgBit(oldp+567,(vlSelf->reset));
        tracep->chgQData(oldp+568,(vlSelf->io_logCtrl_log_begin),64);
        tracep->chgQData(oldp+570,(vlSelf->io_logCtrl_log_end),64);
        tracep->chgQData(oldp+572,(vlSelf->io_logCtrl_log_level),64);
        tracep->chgBit(oldp+574,(vlSelf->io_perfInfo_clean));
        tracep->chgBit(oldp+575,(vlSelf->io_perfInfo_dump));
        tracep->chgBit(oldp+576,(vlSelf->io_uart_out_valid));
        tracep->chgCData(oldp+577,(vlSelf->io_uart_out_ch),8);
        tracep->chgBit(oldp+578,(vlSelf->io_uart_in_valid));
        tracep->chgCData(oldp+579,(vlSelf->io_uart_in_ch),8);
    }
}

void VSimTop___024root__traceCleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VSimTop___024root* const __restrict vlSelf = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
