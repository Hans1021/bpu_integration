// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_gshare_history__pch.h"
#include "Vtb_gshare_history.h"
#include "Vtb_gshare_history___024root.h"

// FUNCTIONS
Vtb_gshare_history__Syms::~Vtb_gshare_history__Syms()
{
}

Vtb_gshare_history__Syms::Vtb_gshare_history__Syms(VerilatedContext* contextp, const char* namep, Vtb_gshare_history* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(68);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
