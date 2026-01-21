// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__126(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__126\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (8U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (1U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:340: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_INVALID to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 340, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:342: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 342, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (8U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (0U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:346: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_INVALID to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 346, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:348: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 348, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__127(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__127\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (8U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (5U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:352: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_INVALID to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 352, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:354: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 354, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (8U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (4U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:358: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_INVALID to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 358, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:360: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 360, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__128(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__128\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (8U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (2U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:364: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_INVALID to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 364, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:366: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 366, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (8U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:370: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_BRANCH to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 370, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:372: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 372, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__129(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__129\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (0U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:376: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_BRANCH to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 376, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:378: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 378, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (7U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:382: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_BRANCH to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 382, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:384: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 384, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__130(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__130\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (5U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:388: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_BRANCH to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 388, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:390: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 390, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (4U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:394: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_BRANCH to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 394, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:396: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 396, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__131(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__131\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (6U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:400: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_BRANCH to S_TIP_D should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 400, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:402: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 402, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (3U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:406: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_BRANCH to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 406, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:408: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 408, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__132(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__132\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (2U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:412: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_BRANCH to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 412, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:414: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 414, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (8U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:418: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_BRANCH_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 418, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:420: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 420, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__133(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__133\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (1U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:424: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_BRANCH_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 424, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:426: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 426, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (7U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:430: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_BRANCH_C to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 430, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:432: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 432, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__134(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__134\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (5U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:436: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_BRANCH_C to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 436, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:438: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 438, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (6U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:442: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_BRANCH_C to S_TIP_D should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 442, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:444: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 444, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__135(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__135\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (4U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:448: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_BRANCH_C to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 448, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:450: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 450, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (3U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:454: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_BRANCH_C to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 454, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:456: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 456, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__136(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__136\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (2U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:460: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_BRANCH_C to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 460, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:462: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 462, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (7U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (8U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:466: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TIP to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 466, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:468: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 468, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__137(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__137\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (7U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (1U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:472: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TIP to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 472, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:474: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 474, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (7U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (0U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:478: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TIP to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 478, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:480: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 480, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__138(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__138\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (7U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (5U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:484: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TIP to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 484, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:486: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 486, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (7U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (4U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:490: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TIP to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 490, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:492: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 492, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__139(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__139\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (7U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (2U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:496: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TIP to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 496, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:498: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 498, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (5U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (8U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:502: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TIP_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 502, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:504: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 504, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__140(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__140\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (5U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (1U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:508: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TIP_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 508, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:510: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 510, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (5U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (0U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:514: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TIP_C to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 514, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:516: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 516, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__141(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__141\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (5U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (4U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:520: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TIP_C to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 520, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:522: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 522, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (5U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (2U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:526: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TIP_C to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 526, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:528: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 528, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__142(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__142\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (6U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (8U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:532: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TIP_D to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 532, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:534: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 534, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (6U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (1U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:538: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TIP_D to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 538, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:540: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 540, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__143(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__143\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (6U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (0U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:544: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TIP_D to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 544, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:546: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 546, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (6U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (7U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:550: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TIP_D to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 550, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:552: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 552, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__144(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__144\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (6U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (5U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:556: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TIP_D to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 556, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:558: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 558, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (6U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (4U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:562: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TIP_D to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 562, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:564: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 564, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__145(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__145\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (6U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (3U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:568: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TIP_D to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 568, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:570: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 570, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (4U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (8U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:574: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TIP_CD to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 574, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:576: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 576, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__146(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__146\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (4U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (1U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:580: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TIP_CD to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 580, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:582: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 582, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (4U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (0U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:586: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TIP_CD to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 586, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:588: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 588, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__147(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__147\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (4U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (7U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:592: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TIP_CD to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 592, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:594: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 594, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (4U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (5U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:598: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TIP_CD to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 598, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:600: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 600, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__148(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__148\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (4U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (3U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:604: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TIP_CD to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 604, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:606: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 606, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (3U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (8U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:610: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TRUNK_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 610, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:612: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 612, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__149(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__149\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (3U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (1U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:616: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TRUNK_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 616, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:618: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 618, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (3U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (0U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:622: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TRUNK_C to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 622, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:624: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 624, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__150(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__150\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (2U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (8U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:628: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TRUNK_CD to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 628, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:630: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 630, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (2U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (1U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:634: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TRUNK_CD to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 634, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:636: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 636, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__151(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__151\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (2U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (0U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:640: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TRUNK_CD to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 640, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:642: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 642, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (2U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (7U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:646: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TRUNK_CD to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 646, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:648: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 648, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__152(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__152\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (2U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (5U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:652: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TRUNK_CD to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 652, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:654: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 654, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (2U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (3U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:658: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State transition from S_TRUNK_CD to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 658, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:660: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 660, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__153(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__153\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___new_meta_T)) 
                     & (1U == (0xfU & ((0x4200U | (
                                                   (0x2000U 
                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                       << 0xdU)) 
                                                   | ((0x1000U 
                                                       & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                          << 0xcU)) 
                                                      | ((0x100U 
                                                          & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                             << 8U)) 
                                                         | ((0x10U 
                                                             & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                << 4U)) 
                                                            | (8U 
                                                               & ((~ (IData)(
                                                                             (0U 
                                                                              != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                  << 3U))))))) 
                                       >> (0xfU & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:664: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State bypass from S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:516 assert(!(prior === from.code), cf\"State bypass from ${from} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 664, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:666: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 666, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___new_meta_T)) 
                     & (0U == (0xfU & ((0x4200U | (
                                                   (0x2000U 
                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                       << 0xdU)) 
                                                   | ((0x1000U 
                                                       & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                          << 0xcU)) 
                                                      | ((0x100U 
                                                          & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_dirty)) 
                                                             << 8U)) 
                                                         | ((0x10U 
                                                             & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__after_c)) 
                                                                << 4U)) 
                                                            | (8U 
                                                               & ((~ (IData)(
                                                                             (0U 
                                                                              != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state)))) 
                                                                  << 3U))))))) 
                                       >> (0xfU & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:670: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed: State bypass from S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:516 assert(!(prior === from.code), cf\"State bypass from ${from} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 670, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:672: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 672, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__154(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__154\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_3__io_allocate_valid) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__request_valid)) 
                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_3_io_schedule_bits_reload) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                                  >> 3U)) & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_3_io_schedule_bits_a_valid) 
                                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_3_io_schedule_bits_b_valid) 
                                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_3_io_schedule_bits_c_valid) 
                                                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_3_io_schedule_bits_d_valid) 
                                                      | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_3_io_schedule_bits_e_valid) 
                                                         | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_3_io_schedule_bits_x_valid) 
                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_3_io_schedule_bits_dir_valid))))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:676: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed\n    at MSHR.scala:533 assert (!request_valid || (no_wait && io.schedule.fire))\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 676, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:678: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 678, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_2) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_request_prio_2)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_meta_hit))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:682: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3: Assertion failed\n    at MSHR.scala:585 assert (new_meta.hit)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 682, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:684: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_3\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 684, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__155(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__155\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__s_pprobe 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__s_pprobe;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__s_pprobe 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__s_pprobe;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__s_pprobe 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__s_pprobe;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_rprobeackfirst 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_rprobeackfirst;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_rprobeackfirst 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_rprobeackfirst;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_rprobeackfirst 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_rprobeackfirst;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__s_acquire 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__s_acquire;
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_valid) 
                      & ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_state)))) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__evict_c)))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:268: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed\n    at MSHR.scala:105 assert (!meta.clients.orR)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 268, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:270: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 270, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_valid) 
                      & ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_state)))) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_dirty)))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:274: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed\n    at MSHR.scala:106 assert (!meta.dirty)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 274, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:276: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 276, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__156(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__156\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_state))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_dirty)))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:280: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed\n    at MSHR.scala:109 assert (!meta.dirty)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 280, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:282: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 282, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_state)))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__evict_c))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:286: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed\n    at MSHR.scala:112 assert (meta.clients.orR)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 286, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:288: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 288, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__157(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__157\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_valid) 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                          & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_state)))) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__evict_c)) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__evict_c) 
                        - (IData)(1U))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:292: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed\n    at MSHR.scala:113 assert ((meta.clients & (meta.clients - 1.U)) === 0.U) // at most one\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 292, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:294: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 294, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset)) 
                           & (~ ((~ (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_valid) 
                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_releaseack)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_rprobeacklast)) 
                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_pprobeacklast)) 
                                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_grantfirst)))) 
                                 | (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_valid)) 
                                       | ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_releaseack)) 
                                            | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_rprobeacklast))) 
                                           | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_pprobeacklast))) 
                                          & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_grantfirst))))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:298: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed\n    at MSHR.scala:179 assert (!io.status.bits.nestB || !io.status.bits.blockB)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 298, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:300: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 300, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__158(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__158\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset)) 
                           & (~ ((~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_rprobeackfirst) 
                                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_grantfirst) 
                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_pprobeackfirst)))) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_valid))) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_valid))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:304: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed\n    at MSHR.scala:180 assert (!io.status.bits.nestC || !io.status.bits.blockC)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 304, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:306: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 306, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__bad_grant) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_hit)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_valid)) 
                           | (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_state))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:310: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed\n    at MSHR.scala:254 assert (!meta_valid || meta.state === BRANCH)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 310, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:312: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 312, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__159(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__159\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_2_io_schedule_bits_c_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_h68b8e0b3__0)) 
                     & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_hit)
                                ? 8U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_ha6b2c659__0)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:316: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed: State transition from S_BRANCH to evicted should be impossible (false,true,true,false,true)\n    at MSHR.scala:346 assert(!(evict === from.code), cf\"State transition from ${from} to evicted should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 316, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:318: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 318, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_2_io_schedule_bits_c_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_h68b8e0b3__0)) 
                     & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_hit)
                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_ha6b2c659__0)
                                : 8U))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:322: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed: State transition from S_BRANCH to flushed should be impossible (false,true,true,false,true)\n    at MSHR.scala:351 assert(!(before === from.code), cf\"State transition from ${from} to flushed should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 322, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:324: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 324, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__160(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__160\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_2_io_schedule_bits_c_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_h68b8e0b3__0)) 
                     & (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_hit)
                                ? 8U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_ha6b2c659__0)))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:328: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed: State transition from S_BRANCH_C to evicted should be impossible (false,true,true,false,true)\n    at MSHR.scala:346 assert(!(evict === from.code), cf\"State transition from ${from} to evicted should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 328, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:330: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 330, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_2_io_schedule_bits_c_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_h68b8e0b3__0)) 
                     & (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_hit)
                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_ha6b2c659__0)
                                : 8U))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:334: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed: State transition from S_BRANCH_C to flushed should be impossible (false,true,true,false,true)\n    at MSHR.scala:351 assert(!(before === from.code), cf\"State transition from ${from} to flushed should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 334, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:336: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 336, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__161(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__161\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (8U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (1U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:340: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed: State transition from S_INVALID to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 340, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:342: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 342, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (8U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (0U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:346: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed: State transition from S_INVALID to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 346, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:348: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 348, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__162(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__162\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (8U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (5U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:352: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed: State transition from S_INVALID to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 352, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:354: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 354, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (8U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (4U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:358: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed: State transition from S_INVALID to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 358, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:360: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 360, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__163(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__163\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (8U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (2U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:364: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed: State transition from S_INVALID to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 364, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:366: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 366, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (8U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:370: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed: State transition from S_BRANCH to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 370, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:372: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 372, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__164(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__164\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (0U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:376: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed: State transition from S_BRANCH to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 376, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:378: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 378, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (7U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:382: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed: State transition from S_BRANCH to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 382, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:384: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 384, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__165(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__165\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (5U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:388: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed: State transition from S_BRANCH to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 388, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:390: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 390, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (4U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:394: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed: State transition from S_BRANCH to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 394, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:396: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 396, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__166(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__166\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (6U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:400: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed: State transition from S_BRANCH to S_TIP_D should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 400, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:402: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 402, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (3U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:406: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed: State transition from S_BRANCH to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 406, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:408: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 408, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__167(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__167\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (2U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:412: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed: State transition from S_BRANCH to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 412, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:414: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 414, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (8U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:418: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed: State transition from S_BRANCH_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 418, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:420: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 420, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__168(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__168\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (1U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:424: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed: State transition from S_BRANCH_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 424, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:426: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 426, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (7U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:430: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed: State transition from S_BRANCH_C to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 430, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:432: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 432, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__169(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__169\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (5U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:436: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed: State transition from S_BRANCH_C to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 436, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:438: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 438, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_hc0826351__0) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_h68b8e0b3__0)) 
                      & (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_ha6b2c659__0)
                                 : 8U))) & (6U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__after_c)) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__final_meta_writeback_state), 2U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: MSHR.sv:442: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2: Assertion failed: State transition from S_BRANCH_C to S_TIP_D should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 442, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: MSHR.sv:444: Assertion failed in %NTestDriver.testHarness.chiptop0.system.coh_wrapper.l2.inclusive_cache_bank_sched.mshrs_2\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("/home/haunguyen1403/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.CordicRocketConfig/gen-collateral/MSHR.sv", 444, "");
        }
    }
}
