// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_gshare_llm.h for the primary calling header

#ifndef VERILATED_VTB_GSHARE_LLM___024ROOT_H_
#define VERILATED_VTB_GSHARE_LLM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_gshare_llm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_gshare_llm___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_gshare_llm__DOT__clk;
    CData/*0:0*/ tb_gshare_llm__DOT__reset;
    CData/*0:0*/ tb_gshare_llm__DOT__StallF;
    CData/*0:0*/ tb_gshare_llm__DOT__StallD;
    CData/*0:0*/ tb_gshare_llm__DOT__StallE;
    CData/*0:0*/ tb_gshare_llm__DOT__FlushD;
    CData/*0:0*/ tb_gshare_llm__DOT__FlushE;
    CData/*0:0*/ tb_gshare_llm__DOT__BPBranchF;
    CData/*0:0*/ tb_gshare_llm__DOT__BranchD;
    CData/*0:0*/ tb_gshare_llm__DOT__BranchE;
    CData/*0:0*/ tb_gshare_llm__DOT__PCSrcE;
    CData/*0:0*/ tb_gshare_llm__DOT__BPDirWrongE;
    CData/*3:0*/ tb_gshare_llm__DOT__dut__DOT__committed_history;
    CData/*3:0*/ tb_gshare_llm__DOT__dut__DOT__speculative_history;
    CData/*3:0*/ tb_gshare_llm__DOT__dut__DOT__committed_history_n;
    CData/*3:0*/ tb_gshare_llm__DOT__dut__DOT__speculative_history_n;
    CData/*0:0*/ tb_gshare_llm__DOT__dut__DOT__validD;
    CData/*0:0*/ tb_gshare_llm__DOT__dut__DOT__validD_n;
    CData/*3:0*/ tb_gshare_llm__DOT__dut__DOT__indexD;
    CData/*3:0*/ tb_gshare_llm__DOT__dut__DOT__indexD_n;
    CData/*1:0*/ tb_gshare_llm__DOT__dut__DOT__predictionD;
    CData/*1:0*/ tb_gshare_llm__DOT__dut__DOT__predictionD_n;
    CData/*0:0*/ tb_gshare_llm__DOT__dut__DOT__consumedD;
    CData/*0:0*/ tb_gshare_llm__DOT__dut__DOT__consumedD_n;
    CData/*0:0*/ tb_gshare_llm__DOT__dut__DOT__validE;
    CData/*0:0*/ tb_gshare_llm__DOT__dut__DOT__validE_n;
    CData/*3:0*/ tb_gshare_llm__DOT__dut__DOT__indexE;
    CData/*3:0*/ tb_gshare_llm__DOT__dut__DOT__indexE_n;
    CData/*1:0*/ tb_gshare_llm__DOT__dut__DOT__predictionE;
    CData/*1:0*/ tb_gshare_llm__DOT__dut__DOT__predictionE_n;
    CData/*0:0*/ tb_gshare_llm__DOT__dut__DOT__trainedE;
    CData/*0:0*/ tb_gshare_llm__DOT__dut__DOT__trainedE_n;
    CData/*0:0*/ tb_gshare_llm__DOT__dut__DOT__consumedF;
    CData/*0:0*/ tb_gshare_llm__DOT__dut__DOT__consumedF_n;
    CData/*1:0*/ tb_gshare_llm__DOT__dut__DOT__pht_readF;
    CData/*0:0*/ tb_gshare_llm__DOT__dut__DOT__resolveE;
    CData/*1:0*/ tb_gshare_llm__DOT__dut__DOT__update_new;
    CData/*1:0*/ __Vfunc_tb_gshare_llm__DOT__dut__DOT__saturating_update__17__Vfuncout;
    CData/*1:0*/ __Vfunc_tb_gshare_llm__DOT__dut__DOT__saturating_update__17__old_counter;
    CData/*0:0*/ __Vfunc_tb_gshare_llm__DOT__dut__DOT__saturating_update__17__actual_taken;
    CData/*3:0*/ __Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__18__Vfuncout;
    CData/*3:0*/ __Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__18__history;
    CData/*0:0*/ __Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__18__outcome;
    CData/*3:0*/ __Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__19__Vfuncout;
    CData/*3:0*/ __Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__19__history;
    CData/*0:0*/ __Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__19__outcome;
    CData/*3:0*/ __Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__20__Vfuncout;
    CData/*3:0*/ __Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__20__history;
    CData/*0:0*/ __Vfunc_tb_gshare_llm__DOT__dut__DOT__shift_history__20__outcome;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_gshare_llm__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_gshare_llm__DOT__PCF;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*1:0*/, 16> tb_gshare_llm__DOT__dut__DOT__pht;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h1b6aa2eb__0;
    VlTriggerScheduler __VtrigSched_h1b6aa2aa__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_gshare_llm__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_gshare_llm___024root(Vtb_gshare_llm__Syms* symsp, const char* v__name);
    ~Vtb_gshare_llm___024root();
    VL_UNCOPYABLE(Vtb_gshare_llm___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
