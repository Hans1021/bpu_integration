// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gshare_hazards.h for the primary calling header

#include "Vtb_gshare_hazards__pch.h"
#include "Vtb_gshare_hazards__Syms.h"
#include "Vtb_gshare_hazards___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_gshare_hazards___024root___eval_initial__TOP__Vtiming__0(Vtb_gshare_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_hazards___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_gshare_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_gshare_hazards__DOT__do_reset__1__tb_gshare_hazards__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_gshare_hazards__DOT__do_reset__1__tb_gshare_hazards__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_gshare_hazards__DOT__do_reset__4__tb_gshare_hazards__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_gshare_hazards__DOT__do_reset__4__tb_gshare_hazards__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSelfRef.tb_gshare_hazards__DOT__clk = 0U;
    __Vtask_tb_gshare_hazards__DOT__do_reset__1__tb_gshare_hazards__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    vlSelfRef.tb_gshare_hazards__DOT__StallF = 0U;
    vlSelfRef.tb_gshare_hazards__DOT__StallD = 0U;
    vlSelfRef.tb_gshare_hazards__DOT__StallE = 0U;
    vlSelfRef.tb_gshare_hazards__DOT__FlushD = 0U;
    vlSelfRef.tb_gshare_hazards__DOT__FlushE = 0U;
    vlSelfRef.tb_gshare_hazards__DOT__PCF = 0U;
    vlSelfRef.tb_gshare_hazards__DOT__BPBranchF = 0U;
    vlSelfRef.tb_gshare_hazards__DOT__BranchD = 0U;
    vlSelfRef.tb_gshare_hazards__DOT__BranchE = 0U;
    vlSelfRef.tb_gshare_hazards__DOT__PCSrcE = 0U;
    vlSelfRef.tb_gshare_hazards__DOT__reset = 1U;
    co_await vlSelfRef.__VtrigSched_hacf463ac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_hazards.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                                         65);
    __Vtask_tb_gshare_hazards__DOT__do_reset__1__tb_gshare_hazards__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_hacf463ac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_hazards.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                                         65);
    __Vtask_tb_gshare_hazards__DOT__do_reset__1__tb_gshare_hazards__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    co_await vlSelfRef.__VtrigSched_hacf4646d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_hazards.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                                         67);
    vlSelfRef.tb_gshare_hazards__DOT__reset = 0U;
    co_await vlSelfRef.__VtrigSched_hacf463ac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_hazards.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                                         70);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                         71);
    co_await vlSelfRef.__VtrigSched_hacf4646d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_hazards.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                                         79);
    vlSelfRef.tb_gshare_hazards__DOT__PCF = 0x100U;
    vlSelfRef.tb_gshare_hazards__DOT__BPBranchF = 1U;
    co_await vlSelfRef.__VtrigSched_hacf463ac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_hazards.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                                         83);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                         84);
    co_await vlSelfRef.__VtrigSched_hacf4646d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_hazards.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                                         86);
    vlSelfRef.tb_gshare_hazards__DOT__BPBranchF = 0U;
    vlSelfRef.tb_gshare_hazards__DOT__BranchD = 1U;
    co_await vlSelfRef.__VtrigSched_hacf463ac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_hazards.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                                         90);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                         91);
    co_await vlSelfRef.__VtrigSched_hacf4646d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_hazards.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                                         93);
    vlSelfRef.tb_gshare_hazards__DOT__BranchD = 0U;
    vlSelfRef.tb_gshare_hazards__DOT__BranchE = 1U;
    vlSelfRef.tb_gshare_hazards__DOT__PCSrcE = 1U;
    vlSelfRef.tb_gshare_hazards__DOT__PCF = 0x100U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                         117);
    if (VL_UNLIKELY(((2U != (IData)(vlSelfRef.tb_gshare_hazards__DOT__dut__DOT__pht_readF))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_hazards.sv:122: Assertion failed in %Ntb_gshare_hazards: RAW forwarding failed: expected 10 got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     2,(IData)(vlSelfRef.tb_gshare_hazards__DOT__dut__DOT__pht_readF));
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 122, "", false);
    }
    VL_WRITEF_NX("PASS: same-cycle PHT forwarding\n",0);
    co_await vlSelfRef.__VtrigSched_hacf463ac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_hazards.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                                         128);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                         129);
    if (VL_UNLIKELY(((2U != vlSelfRef.tb_gshare_hazards__DOT__dut__DOT__pht
                      [0U])))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_hazards.sv:132: Assertion failed in %Ntb_gshare_hazards: PHT update failed: expected 10 got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     2,vlSelfRef.tb_gshare_hazards__DOT__dut__DOT__pht
                     [0U]);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 132, "", false);
    }
    __Vtask_tb_gshare_hazards__DOT__do_reset__4__tb_gshare_hazards__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    vlSelfRef.tb_gshare_hazards__DOT__StallF = 0U;
    vlSelfRef.tb_gshare_hazards__DOT__StallD = 0U;
    vlSelfRef.tb_gshare_hazards__DOT__StallE = 0U;
    vlSelfRef.tb_gshare_hazards__DOT__FlushD = 0U;
    vlSelfRef.tb_gshare_hazards__DOT__FlushE = 0U;
    vlSelfRef.tb_gshare_hazards__DOT__PCF = 0U;
    vlSelfRef.tb_gshare_hazards__DOT__BPBranchF = 0U;
    vlSelfRef.tb_gshare_hazards__DOT__BranchD = 0U;
    vlSelfRef.tb_gshare_hazards__DOT__BranchE = 0U;
    vlSelfRef.tb_gshare_hazards__DOT__PCSrcE = 0U;
    vlSelfRef.tb_gshare_hazards__DOT__reset = 1U;
    co_await vlSelfRef.__VtrigSched_hacf463ac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_hazards.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                                         65);
    __Vtask_tb_gshare_hazards__DOT__do_reset__4__tb_gshare_hazards__DOT__unnamedblk1_1__DOT____Vrepeat0 = 1U;
    co_await vlSelfRef.__VtrigSched_hacf463ac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_hazards.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                                         65);
    __Vtask_tb_gshare_hazards__DOT__do_reset__4__tb_gshare_hazards__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0U;
    co_await vlSelfRef.__VtrigSched_hacf4646d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_hazards.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                                         67);
    vlSelfRef.tb_gshare_hazards__DOT__reset = 0U;
    co_await vlSelfRef.__VtrigSched_hacf463ac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_hazards.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                                         70);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                         71);
    co_await vlSelfRef.__VtrigSched_hacf4646d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_hazards.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                                         79);
    vlSelfRef.tb_gshare_hazards__DOT__PCF = 0x100U;
    vlSelfRef.tb_gshare_hazards__DOT__BPBranchF = 1U;
    co_await vlSelfRef.__VtrigSched_hacf463ac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_hazards.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                                         83);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                         84);
    co_await vlSelfRef.__VtrigSched_hacf4646d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_hazards.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                                         86);
    vlSelfRef.tb_gshare_hazards__DOT__BPBranchF = 0U;
    vlSelfRef.tb_gshare_hazards__DOT__BranchD = 1U;
    co_await vlSelfRef.__VtrigSched_hacf463ac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_hazards.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                                         90);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                         91);
    co_await vlSelfRef.__VtrigSched_hacf4646d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_hazards.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                                         93);
    vlSelfRef.tb_gshare_hazards__DOT__BranchD = 0U;
    vlSelfRef.tb_gshare_hazards__DOT__BranchE = 1U;
    vlSelfRef.tb_gshare_hazards__DOT__PCSrcE = 1U;
    vlSelfRef.tb_gshare_hazards__DOT__StallE = 1U;
    co_await vlSelfRef.__VtrigSched_hacf463ac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_hazards.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                                         147);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                         148);
    if (VL_UNLIKELY(((2U != vlSelfRef.tb_gshare_hazards__DOT__dut__DOT__pht
                      [0U])))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_hazards.sv:151: Assertion failed in %Ntb_gshare_hazards: First stalled update failed: expected 10 got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     2,vlSelfRef.tb_gshare_hazards__DOT__dut__DOT__pht
                     [0U]);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 151, "", false);
    }
    co_await vlSelfRef.__VtrigSched_hacf463ac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_hazards.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                                         157);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 
                                         158);
    if (VL_UNLIKELY(((2U != vlSelfRef.tb_gshare_hazards__DOT__dut__DOT__pht
                      [0U])))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_hazards.sv:161: Assertion failed in %Ntb_gshare_hazards: Duplicate update during StallE: expected 10 got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     2,vlSelfRef.tb_gshare_hazards__DOT__dut__DOT__pht
                     [0U]);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 161, "", false);
    }
    VL_WRITEF_NX("PASS: Execute stall does not duplicate PHT training\nALL HAZARD TESTS PASSED\n",0);
    VL_FINISH_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_hazards.sv", 169, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gshare_hazards___024root___dump_triggers__act(Vtb_gshare_hazards___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_gshare_hazards___024root___eval_triggers__act(Vtb_gshare_hazards___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_hazards___024root___eval_triggers__act\n"); );
    Vtb_gshare_hazards__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_gshare_hazards__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_gshare_hazards__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_gshare_hazards__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_gshare_hazards__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_gshare_hazards__DOT__clk__0 
        = vlSelfRef.tb_gshare_hazards__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_gshare_hazards___024root___dump_triggers__act(vlSelf);
    }
#endif
}
