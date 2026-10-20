// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_GSHARE_HISTORY__SYMS_H_
#define VERILATED_VTB_GSHARE_HISTORY__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_gshare_history.h"

// INCLUDE MODULE CLASSES
#include "Vtb_gshare_history___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_gshare_history__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_gshare_history* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_gshare_history___024root   TOP;

    // CONSTRUCTORS
    Vtb_gshare_history__Syms(VerilatedContext* contextp, const char* namep, Vtb_gshare_history* modelp);
    ~Vtb_gshare_history__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
