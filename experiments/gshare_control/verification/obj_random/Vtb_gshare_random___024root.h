// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_gshare_random.h for the primary calling header

#ifndef VERILATED_VTB_GSHARE_RANDOM___024ROOT_H_
#define VERILATED_VTB_GSHARE_RANDOM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_gshare_random__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_gshare_random___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_gshare_random__DOT__clk;
    CData/*0:0*/ tb_gshare_random__DOT__reset;
    CData/*0:0*/ tb_gshare_random__DOT__StallF;
    CData/*0:0*/ tb_gshare_random__DOT__StallD;
    CData/*0:0*/ tb_gshare_random__DOT__StallE;
    CData/*0:0*/ tb_gshare_random__DOT__FlushD;
    CData/*0:0*/ tb_gshare_random__DOT__FlushE;
    CData/*0:0*/ tb_gshare_random__DOT__BPBranchF;
    CData/*0:0*/ tb_gshare_random__DOT__BranchD;
    CData/*0:0*/ tb_gshare_random__DOT__BranchE;
    CData/*0:0*/ tb_gshare_random__DOT__PCSrcE;
    CData/*0:0*/ tb_gshare_random__DOT__BPDirWrongE;
    CData/*1:0*/ tb_gshare_random__DOT__vec_before;
    CData/*1:0*/ tb_gshare_random__DOT__vec_after;
    CData/*3:0*/ tb_gshare_random__DOT__vec_index;
    CData/*3:0*/ tb_gshare_random__DOT__vec_history;
    CData/*3:0*/ tb_gshare_random__DOT__dut__DOT__committed_history;
    CData/*3:0*/ tb_gshare_random__DOT__dut__DOT__speculative_history;
    CData/*3:0*/ tb_gshare_random__DOT__dut__DOT__committed_history_n;
    CData/*3:0*/ tb_gshare_random__DOT__dut__DOT__speculative_history_n;
    CData/*0:0*/ tb_gshare_random__DOT__dut__DOT__validD;
    CData/*0:0*/ tb_gshare_random__DOT__dut__DOT__validD_n;
    CData/*3:0*/ tb_gshare_random__DOT__dut__DOT__indexD;
    CData/*3:0*/ tb_gshare_random__DOT__dut__DOT__indexD_n;
    CData/*1:0*/ tb_gshare_random__DOT__dut__DOT__predictionD;
    CData/*1:0*/ tb_gshare_random__DOT__dut__DOT__predictionD_n;
    CData/*0:0*/ tb_gshare_random__DOT__dut__DOT__consumedD;
    CData/*0:0*/ tb_gshare_random__DOT__dut__DOT__consumedD_n;
    CData/*0:0*/ tb_gshare_random__DOT__dut__DOT__validE;
    CData/*0:0*/ tb_gshare_random__DOT__dut__DOT__validE_n;
    CData/*3:0*/ tb_gshare_random__DOT__dut__DOT__indexE;
    CData/*3:0*/ tb_gshare_random__DOT__dut__DOT__indexE_n;
    CData/*1:0*/ tb_gshare_random__DOT__dut__DOT__predictionE;
    CData/*1:0*/ tb_gshare_random__DOT__dut__DOT__predictionE_n;
    CData/*0:0*/ tb_gshare_random__DOT__dut__DOT__trainedE;
    CData/*0:0*/ tb_gshare_random__DOT__dut__DOT__trainedE_n;
    CData/*0:0*/ tb_gshare_random__DOT__dut__DOT__consumedF;
    CData/*0:0*/ tb_gshare_random__DOT__dut__DOT__consumedF_n;
    CData/*3:0*/ tb_gshare_random__DOT__dut__DOT__indexF;
    CData/*1:0*/ tb_gshare_random__DOT__dut__DOT__pht_readF;
    CData/*0:0*/ tb_gshare_random__DOT__dut__DOT__resolveE;
    CData/*1:0*/ tb_gshare_random__DOT__dut__DOT__update_new;
    CData/*1:0*/ __Vfunc_tb_gshare_random__DOT__dut__DOT__saturating_update__2__Vfuncout;
    CData/*1:0*/ __Vfunc_tb_gshare_random__DOT__dut__DOT__saturating_update__2__old_counter;
    CData/*0:0*/ __Vfunc_tb_gshare_random__DOT__dut__DOT__saturating_update__2__actual_taken;
    CData/*3:0*/ __Vfunc_tb_gshare_random__DOT__dut__DOT__shift_history__3__Vfuncout;
    CData/*3:0*/ __Vfunc_tb_gshare_random__DOT__dut__DOT__shift_history__3__history;
    CData/*0:0*/ __Vfunc_tb_gshare_random__DOT__dut__DOT__shift_history__3__outcome;
    CData/*3:0*/ __Vfunc_tb_gshare_random__DOT__dut__DOT__shift_history__4__Vfuncout;
    CData/*3:0*/ __Vfunc_tb_gshare_random__DOT__dut__DOT__shift_history__4__history;
    CData/*0:0*/ __Vfunc_tb_gshare_random__DOT__dut__DOT__shift_history__4__outcome;
    CData/*3:0*/ __Vfunc_tb_gshare_random__DOT__dut__DOT__shift_history__5__Vfuncout;
    CData/*3:0*/ __Vfunc_tb_gshare_random__DOT__dut__DOT__shift_history__5__history;
    CData/*0:0*/ __Vfunc_tb_gshare_random__DOT__dut__DOT__shift_history__5__outcome;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_gshare_random__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_gshare_random__DOT__PCF;
    IData/*31:0*/ tb_gshare_random__DOT__rc;
    IData/*31:0*/ tb_gshare_random__DOT__vec_pc;
    IData/*31:0*/ tb_gshare_random__DOT__vec_actual;
    IData/*31:0*/ tb_gshare_random__DOT__vec_wrong;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*1:0*/, 16> tb_gshare_random__DOT__dut__DOT__pht;
    std::string tb_gshare_random__DOT__vector_file;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hbfbc481f__0;
    VlTriggerScheduler __VtrigSched_hbfbc48de__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_gshare_random__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_gshare_random___024root(Vtb_gshare_random__Syms* symsp, const char* v__name);
    ~Vtb_gshare_random___024root();
    VL_UNCOPYABLE(Vtb_gshare_random___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
