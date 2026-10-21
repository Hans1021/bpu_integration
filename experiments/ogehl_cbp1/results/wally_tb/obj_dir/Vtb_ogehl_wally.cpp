// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_ogehl_wally__pch.h"

//============================================================
// Constructors

Vtb_ogehl_wally::Vtb_ogehl_wally(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_ogehl_wally__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_ogehl_wally::Vtb_ogehl_wally(const char* _vcname__)
    : Vtb_ogehl_wally(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_ogehl_wally::~Vtb_ogehl_wally() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_ogehl_wally___024root___eval_debug_assertions(Vtb_ogehl_wally___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_ogehl_wally___024root___eval_static(Vtb_ogehl_wally___024root* vlSelf);
void Vtb_ogehl_wally___024root___eval_initial(Vtb_ogehl_wally___024root* vlSelf);
void Vtb_ogehl_wally___024root___eval_settle(Vtb_ogehl_wally___024root* vlSelf);
void Vtb_ogehl_wally___024root___eval(Vtb_ogehl_wally___024root* vlSelf);

void Vtb_ogehl_wally::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_ogehl_wally::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_ogehl_wally___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_ogehl_wally___024root___eval_static(&(vlSymsp->TOP));
        Vtb_ogehl_wally___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_ogehl_wally___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_ogehl_wally___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_ogehl_wally::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_ogehl_wally::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_ogehl_wally::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_ogehl_wally___024root___eval_final(Vtb_ogehl_wally___024root* vlSelf);

VL_ATTR_COLD void Vtb_ogehl_wally::final() {
    Vtb_ogehl_wally___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_ogehl_wally::hierName() const { return vlSymsp->name(); }
const char* Vtb_ogehl_wally::modelName() const { return "Vtb_ogehl_wally"; }
unsigned Vtb_ogehl_wally::threads() const { return 1; }
void Vtb_ogehl_wally::prepareClone() const { contextp()->prepareClone(); }
void Vtb_ogehl_wally::atClone() const {
    contextp()->threadPoolpOnClone();
}
