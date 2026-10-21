// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_OGEHL_WALLY_EXTENDED__SYMS_H_
#define VERILATED_VTB_OGEHL_WALLY_EXTENDED__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_ogehl_wally_extended.h"

// INCLUDE MODULE CLASSES
#include "Vtb_ogehl_wally_extended___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_ogehl_wally_extended__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_ogehl_wally_extended* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_ogehl_wally_extended___024root TOP;

    // CONSTRUCTORS
    Vtb_ogehl_wally_extended__Syms(VerilatedContext* contextp, const char* namep, Vtb_ogehl_wally_extended* modelp);
    ~Vtb_ogehl_wally_extended__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
