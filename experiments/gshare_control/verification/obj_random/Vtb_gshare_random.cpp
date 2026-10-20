// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_gshare_random__pch.h"

//============================================================
// Constructors

Vtb_gshare_random::Vtb_gshare_random(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_gshare_random__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_gshare_random::Vtb_gshare_random(const char* _vcname__)
    : Vtb_gshare_random(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_gshare_random::~Vtb_gshare_random() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_gshare_random___024root___eval_debug_assertions(Vtb_gshare_random___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_gshare_random___024root___eval_static(Vtb_gshare_random___024root* vlSelf);
void Vtb_gshare_random___024root___eval_initial(Vtb_gshare_random___024root* vlSelf);
void Vtb_gshare_random___024root___eval_settle(Vtb_gshare_random___024root* vlSelf);
void Vtb_gshare_random___024root___eval(Vtb_gshare_random___024root* vlSelf);

void Vtb_gshare_random::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_gshare_random::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_gshare_random___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_gshare_random___024root___eval_static(&(vlSymsp->TOP));
        Vtb_gshare_random___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_gshare_random___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_gshare_random___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_gshare_random::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_gshare_random::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_gshare_random::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_gshare_random___024root___eval_final(Vtb_gshare_random___024root* vlSelf);

VL_ATTR_COLD void Vtb_gshare_random::final() {
    Vtb_gshare_random___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_gshare_random::hierName() const { return vlSymsp->name(); }
const char* Vtb_gshare_random::modelName() const { return "Vtb_gshare_random"; }
unsigned Vtb_gshare_random::threads() const { return 1; }
void Vtb_gshare_random::prepareClone() const { contextp()->prepareClone(); }
void Vtb_gshare_random::atClone() const {
    contextp()->threadPoolpOnClone();
}
