// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ogehl_wally_extended.h for the primary calling header

#include "Vtb_ogehl_wally_extended__pch.h"
#include "Vtb_ogehl_wally_extended__Syms.h"
#include "Vtb_ogehl_wally_extended___024root.h"

void Vtb_ogehl_wally_extended___024root___ctor_var_reset(Vtb_ogehl_wally_extended___024root* vlSelf);

Vtb_ogehl_wally_extended___024root::Vtb_ogehl_wally_extended___024root(Vtb_ogehl_wally_extended__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_ogehl_wally_extended___024root___ctor_var_reset(this);
}

void Vtb_ogehl_wally_extended___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_ogehl_wally_extended___024root::~Vtb_ogehl_wally_extended___024root() {
}
