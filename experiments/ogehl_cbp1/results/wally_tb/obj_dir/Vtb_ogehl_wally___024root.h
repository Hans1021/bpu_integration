// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_ogehl_wally.h for the primary calling header

#ifndef VERILATED_VTB_OGEHL_WALLY___024ROOT_H_
#define VERILATED_VTB_OGEHL_WALLY___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_ogehl_wally__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_ogehl_wally___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_ogehl_wally__DOT__clk;
        CData/*0:0*/ tb_ogehl_wally__DOT__reset;
        CData/*0:0*/ tb_ogehl_wally__DOT__StallD;
        CData/*0:0*/ tb_ogehl_wally__DOT__StallE;
        CData/*0:0*/ tb_ogehl_wally__DOT__FlushD;
        CData/*0:0*/ tb_ogehl_wally__DOT__FlushE;
        CData/*0:0*/ tb_ogehl_wally__DOT__FlushM;
        CData/*0:0*/ tb_ogehl_wally__DOT__InstrValidD;
        CData/*0:0*/ tb_ogehl_wally__DOT__InstrValidE;
        CData/*0:0*/ tb_ogehl_wally__DOT__BPBranchF;
        CData/*0:0*/ tb_ogehl_wally__DOT__BPJumpF;
        CData/*0:0*/ tb_ogehl_wally__DOT__BranchD;
        CData/*0:0*/ tb_ogehl_wally__DOT__JumpD;
        CData/*0:0*/ tb_ogehl_wally__DOT__CallD;
        CData/*0:0*/ tb_ogehl_wally__DOT__ReturnD;
        CData/*0:0*/ tb_ogehl_wally__DOT__BranchE;
        CData/*0:0*/ tb_ogehl_wally__DOT__JumpE;
        CData/*0:0*/ tb_ogehl_wally__DOT__CallE;
        CData/*0:0*/ tb_ogehl_wally__DOT__ReturnE;
        CData/*0:0*/ tb_ogehl_wally__DOT__PCSrcE;
        CData/*7:0*/ tb_ogehl_wally__DOT__dut__DOT__TC;
        CData/*4:0*/ tb_ogehl_wally__DOT__dut__DOT__thresupdate;
        CData/*0:0*/ tb_ogehl_wally__DOT__dut__DOT__raw_predictionF;
        CData/*0:0*/ tb_ogehl_wally__DOT__dut__DOT__meta_validD;
        CData/*0:0*/ tb_ogehl_wally__DOT__dut__DOT__meta_validE;
        CData/*0:0*/ tb_ogehl_wally__DOT__dut__DOT__steered_takenD;
        CData/*0:0*/ tb_ogehl_wally__DOT__dut__DOT__resolve_condE;
        CData/*0:0*/ tb_ogehl_wally__DOT__dut__DOT__resolve_jumpE;
        CData/*0:0*/ tb_ogehl_wally__DOT__dut__DOT__resolve_cfiE;
        CData/*0:0*/ tb_ogehl_wally__DOT__dut__DOT__direction_wrongE;
        CData/*0:0*/ tb_ogehl_wally__DOT__dut__DOT__trainE;
        CData/*0:0*/ tb_ogehl_wally__DOT__dut__DOT__alias_checkE;
        CData/*4:0*/ tb_ogehl_wally__DOT__dut__DOT__thres_nextE;
        CData/*7:0*/ tb_ogehl_wally__DOT__dut__DOT__tc_nextE;
        CData/*0:0*/ tb_ogehl_wally__DOT__dut__DOT__switch_shortE;
        CData/*0:0*/ tb_ogehl_wally__DOT__dut__DOT__switch_longE;
        CData/*0:0*/ tb_ogehl_wally__DOT__dut__DOT____Vlvbound_h289c1bac__0;
        CData/*0:0*/ tb_ogehl_wally__DOT__dut__DOT____Vlvbound_h289c1bac__1;
        CData/*0:0*/ tb_ogehl_wally__DOT__dut__DOT____Vlvbound_h289c1bac__2;
        CData/*0:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__advance_global__28__outcome;
        CData/*0:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__advance_path__29__pc_bit0;
        CData/*0:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__advance_global__30__outcome;
        CData/*0:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__advance_path__31__pc_bit0;
        CData/*0:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__selected_bit;
        CData/*4:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat5__33__Vfuncout;
        CData/*4:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat5__33__value;
        CData/*0:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat5__33__actual_taken;
        CData/*4:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat5__34__Vfuncout;
        CData/*4:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat5__34__value;
        CData/*0:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat5__34__actual_taken;
        CData/*3:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__35__Vfuncout;
        CData/*3:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__35__value;
        CData/*0:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__35__actual_taken;
        CData/*3:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__36__Vfuncout;
        CData/*3:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__36__value;
        CData/*0:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__36__actual_taken;
        CData/*3:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__37__Vfuncout;
        CData/*3:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__37__value;
        CData/*0:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__37__actual_taken;
        CData/*3:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__38__Vfuncout;
        CData/*3:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__38__value;
        CData/*0:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__38__actual_taken;
        CData/*3:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__39__Vfuncout;
        CData/*3:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__39__value;
    };
    struct {
        CData/*0:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__39__actual_taken;
        CData/*3:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__40__Vfuncout;
        CData/*3:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__40__value;
        CData/*0:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__sat4__40__actual_taken;
        CData/*4:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend5__41__counter_value;
        CData/*4:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend5__42__counter_value;
        CData/*3:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend4__43__counter_value;
        CData/*3:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend4__44__counter_value;
        CData/*3:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend4__45__counter_value;
        CData/*3:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend4__46__counter_value;
        CData/*3:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend4__47__counter_value;
        CData/*3:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend4__48__counter_value;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ogehl_wally__DOT__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ tb_ogehl_wally__DOT__dut__DOT__committed_path_history;
        SData/*8:0*/ tb_ogehl_wally__DOT__dut__DOT__AC;
        SData/*15:0*/ tb_ogehl_wally__DOT__dut__DOT__prediction_sumF;
        SData/*15:0*/ tb_ogehl_wally__DOT__dut__DOT__prediction_sumD;
        SData/*15:0*/ tb_ogehl_wally__DOT__dut__DOT__prediction_sumE;
        SData/*8:0*/ tb_ogehl_wally__DOT__dut__DOT__ac_nextE;
        SData/*15:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__advance_path__29__Vfuncout;
        SData/*15:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__advance_path__29__history;
        SData/*15:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__advance_path__31__Vfuncout;
        SData/*15:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__advance_path__31__history;
        SData/*10:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__Vfuncout;
        SData/*15:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__ph;
        SData/*10:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__chunk;
        SData/*10:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__rotated;
        SData/*10:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__result;
        SData/*15:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend5__41__Vfuncout;
        SData/*15:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend5__42__Vfuncout;
        SData/*15:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend4__43__Vfuncout;
        SData/*15:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend4__44__Vfuncout;
        SData/*15:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend4__45__Vfuncout;
        SData/*15:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend4__46__Vfuncout;
        SData/*15:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend4__47__Vfuncout;
        SData/*15:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__extend4__48__Vfuncout;
        IData/*31:0*/ tb_ogehl_wally__DOT__PCF;
        IData/*31:0*/ tb_ogehl_wally__DOT__PCD;
        IData/*31:0*/ tb_ogehl_wally__DOT__PCE;
        IData/*31:0*/ tb_ogehl_wally__DOT__checks;
        VlWide<7>/*199:0*/ tb_ogehl_wally__DOT__dut__DOT__committed_global_history;
        IData/*31:0*/ tb_ogehl_wally__DOT__dut__DOT__predictor_state__DOT__unnamedblk3__DOT__i;
        VlWide<7>/*199:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__advance_global__28__Vfuncout;
        VlWide<7>/*199:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__advance_global__28__history;
        VlWide<7>/*199:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__advance_global__30__Vfuncout;
        VlWide<7>/*199:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__advance_global__30__history;
        IData/*31:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__pc;
        VlWide<7>/*199:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__gh;
        IData/*31:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__table_number;
        IData/*31:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__m;
        IData/*31:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__w;
        IData/*31:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__n;
        IData/*31:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__p;
        IData/*31:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__min_add;
        IData/*31:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__funct;
        IData/*31:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__source_pos;
        IData/*31:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__rotation;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__inter;
        QData/*32:0*/ __Vfunc_tb_ogehl_wally__DOT__dut__DOT__ogehl_index__32__remaining;
        VlUnpacked<CData/*4:0*/, 2048> tb_ogehl_wally__DOT__dut__DOT__T0;
        VlUnpacked<CData/*4:0*/, 1024> tb_ogehl_wally__DOT__dut__DOT__T1;
    };
    struct {
        VlUnpacked<CData/*3:0*/, 2048> tb_ogehl_wally__DOT__dut__DOT__T2;
        VlUnpacked<CData/*3:0*/, 2048> tb_ogehl_wally__DOT__dut__DOT__T3;
        VlUnpacked<CData/*3:0*/, 2048> tb_ogehl_wally__DOT__dut__DOT__T4;
        VlUnpacked<CData/*3:0*/, 2048> tb_ogehl_wally__DOT__dut__DOT__T5;
        VlUnpacked<CData/*3:0*/, 2048> tb_ogehl_wally__DOT__dut__DOT__T6;
        VlUnpacked<CData/*3:0*/, 2048> tb_ogehl_wally__DOT__dut__DOT__T7;
        VlUnpacked<CData/*0:0*/, 1024> tb_ogehl_wally__DOT__dut__DOT__MINITAG;
        VlUnpacked<CData/*7:0*/, 8> tb_ogehl_wally__DOT__dut__DOT__UsedHistLength;
        VlUnpacked<SData/*10:0*/, 8> tb_ogehl_wally__DOT__dut__DOT__indicesF;
        VlUnpacked<SData/*10:0*/, 8> tb_ogehl_wally__DOT__dut__DOT__indicesD;
        VlUnpacked<SData/*10:0*/, 8> tb_ogehl_wally__DOT__dut__DOT__indicesE;
        VlUnpacked<CData/*7:0*/, 8> tb_ogehl_wally__DOT__dut__DOT__active_lengthF;
    };
    VlNBACommitQueue<VlUnpacked<CData/*4:0*/, 2048>, false, CData/*4:0*/, 1> __VdlyCommitQueuetb_ogehl_wally__DOT__dut__DOT__T0;
    VlNBACommitQueue<VlUnpacked<CData/*4:0*/, 1024>, false, CData/*4:0*/, 1> __VdlyCommitQueuetb_ogehl_wally__DOT__dut__DOT__T1;
    VlNBACommitQueue<VlUnpacked<CData/*3:0*/, 2048>, false, CData/*3:0*/, 1> __VdlyCommitQueuetb_ogehl_wally__DOT__dut__DOT__T2;
    VlNBACommitQueue<VlUnpacked<CData/*3:0*/, 2048>, false, CData/*3:0*/, 1> __VdlyCommitQueuetb_ogehl_wally__DOT__dut__DOT__T3;
    VlNBACommitQueue<VlUnpacked<CData/*3:0*/, 2048>, false, CData/*3:0*/, 1> __VdlyCommitQueuetb_ogehl_wally__DOT__dut__DOT__T4;
    VlNBACommitQueue<VlUnpacked<CData/*3:0*/, 2048>, false, CData/*3:0*/, 1> __VdlyCommitQueuetb_ogehl_wally__DOT__dut__DOT__T5;
    VlNBACommitQueue<VlUnpacked<CData/*3:0*/, 2048>, false, CData/*3:0*/, 1> __VdlyCommitQueuetb_ogehl_wally__DOT__dut__DOT__T6;
    VlNBACommitQueue<VlUnpacked<CData/*3:0*/, 2048>, false, CData/*3:0*/, 1> __VdlyCommitQueuetb_ogehl_wally__DOT__dut__DOT__T7;
    VlNBACommitQueue<VlUnpacked<CData/*0:0*/, 1024>, false, CData/*0:0*/, 1> __VdlyCommitQueuetb_ogehl_wally__DOT__dut__DOT__MINITAG;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_he2eda4b2__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_ogehl_wally__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_ogehl_wally___024root(Vtb_ogehl_wally__Syms* symsp, const char* v__name);
    ~Vtb_ogehl_wally___024root();
    VL_UNCOPYABLE(Vtb_ogehl_wally___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
