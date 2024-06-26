// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VSimTop__Syms.h"
#include "VSimTop.h"
#include "VSimTop___024root.h"
#include "VSimTop___024unit.h"

// FUNCTIONS
VSimTop__Syms::~VSimTop__Syms()
{
}

VSimTop__Syms::VSimTop__Syms(VerilatedContext* contextp, const char* namep,VSimTop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
    , TOP____024unit(Verilated::catName(namep, "$unit"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP____024unit.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_SimTop__core__decode__controlUnit.configure(this, name(), "SimTop.core.decode.controlUnit", "controlUnit", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__core__execute.configure(this, name(), "SimTop.core.execute", "execute", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__core__execute__diviter.configure(this, name(), "SimTop.core.execute.diviter", "diviter", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__core__execute__multipler.configure(this, name(), "SimTop.core.execute.multipler", "multipler", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__core__fetch.configure(this, name(), "SimTop.core.fetch", "fetch", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__core__memory__Datamem.configure(this, name(), "SimTop.core.memory.Datamem", "Datamem", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__core__reg_DE.configure(this, name(), "SimTop.core.reg_DE", "reg_DE", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__core__reg_FD.configure(this, name(), "SimTop.core.reg_FD", "reg_FD", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SimTop__ram.configure(this, name(), "SimTop.ram", "ram", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}
