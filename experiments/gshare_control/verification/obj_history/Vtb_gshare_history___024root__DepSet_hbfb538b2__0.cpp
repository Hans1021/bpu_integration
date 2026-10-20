// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gshare_history.h for the primary calling header

#include "Vtb_gshare_history__pch.h"
#include "Vtb_gshare_history__Syms.h"
#include "Vtb_gshare_history___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_gshare_history___024root___eval_initial__TOP__Vtiming__0(Vtb_gshare_history___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_history___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_gshare_history__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vfunc_tb_gshare_history__DOT__hash_pc__1__Vfuncout;
    __Vfunc_tb_gshare_history__DOT__hash_pc__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_gshare_history__DOT__hash_pc__1__pc;
    __Vfunc_tb_gshare_history__DOT__hash_pc__1__pc = 0;
    CData/*3:0*/ __Vfunc_tb_gshare_history__DOT__hash_pc__2__Vfuncout;
    __Vfunc_tb_gshare_history__DOT__hash_pc__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_gshare_history__DOT__hash_pc__2__pc;
    __Vfunc_tb_gshare_history__DOT__hash_pc__2__pc = 0;
    CData/*3:0*/ __Vfunc_tb_gshare_history__DOT__hash_pc__3__Vfuncout;
    __Vfunc_tb_gshare_history__DOT__hash_pc__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_gshare_history__DOT__hash_pc__3__pc;
    __Vfunc_tb_gshare_history__DOT__hash_pc__3__pc = 0;
    CData/*3:0*/ __Vfunc_tb_gshare_history__DOT__hash_pc__4__Vfuncout;
    __Vfunc_tb_gshare_history__DOT__hash_pc__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_gshare_history__DOT__hash_pc__4__pc;
    __Vfunc_tb_gshare_history__DOT__hash_pc__4__pc = 0;
    CData/*3:0*/ __Vfunc_tb_gshare_history__DOT__hash_pc__5__Vfuncout;
    __Vfunc_tb_gshare_history__DOT__hash_pc__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_gshare_history__DOT__hash_pc__5__pc;
    __Vfunc_tb_gshare_history__DOT__hash_pc__5__pc = 0;
    CData/*3:0*/ __Vfunc_tb_gshare_history__DOT__hash_pc__6__Vfuncout;
    __Vfunc_tb_gshare_history__DOT__hash_pc__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_gshare_history__DOT__hash_pc__6__pc;
    __Vfunc_tb_gshare_history__DOT__hash_pc__6__pc = 0;
    // Body
    vlSelfRef.tb_gshare_history__DOT__clk = 0U;
    vlSelfRef.tb_gshare_history__DOT__StallF = 0U;
    vlSelfRef.tb_gshare_history__DOT__StallD = 0U;
    vlSelfRef.tb_gshare_history__DOT__StallE = 0U;
    vlSelfRef.tb_gshare_history__DOT__FlushD = 0U;
    vlSelfRef.tb_gshare_history__DOT__FlushE = 0U;
    vlSelfRef.tb_gshare_history__DOT__PCF = 0U;
    vlSelfRef.tb_gshare_history__DOT__BPBranchF = 0U;
    vlSelfRef.tb_gshare_history__DOT__BranchD = 0U;
    vlSelfRef.tb_gshare_history__DOT__BranchE = 0U;
    vlSelfRef.tb_gshare_history__DOT__PCSrcE = 0U;
    vlSelfRef.tb_gshare_history__DOT__reset = 1U;
    co_await vlSelfRef.__VtrigSched_h911b5fe9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_history.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                                         85);
    co_await vlSelfRef.__VtrigSched_h911b5fe9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_history.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                                         85);
    co_await vlSelfRef.__VtrigSched_h911b5fb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_history.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                                         87);
    vlSelfRef.tb_gshare_history__DOT__reset = 0U;
    co_await vlSelfRef.__VtrigSched_h911b5fe9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_history.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                                         90);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                         91);
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_gshare_history__DOT__dut__DOT__committed_history))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_history.sv:94: Assertion failed in %Ntb_gshare_history: Committed history not zero after reset\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 94, "", false);
    }
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_gshare_history__DOT__dut__DOT__speculative_history))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_history.sv:97: Assertion failed in %Ntb_gshare_history: Speculative history not zero after reset\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 97, "", false);
    }
    VL_WRITEF_NX("PASS: history reset\n",0);
    co_await vlSelfRef.__VtrigSched_h911b5fb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_history.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                                         105);
    vlSelfRef.tb_gshare_history__DOT__PCF = 0x100U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                         109);
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_gshare_history__DOT__dut__DOT__indexF) 
                      != ([&]() {
                            __Vfunc_tb_gshare_history__DOT__hash_pc__1__pc 
                                = vlSelfRef.tb_gshare_history__DOT__PCF;
                            __Vfunc_tb_gshare_history__DOT__hash_pc__1__Vfuncout 
                                = ((8U & (VL_REDXOR_8(
                                                      (0x22U 
                                                       & __Vfunc_tb_gshare_history__DOT__hash_pc__1__pc)) 
                                          << 3U)) | 
                                   (7U & (__Vfunc_tb_gshare_history__DOT__hash_pc__1__pc 
                                          >> 2U)));
                        }(), (IData)(__Vfunc_tb_gshare_history__DOT__hash_pc__1__Vfuncout)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_history.sv:112: Assertion failed in %Ntb_gshare_history: Zero-history index mismatch: expected %0x got %0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     4,([&]() {
                        __Vfunc_tb_gshare_history__DOT__hash_pc__2__pc 
                            = vlSelfRef.tb_gshare_history__DOT__PCF;
                        __Vfunc_tb_gshare_history__DOT__hash_pc__2__Vfuncout 
                            = ((8U & (VL_REDXOR_8((0x22U 
                                                   & __Vfunc_tb_gshare_history__DOT__hash_pc__2__pc)) 
                                      << 3U)) | (7U 
                                                 & (__Vfunc_tb_gshare_history__DOT__hash_pc__2__pc 
                                                    >> 2U)));
                    }(), (IData)(__Vfunc_tb_gshare_history__DOT__hash_pc__2__Vfuncout)),
                     4,(IData)(vlSelfRef.tb_gshare_history__DOT__dut__DOT__indexF));
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 112, "", false);
    }
    VL_WRITEF_NX("PASS: zero-history GShare index\n",0);
    vlSelfRef.tb_gshare_history__DOT__BPBranchF = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                         124);
    if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.tb_gshare_history__DOT__dut__DOT__pht_readF))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_history.sv:127: Assertion failed in %Ntb_gshare_history: Expected initial branch prediction to be not taken\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 127, "", false);
    }
    co_await vlSelfRef.__VtrigSched_h911b5fe9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_history.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                                         129);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                         130);
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_gshare_history__DOT__dut__DOT__speculative_history))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_history.sv:133: Assertion failed in %Ntb_gshare_history: Unexpected speculative history after NT prediction: %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     4,(IData)(vlSelfRef.tb_gshare_history__DOT__dut__DOT__speculative_history));
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 133, "", false);
    }
    co_await vlSelfRef.__VtrigSched_h911b5fb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_history.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                                         138);
    vlSelfRef.tb_gshare_history__DOT__BPBranchF = 0U;
    vlSelfRef.tb_gshare_history__DOT__BranchD = 1U;
    co_await vlSelfRef.__VtrigSched_h911b5fe9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_history.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                                         143);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                         144);
    co_await vlSelfRef.__VtrigSched_h911b5fb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_history.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                                         147);
    vlSelfRef.tb_gshare_history__DOT__BranchD = 0U;
    vlSelfRef.tb_gshare_history__DOT__BranchE = 1U;
    vlSelfRef.tb_gshare_history__DOT__PCSrcE = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                         153);
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_gshare_history__DOT__BPDirWrongE)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_history.sv:156: Assertion failed in %Ntb_gshare_history: Expected taken branch to be a misprediction\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 156, "", false);
    }
    co_await vlSelfRef.__VtrigSched_h911b5fe9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_history.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                                         158);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                         159);
    if (VL_UNLIKELY(((1U != (IData)(vlSelfRef.tb_gshare_history__DOT__dut__DOT__committed_history))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_history.sv:163: Assertion failed in %Ntb_gshare_history: Committed history repair failed: got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     4,(IData)(vlSelfRef.tb_gshare_history__DOT__dut__DOT__committed_history));
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 163, "", false);
    }
    if (VL_UNLIKELY(((1U != (IData)(vlSelfRef.tb_gshare_history__DOT__dut__DOT__speculative_history))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_history.sv:168: Assertion failed in %Ntb_gshare_history: Speculative history repair failed: got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     4,(IData)(vlSelfRef.tb_gshare_history__DOT__dut__DOT__speculative_history));
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 168, "", false);
    }
    VL_WRITEF_NX("PASS: misprediction history repair\n",0);
    co_await vlSelfRef.__VtrigSched_h911b5fb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_history.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                                         174);
    vlSelfRef.tb_gshare_history__DOT__BranchE = 0U;
    vlSelfRef.tb_gshare_history__DOT__PCSrcE = 0U;
    vlSelfRef.tb_gshare_history__DOT__PCF = 0x120U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                         185);
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_gshare_history__DOT__dut__DOT__indexF) 
                      != (1U ^ ([&]() {
                                __Vfunc_tb_gshare_history__DOT__hash_pc__3__pc 
                                    = vlSelfRef.tb_gshare_history__DOT__PCF;
                                __Vfunc_tb_gshare_history__DOT__hash_pc__3__Vfuncout 
                                    = ((8U & (VL_REDXOR_8(
                                                          (0x22U 
                                                           & __Vfunc_tb_gshare_history__DOT__hash_pc__3__pc)) 
                                              << 3U)) 
                                       | (7U & (__Vfunc_tb_gshare_history__DOT__hash_pc__3__pc 
                                                >> 2U)));
                            }(), (IData)(__Vfunc_tb_gshare_history__DOT__hash_pc__3__Vfuncout))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_history.sv:188: Assertion failed in %Ntb_gshare_history: Nonzero-history index mismatch: expected %0x got %0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     4,(1U ^ ([&]() {
                            __Vfunc_tb_gshare_history__DOT__hash_pc__4__pc 
                                = vlSelfRef.tb_gshare_history__DOT__PCF;
                            __Vfunc_tb_gshare_history__DOT__hash_pc__4__Vfuncout 
                                = ((8U & (VL_REDXOR_8(
                                                      (0x22U 
                                                       & __Vfunc_tb_gshare_history__DOT__hash_pc__4__pc)) 
                                          << 3U)) | 
                                   (7U & (__Vfunc_tb_gshare_history__DOT__hash_pc__4__pc 
                                          >> 2U)));
                        }(), (IData)(__Vfunc_tb_gshare_history__DOT__hash_pc__4__Vfuncout))),
                     4,(IData)(vlSelfRef.tb_gshare_history__DOT__dut__DOT__indexF));
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 188, "", false);
    }
    VL_WRITEF_NX("PASS: nonzero-history GShare index\n",0);
    vlSelfRef.tb_gshare_history__DOT__BPBranchF = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                         201);
    if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.tb_gshare_history__DOT__dut__DOT__pht_readF))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_history.sv:204: Assertion failed in %Ntb_gshare_history: Expected second branch to predict not taken\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 204, "", false);
    }
    co_await vlSelfRef.__VtrigSched_h911b5fe9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_history.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                                         206);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                         207);
    if (VL_UNLIKELY(((1U != (IData)(vlSelfRef.tb_gshare_history__DOT__dut__DOT__committed_history))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_history.sv:212: Assertion failed in %Ntb_gshare_history: Committed history changed before resolution\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 212, "", false);
    }
    if (VL_UNLIKELY(((2U != (IData)(vlSelfRef.tb_gshare_history__DOT__dut__DOT__speculative_history))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_history.sv:215: Assertion failed in %Ntb_gshare_history: Speculative history insertion failed: expected 0010 got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     4,(IData)(vlSelfRef.tb_gshare_history__DOT__dut__DOT__speculative_history));
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 215, "", false);
    }
    VL_WRITEF_NX("PASS: speculative history insertion\n",0);
    co_await vlSelfRef.__VtrigSched_h911b5fb8__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_gshare_history.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                                         222);
    vlSelfRef.tb_gshare_history__DOT__BPBranchF = 0U;
    vlSelfRef.tb_gshare_history__DOT__PCF = 0x108U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                         227);
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_gshare_history__DOT__dut__DOT__indexF) 
                      != (2U ^ ([&]() {
                                __Vfunc_tb_gshare_history__DOT__hash_pc__5__pc 
                                    = vlSelfRef.tb_gshare_history__DOT__PCF;
                                __Vfunc_tb_gshare_history__DOT__hash_pc__5__Vfuncout 
                                    = ((8U & (VL_REDXOR_8(
                                                          (0x22U 
                                                           & __Vfunc_tb_gshare_history__DOT__hash_pc__5__pc)) 
                                              << 3U)) 
                                       | (7U & (__Vfunc_tb_gshare_history__DOT__hash_pc__5__pc 
                                                >> 2U)));
                            }(), (IData)(__Vfunc_tb_gshare_history__DOT__hash_pc__5__Vfuncout))))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_history.sv:230: Assertion failed in %Ntb_gshare_history: Speculative index mismatch: expected %0x got %0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     4,(2U ^ ([&]() {
                            __Vfunc_tb_gshare_history__DOT__hash_pc__6__pc 
                                = vlSelfRef.tb_gshare_history__DOT__PCF;
                            __Vfunc_tb_gshare_history__DOT__hash_pc__6__Vfuncout 
                                = ((8U & (VL_REDXOR_8(
                                                      (0x22U 
                                                       & __Vfunc_tb_gshare_history__DOT__hash_pc__6__pc)) 
                                          << 3U)) | 
                                   (7U & (__Vfunc_tb_gshare_history__DOT__hash_pc__6__pc 
                                          >> 2U)));
                        }(), (IData)(__Vfunc_tb_gshare_history__DOT__hash_pc__6__Vfuncout))),
                     4,(IData)(vlSelfRef.tb_gshare_history__DOT__dut__DOT__indexF));
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 230, "", false);
    }
    VL_WRITEF_NX("PASS: speculative history affects GShare index\n",0);
    vlSelfRef.tb_gshare_history__DOT__FlushD = 1U;
    co_await vlSelfRef.__VtrigSched_h911b5fe9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_gshare_history.clk)", 
                                                         "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                                         243);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 
                                         244);
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_gshare_history__DOT__dut__DOT__speculative_history) 
                      != (IData)(vlSelfRef.tb_gshare_history__DOT__dut__DOT__committed_history))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_history.sv:247: Assertion failed in %Ntb_gshare_history: Flush recovery failed: committed=%b speculative=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     4,(IData)(vlSelfRef.tb_gshare_history__DOT__dut__DOT__committed_history),
                     4,vlSelfRef.tb_gshare_history__DOT__dut__DOT__speculative_history);
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 247, "", false);
    }
    if (VL_UNLIKELY(((1U != (IData)(vlSelfRef.tb_gshare_history__DOT__dut__DOT__speculative_history))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_gshare_history.sv:253: Assertion failed in %Ntb_gshare_history: Expected speculative history 0001 after flush, got %b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     4,(IData)(vlSelfRef.tb_gshare_history__DOT__dut__DOT__speculative_history));
        VL_STOP_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 253, "", false);
    }
    VL_WRITEF_NX("PASS: flush restores speculative history\nALL HISTORY TESTS PASSED\n",0);
    VL_FINISH_MT("/home/hansyang/projects/bpu_integration/experiments/gshare_control/verification/tb_gshare_history.sv", 261, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gshare_history___024root___dump_triggers__act(Vtb_gshare_history___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_gshare_history___024root___eval_triggers__act(Vtb_gshare_history___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gshare_history___024root___eval_triggers__act\n"); );
    Vtb_gshare_history__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_gshare_history__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_gshare_history__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_gshare_history__DOT__clk)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_gshare_history__DOT__clk__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_gshare_history__DOT__clk__0 
        = vlSelfRef.tb_gshare_history__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_gshare_history___024root___dump_triggers__act(vlSelf);
    }
#endif
}
