// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__202(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__202\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_grant 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___RANDOM
                 [2U] >> 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_pprobeackfirst 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___RANDOM
                 [2U] >> 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_pprobeacklast 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___RANDOM
                 [2U] >> 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_pprobeack 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___RANDOM
                 [2U] >> 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__s_grantack 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___RANDOM
                 [2U] >> 0x1cU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__s_execute 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___RANDOM
                 [2U] >> 0x1dU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_grantack 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___RANDOM
                 [2U] >> 0x1eU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__s_writeback 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___RANDOM
           [2U] >> 0x1fU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__sink 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___RANDOM
           [3U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__gotT 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___RANDOM
                 [3U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__bad_grant 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___RANDOM
                 [3U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__probes_done 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___RANDOM
                 [3U] >> 5U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__203(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__203\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__probes_toN 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___RANDOM
                 [3U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__199(VTestDriver___024root* vlSelf);
VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__200(VTestDriver___024root* vlSelf);
VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__201(VTestDriver___024root* vlSelf);

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__204(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__204\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT____Vlvbound_h9bac8a17__0 = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__199(vlSelf);
    VTestDriver___024root___eval_initial__TOP__200(vlSelf);
    VTestDriver___024root___eval_initial__TOP__201(vlSelf);
    VTestDriver___024root___eval_initial__TOP__202(vlSelf);
    VTestDriver___024root___eval_initial__TOP__203(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT___RANDOM[1U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT___RANDOM[2U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT___RANDOM[3U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT__ram[0U] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT___RANDOM
                                      [1U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT___RANDOM
                                       [2U])))) << 0x19U) 
           | (0x1ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT___RANDOM
              [3U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT__ram[1U] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT___RANDOM
                                      [1U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT___RANDOM
                                       [2U])))) >> 7U) 
           | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT___RANDOM
                                         [1U])) << 0x20U) 
                        | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT___RANDOM
                                          [2U]))) >> 0x20U)) 
              << 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT__ram[2U] 
        = ((0xfe000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT___RANDOM
                           [0U] << 0x18U)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT___RANDOM
                                                                         [1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT___RANDOM
                                                                          [2U]))) 
                                                       >> 0x20U)) 
                                              >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT__ram[3U] 
        = (0x1ffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT___RANDOM
                         [0U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT__full 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT___RANDOM
           [0U]);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT___RANDOM[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT___RANDOM[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT___RANDOM[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT____Vlvbound_h9bac8a17__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__205(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__205\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT__ram[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT___RANDOM
                                    [1U])) << 0x14U) 
                   | (QData)((IData)((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT___RANDOM
                                      [2U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT__ram[1U] 
        = ((0xfff00000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT___RANDOM
                           [0U] << 0x13U)) | (IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT___RANDOM
                                                                        [1U])) 
                                                        << 0x14U) 
                                                       | (QData)((IData)(
                                                                         (0xfffffU 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT___RANDOM
                                                                          [2U])))) 
                                                      >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT__ram[2U] 
        = (0xfffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT___RANDOM
                       [0U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT__full 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__206(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__206\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__204(vlSelf);
    VTestDriver___024root___eval_initial__TOP__205(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__d_first_counter 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__nodeIn_d_bits_sink_r 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__beatsLeft 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT___RANDOM
                 [0U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__state_0 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT___RANDOM
                 [0U] >> 0xfU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__state_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT___RANDOM
                 [0U] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__beatsLeft_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT___RANDOM
                 [0U] >> 0x11U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__state_1_0 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT___RANDOM
                 [0U] >> 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__state_1_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT___RANDOM
                 [0U] >> 0x15U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__state_1_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT___RANDOM
                 [0U] >> 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__pool__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__pool__DOT__bitmap 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__pool__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__207(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__207\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__pool__DOT__select 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__pool__DOT___RANDOM
                 [0U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__pool__DOT__valid 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__pool__DOT___RANDOM
                 [0U] >> 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__pool__DOT__REG 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__pool__DOT___RANDOM
                 [0U] >> 0xcU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__208(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__208\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__206(vlSelf);
    VTestDriver___024root___eval_initial__TOP__207(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__wrap 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__wrap_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT___RANDOM
                 [0U] >> 2U));
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT__Memory[0U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT__Memory[0U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT__Memory[0U][2U] 
        = (0xffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__209(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__209\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT__Memory[1U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT__Memory[1U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT__Memory[1U][2U] 
        = (0xffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__210(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__210\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__208(vlSelf);
    VTestDriver___024root___eval_initial__TOP__209(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__wrap 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__wrap_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT___RANDOM
                 [0U] >> 2U));
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT__Memory[0U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT__Memory[0U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT__Memory[0U][2U] 
        = (0xffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__211(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__211\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT__Memory[1U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT__Memory[1U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT__Memory[1U][2U] 
        = (0xffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__212(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__212\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__210(vlSelf);
    VTestDriver___024root___eval_initial__TOP__211(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___RANDOM[1U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___RANDOM[2U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___RANDOM[3U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__cordic_state 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__cordic_x_reg 
        = ((0xfffffffcU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___RANDOM
            [0U]) | (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___RANDOM
                     [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__cordic_y_reg 
        = ((0xfffffffcU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___RANDOM
            [1U]) | (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___RANDOM
                     [2U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__cordic_z_reg 
        = ((0xfffffffcU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___RANDOM
            [2U]) | (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___RANDOM
                     [3U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__cordic_cnt_reg 
        = (0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___RANDOM
                    [3U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__cordic_rd_reg 
        = (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___RANDOM
                    [3U] >> 8U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__213(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__213\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__cordic_funct_reg 
        = (0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___RANDOM
                    [3U] >> 0xdU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__214(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__214\n"); );
    // Init
    CData/*7:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__unnamedblk1__DOT__i;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__unnamedblk1__DOT__i = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__212(vlSelf);
    VTestDriver___024root___eval_initial__TOP__213(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__beatsLeft 
        = (0x1ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__readys_mask 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT___RANDOM
                 [0U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__state_0 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT___RANDOM
                 [0U] >> 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__state_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT___RANDOM
                 [0U] >> 0xcU));
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__unnamedblk1__DOT__i = 0U;
    while ((0xbbU > (IData)(TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__unnamedblk1__DOT__i))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vlvbound_h4b158834__0 
            = VL_RANDOM_I();
        if (VL_LIKELY((0xbaU >= (IData)(TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM[TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__unnamedblk1__DOT__i] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vlvbound_h4b158834__0;
        }
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__unnamedblk1__DOT__i 
            = (0xffU & ((IData)(1U) + (IData)(TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__unnamedblk1__DOT__i)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_0_tag_vpn 
        = (0x7ffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                         [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_ 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0U] >> 0x1eU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_0_data_0 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0U] >> 0x1fU))) << 0x29U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                               [1U])) << 9U) | (QData)((IData)(
                                                               (0x1ffU 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                                                [2U])))));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__215(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__215\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_0_data_1 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [2U] >> 9U))) << 0x13U) 
           | (QData)((IData)((0x7ffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [3U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_0_data_2 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [3U] >> 0x13U))) << 0x1dU) 
           | (QData)((IData)((0x1fffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [4U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_0_data_3 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [4U] >> 0x1dU))) << 0x27U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                               [5U])) << 7U) | (QData)((IData)(
                                                               (0x7fU 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                                                [6U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_0_valid_0 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [6U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_0_valid_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [6U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_0_valid_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [6U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_0_valid_3 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [6U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_1_tag_vpn 
        = ((0x7ffff00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                          [6U] >> 5U)) | (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                          [7U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__216(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__216\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05F0 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [7U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_1_data_0 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [7U] >> 9U))) << 0x13U) 
           | (QData)((IData)((0x7ffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [8U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_1_data_1 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [8U] >> 0x13U))) << 0x1dU) 
           | (QData)((IData)((0x1fffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [9U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_1_data_2 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [9U] >> 0x1dU))) << 0x27U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                               [0xaU])) << 7U) | (QData)((IData)(
                                                                 (0x7fU 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                                                  [0xbU])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_1_data_3 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0xbU] >> 7U))) << 0x11U) 
           | (QData)((IData)((0x1ffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [0xcU]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_1_valid_0 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0xcU] >> 0x11U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_1_valid_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0xcU] >> 0x12U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_1_valid_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0xcU] >> 0x13U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__217(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__217\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_1_valid_3 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0xcU] >> 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_2_tag_vpn 
        = ((0x7fc0000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                          [0xcU] >> 5U)) | (0x3ffffU 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                            [0xdU]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05F1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0xdU] >> 0x12U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_2_data_0 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0xdU] >> 0x13U))) << 0x1dU) 
           | (QData)((IData)((0x1fffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [0xeU]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_2_data_1 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0xeU] >> 0x1dU))) << 0x27U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                               [0xfU])) << 7U) | (QData)((IData)(
                                                                 (0x7fU 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                                                  [0x10U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_2_data_2 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x10U] >> 7U))) << 0x11U) 
           | (QData)((IData)((0x1ffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [0x11U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_2_data_3 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x11U] >> 0x11U))) << 0x1bU) 
           | (QData)((IData)((0x7ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [0x12U]))));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__218(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__218\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_0 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x12U] >> 0x1bU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x12U] >> 0x1cU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x12U] >> 0x1dU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_3 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x12U] >> 0x1eU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_3_tag_vpn 
        = (0x7ffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                         [0x13U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05F2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x13U] >> 0x1cU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_3_data_0 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x13U] >> 0x1dU))) << 0x27U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                               [0x14U])) << 7U) | (QData)((IData)(
                                                                  (0x7fU 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                                                   [0x15U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_3_data_1 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x15U] >> 7U))) << 0x11U) 
           | (QData)((IData)((0x1ffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [0x16U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_3_data_2 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x16U] >> 0x11U))) << 0x1bU) 
           | (QData)((IData)((0x7ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [0x17U]))));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__219(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__219\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_3_data_3 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x17U] >> 0x1bU))) << 0x25U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                               [0x18U])) << 5U) | (QData)((IData)(
                                                                  (0x1fU 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                                                   [0x19U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_3_valid_0 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x19U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_3_valid_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x19U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_3_valid_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x19U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_3_valid_3 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x19U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_4_tag_vpn 
        = ((0x7ffffc0U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                          [0x19U] >> 5U)) | (0x3fU 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                             [0x1aU]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05F3 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x1aU] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_4_data_0 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x1aU] >> 7U))) << 0x11U) 
           | (QData)((IData)((0x1ffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [0x1bU]))));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__220(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__220\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_4_data_1 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x1bU] >> 0x11U))) << 0x1bU) 
           | (QData)((IData)((0x7ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [0x1cU]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_4_data_2 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x1cU] >> 0x1bU))) << 0x25U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                               [0x1dU])) << 5U) | (QData)((IData)(
                                                                  (0x1fU 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                                                   [0x1eU])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_4_data_3 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x1eU] >> 5U))) << 0xfU) 
           | (QData)((IData)((0x7fffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [0x1fU]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_4_valid_0 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x1fU] >> 0xfU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_4_valid_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x1fU] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_4_valid_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x1fU] >> 0x11U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_4_valid_3 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x1fU] >> 0x12U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_5_tag_vpn 
        = ((0x7ff0000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                          [0x1fU] >> 5U)) | (0xffffU 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                             [0x20U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__221(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__221\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05F4 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x20U] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_5_data_0 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x20U] >> 0x11U))) << 0x1bU) 
           | (QData)((IData)((0x7ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [0x21U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_5_data_1 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x21U] >> 0x1bU))) << 0x25U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                               [0x22U])) << 5U) | (QData)((IData)(
                                                                  (0x1fU 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                                                   [0x23U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_5_data_2 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x23U] >> 5U))) << 0xfU) 
           | (QData)((IData)((0x7fffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [0x24U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_5_data_3 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x24U] >> 0xfU))) << 0x19U) 
           | (QData)((IData)((0x1ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [0x25U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_5_valid_0 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x25U] >> 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_5_valid_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x25U] >> 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_5_valid_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x25U] >> 0x1bU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__222(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__222\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_5_valid_3 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x25U] >> 0x1cU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_6_tag_vpn 
        = ((0x4000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                          [0x25U] >> 5U)) | (0x3ffffffU 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                             [0x26U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05F5 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x26U] >> 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_6_data_0 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x26U] >> 0x1bU))) << 0x25U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                               [0x27U])) << 5U) | (QData)((IData)(
                                                                  (0x1fU 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                                                   [0x28U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_6_data_1 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x28U] >> 5U))) << 0xfU) 
           | (QData)((IData)((0x7fffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [0x29U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_6_data_2 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x29U] >> 0xfU))) << 0x19U) 
           | (QData)((IData)((0x1ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [0x2aU]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_6_data_3 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x2aU] >> 0x19U))) << 0x23U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                               [0x2bU])) << 3U) | (QData)((IData)(
                                                                  (7U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                                                   [0x2cU])))));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__223(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__223\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_6_valid_0 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x2cU] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_6_valid_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x2cU] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_6_valid_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x2cU] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_6_valid_3 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x2cU] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_7_tag_vpn 
        = ((0x7fffff0U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                          [0x2cU] >> 5U)) | (0xfU & 
                                             vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                             [0x2dU]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05F6 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x2dU] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_7_data_0 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x2dU] >> 5U))) << 0xfU) 
           | (QData)((IData)((0x7fffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [0x2eU]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_7_data_1 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x2eU] >> 0xfU))) << 0x19U) 
           | (QData)((IData)((0x1ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [0x2fU]))));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__224(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__224\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_7_data_2 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x2fU] >> 0x19U))) << 0x23U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                               [0x30U])) << 3U) | (QData)((IData)(
                                                                  (7U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                                                   [0x31U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_7_data_3 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x31U] >> 3U))) << 0xdU) 
           | (QData)((IData)((0x1fffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [0x32U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_7_valid_0 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x32U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_7_valid_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x32U] >> 0xeU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_7_valid_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x32U] >> 0xfU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_7_valid_3 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x32U] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_0_level 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x32U] >> 0x11U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_0_tag_vpn 
        = ((0x7ffc000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                          [0x32U] >> 5U)) | (0x3fffU 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                             [0x33U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05F7 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x33U] >> 0xeU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__225(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__225\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_0_data_0 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x33U] >> 0xfU))) << 0x19U) 
           | (QData)((IData)((0x1ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [0x34U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_0_valid_0 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x34U] >> 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_1_level 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x34U] >> 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_1_tag_vpn 
        = ((0x7800000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                          [0x34U] >> 5U)) | (0x7fffffU 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                             [0x35U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05F8 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x35U] >> 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_1_data_0 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x35U] >> 0x18U))) << 0x22U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                               [0x36U])) << 2U) | (QData)((IData)(
                                                                  (3U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                                                   [0x37U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_1_valid_0 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x37U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_2_level 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x37U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_2_tag_vpn 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
           [0x37U] >> 5U);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__226(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__226\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05F9 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
           [0x38U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_2_data_0 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x38U] >> 1U))) << 0xbU) 
           | (QData)((IData)((0x7ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [0x39U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_2_valid_0 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x39U] >> 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_3_level 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x39U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_3_tag_vpn 
        = ((0x7fffe00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                          [0x39U] >> 5U)) | (0x1ffU 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                             [0x3aU]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05F10 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x3aU] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_3_data_0 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x3aU] >> 0xaU))) << 0x14U) 
           | (QData)((IData)((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [0x3bU]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_3_valid_0 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x3bU] >> 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_special_entry_level 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x3bU] >> 0x15U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__227(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__227\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_special_entry_tag_vpn 
        = ((0x7fc0000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                          [0x3bU] >> 5U)) | (0x3ffffU 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                             [0x3cU]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_special_entry_data_0 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x3cU] >> 0x13U))) << 0x1dU) 
           | (QData)((IData)((0x1fffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [0x3dU]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_special_entry_valid_0 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x3dU] >> 0x1dU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_state 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
           [0x3dU] >> 0x1eU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag 
        = (0x7ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
           [0x3eU]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x3eU] >> 0x1bU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_sectored_repl_addr 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
           [0x3eU] >> 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_sectored_hit_valid 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
           [0x3fU]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_sectored_hit_bits 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x3fU] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_need_gpa 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x3fU] >> 9U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__228(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__228\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_state_vec_0 
        = (0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                    [0x41U] >> 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_state_reg_1 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
           [0x41U] >> 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_valid 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
           [0x83U] >> 0x1fU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_probe 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
           [0x84U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__probe_bits_param 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x84U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__probe_bits_size 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                   [0x84U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__probe_bits_source 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x84U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__probe_bits_address 
        = ((0xfffff800U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
            [0x84U]) | (0x7ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                        [0x85U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_vaddr 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x87U] >> 0x16U))) << 0x1eU) 
           | (QData)((IData)((0x3fffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [0x88U]))));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__229(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__229\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_tag 
        = ((0xc0U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                     [0x88U] >> 0x18U)) | (0x3fU & 
                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                           [0x89U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd 
        = (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                    [0x89U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_size 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x89U] >> 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_signed 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x89U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_no_alloc 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x89U] >> 0x13U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_no_xcpt 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x89U] >> 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x8bU] >> 0x1dU))) << 0x25U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                               [0x8cU])) << 5U) | (QData)((IData)(
                                                                  (0x1fU 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                                                   [0x8dU])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_passthrough 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x8dU] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_size 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x8dU] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_cmd 
        = (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                    [0x8dU] >> 8U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__230(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__230\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_prv 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x8dU] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_flush_valid 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x8dU] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__cached_grant_wait 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x91U] >> 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__resetting 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x91U] >> 0x1bU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__flushCounter 
        = ((0x1e0U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                      [0x91U] >> 0x17U)) | (0x1fU & 
                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                            [0x92U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_ack_wait 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x92U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_ack_addr 
        = ((0xffffffc0U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
            [0x92U]) | (0x3fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                        [0x93U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                   [0x93U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__refill_way 
        = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                    [0x93U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__uncachedInFlight_0 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x93U] >> 0x12U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__231(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__231\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__uncachedReqs_0_addr 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x93U] >> 0x13U))) << 0x1bU) 
           | (QData)((IData)((0x7ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [0x94U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__uncachedReqs_0_tag 
        = ((0xf8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                     [0x94U] >> 0x18U)) | (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                           [0x95U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__uncachedReqs_0_size 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x95U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__uncachedReqs_0_signed 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x95U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_did_read 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x97U] >> 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_valid 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x97U] >> 0x1cU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_probe 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x97U] >> 0x1dU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_not_nacked_in_s1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x97U] >> 0x1eU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0x97U] >> 0x1fU))) << 0x27U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                               [0x98U])) << 7U) | (QData)((IData)(
                                                                  (0x7fU 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                                                   [0x99U])))));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__232(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__232\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_tag 
        = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                    [0x99U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd 
        = (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                    [0x99U] >> 0xfU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_size 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x99U] >> 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_signed 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x99U] >> 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_no_alloc 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x99U] >> 0x1cU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_no_xcpt 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x99U] >> 0x1dU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_tlb_xcpt_pf_ld 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x9eU] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_tlb_xcpt_pf_st 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x9eU] >> 0x11U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_tlb_xcpt_ae_ld 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x9eU] >> 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_tlb_xcpt_ae_st 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x9eU] >> 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_tlb_xcpt_ma_ld 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x9eU] >> 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_tlb_xcpt_ma_st 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0x9eU] >> 0x1aU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__233(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__233\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_pma_cacheable 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0xa1U] >> 0x1cU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_pma_must_alloc 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0xa1U] >> 0x1dU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_flush_valid_pre_tag_ecc 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0xa4U] >> 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r 
        = (0x3fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                        [0xa5U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_1 
        = ((0x380000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                         [0xa5U] >> 0xaU)) | (0x7ffffU 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                              [0xa6U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_2 
        = ((0x3ffe00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                         [0xa6U] >> 0xaU)) | (0x1ffU 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                              [0xa7U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_3 
        = (0x3fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                        [0xa7U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_4 
        = ((0x200000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                         [0xa7U] >> 0xaU)) | (0x1fffffU 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                              [0xa8U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_5 
        = ((0x3ff800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                         [0xa8U] >> 0xaU)) | (0x7ffU 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                              [0xa9U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__234(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__234\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_6 
        = ((0x3ffffeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                         [0xa9U] >> 0xaU)) | (1U & 
                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                              [0xaaU]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_7 
        = (0x3fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                        [0xaaU] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_data 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0xaaU] >> 0x17U))) << 0x37U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                               [0xabU])) << 0x17U) 
              | (QData)((IData)((0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                 [0xacU])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_probe_way 
        = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                    [0xacU] >> 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_probe_state_state 
        = ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                  [0xacU] >> 0x1eU)) | (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                        [0xadU]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_hit_way 
        = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                    [0xadU] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_hit_state_state 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0xadU] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_victim_way_r 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0xadU] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lrscCount 
        = (0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                    [0xadU] >> 0xfU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__235(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__235\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lrscAddr 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0xadU] >> 0x16U))) << 0x18U) 
           | (QData)((IData)((0xffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                              [0xaeU]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_cmd 
        = (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                    [0xaeU] >> 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_addr 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0xaeU] >> 0x1eU))) << 0x26U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                               [0xafU])) << 6U) | (QData)((IData)(
                                                                  (0x3fU 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                                                   [0xb0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0xb0U] >> 6U))) << 0x26U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                               [0xb1U])) << 6U) | (QData)((IData)(
                                                                  (0x3fU 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                                                   [0xb2U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_way 
        = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                    [0xb2U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_mask 
        = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                    [0xb2U] >> 0xeU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_rmw 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0xb2U] >> 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0xb2U] >> 0x17U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__236(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__236\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore_drain_on_miss_REG 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0xb2U] >> 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_held 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0xb2U] >> 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_addr 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                             [0xb2U] >> 0x1aU))) << 0x22U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                               [0xb3U])) << 2U) | (QData)((IData)(
                                                                  (3U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                                                   [0xb4U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_way 
        = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                    [0xb4U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r 
        = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                    [0xb4U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_1 
        = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                    [0xb4U] >> 0x12U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_2 
        = ((0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                     [0xb4U] >> 0x18U)) | (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                           [0xb5U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_3 
        = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                    [0xb5U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_4 
        = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                    [0xb5U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_5 
        = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                    [0xb5U] >> 0x12U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__237(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__237\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_6 
        = ((0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                     [0xb5U] >> 0x18U)) | (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                           [0xb6U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_data_r_7 
        = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                    [0xb6U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_mask 
        = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                    [0xb6U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__r_counter 
        = (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                     [0xb6U] >> 0x13U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__grantInProgress 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0xb6U] >> 0x1cU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__blockProbeAfterGrantCount 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
           [0xb6U] >> 0x1dU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__blockUncachedGrant 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
           [0xb7U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__r_counter_1 
        = (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                     [0xb7U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_release_data_valid 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0xb7U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_release_data_valid 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0xb7U] >> 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__io_cpu_s2_xcpt_REG 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0xb7U] >> 0xcU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__238(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__238\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__doUncachedResp 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0xb9U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__REG 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                 [0xb9U] >> 0xeU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__io_cpu_perf_release_counter 
        = ((0x1feU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                      [0xb9U] >> 0x17U)) | (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___RANDOM
                                            [0xbaU]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__239(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__239\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__214(vlSelf);
    VTestDriver___024root___eval_initial__TOP__215(vlSelf);
    VTestDriver___024root___eval_initial__TOP__216(vlSelf);
    VTestDriver___024root___eval_initial__TOP__217(vlSelf);
    VTestDriver___024root___eval_initial__TOP__218(vlSelf);
    VTestDriver___024root___eval_initial__TOP__219(vlSelf);
    VTestDriver___024root___eval_initial__TOP__220(vlSelf);
    VTestDriver___024root___eval_initial__TOP__221(vlSelf);
    VTestDriver___024root___eval_initial__TOP__222(vlSelf);
    VTestDriver___024root___eval_initial__TOP__223(vlSelf);
    VTestDriver___024root___eval_initial__TOP__224(vlSelf);
    VTestDriver___024root___eval_initial__TOP__225(vlSelf);
    VTestDriver___024root___eval_initial__TOP__226(vlSelf);
    VTestDriver___024root___eval_initial__TOP__227(vlSelf);
    VTestDriver___024root___eval_initial__TOP__228(vlSelf);
    VTestDriver___024root___eval_initial__TOP__229(vlSelf);
    VTestDriver___024root___eval_initial__TOP__230(vlSelf);
    VTestDriver___024root___eval_initial__TOP__231(vlSelf);
    VTestDriver___024root___eval_initial__TOP__232(vlSelf);
    VTestDriver___024root___eval_initial__TOP__233(vlSelf);
    VTestDriver___024root___eval_initial__TOP__234(vlSelf);
    VTestDriver___024root___eval_initial__TOP__235(vlSelf);
    VTestDriver___024root___eval_initial__TOP__236(vlSelf);
    VTestDriver___024root___eval_initial__TOP__237(vlSelf);
    VTestDriver___024root___eval_initial__TOP__238(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_3 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_4 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT___RANDOM
                 [0U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__240(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__240\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_5 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT___RANDOM
                 [0U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_6 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_7 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT___RANDOM
                 [0U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_8 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT___RANDOM
                 [0U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_9 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT___RANDOM
                 [0U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_10 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT___RANDOM
                 [0U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_11 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT___RANDOM
                 [0U] >> 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_12 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT___RANDOM
                 [0U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_13 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT___RANDOM
                 [0U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_14 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT___RANDOM
                 [0U] >> 0xeU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_15 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT___RANDOM
                 [0U] >> 0xfU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__241(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__241\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__239(vlSelf);
    VTestDriver___024root___eval_initial__TOP__240(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[1U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[2U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[3U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[4U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[5U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[6U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[7U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[8U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[9U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0xaU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__242(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__242\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0xbU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0xcU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0xdU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0xeU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0xfU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x10U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x11U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x12U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x13U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x14U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x15U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x16U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__243(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__243\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x17U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x18U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x19U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x1aU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x1bU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x1cU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x1dU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x1eU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x1fU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x20U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x21U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x22U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__244(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__244\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x23U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x24U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x25U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x26U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x27U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x28U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x29U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x2aU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x2bU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x2cU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x2dU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x2eU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__245(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__245\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x2fU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x30U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x31U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x32U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x33U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x34U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x35U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x36U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x37U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x38U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x39U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x3aU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__246(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__246\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_2 = 0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x3bU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x3cU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x3dU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x3eU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram[0x3fU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_0);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x3fU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_0__DOT___RAND_2);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__247(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__247\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__241(vlSelf);
    VTestDriver___024root___eval_initial__TOP__242(vlSelf);
    VTestDriver___024root___eval_initial__TOP__243(vlSelf);
    VTestDriver___024root___eval_initial__TOP__244(vlSelf);
    VTestDriver___024root___eval_initial__TOP__245(vlSelf);
    VTestDriver___024root___eval_initial__TOP__246(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[1U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[2U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[3U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[4U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[5U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[6U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[7U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[8U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[9U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__248(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__248\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0xaU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0xbU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0xcU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0xdU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0xeU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0xfU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x10U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x11U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x12U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x13U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x14U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x15U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__249(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__249\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x16U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x17U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x18U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x19U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x1aU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x1bU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x1cU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x1dU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x1eU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x1fU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x20U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x21U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__250(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__250\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x22U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x23U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x24U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x25U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x26U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x27U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x28U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x29U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x2aU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x2bU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x2cU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x2dU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__251(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__251\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x2eU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x2fU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x30U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x31U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x32U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x33U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x34U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x35U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x36U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x37U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x38U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x39U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__252(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__252\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_2 = 0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x3aU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x3bU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x3cU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x3dU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x3eU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram[0x3fU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_0);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x3fU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_1__DOT___RAND_2);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__253(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__253\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__247(vlSelf);
    VTestDriver___024root___eval_initial__TOP__248(vlSelf);
    VTestDriver___024root___eval_initial__TOP__249(vlSelf);
    VTestDriver___024root___eval_initial__TOP__250(vlSelf);
    VTestDriver___024root___eval_initial__TOP__251(vlSelf);
    VTestDriver___024root___eval_initial__TOP__252(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[1U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[2U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[3U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[4U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[5U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[6U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[7U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[8U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[9U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__254(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__254\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0xaU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0xbU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0xcU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0xdU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0xeU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0xfU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x10U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x11U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x12U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x13U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x14U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x15U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__255(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__255\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x16U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x17U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x18U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x19U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x1aU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x1bU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x1cU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x1dU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x1eU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x1fU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x20U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x21U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__256(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__256\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x22U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x23U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x24U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x25U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x26U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x27U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x28U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x29U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x2aU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x2bU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x2cU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x2dU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__257(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__257\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x2eU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x2fU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x30U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x31U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x32U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x33U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x34U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x35U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x36U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x37U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x38U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x39U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__258(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__258\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_2 = 0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x3aU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x3bU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x3cU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x3dU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x3eU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram[0x3fU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_0);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x3fU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_2__DOT___RAND_2);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__259(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__259\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__253(vlSelf);
    VTestDriver___024root___eval_initial__TOP__254(vlSelf);
    VTestDriver___024root___eval_initial__TOP__255(vlSelf);
    VTestDriver___024root___eval_initial__TOP__256(vlSelf);
    VTestDriver___024root___eval_initial__TOP__257(vlSelf);
    VTestDriver___024root___eval_initial__TOP__258(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[1U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[2U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[3U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[4U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[5U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[6U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[7U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[8U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[9U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__260(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__260\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0xaU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0xbU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0xcU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0xdU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0xeU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0xfU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x10U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x11U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x12U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x13U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x14U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x15U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__261(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__261\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x16U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x17U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x18U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x19U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x1aU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x1bU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x1cU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x1dU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x1eU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x1fU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x20U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x21U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__262(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__262\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x22U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x23U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x24U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x25U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x26U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x27U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x28U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x29U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x2aU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x2bU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x2cU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x2dU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__263(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__263\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x2eU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x2fU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x30U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x31U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x32U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x33U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x34U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x35U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x36U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x37U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x38U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x39U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__264(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__264\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_2 = 0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x3aU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x3bU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x3cU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x3dU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x3eU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram[0x3fU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_0);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x3fU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_3__DOT___RAND_2);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__265(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__265\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__259(vlSelf);
    VTestDriver___024root___eval_initial__TOP__260(vlSelf);
    VTestDriver___024root___eval_initial__TOP__261(vlSelf);
    VTestDriver___024root___eval_initial__TOP__262(vlSelf);
    VTestDriver___024root___eval_initial__TOP__263(vlSelf);
    VTestDriver___024root___eval_initial__TOP__264(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[1U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[2U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[3U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[4U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[5U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[6U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[7U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[8U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[9U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__266(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__266\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0xaU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0xbU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0xcU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0xdU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0xeU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0xfU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x10U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x11U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x12U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x13U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x14U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x15U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__267(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__267\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x16U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x17U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x18U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x19U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x1aU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x1bU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x1cU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x1dU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x1eU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x1fU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x20U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x21U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__268(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__268\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x22U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x23U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x24U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x25U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x26U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x27U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x28U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x29U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x2aU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x2bU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x2cU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x2dU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__269(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__269\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x2eU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x2fU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x30U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x31U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x32U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x33U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x34U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x35U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x36U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x37U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x38U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x39U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__270(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__270\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_2 = 0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x3aU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x3bU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x3cU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x3dU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x3eU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram[0x3fU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_0);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x3fU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_4__DOT___RAND_2);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__271(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__271\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__265(vlSelf);
    VTestDriver___024root___eval_initial__TOP__266(vlSelf);
    VTestDriver___024root___eval_initial__TOP__267(vlSelf);
    VTestDriver___024root___eval_initial__TOP__268(vlSelf);
    VTestDriver___024root___eval_initial__TOP__269(vlSelf);
    VTestDriver___024root___eval_initial__TOP__270(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[1U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[2U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[3U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[4U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[5U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[6U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[7U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[8U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[9U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__272(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__272\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0xaU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0xbU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0xcU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0xdU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0xeU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0xfU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x10U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x11U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x12U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x13U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x14U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x15U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__273(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__273\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x16U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x17U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x18U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x19U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x1aU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x1bU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x1cU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x1dU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x1eU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x1fU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x20U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x21U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__274(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__274\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x22U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x23U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x24U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x25U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x26U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x27U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x28U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x29U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x2aU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x2bU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x2cU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x2dU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__275(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__275\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x2eU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x2fU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x30U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x31U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x32U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x33U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x34U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x35U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x36U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x37U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x38U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x39U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__276(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__276\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_2 = 0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x3aU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x3bU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x3cU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x3dU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x3eU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram[0x3fU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_0);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x3fU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_5__DOT___RAND_2);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__277(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__277\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__271(vlSelf);
    VTestDriver___024root___eval_initial__TOP__272(vlSelf);
    VTestDriver___024root___eval_initial__TOP__273(vlSelf);
    VTestDriver___024root___eval_initial__TOP__274(vlSelf);
    VTestDriver___024root___eval_initial__TOP__275(vlSelf);
    VTestDriver___024root___eval_initial__TOP__276(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[1U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[2U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[3U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[4U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[5U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[6U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[7U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[8U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[9U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__278(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__278\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0xaU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0xbU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0xcU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0xdU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0xeU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0xfU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x10U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x11U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x12U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x13U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x14U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x15U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__279(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__279\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x16U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x17U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x18U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x19U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x1aU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x1bU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x1cU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x1dU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x1eU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x1fU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x20U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x21U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__280(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__280\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x22U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x23U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x24U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x25U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x26U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x27U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x28U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x29U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x2aU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x2bU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x2cU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x2dU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__281(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__281\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x2eU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x2fU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x30U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x31U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x32U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x33U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x34U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x35U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x36U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x37U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x38U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x39U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__282(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__282\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_2 = 0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x3aU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x3bU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x3cU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x3dU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x3eU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram[0x3fU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_0);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x3fU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_6__DOT___RAND_2);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__283(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__283\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__277(vlSelf);
    VTestDriver___024root___eval_initial__TOP__278(vlSelf);
    VTestDriver___024root___eval_initial__TOP__279(vlSelf);
    VTestDriver___024root___eval_initial__TOP__280(vlSelf);
    VTestDriver___024root___eval_initial__TOP__281(vlSelf);
    VTestDriver___024root___eval_initial__TOP__282(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[1U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[2U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[3U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[4U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[5U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[6U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[7U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[8U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[9U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__284(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__284\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0xaU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0xbU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0xcU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0xdU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0xeU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0xfU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x10U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x11U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x12U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x13U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x14U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x15U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__285(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__285\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x16U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x17U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x18U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x19U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x1aU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x1bU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x1cU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x1dU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x1eU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x1fU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x20U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x21U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__286(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__286\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x22U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x23U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x24U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x25U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x26U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x27U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x28U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x29U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x2aU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x2bU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x2cU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x2dU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__287(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__287\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x2eU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x2fU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x30U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x31U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x32U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x33U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x34U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x35U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x36U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x37U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x38U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x39U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__288(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__288\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_2 = 0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x3aU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x3bU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x3cU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x3dU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x3eU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram[0x3fU] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_0);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x3fU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__rockettile_dcache_tag_array__DOT__rockettile_dcache_tag_array_ext__DOT__mem_0_7__DOT___RAND_2);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__289(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__289\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_0__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_0__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_0__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_0__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_0__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_0__DOT__initvar = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_1__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_1__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_1__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_1__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_1__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_1__DOT__initvar = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__283(vlSelf);
    VTestDriver___024root___eval_initial__TOP__284(vlSelf);
    VTestDriver___024root___eval_initial__TOP__285(vlSelf);
    VTestDriver___024root___eval_initial__TOP__286(vlSelf);
    VTestDriver___024root___eval_initial__TOP__287(vlSelf);
    VTestDriver___024root___eval_initial__TOP__288(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_0__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_0__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_0__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_0__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_0__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_0__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_0__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_0__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_0__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_0__DOT___RAND_2);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_1__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_1__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_1__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_1__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_1__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_1__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_1__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_1__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_1__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_1__DOT___RAND_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_2__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_2__DOT__initvar = 0U;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__290(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__290\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_2__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_2__DOT___RAND_2 = 0;
    // Body
    while (VL_GTS_III(32, 0x200U, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_2__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_2__DOT__ram[(0x1ffU 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_2__DOT__initvar)] 
            = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_2__DOT___RAND_0);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_2__DOT__initvar 
            = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_2__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_2__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_2__DOT___RAND_2);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__291(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__291\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_3__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_3__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_3__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_3__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_3__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_3__DOT__initvar = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_4__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_4__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_4__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_4__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_4__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_4__DOT__initvar = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__289(vlSelf);
    VTestDriver___024root___eval_initial__TOP__290(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_3__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_3__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_3__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_3__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_3__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_3__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_3__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_3__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_3__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_3__DOT___RAND_2);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_4__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_4__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_4__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_4__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_4__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_4__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_4__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_4__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_4__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_4__DOT___RAND_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_5__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_5__DOT__initvar = 0U;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__292(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__292\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_5__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_5__DOT___RAND_2 = 0;
    // Body
    while (VL_GTS_III(32, 0x200U, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_5__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_5__DOT__ram[(0x1ffU 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_5__DOT__initvar)] 
            = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_5__DOT___RAND_0);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_5__DOT__initvar 
            = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_5__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_5__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_5__DOT___RAND_2);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__293(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__293\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_6__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_6__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_6__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_6__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_6__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_6__DOT__initvar = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_7__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_7__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_7__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_7__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_7__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_7__DOT__initvar = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__291(vlSelf);
    VTestDriver___024root___eval_initial__TOP__292(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_6__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_6__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_6__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_6__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_6__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_6__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_6__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_6__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_6__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_6__DOT___RAND_2);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_7__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_7__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_7__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_7__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_7__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_7__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_7__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_7__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_7__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_7__DOT___RAND_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_8__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_8__DOT__initvar = 0U;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__294(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__294\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_8__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_8__DOT___RAND_2 = 0;
    // Body
    while (VL_GTS_III(32, 0x200U, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_8__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_8__DOT__ram[(0x1ffU 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_8__DOT__initvar)] 
            = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_8__DOT___RAND_0);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_8__DOT__initvar 
            = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_8__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_8__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_8__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_8__DOT___RAND_2);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__295(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__295\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_9__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_9__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_9__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_9__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_9__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_9__DOT__initvar = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_10__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_10__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_10__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_10__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_10__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_10__DOT__initvar = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__293(vlSelf);
    VTestDriver___024root___eval_initial__TOP__294(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_9__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_9__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_9__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_9__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_9__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_9__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_9__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_9__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_9__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_9__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_9__DOT___RAND_2);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_10__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_10__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_10__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_10__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_10__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_10__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_10__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_10__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_10__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_10__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_10__DOT___RAND_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_11__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_11__DOT__initvar = 0U;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__296(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__296\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_11__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_11__DOT___RAND_2 = 0;
    // Body
    while (VL_GTS_III(32, 0x200U, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_11__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_11__DOT__ram[(0x1ffU 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_11__DOT__initvar)] 
            = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_11__DOT___RAND_0);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_11__DOT__initvar 
            = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_11__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_11__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_11__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_11__DOT___RAND_2);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__297(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__297\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_12__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_12__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_12__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_12__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_12__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_12__DOT__initvar = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_13__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_13__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_13__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_13__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_13__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_13__DOT__initvar = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__295(vlSelf);
    VTestDriver___024root___eval_initial__TOP__296(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_12__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_12__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_12__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_12__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_12__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_12__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_12__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_12__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_12__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_12__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_12__DOT___RAND_2);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_13__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_13__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_13__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_13__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_13__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_13__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_13__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_13__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_13__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_13__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_13__DOT___RAND_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_14__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_14__DOT__initvar = 0U;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__298(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__298\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_14__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_14__DOT___RAND_2 = 0;
    // Body
    while (VL_GTS_III(32, 0x200U, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_14__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_14__DOT__ram[(0x1ffU 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_14__DOT__initvar)] 
            = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_14__DOT___RAND_0);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_14__DOT__initvar 
            = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_14__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_14__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_14__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_14__DOT___RAND_2);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__299(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__299\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_15__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_15__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_15__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_15__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_15__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_15__DOT__initvar = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_16__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_16__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_16__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_16__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_16__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_16__DOT__initvar = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__297(vlSelf);
    VTestDriver___024root___eval_initial__TOP__298(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_15__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_15__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_15__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_15__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_15__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_15__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_15__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_15__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_15__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_15__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_15__DOT___RAND_2);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_16__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_16__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_16__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_16__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_16__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_16__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_16__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_16__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_16__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_16__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_16__DOT___RAND_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_17__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_17__DOT__initvar = 0U;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__300(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__300\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_17__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_17__DOT___RAND_2 = 0;
    // Body
    while (VL_GTS_III(32, 0x200U, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_17__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_17__DOT__ram[(0x1ffU 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_17__DOT__initvar)] 
            = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_17__DOT___RAND_0);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_17__DOT__initvar 
            = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_17__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_17__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_17__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_17__DOT___RAND_2);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__301(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__301\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_18__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_18__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_18__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_18__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_18__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_18__DOT__initvar = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_19__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_19__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_19__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_19__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_19__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_19__DOT__initvar = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__299(vlSelf);
    VTestDriver___024root___eval_initial__TOP__300(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_18__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_18__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_18__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_18__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_18__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_18__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_18__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_18__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_18__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_18__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_18__DOT___RAND_2);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_19__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_19__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_19__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_19__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_19__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_19__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_19__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_19__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_19__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_19__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_19__DOT___RAND_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_20__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_20__DOT__initvar = 0U;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__302(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__302\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_20__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_20__DOT___RAND_2 = 0;
    // Body
    while (VL_GTS_III(32, 0x200U, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_20__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_20__DOT__ram[(0x1ffU 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_20__DOT__initvar)] 
            = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_20__DOT___RAND_0);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_20__DOT__initvar 
            = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_20__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_20__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_20__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_20__DOT___RAND_2);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__303(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__303\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_21__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_21__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_21__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_21__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_21__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_21__DOT__initvar = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_22__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_22__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_22__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_22__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_22__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_22__DOT__initvar = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__301(vlSelf);
    VTestDriver___024root___eval_initial__TOP__302(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_21__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_21__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_21__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_21__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_21__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_21__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_21__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_21__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_21__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_21__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_21__DOT___RAND_2);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_22__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_22__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_22__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_22__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_22__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_22__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_22__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_22__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_22__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_22__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_22__DOT___RAND_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_23__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_23__DOT__initvar = 0U;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__304(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__304\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_23__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_23__DOT___RAND_2 = 0;
    // Body
    while (VL_GTS_III(32, 0x200U, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_23__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_23__DOT__ram[(0x1ffU 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_23__DOT__initvar)] 
            = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_23__DOT___RAND_0);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_23__DOT__initvar 
            = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_23__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_23__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_23__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_23__DOT___RAND_2);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__305(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__305\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_24__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_24__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_24__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_24__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_24__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_24__DOT__initvar = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_25__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_25__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_25__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_25__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_25__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_25__DOT__initvar = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__303(vlSelf);
    VTestDriver___024root___eval_initial__TOP__304(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_24__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_24__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_24__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_24__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_24__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_24__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_24__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_24__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_24__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_24__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_24__DOT___RAND_2);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_25__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_25__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_25__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_25__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_25__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_25__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_25__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_25__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_25__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_25__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_25__DOT___RAND_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_26__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_26__DOT__initvar = 0U;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__306(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__306\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_26__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_26__DOT___RAND_2 = 0;
    // Body
    while (VL_GTS_III(32, 0x200U, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_26__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_26__DOT__ram[(0x1ffU 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_26__DOT__initvar)] 
            = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_26__DOT___RAND_0);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_26__DOT__initvar 
            = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_26__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_26__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_26__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_26__DOT___RAND_2);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__307(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__307\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_27__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_27__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_27__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_27__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_27__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_27__DOT__initvar = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_28__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_28__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_28__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_28__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_28__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_28__DOT__initvar = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__305(vlSelf);
    VTestDriver___024root___eval_initial__TOP__306(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_27__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_27__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_27__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_27__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_27__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_27__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_27__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_27__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_27__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_27__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_27__DOT___RAND_2);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_28__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_28__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_28__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_28__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_28__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_28__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_28__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_28__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_28__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_28__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_28__DOT___RAND_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_29__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_29__DOT__initvar = 0U;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__308(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__308\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_29__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_29__DOT___RAND_2 = 0;
    // Body
    while (VL_GTS_III(32, 0x200U, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_29__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_29__DOT__ram[(0x1ffU 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_29__DOT__initvar)] 
            = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_29__DOT___RAND_0);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_29__DOT__initvar 
            = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_29__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_29__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_29__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_29__DOT___RAND_2);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__309(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__309\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_30__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_30__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_30__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_30__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_30__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_30__DOT__initvar = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_31__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_31__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_31__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_31__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_31__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_31__DOT__initvar = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__307(vlSelf);
    VTestDriver___024root___eval_initial__TOP__308(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_30__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_30__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_30__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_30__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_30__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_30__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_30__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_30__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_30__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_30__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_30__DOT___RAND_2);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_31__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_31__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_31__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_31__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_31__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_31__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_31__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_31__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_31__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_31__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_31__DOT___RAND_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_32__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_32__DOT__initvar = 0U;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__310(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__310\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_32__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_32__DOT___RAND_2 = 0;
    // Body
    while (VL_GTS_III(32, 0x200U, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_32__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_32__DOT__ram[(0x1ffU 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_32__DOT__initvar)] 
            = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_32__DOT___RAND_0);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_32__DOT__initvar 
            = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_32__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_32__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_32__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_32__DOT___RAND_2);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__311(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__311\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_33__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_33__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_33__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_33__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_33__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_33__DOT__initvar = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_34__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_34__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_34__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_34__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_34__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_34__DOT__initvar = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__309(vlSelf);
    VTestDriver___024root___eval_initial__TOP__310(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_33__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_33__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_33__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_33__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_33__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_33__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_33__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_33__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_33__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_33__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_33__DOT___RAND_2);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_34__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_34__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_34__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_34__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_34__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_34__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_34__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_34__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_34__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_34__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_34__DOT___RAND_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_35__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_35__DOT__initvar = 0U;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__312(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__312\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_35__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_35__DOT___RAND_2 = 0;
    // Body
    while (VL_GTS_III(32, 0x200U, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_35__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_35__DOT__ram[(0x1ffU 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_35__DOT__initvar)] 
            = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_35__DOT___RAND_0);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_35__DOT__initvar 
            = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_35__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_35__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_35__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_35__DOT___RAND_2);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__313(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__313\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_36__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_36__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_36__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_36__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_36__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_36__DOT__initvar = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_37__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_37__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_37__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_37__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_37__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_37__DOT__initvar = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__311(vlSelf);
    VTestDriver___024root___eval_initial__TOP__312(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_36__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_36__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_36__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_36__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_36__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_36__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_36__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_36__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_36__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_36__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_36__DOT___RAND_2);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_37__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_37__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_37__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_37__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_37__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_37__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_37__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_37__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_37__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_37__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_37__DOT___RAND_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_38__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_38__DOT__initvar = 0U;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__314(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__314\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_38__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_38__DOT___RAND_2 = 0;
    // Body
    while (VL_GTS_III(32, 0x200U, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_38__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_38__DOT__ram[(0x1ffU 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_38__DOT__initvar)] 
            = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_38__DOT___RAND_0);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_38__DOT__initvar 
            = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_38__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_38__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_38__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_38__DOT___RAND_2);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__315(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__315\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_39__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_39__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_39__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_39__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_39__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_39__DOT__initvar = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_40__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_40__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_40__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_40__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_40__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_40__DOT__initvar = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__313(vlSelf);
    VTestDriver___024root___eval_initial__TOP__314(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_39__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_39__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_39__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_39__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_39__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_39__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_39__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_39__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_39__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_39__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_39__DOT___RAND_2);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_40__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_40__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_40__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_40__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_40__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_40__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_40__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_40__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_40__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_40__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_40__DOT___RAND_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_41__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_41__DOT__initvar = 0U;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__316(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__316\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_41__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_41__DOT___RAND_2 = 0;
    // Body
    while (VL_GTS_III(32, 0x200U, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_41__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_41__DOT__ram[(0x1ffU 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_41__DOT__initvar)] 
            = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_41__DOT___RAND_0);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_41__DOT__initvar 
            = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_41__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_41__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_41__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_41__DOT___RAND_2);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__317(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__317\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_42__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_42__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_42__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_42__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_42__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_42__DOT__initvar = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_43__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_43__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_43__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_43__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_43__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_43__DOT__initvar = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__315(vlSelf);
    VTestDriver___024root___eval_initial__TOP__316(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_42__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_42__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_42__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_42__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_42__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_42__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_42__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_42__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_42__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_42__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_42__DOT___RAND_2);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_43__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_43__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_43__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_43__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_43__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_43__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_43__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_43__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_43__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_43__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_43__DOT___RAND_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_44__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_44__DOT__initvar = 0U;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__318(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__318\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_44__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_44__DOT___RAND_2 = 0;
    // Body
    while (VL_GTS_III(32, 0x200U, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_44__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_44__DOT__ram[(0x1ffU 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_44__DOT__initvar)] 
            = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_44__DOT___RAND_0);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_44__DOT__initvar 
            = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_44__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_44__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_44__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_44__DOT___RAND_2);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__319(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__319\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_45__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_45__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_45__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_45__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_45__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_45__DOT__initvar = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_46__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_46__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_46__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_46__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_46__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_46__DOT__initvar = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__317(vlSelf);
    VTestDriver___024root___eval_initial__TOP__318(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_45__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_45__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_45__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_45__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_45__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_45__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_45__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_45__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_45__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_45__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_45__DOT___RAND_2);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_46__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_46__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_46__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_46__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_46__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_46__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_46__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_46__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_46__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_46__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_46__DOT___RAND_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_47__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_47__DOT__initvar = 0U;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__320(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__320\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_47__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_47__DOT___RAND_2 = 0;
    // Body
    while (VL_GTS_III(32, 0x200U, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_47__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_47__DOT__ram[(0x1ffU 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_47__DOT__initvar)] 
            = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_47__DOT___RAND_0);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_47__DOT__initvar 
            = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_47__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_47__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_47__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_47__DOT___RAND_2);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__321(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__321\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_48__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_48__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_48__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_48__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_48__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_48__DOT__initvar = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_49__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_49__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_49__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_49__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_49__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_49__DOT__initvar = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__319(vlSelf);
    VTestDriver___024root___eval_initial__TOP__320(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_48__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_48__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_48__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_48__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_48__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_48__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_48__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_48__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_48__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_48__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_48__DOT___RAND_2);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_49__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_49__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_49__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_49__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_49__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_49__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_49__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_49__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_49__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_49__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_49__DOT___RAND_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_50__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_50__DOT__initvar = 0U;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__322(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__322\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_50__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_50__DOT___RAND_2 = 0;
    // Body
    while (VL_GTS_III(32, 0x200U, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_50__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_50__DOT__ram[(0x1ffU 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_50__DOT__initvar)] 
            = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_50__DOT___RAND_0);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_50__DOT__initvar 
            = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_50__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_50__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_50__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_50__DOT___RAND_2);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__323(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__323\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_51__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_51__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_51__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_51__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_51__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_51__DOT__initvar = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_52__DOT___RAND_0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_52__DOT___RAND_0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_52__DOT___RAND_2;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_52__DOT___RAND_2 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_52__DOT__initvar;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_52__DOT__initvar = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__321(vlSelf);
    VTestDriver___024root___eval_initial__TOP__322(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_51__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_51__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_51__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_51__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_51__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_51__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_51__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_51__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_51__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_51__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_51__DOT___RAND_2);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_52__DOT___RAND_0 
        = VL_RANDOM_I();
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_52__DOT__initvar = 0U;
    while (VL_GTS_III(32, 0x200U, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_52__DOT__initvar)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_52__DOT__ram[(0x1ffU 
                                                                                & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_52__DOT__initvar)] 
            = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_52__DOT___RAND_0);
        TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_52__DOT__initvar 
            = ((IData)(1U) + TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_52__DOT__initvar);
    }
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_52__DOT___RAND_2 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_52__DOT__ram_RW_0_r_addr_pipe_0 
        = (0x1ffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_52__DOT___RAND_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_53__DOT___RAND_0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT__rockettile_dcache_data_arrays_0__DOT__rockettile_dcache_data_arrays_0_ext__DOT__mem_0_53__DOT__initvar = 0U;
}
