// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gshare_hazards.h for the primary calling header

#include "Vtb_gshare_hazards__pch.h"
#include "Vtb_gshare_hazards__Syms.h"
#include "Vtb_gshare_hazards___024root.h"

void Vtb_gshare_hazards___024root___ctor_var_reset(Vtb_gshare_hazards___024root* vlSelf);

Vtb_gshare_hazards___024root::Vtb_gshare_hazards___024root(Vtb_gshare_hazards__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_gshare_hazards___024root___ctor_var_reset(this);
}

void Vtb_gshare_hazards___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_gshare_hazards___024root::~Vtb_gshare_hazards___024root() {
}
