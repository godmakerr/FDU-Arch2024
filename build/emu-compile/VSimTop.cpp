// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSimTop.h"
#include "VSimTop__Syms.h"
#include "verilated_fst_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VSimTop::VSimTop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VSimTop__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_logCtrl_log_begin{vlSymsp->TOP.io_logCtrl_log_begin}
    , io_logCtrl_log_end{vlSymsp->TOP.io_logCtrl_log_end}
    , io_logCtrl_log_level{vlSymsp->TOP.io_logCtrl_log_level}
    , io_perfInfo_clean{vlSymsp->TOP.io_perfInfo_clean}
    , io_perfInfo_dump{vlSymsp->TOP.io_perfInfo_dump}
    , io_uart_out_valid{vlSymsp->TOP.io_uart_out_valid}
    , io_uart_out_ch{vlSymsp->TOP.io_uart_out_ch}
    , io_uart_in_valid{vlSymsp->TOP.io_uart_in_valid}
    , io_uart_in_ch{vlSymsp->TOP.io_uart_in_ch}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
}

VSimTop::VSimTop(const char* _vcname__)
    : VSimTop(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VSimTop::~VSimTop() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VSimTop___024root___eval_initial(VSimTop___024root* vlSelf);
void VSimTop___024root___eval_settle(VSimTop___024root* vlSelf);
void VSimTop___024root___eval(VSimTop___024root* vlSelf);
QData VSimTop___024root___change_request(VSimTop___024root* vlSelf);
#ifdef VL_DEBUG
void VSimTop___024root___eval_debug_assertions(VSimTop___024root* vlSelf);
#endif  // VL_DEBUG
void VSimTop___024root___final(VSimTop___024root* vlSelf);

static void _eval_initial_loop(VSimTop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VSimTop___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VSimTop___024root___eval_settle(&(vlSymsp->TOP));
        VSimTop___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VSimTop___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/cs/arch-2024/build/../vsrc/../build/../vsrc/SimTop.sv", 8, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VSimTop___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VSimTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSimTop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSimTop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VSimTop___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VSimTop___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/cs/arch-2024/build/../vsrc/../build/../vsrc/SimTop.sv", 8, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VSimTop___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VSimTop::final() {
    VSimTop___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VSimTop::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VSimTop::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VSimTop___024root__traceInitTop(VSimTop___024root* vlSelf, VerilatedFst* tracep);

static void traceInit(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VSimTop___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VSimTop___024root__traceRegister(VSimTop___024root* vlSelf, VerilatedFst* tracep);

void VSimTop::trace(VerilatedFstC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VSimTop___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
