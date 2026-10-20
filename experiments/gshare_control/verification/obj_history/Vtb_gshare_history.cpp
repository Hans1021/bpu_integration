// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_gshare_history__pch.h"

//============================================================
// Constructors

Vtb_gshare_history::Vtb_gshare_history(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_gshare_history__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_gshare_history::Vtb_gshare_history(const char* _vcname__)
    : Vtb_gshare_history(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_gshare_history::~Vtb_gshare_history() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_gshare_history___024root___eval_debug_assertions(Vtb_gshare_history___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_gshare_history___024root___eval_static(Vtb_gshare_history___024root* vlSelf);
void Vtb_gshare_history___024root___eval_initial(Vtb_gshare_history___024root* vlSelf);
void Vtb_gshare_history___024root___eval_settle(Vtb_gshare_history___024root* vlSelf);
void Vtb_gshare_history___024root___eval(Vtb_gshare_history___024root* vlSelf);

void Vtb_gshare_history::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_gshare_history::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_gshare_history___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_gshare_history___024root___eval_static(&(vlSymsp->TOP));
        Vtb_gshare_history___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_gshare_history___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_gshare_history___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_gshare_history::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_gshare_history::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_gshare_history::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_gshare_history___024root___eval_final(Vtb_gshare_history___024root* vlSelf);

VL_ATTR_COLD void Vtb_gshare_history::final() {
    Vtb_gshare_history___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_gshare_history::hierName() const { return vlSymsp->name(); }
const char* Vtb_gshare_history::modelName() const { return "Vtb_gshare_history"; }
unsigned Vtb_gshare_history::threads() const { return 1; }
void Vtb_gshare_history::prepareClone() const { contextp()->prepareClone(); }
void Vtb_gshare_history::atClone() const {
    contextp()->threadPoolpOnClone();
}
