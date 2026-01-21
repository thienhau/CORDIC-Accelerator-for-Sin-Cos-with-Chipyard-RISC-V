// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__792(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__792\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___final_meta_writeback_state_T_2 
        = ((3U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__request_param)) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__meta_state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__meta_hit;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_6_io_schedule_bits_b_bits_clients 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__meta_hit) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__request_prio_0) 
                  & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__req_acquire) 
                      | (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__request_opcode))) 
                     & (0x20U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__request_source)))))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__evict_c));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT____VdfgTmp_h6345caf8__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__evict_c) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__meta_hit));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_6__io_allocate_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__request_control 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_6__io_allocate_bits_control;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__request_prio_2 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_6__io_allocate_bits_prio_2;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT____VdfgTmp_ha6b2c659__0 
        = (0xfU & ((0x4200U | ((0x2000U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__evict_c)) 
                                           << 0xdU)) 
                               | ((0x1000U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__meta_dirty)) 
                                              << 0xcU)) 
                                  | ((0x100U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__meta_dirty)) 
                                                << 8U)) 
                                     | ((0x10U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__evict_c)) 
                                                  << 4U)) 
                                        | (8U & ((~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__meta_state)))) 
                                                 << 3U))))))) 
                   >> (0xfU & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__meta_state), 2U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___final_meta_writeback_state_T_2 
        = ((3U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__request_param)) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__meta_state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__meta_hit;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_5_io_schedule_bits_b_bits_clients 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__meta_hit) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__request_prio_0) 
                  & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__req_acquire) 
                      | (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__request_opcode))) 
                     & (0x20U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__request_source)))))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__evict_c));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__793(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__793\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<5>/*159:0*/ __Vtemp_17;
    VlWide<5>/*159:0*/ __Vtemp_18;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT____VdfgTmp_h6345caf8__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__evict_c) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__meta_hit));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_5__io_allocate_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__request_control 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_5__io_allocate_bits_control;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__request_prio_2 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_5__io_allocate_bits_prio_2;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT___GEN_4 
        = (0x40U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__count));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT___GEN_5) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__isHi 
            = (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT___decoded_orMatrixOutputs_T_4));
    }
    __Vtemp_5[0U] = (((- (IData)((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[2U]))) 
                      << 8U) | (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U]));
    __Vtemp_5[1U] = (((- (IData)((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[2U]))) 
                      >> 0x18U) | ((- (IData)((1U & 
                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[2U]))) 
                                   << 8U));
    __Vtemp_5[2U] = (((- (IData)((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[2U]))) 
                      >> 0x18U) | (0x100U & ((- (IData)(
                                                        (1U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[2U]))) 
                                             << 8U)));
    __Vtemp_6[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U];
    __Vtemp_6[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U];
    __Vtemp_6[2U] = ((0x1feU & ((- (IData)((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[2U]))) 
                                << 1U)) | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[2U]);
    VL_MUL_W(3, __Vtemp_7, __Vtemp_5, __Vtemp_6);
    __Vtemp_11[0U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[3U] 
                       << 0x1fU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[2U] 
                                    >> 1U));
    __Vtemp_11[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[4U] 
                       << 0x1fU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[3U] 
                                    >> 1U));
    __Vtemp_11[2U] = ((0x1feU & ((- (IData)((1U & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[4U] 
                                                   >> 1U)))) 
                                 << 1U)) | (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[4U] 
                                                  >> 1U)));
    VL_ADD_W(3, __Vtemp_12, __Vtemp_7, __Vtemp_11);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT___prod_T_4[0U] 
        = __Vtemp_12[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT___prod_T_4[1U] 
        = __Vtemp_12[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT___prod_T_4[2U] 
        = (0x1ffU & __Vtemp_12[2U]);
    __Vtemp_17[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U]))));
    __Vtemp_17[1U] = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U]))) 
                              >> 0x20U));
    __Vtemp_17[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[3U] 
                       << 0x1fU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[2U] 
                                    >> 1U));
    __Vtemp_17[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[4U] 
                       << 0x1fU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[3U] 
                                    >> 1U));
    __Vtemp_17[4U] = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[4U] 
                            >> 1U));
    VL_SHIFTR_WWI(129,129,6, __Vtemp_18, __Vtemp_17, 
                  (0x3fU & (- (0x38U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__count) 
                                        << 3U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__eOutRes[0U] 
        = __Vtemp_18[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__eOutRes[1U] 
        = __Vtemp_18[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__eOutRes[2U] 
        = __Vtemp_18[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__eOutRes[3U] 
        = __Vtemp_18[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__eOutRes[4U] 
        = (1U & __Vtemp_18[4U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT___eOutPos_T 
        = (0x3fU & ((((IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U])) 
                      << 5U) | ((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U])
                                 ? (((IData)((0U != 
                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                               >> 0x10U))) 
                                     << 4U) | ((0U 
                                                != 
                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                 >> 0x10U))
                                                ? (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                              >> 0x18U))) 
                                                    << 3U) 
                                                   | ((0U 
                                                       != 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                        >> 0x18U))
                                                       ? 
                                                      (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                                  >> 0x1cU))) 
                                                        << 2U) 
                                                       | ((0U 
                                                           != 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                            >> 0x1cU))
                                                           ? 
                                                          ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                            >> 0x1fU)
                                                            ? 3U
                                                            : 
                                                           ((0x40000000U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U])
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                                >> 0x1dU))))
                                                           : 
                                                          ((0x8000000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U])
                                                            ? 3U
                                                            : 
                                                           ((0x4000000U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U])
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                                >> 0x19U))))))
                                                       : 
                                                      (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                                     >> 0x14U)))) 
                                                        << 2U) 
                                                       | ((0U 
                                                           != 
                                                           (0xfU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                               >> 0x14U)))
                                                           ? 
                                                          ((0x800000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U])
                                                            ? 3U
                                                            : 
                                                           ((0x400000U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U])
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                                >> 0x15U))))
                                                           : 
                                                          ((0x80000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U])
                                                            ? 3U
                                                            : 
                                                           ((0x40000U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U])
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                                >> 0x11U))))))))
                                                : (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (0xffU 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                                 >> 8U)))) 
                                                    << 3U) 
                                                   | ((0U 
                                                       != 
                                                       (0xffU 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                           >> 8U)))
                                                       ? 
                                                      (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                                     >> 0xcU)))) 
                                                        << 2U) 
                                                       | ((0U 
                                                           != 
                                                           (0xfU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                               >> 0xcU)))
                                                           ? 
                                                          ((0x8000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U])
                                                            ? 3U
                                                            : 
                                                           ((0x4000U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U])
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                                >> 0xdU))))
                                                           : 
                                                          ((0x800U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U])
                                                            ? 3U
                                                            : 
                                                           ((0x400U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U])
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                                >> 9U))))))
                                                       : 
                                                      (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                                     >> 4U)))) 
                                                        << 2U) 
                                                       | ((0U 
                                                           != 
                                                           (0xfU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                               >> 4U)))
                                                           ? 
                                                          ((0x80U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U])
                                                            ? 3U
                                                            : 
                                                           ((0x40U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U])
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                                >> 5U))))
                                                           : 
                                                          ((8U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U])
                                                            ? 3U
                                                            : 
                                                           ((4U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U])
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U] 
                                                                >> 1U))))))))))
                                 : (((IData)((0U != 
                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                               >> 0x10U))) 
                                     << 4U) | ((0U 
                                                != 
                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                 >> 0x10U))
                                                ? (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                              >> 0x18U))) 
                                                    << 3U) 
                                                   | ((0U 
                                                       != 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                        >> 0x18U))
                                                       ? 
                                                      (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                                  >> 0x1cU))) 
                                                        << 2U) 
                                                       | ((0U 
                                                           != 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                            >> 0x1cU))
                                                           ? 
                                                          ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                            >> 0x1fU)
                                                            ? 3U
                                                            : 
                                                           ((0x40000000U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U])
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                                >> 0x1dU))))
                                                           : 
                                                          ((0x8000000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U])
                                                            ? 3U
                                                            : 
                                                           ((0x4000000U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U])
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                                >> 0x19U))))))
                                                       : 
                                                      (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                                     >> 0x14U)))) 
                                                        << 2U) 
                                                       | ((0U 
                                                           != 
                                                           (0xfU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                               >> 0x14U)))
                                                           ? 
                                                          ((0x800000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U])
                                                            ? 3U
                                                            : 
                                                           ((0x400000U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U])
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                                >> 0x15U))))
                                                           : 
                                                          ((0x80000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U])
                                                            ? 3U
                                                            : 
                                                           ((0x40000U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U])
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                                >> 0x11U))))))))
                                                : (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (0xffU 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                                 >> 8U)))) 
                                                    << 3U) 
                                                   | ((0U 
                                                       != 
                                                       (0xffU 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                           >> 8U)))
                                                       ? 
                                                      (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                                     >> 0xcU)))) 
                                                        << 2U) 
                                                       | ((0U 
                                                           != 
                                                           (0xfU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                               >> 0xcU)))
                                                           ? 
                                                          ((0x8000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U])
                                                            ? 3U
                                                            : 
                                                           ((0x4000U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U])
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                                >> 0xdU))))
                                                           : 
                                                          ((0x800U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U])
                                                            ? 3U
                                                            : 
                                                           ((0x400U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U])
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                                >> 9U))))))
                                                       : 
                                                      (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                                     >> 4U)))) 
                                                        << 2U) 
                                                       | ((0U 
                                                           != 
                                                           (0xfU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                               >> 4U)))
                                                           ? 
                                                          ((0x80U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U])
                                                            ? 3U
                                                            : 
                                                           ((0x40U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U])
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                                >> 5U))))
                                                           : 
                                                          ((8U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U])
                                                            ? 3U
                                                            : 
                                                           ((4U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U])
                                                             ? 2U
                                                             : 
                                                            (1U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U] 
                                                                >> 1U)))))))))))) 
                    - (((IData)((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U])) 
                        << 5U) | ((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U])
                                   ? (((IData)((0U 
                                                != 
                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                 >> 0x10U))) 
                                       << 4U) | ((0U 
                                                  != 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                   >> 0x10U))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                             >> 0x18U))) 
                                                   << 3U) 
                                                  | ((0U 
                                                      != 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                       >> 0x18U))
                                                      ? 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                                 >> 0x1cU))) 
                                                       << 2U) 
                                                      | ((0U 
                                                          != 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                           >> 0x1cU))
                                                          ? 
                                                         ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                           >> 0x1fU)
                                                           ? 3U
                                                           : 
                                                          ((0x40000000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U])
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                               >> 0x1dU))))
                                                          : 
                                                         ((0x8000000U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U])
                                                           ? 3U
                                                           : 
                                                          ((0x4000000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U])
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                               >> 0x19U))))))
                                                      : 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                                    >> 0x14U)))) 
                                                       << 2U) 
                                                      | ((0U 
                                                          != 
                                                          (0xfU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                              >> 0x14U)))
                                                          ? 
                                                         ((0x800000U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U])
                                                           ? 3U
                                                           : 
                                                          ((0x400000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U])
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                               >> 0x15U))))
                                                          : 
                                                         ((0x80000U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U])
                                                           ? 3U
                                                           : 
                                                          ((0x40000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U])
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                               >> 0x11U))))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xffU 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                                >> 8U)))) 
                                                   << 3U) 
                                                  | ((0U 
                                                      != 
                                                      (0xffU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                          >> 8U)))
                                                      ? 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                                    >> 0xcU)))) 
                                                       << 2U) 
                                                      | ((0U 
                                                          != 
                                                          (0xfU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                              >> 0xcU)))
                                                          ? 
                                                         ((0x8000U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U])
                                                           ? 3U
                                                           : 
                                                          ((0x4000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U])
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                               >> 0xdU))))
                                                          : 
                                                         ((0x800U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U])
                                                           ? 3U
                                                           : 
                                                          ((0x400U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U])
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                               >> 9U))))))
                                                      : 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                                    >> 4U)))) 
                                                       << 2U) 
                                                      | ((0U 
                                                          != 
                                                          (0xfU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                              >> 4U)))
                                                          ? 
                                                         ((0x80U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U])
                                                           ? 3U
                                                           : 
                                                          ((0x40U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U])
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                               >> 5U))))
                                                          : 
                                                         ((8U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U])
                                                           ? 3U
                                                           : 
                                                          ((4U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U])
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[1U] 
                                                               >> 1U))))))))))
                                   : (((IData)((0U 
                                                != 
                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                 >> 0x10U))) 
                                       << 4U) | ((0U 
                                                  != 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                   >> 0x10U))
                                                  ? 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                             >> 0x18U))) 
                                                   << 3U) 
                                                  | ((0U 
                                                      != 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                       >> 0x18U))
                                                      ? 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                                 >> 0x1cU))) 
                                                       << 2U) 
                                                      | ((0U 
                                                          != 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                           >> 0x1cU))
                                                          ? 
                                                         ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                           >> 0x1fU)
                                                           ? 3U
                                                           : 
                                                          ((0x40000000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U])
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                               >> 0x1dU))))
                                                          : 
                                                         ((0x8000000U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U])
                                                           ? 3U
                                                           : 
                                                          ((0x4000000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U])
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                               >> 0x19U))))))
                                                      : 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                                    >> 0x14U)))) 
                                                       << 2U) 
                                                      | ((0U 
                                                          != 
                                                          (0xfU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                              >> 0x14U)))
                                                          ? 
                                                         ((0x800000U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U])
                                                           ? 3U
                                                           : 
                                                          ((0x400000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U])
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                               >> 0x15U))))
                                                          : 
                                                         ((0x80000U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U])
                                                           ? 3U
                                                           : 
                                                          ((0x40000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U])
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                               >> 0x11U))))))))
                                                  : 
                                                 (((IData)(
                                                           (0U 
                                                            != 
                                                            (0xffU 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                                >> 8U)))) 
                                                   << 3U) 
                                                  | ((0U 
                                                      != 
                                                      (0xffU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                          >> 8U)))
                                                      ? 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                                    >> 0xcU)))) 
                                                       << 2U) 
                                                      | ((0U 
                                                          != 
                                                          (0xfU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                              >> 0xcU)))
                                                          ? 
                                                         ((0x8000U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U])
                                                           ? 3U
                                                           : 
                                                          ((0x4000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U])
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                               >> 0xdU))))
                                                          : 
                                                         ((0x800U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U])
                                                           ? 3U
                                                           : 
                                                          ((0x400U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U])
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                               >> 9U))))))
                                                      : 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                                    >> 4U)))) 
                                                       << 2U) 
                                                      | ((0U 
                                                          != 
                                                          (0xfU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                              >> 4U)))
                                                          ? 
                                                         ((0x80U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U])
                                                           ? 3U
                                                           : 
                                                          ((0x40U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U])
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                               >> 5U))))
                                                          : 
                                                         ((8U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U])
                                                           ? 3U
                                                           : 
                                                          ((4U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U])
                                                            ? 2U
                                                            : 
                                                           (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor[0U] 
                                                               >> 1U))))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__794(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__794\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    __Vtemp_2[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[2U];
    __Vtemp_2[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[3U];
    __Vtemp_2[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[4U];
    VL_SUB_W(3, __Vtemp_3, __Vtemp_2, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__divisor);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT___subtractor_T_1[0U] 
        = __Vtemp_3[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT___subtractor_T_1[1U] 
        = __Vtemp_3[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT___subtractor_T_1[2U] 
        = (1U & __Vtemp_3[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__result 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__resHi)
            ? (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[4U])) 
                << 0x3fU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[3U])) 
                              << 0x1fU) | ((QData)((IData)(
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[2U])) 
                                           >> 1U)))
            : (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__remainder[0U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT___GEN_3 
        = (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__state));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT___GEN_0 
        = (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__state));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT___GEN 
        = (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__state));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT___GEN_1 
        = (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__state));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___div_io_resp_valid 
        = ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__state)) 
           | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__div__DOT__state)));
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killd)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_alu_fn 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_xcpt)
                ? 0U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_ctrl_alu_fn));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__intsink__DOT__chain__DOT__output_chain__DOT__sync_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__intsink__DOT__chain__DOT__output_chain__DOT__sync_2;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_32 
        = (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_31 
        = (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___inWriteback_T_1 
        = (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__inWriteback 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state)) 
           | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__metaArb_io_in_4_valid 
        = ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state)) 
           | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___canAcceptCachedGrant_T_4 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state)) 
           | ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state)) 
              | (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__795(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__795\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__grantIsUncached 
        = ((1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
           | ((0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
              | (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_anon_in_1_d_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___buffer_auto_in_d_valid) 
           & (0x400U == (0x600U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__r_beats1 
        = ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])
            ? (0x1ffU & (~ (0xffffffU & (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U)))) : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__grantIsCached 
        = ((4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
           | (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_anon_in_0_d_valid 
        = ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
               >> 0xaU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___buffer_auto_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_valid 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_0_req_ready) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_valid)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__amoalus_0__DOT____VdfgTmp_h4affc1d8__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_data) 
           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_data));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____Vcellinp__ifpu__io_in_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__in_pipe_b_wflags 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_wflags;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__in_pipe_b_typeTagIn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagIn;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__796(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__796\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__in_pipe_v 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____Vcellinp__ifpu__io_in_valid));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____Vcellinp__fpmu__io_in_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_typeTagOut 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagOut;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu_io_in_bits_in1[0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu_io_in_bits_in1[1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[2U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu_io_in_bits_in1[2U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_v 
            = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_v = 0U;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__valid_stage0_pipe_v) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_invalidExc_pipe_b 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isSigNaNAny) 
               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isInfA) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isZeroB)) 
                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isInfB) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isZeroA)) 
                     | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isNaNAOrB)) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_doSubMags) 
                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isInfC)))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_isNaN 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isNaNAOrB) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isNaNC));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_isInf 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isInf;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_isZero 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_CIsDominant)) 
                  & (0U == (0x3000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U]))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sign 
            = (1U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_signProd)) 
                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isInfC) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__opSignC)) 
                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
                            & ((2U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_roundingMode_pipe_b)) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_signProd) 
                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__opSignC)))) 
                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros) 
                               & ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_roundingMode_pipe_b)) 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_signProd) 
                                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__opSignC)))) 
                              | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isInf)) 
                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros)) 
                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_CIsDominant)
                                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__opSignC)
                                        : ((0U == (3U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
                                                      >> 0xcU)))
                                            ? (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_roundingMode_pipe_b))
                                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_signProd) 
                                               ^ (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3 
                                                          >> 2U))))))))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp 
            = (0x1fffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_CIsDominant)
                           ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_sExpSum) 
                              - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_doSubMags))
                           : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_sExpSum) 
                              - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgTmp_h61160d53__0))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_postMul_io_rawOut_sig;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_pipe_b 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundingMode_stage0_pipe_b;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__797(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__797\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__io_validout_pipe_v 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__valid_stage0_pipe_v));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___memLatencyMask_T_11 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_fastpipe) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_fromint));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___core_io_fpu_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_vec = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_fromint 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___fp_decoder_io_sigs_fromint;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_toint 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT____VdfgTmp_h8cdcaac2__0) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT____VdfgTmp_hf5964f4f__0) 
                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT____VdfgTmp_h145e3320__0) 
                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT____VdfgTmp_h6f9e961d__0) 
                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT____VdfgTmp_h11b7abf1__0) 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT____VdfgTmp_h17f24fb4__0) 
                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT____VdfgTmp_h288c8dac__0)))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_sqrt 
            = ((0x3ffffU == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_andMatrixOutputs_T_167) 
               | (0x3ffffU == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_andMatrixOutputs_T_168));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___divSqrt_io_inValid_T 
        = (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_typeTagOut));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___divSqrt_io_inValid_T_2 
        = (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_typeTagOut));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___divSqrt_io_inValid_T_4 
        = (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_typeTagOut));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___memLatencyMask_T_6 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_fma) 
           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_typeTagOut)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_8 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_fma) 
           & ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_typeTagOut)) 
              | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_typeTagOut))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_3 
        = ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_pipeid)) 
           | ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_pipeid)) 
              | ((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_pipeid)) 
                 | (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wbInfo_0_pipeid)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_toint_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_ctrl_toint) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__wb_reg_valid));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__798(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__798\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_valid 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___core_io_fpu_valid));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____Vcellinp__fpiu__io_in_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu_io_in_bits_in2[0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu_io_in_bits_in2[1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[2U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu_io_in_bits_in2[2U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu_io_in_bits_in1[0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu_io_in_bits_in1[1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu_io_in_bits_in1[2U];
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___core_io_fpu_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_fastpipe 
            = ((0x3fffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_andMatrixOutputs_T_123)) 
               | ((0x3fffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_andMatrixOutputs_T_124)) 
                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT____VdfgTmp_h5145259c__0) 
                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT____VdfgTmp_h5654887d__0) 
                        | ((0x3ffffU == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_andMatrixOutputs_T_154) 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT____VdfgTmp_ha762268a__0) 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT____VdfgTmp_ha6e46df3__0) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT____VdfgTmp_h2e958c81__0))))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_div 
            = (IData)((((0x8000053U == (0x800007fU 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                        & (IData)(vlSelf->__VdfgTmp_ha7a35850__0)) 
                       & (0x6000000U != (0x6000000U 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_fma 
            = ((0x1fU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_andMatrixOutputs_T_20)) 
               | ((IData)(((0x53U == (0x200007fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT____VdfgTmp_h628cee71__0))) 
                  | ((IData)(((0x53U == (0x400007fU 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits)) 
                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT____VdfgTmp_h628cee71__0))) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___fp_decoder_io_sigs_swap23))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__799(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__799\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__cordic_ 
        = ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__cordic_state)))) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__cmdRouter__DOT___cmd_q_io_deq_valid) 
              & (0xb000U == (0x7f000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__cmdRouter__DOT__cmd_q__DOT___ram_ext_R0_data[0U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__cmdRouter__DOT__cmd_q__DOT__do_deq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__cmdRouter__DOT___cmd_q_io_deq_valid) 
           & (IData)(((0xb000U == (0x7f000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__cmdRouter__DOT__cmd_q__DOT___ram_ext_R0_data[0U])) 
                      & (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__cordic_state)))))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____Vcellinp__fpiu__io_in_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_ren2 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_ren2;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_wflags 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_wflags;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_rm;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_fmt 
            = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_inst 
                     >> 0x19U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ 
            = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_inst 
                     >> 0x14U));
    }
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_20)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_fp 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_fp;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_wxd 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_wxd;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_wdata 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_alu_dw)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT__out
                : (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT__out 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__alu__DOT__out))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_xcpt_interrupt 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___core_io_imem_req_valid)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_xcpt_interrupt));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_xcpt 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___core_io_fpu_killx)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_xcpt_interrupt) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_xcpt)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__800(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__800\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_c_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT__do_deq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_c_ready));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__latch 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_a_ready) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__beatsLeft)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_0_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_bus_xing_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__requestAIO_0_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_bus_xing_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__requestAIO_0_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__latch 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___buffer_auto_in_a_ready) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__beatsLeft)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_0_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__requestAIO_1_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_1_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__requestAIO_1_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_44 
        = ((4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[0U])) 
           | (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[0U])));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__801(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__801\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____VdfgTmp_hfaf30802__0 
        = (1U & ((~ (IData)(vlSelf->__VdfgTmp_he6da1251__0)) 
                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__r_beats1 
        = ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[0U])
            ? (7U & (~ (0x3ffU & (((IData)(0x3fU) << 
                                   (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[0U] 
                                          >> 5U))) 
                                  >> 3U)))) : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkD_io_source 
        = (7U & ((IData)(vlSelf->__VdfgTmp_he6da1251__0)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__io_source_r)
                  : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[0U] 
                      << 0x18U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[0U] 
                                   >> 8U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT___freeOH_T_9 
        = (0x7fffffffffULL & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT___freeOH_T_6 
                              | VL_SHIFTL_QQI(39,39,32, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT___freeOH_T_6, 4U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____Vcellinp__fq__io_enq_bits_xcpt_ae_inst 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_tl_error) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_valid)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_tlb_resp_ae_inst));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_0)
             ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_dout_0
             : 0U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_1)
                        ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_dout_1
                        : 0U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_2)
                                   ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_dout_2
                                   : 0U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_3)
                                              ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_dout_3
                                              : 0U) 
                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_4)
                                                 ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_dout_4
                                                 : 0U) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_5)
                                                    ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_dout_5
                                                    : 0U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_6)
                                                       ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_dout_6
                                                       : 0U) 
                                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_tag_hit_7)
                                                         ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_dout_7
                                                         : 0U))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__802(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__802\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__a_a_bits_opcode 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT___GEN)
            ? 4U : (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT___q_1_io_enq_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_out_a_valid) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__toD)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__a_a_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__toD)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_out_a_valid));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_2) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___new_meta_T) {
            if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN)))) {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__meta_tag 
                    = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__request_tag;
            }
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__meta_tag 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_tag;
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_2) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___new_meta_T) {
            if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN)))) {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__meta_tag 
                    = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__request_tag;
            }
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__meta_tag 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_tag;
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_2) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___new_meta_T) {
            if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN)))) {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_tag 
                    = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__request_tag;
            }
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_tag 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_tag;
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_2) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___new_meta_T) {
            if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN)))) {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_tag 
                    = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__request_tag;
            }
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_tag 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_tag;
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_2) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___new_meta_T) {
            if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN)))) {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__meta_tag 
                    = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__request_tag;
            }
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__meta_tag 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_tag;
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_2) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___new_meta_T) {
            if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN)))) {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__meta_tag 
                    = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__request_tag;
            }
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__meta_tag 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_tag;
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__803(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__803\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_2) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___new_meta_T) {
            if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN)))) {
                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__meta_tag 
                    = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__request_tag;
            }
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__meta_tag 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_tag;
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_0_RW0_wdata 
        = ((0x400U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__wipeCount))
            ? ((0x10000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write_q__DOT__ram 
                            << 3U)) | ((0xc000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write_q__DOT__ram) 
                                       | ((0x2000U 
                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write_q__DOT__ram 
                                              >> 3U)) 
                                          | (0x1fffU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write_q__DOT__ram 
                                                >> 0x11U)))))
            : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__tagMatch 
        = ((0x1fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write_q__DOT__ram 
                       >> 0x11U)) == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__tag));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__setQuash 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write_q__DOT__full) 
           & ((0x3ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write_q__DOT__ram) 
              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__set)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_4_io_schedule_bits_a_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__s_acquire)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__s_pprobe) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__s_release)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_4_io_schedule_bits_c_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__s_release)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_rprobeackfirst));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_6_io_schedule_bits_a_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__s_acquire)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__s_pprobe) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__s_release)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_6_io_schedule_bits_c_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__s_release)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_rprobeackfirst));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_5_io_schedule_bits_a_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__s_acquire)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__s_pprobe) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__s_release)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_5_io_schedule_bits_c_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__s_release)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_rprobeackfirst));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_3_io_schedule_bits_a_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__s_acquire)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__s_pprobe) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__s_release)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__804(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__804\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_3_io_schedule_bits_c_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__s_release)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_rprobeackfirst));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_2_io_schedule_bits_a_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__s_acquire)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__s_pprobe) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__s_release)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_2_io_schedule_bits_c_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__s_release)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_rprobeackfirst));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_1_io_schedule_bits_a_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__s_acquire)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__s_pprobe) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__s_release)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_1_io_schedule_bits_c_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__s_release)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_rprobeackfirst));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_0_io_schedule_bits_a_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__s_acquire)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__s_pprobe) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__s_release)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_0_io_schedule_bits_c_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__s_release)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_rprobeackfirst));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__sinkC_req_index 
        = ((0x3800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_adr_q__DOT__ram 
                       << 0xaU)) | ((0x7feU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_adr_q__DOT__ram 
                                               >> 3U)) 
                                    | (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_adr_q__DOT__ram 
                                             >> 0x10U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____VdfgTmp_hfacd82ba__0 
        = (1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_adr_q__DOT__full)) 
                    | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_adr_q__DOT__ram)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT___sinkC_req_out_bankSel_T_7 
        = (0xfU & (((IData)(1U) << (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_adr_q__DOT__ram 
                                          >> 0xeU))) 
                   & (- (IData)((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_adr_q__DOT__ram 
                                       >> 0x11U))))));
    if ((1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_2)) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___new_meta_T))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__meta_way 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_way;
    }
    if ((1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_2)) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___new_meta_T))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__meta_way 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_way;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__805(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__805\n"); );
    // Body
    if ((1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_2)) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___new_meta_T))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__meta_way 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_way;
    }
    if ((1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_2)) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___new_meta_T))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_way 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_way;
    }
    if ((1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_2)) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___new_meta_T))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_way 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_way;
    }
    if ((1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_2)) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___new_meta_T))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__meta_way 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_way;
    }
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT____Vcellinp__io_bs_adr_q__io_enq_bits_noop)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__bs_adr_bits_beat_r 
            = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__beat) 
                     + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT___io_bs_adr_q_io_enq_ready)));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_4__io_allocate_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__request_set 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_4__io_allocate_bits_set;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_3__io_allocate_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__request_set 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_3__io_allocate_bits_set;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_2__io_allocate_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__request_set 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_2__io_allocate_bits_set;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_1__io_allocate_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__request_set 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_1__io_allocate_bits_set;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_0__io_allocate_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__request_set 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_0__io_allocate_bits_set;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshr_insertOH_T_13 
        = (0x7fU & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__request_valid) 
                        << 6U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__request_valid) 
                                   << 5U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__request_valid) 
                                              << 4U) 
                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__request_valid) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__request_valid) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__request_valid) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__request_valid)))))))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_5__io_allocate_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__request_set 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_5__io_allocate_bits_set;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regsel_sourceC_REG 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__sourceC_req_bankEn;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_REG 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en));
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_0__RW0_en) 
         & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_0__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_0__RW0_addr;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__806(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__806\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_REG_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_1)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en_1));
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_1__RW0_en) 
         & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_1)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_1__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_1__RW0_addr;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_REG_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en_2));
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_2__RW0_en) 
         & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_2)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_2__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_2__RW0_addr;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___bankedStore_io_sourceD_rdat_data 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regsel_sourceD))
             ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r
             : 0ULL) | (((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regsel_sourceD))
                          ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r_1
                          : 0ULL) | (((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regsel_sourceD))
                                       ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r_2
                                       : 0ULL) | ((8U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regsel_sourceD))
                                                   ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_r_3
                                                   : 0ULL))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_REG_3 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_3)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_en_3));
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_3__RW0_en) 
         & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_3)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_3__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_3__RW0_addr;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT___q_io_enq_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_out_c_valid) 
              & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__winner_0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_out_c_valid) 
           & (7U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__c_a_bits_a_mask_sub_1_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__c_a_bits_a_mask_sub_sub_0_1) 
           | (IData)(((8U == (0x18U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__c_a_bits_a_mask_sub_1_2))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__807(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__807\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__c_a_bits_a_mask_sub_0_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__c_a_bits_a_mask_sub_sub_0_1) 
           | (IData)(((8U == (0x18U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__c_a_bits_a_mask_sub_0_2))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__c_a_bits_a_mask_sub_3_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__c_a_bits_a_mask_sub_sub_1_1) 
           | (IData)(((8U == (0x18U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__c_a_bits_a_mask_sub_3_2))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__c_a_bits_a_mask_sub_2_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__c_a_bits_a_mask_sub_sub_1_1) 
           | (IData)(((8U == (0x18U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__c_a_bits_a_mask_sub_2_2))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__do_enq 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__ptr_match) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT__maybe_full))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s3_valid));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s2_latch) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s2_valid = 1U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s2_req_set 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sourceC_io_bs_adr_bits_set;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s2_valid = 0U;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__busy = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__beat = 0U;
    } else {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__busy 
            = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT___s2_latch_T) 
                   & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__beat)))) 
               & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT___want_data_T) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceC__io_req_bits_dirty)) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__busy)));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT___s2_latch_T) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__beat 
                = ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__beat))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__beat))));
        }
    }
    if (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__busy)) 
         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceC__io_req_valid))) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_r_opcode 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___schedule_T_461;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_r_param 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceC__io_req_bits_param;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_r_source 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceC__io_req_bits_source;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_r_tag 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceC__io_req_bits_tag;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_r_set 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__directory__io_write_bits_set;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_r_way 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__directory__io_write_bits_way;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__808(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__808\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s2_latch) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__busy) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s2_req_opcode 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_r_opcode;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s2_req_source 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_r_source;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s2_req_tag 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_r_tag;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s2_req_opcode 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___schedule_T_461;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s2_req_source 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceC__io_req_bits_source;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__s2_req_tag 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceC__io_req_bits_tag;
        }
    }
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killd)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_fence_i 
            = (0x3ffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_andMatrixOutputs_T_37));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_div 
            = (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_orMatrixOutputs_T_12));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_flush_pipe 
            = (((0x3ffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_andMatrixOutputs_T_37)) 
                | (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_ctrl_csr))) 
               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_csr_en) 
                   & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_csr_ren))) 
                  & (~ ((0x33fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__io_decode_0_write_flush_addr_m)) 
                        & (0x344U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__io_decode_0_write_flush_addr_m))))));
    }
    if ((1U & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killd)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___csr_io_interrupt)) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_replay)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_btb_resp_entry 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT___GEN_1)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__ibufBTBResp_entry)
                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_btb_entry));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_latch) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_param 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_param;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___GEN_0 
        = (0x3fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___signbit_a_T) 
                     >> 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___signbit_a_T)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___final_meta_writeback_state_T_17 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__req_needT)
            ? (2U | (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__req_acquire))))
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__meta_hit)
                ? ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__meta_state))
                    ? (2U | (1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__evict_c)) 
                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__req_acquire)))))
                    : (1U | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__meta_state)) 
                             << 1U))) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__gotT)
                                          ? (2U | (1U 
                                                   & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__req_acquire))))
                                          : 1U)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__809(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__809\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___final_meta_writeback_state_T_17 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__req_needT)
            ? (2U | (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__req_acquire))))
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_hit)
                ? ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_state))
                    ? (2U | (1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__evict_c)) 
                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__req_acquire)))))
                    : (1U | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_state)) 
                             << 1U))) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__gotT)
                                          ? (2U | (1U 
                                                   & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__req_acquire))))
                                          : 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___final_meta_writeback_state_T_17 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__req_needT)
            ? (2U | (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__req_acquire))))
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_hit)
                ? ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_state))
                    ? (2U | (1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__evict_c)) 
                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__req_acquire)))))
                    : (1U | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_state)) 
                             << 1U))) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__gotT)
                                          ? (2U | (1U 
                                                   & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__req_acquire))))
                                          : 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___final_meta_writeback_state_T_17 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__req_needT)
            ? (2U | (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__req_acquire))))
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__meta_hit)
                ? ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__meta_state))
                    ? (2U | (1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__evict_c)) 
                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__req_acquire)))))
                    : (1U | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__meta_state)) 
                             << 1U))) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__gotT)
                                          ? (2U | (1U 
                                                   & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__req_acquire))))
                                          : 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___final_meta_writeback_state_T_17 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__req_needT)
            ? (2U | (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__req_acquire))))
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__meta_hit)
                ? ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__meta_state))
                    ? (2U | (1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__evict_c)) 
                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__req_acquire)))))
                    : (1U | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__meta_state)) 
                             << 1U))) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__gotT)
                                          ? (2U | (1U 
                                                   & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__req_acquire))))
                                          : 1U)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__810(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__810\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___final_meta_writeback_state_T_17 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__req_needT)
            ? (2U | (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__req_acquire))))
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__meta_hit)
                ? ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__meta_state))
                    ? (2U | (1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__evict_c)) 
                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__req_acquire)))))
                    : (1U | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__meta_state)) 
                             << 1U))) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__gotT)
                                          ? (2U | (1U 
                                                   & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__req_acquire))))
                                          : 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___GEN_2 
        = (0x3fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___signbit_a_T) 
                     >> 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___signbit_a_T)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___GEN_4 
        = (0x3fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___signbit_d_T) 
                     >> 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___signbit_d_T)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___final_meta_writeback_state_T_17 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__req_needT)
            ? (2U | (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__req_acquire))))
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__meta_hit)
                ? ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__meta_state))
                    ? (2U | (1U & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__evict_c)) 
                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__req_acquire)))))
                    : (1U | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__meta_state)) 
                             << 1U))) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__gotT)
                                          ? (2U | (1U 
                                                   & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__req_acquire))))
                                          : 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                 & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h3af395f3__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_prio_2)
            ? 1U : (3U & ((0xc5U | (((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param))
                                      ? 2U : ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)) 
                                              == (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h17863370__0) 
                                                   == 
                                                   (0U 
                                                    != 
                                                    (((0x80U 
                                                       & ((IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                   >> 0x3fU)) 
                                                          << 7U)) 
                                                      | ((0x40U 
                                                          & ((IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                      >> 0x37U)) 
                                                             << 6U)) 
                                                         | ((0x20U 
                                                             & ((IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                         >> 0x2fU)) 
                                                                << 5U)) 
                                                            | ((0x10U 
                                                                & ((IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                            >> 0x27U)) 
                                                                   << 4U)) 
                                                               | ((8U 
                                                                   & ((IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                               >> 0x1fU)) 
                                                                      << 3U)) 
                                                                  | ((4U 
                                                                      & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x17U)) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0xfU)) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 7U)))))))))) 
                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT__signBit))))
                                                   ? 
                                                  (0U 
                                                   == 
                                                   (((0x80U 
                                                      & ((IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_18 
                                                                  >> 0x3fU)) 
                                                         << 7U)) 
                                                     | ((0x40U 
                                                         & ((IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_18 
                                                                     >> 0x37U)) 
                                                            << 6U)) 
                                                        | ((0x20U 
                                                            & ((IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_18 
                                                                        >> 0x2fU)) 
                                                               << 5U)) 
                                                           | ((0x10U 
                                                               & ((IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_18 
                                                                           >> 0x27U)) 
                                                                  << 4U)) 
                                                              | ((8U 
                                                                  & ((IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_18 
                                                                              >> 0x1fU)) 
                                                                     << 3U)) 
                                                                 | ((4U 
                                                                     & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_18 
                                                                                >> 0x17U)) 
                                                                        << 2U)) 
                                                                    | ((2U 
                                                                        & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_18 
                                                                                >> 0xfU)) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_18 
                                                                                >> 7U)))))))))) 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT__signBit)))
                                                   : 
                                                  ((1U 
                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param) 
                                                       >> 1U)) 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h17863370__0))))) 
                                    << 4U)) >> (0xfU 
                                                & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_adjusted_opcode), 1U)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__811(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__811\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                 & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                 & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__notNaN_isSpecialInfOut) 
                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z)))));
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killd)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_csr 
            = (((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_ctrl_csr)) 
                & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_orMatrixOutputs_T_29)))
                ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_csr_ren)
                         ? 2U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_ctrl_csr)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_50 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l) 
           & (IData)((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__data_last 
        = (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__data_count));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__sample_mid 
        = (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__sample_count));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT___countdown_T_1 
        = (0xffU & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__data_count) 
                      << 4U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__sample_count)) 
                    - (IData)(1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT___GEN_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__state) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__prescaler)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxen = 0U;
    } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_woready_9) 
                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_mask) 
                   >> 4U))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxen 
            = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                     >> 0x15U));
    }
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_20)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_hls_or_dv 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___csr_io_status_dv;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__tval_any_addr 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_xcpt)) 
                 | ((3ULL == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_cause) 
                    | ((1ULL == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_cause) 
                       | ((0xcULL == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_cause) 
                          | (0x14ULL == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_cause))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__812(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__812\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_35;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__s0_req_fire) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__io_cache_s1_data_r_mask = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__amoalus_0__DOT__wmask 
        = (((QData)((IData)((0xffU & (- (IData)((1U 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_mask) 
                                                    >> 7U))))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_mask) 
                                                          >> 6U))))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_mask) 
                                                                          >> 5U))))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_mask) 
                                                                           >> 4U))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((- (IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_mask) 
                                                                           >> 3U)))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_mask) 
                                                                                >> 2U)))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_mask) 
                                                                                >> 1U)))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_mask))))))))))))));
    vlSelf->__VdfgTmp_h4a63abb3__0 = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_valid)
                                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore2_storegen_mask)
                                       : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_mask));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcacheArb__DOT__s1_id 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___ptw_io_mem_req_valid)
            ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcIF_io_cache_req_valid)
                     ? 1U : 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s0_clk_en) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_cmd;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2 
        = ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z) 
              >> 0xcU));
    __Vtemp_2[0U] = 0U;
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_3, __Vtemp_2, (0x3fU 
                                                   & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_6[0U] = 0U;
    __Vtemp_6[1U] = 0U;
    __Vtemp_6[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_7, __Vtemp_6, (0x3fU 
                                                   & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_10[0U] = 0U;
    __Vtemp_10[1U] = 0U;
    __Vtemp_10[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_11, __Vtemp_10, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_14[0U] = 0U;
    __Vtemp_14[1U] = 0U;
    __Vtemp_14[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_15, __Vtemp_14, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_18[0U] = 0U;
    __Vtemp_18[1U] = 0U;
    __Vtemp_18[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_19, __Vtemp_18, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_22[0U] = 0U;
    __Vtemp_22[1U] = 0U;
    __Vtemp_22[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_23, __Vtemp_22, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_26[0U] = 0U;
    __Vtemp_26[1U] = 0U;
    __Vtemp_26[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_27, __Vtemp_26, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_30[0U] = 0U;
    __Vtemp_30[1U] = 0U;
    __Vtemp_30[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_31, __Vtemp_30, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    __Vtemp_34[0U] = 0U;
    __Vtemp_34[1U] = 0U;
    __Vtemp_34[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_35, __Vtemp_34, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h478ca8f9__0 
        = ((0x800U & ((~ (__Vtemp_3[0U] >> 7U)) << 0xbU)) 
           | ((0x400U & ((~ (__Vtemp_7[0U] >> 8U)) 
                         << 0xaU)) | ((0x200U & ((~ 
                                                  (__Vtemp_11[0U] 
                                                   >> 9U)) 
                                                 << 9U)) 
                                      | ((0x100U & 
                                          ((~ (__Vtemp_15[0U] 
                                               >> 0xaU)) 
                                           << 8U)) 
                                         | ((0x80U 
                                             & ((~ 
                                                 (__Vtemp_19[0U] 
                                                  >> 0xbU)) 
                                                << 7U)) 
                                            | ((0x40U 
                                                & ((~ 
                                                    (__Vtemp_23[0U] 
                                                     >> 0xcU)) 
                                                   << 6U)) 
                                               | ((0x20U 
                                                   & ((~ 
                                                       (__Vtemp_27[0U] 
                                                        >> 0xdU)) 
                                                      << 5U)) 
                                                  | ((0x10U 
                                                      & ((~ 
                                                          (__Vtemp_31[0U] 
                                                           >> 0xeU)) 
                                                         << 4U)) 
                                                     | ((8U 
                                                         & ((~ 
                                                             (__Vtemp_35[0U] 
                                                              >> 0xfU)) 
                                                            << 3U)) 
                                                        | (7U 
                                                           & (~ (IData)(vlSelf->__VdfgTmp_he7a1b5da__0))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__813(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__813\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T 
        = (((0x1ffeU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z) 
                        << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notZeroRem_Z)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2 
        = ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum)) 
           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
              >> 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_5 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sqrtOp_Z)) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rawOutValid)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rawOutValid) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sqrtOp_Z)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT____VdfgTmp_hfdb5cacb__0 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT___x_T_20) 
             & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
                        >> 2U))) << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT___x_T_20) 
                                            << 2U) 
                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT___x_T_18) 
                                               << 1U) 
                                              | (1U 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch)))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_latch) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_need_pb 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_need_pb;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sourceD_io_bs_wadr_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_full) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_need_bs));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_latch) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_beat 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sourceD_io_bs_radr_bits_beat;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_set 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sourceD_io_bs_radr_bits_set;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_way 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sourceD_io_bs_radr_bits_way;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____Vcellinp__hfma__io_in_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__in_rm 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_rm;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__opSignC 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_doSubMags) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_signProd));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
        = (0xffffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_doSubMags)
                         ? (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3) 
                                << 0xbU) | (0x7ffU 
                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b 
                                               >> 0xbU))))
                         : ((0x600000U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_highAlignedSigC) 
                                          << 0xaU)) 
                            | ((0x1ffc00U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3) 
                                             << 0xaU)) 
                               | (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b 
                                            >> 0xcU))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__814(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__814\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
        = (0x1ffffffU & ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3))
                          ? (~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgTmp_h714eb446__0)
                          : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgTmp_h714eb446__0 
                             + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_doSubMags))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_addZeros 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isZeroA) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isZeroB)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isZeroC));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isInfA) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isInfB));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____Vcellinp__hfma__io_in_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__valid = 1U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__in_in1[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____Vcellinp__hfma__io_in_bits_in1[0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__in_in1[1U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____Vcellinp__hfma__io_in_bits_in1[1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__in_in1[2U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____Vcellinp__hfma__io_in_bits_in1[2U];
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_swap23) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__in_in2[0U] = 0x8000U;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__in_in2[1U] = 0U;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__in_in2[2U] = 0U;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__in_in2[0U] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____Vcellinp__hfma__io_in_bits_in2[0U];
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__in_in2[1U] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____Vcellinp__hfma__io_in_bits_in2[1U];
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__in_in2[2U] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____Vcellinp__hfma__io_in_bits_in2[2U];
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__in_in3[0U] 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_ren3) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_swap23))
                ? (((0x10000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R0_data[0U] 
                                 << 1U)) | ((0x8000U 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R0_data[0U] 
                                                >> 8U)) 
                                            | (0x7fffU 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R0_data[0U]))) 
                   | (((0x1fU == (0x1fU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R0_data[2U] 
                                            << 4U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R0_data[1U] 
                                              >> 0x1cU)))) 
                       & (IData)(((0xf0000000U == (0xf0000000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R0_data[0U])) 
                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R0_data[1U] 
                                     >> 0x14U)))) ? 0U
                       : 0xe200U)) : (0x10000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____Vcellinp__hfma__io_in_bits_in1[0U] 
                                                  ^ 
                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____Vcellinp__hfma__io_in_bits_in2[0U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__in_in3[1U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__in_in3[2U] = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__valid = 0U;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__815(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__815\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_35;
    // Body
    __Vtemp_2[0U] = 0U;
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_3, __Vtemp_2, (0x3fU 
                                                   & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_6[0U] = 0U;
    __Vtemp_6[1U] = 0U;
    __Vtemp_6[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_7, __Vtemp_6, (0x3fU 
                                                   & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_10[0U] = 0U;
    __Vtemp_10[1U] = 0U;
    __Vtemp_10[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_11, __Vtemp_10, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_14[0U] = 0U;
    __Vtemp_14[1U] = 0U;
    __Vtemp_14[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_15, __Vtemp_14, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_18[0U] = 0U;
    __Vtemp_18[1U] = 0U;
    __Vtemp_18[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_19, __Vtemp_18, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_22[0U] = 0U;
    __Vtemp_22[1U] = 0U;
    __Vtemp_22[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_23, __Vtemp_22, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_26[0U] = 0U;
    __Vtemp_26[1U] = 0U;
    __Vtemp_26[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_27, __Vtemp_26, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_30[0U] = 0U;
    __Vtemp_30[1U] = 0U;
    __Vtemp_30[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_31, __Vtemp_30, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    __Vtemp_34[0U] = 0U;
    __Vtemp_34[1U] = 0U;
    __Vtemp_34[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_35, __Vtemp_34, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h478ca8f9__0 
        = ((0x800U & ((~ (__Vtemp_3[0U] >> 7U)) << 0xbU)) 
           | ((0x400U & ((~ (__Vtemp_7[0U] >> 8U)) 
                         << 0xaU)) | ((0x200U & ((~ 
                                                  (__Vtemp_11[0U] 
                                                   >> 9U)) 
                                                 << 9U)) 
                                      | ((0x100U & 
                                          ((~ (__Vtemp_15[0U] 
                                               >> 0xaU)) 
                                           << 8U)) 
                                         | ((0x80U 
                                             & ((~ 
                                                 (__Vtemp_19[0U] 
                                                  >> 0xbU)) 
                                                << 7U)) 
                                            | ((0x40U 
                                                & ((~ 
                                                    (__Vtemp_23[0U] 
                                                     >> 0xcU)) 
                                                   << 6U)) 
                                               | ((0x20U 
                                                   & ((~ 
                                                       (__Vtemp_27[0U] 
                                                        >> 0xdU)) 
                                                      << 5U)) 
                                                  | ((0x10U 
                                                      & ((~ 
                                                          (__Vtemp_31[0U] 
                                                           >> 0xeU)) 
                                                         << 4U)) 
                                                     | ((8U 
                                                         & ((~ 
                                                             (__Vtemp_35[0U] 
                                                              >> 0xfU)) 
                                                            << 3U)) 
                                                        | (7U 
                                                           & (~ (IData)(vlSelf->__VdfgTmp_hae8b3f3b__0))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__816(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__816\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hdca82c65__0 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_he8eeab97__0 
            << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___common_underflow_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1 
        = (1U | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_he8eeab97__0 
                  << 2U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___common_underflow_T_4) 
                            << 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___fractB_Z_T_10 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_sqrt));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___fractB_Z_T_10 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_sqrt));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT____VdfgTmp_h6faa7e30__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT____VdfgTmp_h6faa7e30__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___divSqrt_inValid_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_div) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_sqrt));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2 
        = ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum)) 
           & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                      >> 0x36U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_6 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sqrtOp_Z)) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rawOutValid)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rawOutValid) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sqrtOp_Z)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___fractB_Z_T_10 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_sqrt));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT____VdfgTmp_h6faa7e30__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_killed 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) 
           || ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_inValid) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___killm_T)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____Vcellinp__sfma__io_in_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_rm 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_rm;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__opSignC 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_doSubMags) 
           ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_signProd));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum 
        = (0x3ffffffffffffULL & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_doSubMags)
                                  ? (~ (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3)) 
                                         << 0x18U) 
                                        | (QData)((IData)(
                                                          (0xffffffU 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b 
                                                                      >> 0x18U)))))))
                                  : (((QData)((IData)(
                                                      (3U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_highAlignedSigC 
                                                          >> 0x18U)))) 
                                      << 0x2fU) | (
                                                   ((QData)((IData)(
                                                                    (0xffffffU 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3))) 
                                                    << 0x17U) 
                                                   | (QData)((IData)(
                                                                     (0x7fffffU 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_pipe_b 
                                                                                >> 0x19U)))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__818(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__818\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h65e24775__0 
        = (1U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z) 
                     >> 0xbU)) & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hfb821a63__0 
                                          >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_ha6790822__0 
        = ((0x800U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z))
            ? 0ULL : (0x1fffffffffffffULL & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hfb821a63__0 
                                             >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___common_underflow_T_4 
        = (1U & (((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z) 
                      >> 0xbU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hfb821a63__0)) 
                 | (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                            >> 0x36U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_opcode 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_uncached)
            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_write)
                ? ((0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd))
                    ? 1U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_2_resp_bits_has_data)
                             ? (((0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
                                 | ((0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
                                    | ((0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
                                       | ((0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
                                          | (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd))))))
                                 ? 2U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h2bcb17d6__0)
                                          ? 3U : 0U))
                             : 0U)) : 4U) : 6U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h7b225401__0 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_write)) 
                 | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_2_resp_bits_has_data)) 
                    | (0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_valid_likely 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_valid) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_write)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__pstore1_held));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_readwrite 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_2_resp_bits_has_data) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_write));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__819(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__819\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_ha72e8051__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_write) 
           | ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
              | (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_7 
        = ((0x3ffffffeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
                           << 1U)) | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_8 
        = ((0x3ffffffeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
                           << 1U)) | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_9 
        = ((0x3ffffffeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
                           << 1U)) | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_10 
        = ((0x3ffffffeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
                           << 1U)) | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_11 
        = ((0x3ffffffeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
                           << 1U)) | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_12 
        = ((0x3ffffffeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
                           << 1U)) | (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN 
        = (1U & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____VdfgTmp_hf0e08ad7__0)) 
                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_rawIn_adjustedExp_T_4) 
                     >> 9U)) | (IData)(((0xc00U == 
                                         (0xc00U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_rawIn_adjustedExp_T_4))) 
                                        & (0U != (0xfffffffffffffULL 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_T_6))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____VdfgTmp_hdbdc4793__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_rawIn_adjustedExp_T_9) 
               >> 6U)) | (IData)(((0x180U == (0x180U 
                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_rawIn_adjustedExp_T_9))) 
                                  & (0U != (0x7fffffU 
                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_T_6))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__820(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__820\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2fResults_i2f__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__in_pipe_b_rm)) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2fResults_i2f_2__DOT__intAsRawFloat_sign)) 
           | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2fResults_i2f_2__DOT__intAsRawFloat_sign)) 
              & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__in_pipe_b_rm))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2fResults_i2f_2__DOT__intAsRawFloat_absIn 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2fResults_i2f_2__DOT__intAsRawFloat_sign)
            ? (- vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__intValue_res)
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__intValue_res);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT___GEN 
        = ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_typeTagOut)) 
           | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_typeTagOut)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_cmd_amo_logical 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_cmd)) 
           | ((9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_cmd)) 
              | ((0xaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_cmd)) 
                 | (0xbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_cmd)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_cmd_amo_arithmetic 
        = ((8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_cmd)) 
           | ((0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_cmd)) 
              | ((0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_cmd)) 
                 | ((0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_cmd)) 
                    | (0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_cmd))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_cmd_lrsc 
        = ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_cmd)) 
           | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_cmd)));
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_20)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_pc 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_pc;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s0_clk_en) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_vaddr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s0_req_addr;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_want_victimize) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__probe_bits_address 
            = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_valid_flush_line)
                  ? (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                             >> 0xcU)) : (((((((((0U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_victim_way_r))
                                                  ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r
                                                  : 0U) 
                                                | ((1U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_victim_way_r))
                                                    ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_1
                                                    : 0U)) 
                                               | ((2U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_victim_way_r))
                                                   ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_2
                                                   : 0U)) 
                                              | ((3U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_victim_way_r))
                                                  ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_3
                                                  : 0U)) 
                                             | ((4U 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_victim_way_r))
                                                 ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_4
                                                 : 0U)) 
                                            | ((5U 
                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_victim_way_r))
                                                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_5
                                                : 0U)) 
                                           | ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_victim_way_r))
                                               ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_6
                                               : 0U)) 
                                          | ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_victim_way_r))
                                              ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_meta_corrected_r_7
                                              : 0U))) 
                << 0xcU) | (0xfc0U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                               >> 6U)) 
                                      << 6U)));
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___probe_bits_T) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__probe_bits_address 
            = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeIn_b_q__DOT___ram_ext_R0_data 
                       >> 8U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__821(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__821\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_168) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__uncachedReqs_0_addr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_167) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lrscAddr 
            = (0x3ffffffffULL & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                 >> 6U));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__contained 
        = ((0ULL == (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__flushInAddress 
                                       >> 0x20U))) 
                      << 4U) | (QData)((IData)((0xfU 
                                                & (8U 
                                                   ^ (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__flushInAddress 
                                                              >> 0x1cU)))))))) 
           | (0ULL == ((0xfffffffff000ULL & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__flushInAddress 
                                             >> 0x10U)) 
                       | (QData)((IData)((0xfffU & 
                                          (0x800U ^ (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__flushInAddress 
                                                             >> 0x10U)))))))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq) {
        __Vtemp_1[0U] = (IData)((((QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                                    ? 0xffU
                                                    : 
                                                   (0xffU 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                       >> 0xeU))))) 
                                  << 0x2dU) | (((QData)((IData)(
                                                                ((0x3ffffc0U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                 | (0x3fU 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                                                       | (0x38U 
                                                                          & ((~ 
                                                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__aFragnum) 
                                                                               | (0x3ffU 
                                                                                & (((IData)(0x3fU) 
                                                                                << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                                                >> 3U)))) 
                                                                             << 3U))))))) 
                                                << 0x13U) 
                                               | (QData)((IData)(
                                                                 (((0x7f000U 
                                                                    & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                                                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_source)
                                                                         : 
                                                                        ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                          << 0x16U) 
                                                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 0xaU))) 
                                                                       << 0xcU)) 
                                                                   | ((0x800U 
                                                                       & ((~ 
                                                                           ((0U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__gennum))
                                                                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__dToggle)
                                                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__aToggle_r))) 
                                                                          << 0xbU)) 
                                                                      | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__aFragnum) 
                                                                         << 8U))) 
                                                                  | ((((4U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_size))
                                                                        ? 3U
                                                                        : 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_size))) 
                                                                      << 6U) 
                                                                     | ((0x38U 
                                                                         & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                                                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                                                              : 
                                                                             ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                               << 0x1dU) 
                                                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 3U))) 
                                                                            << 3U)) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)))))))));
        __Vtemp_1[1U] = (((IData)((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                                    << 0x2aU) | (((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                                  << 0xaU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                                    >> 0x16U)))) 
                          << 0x15U) | (IData)(((((QData)((IData)(
                                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                                                   ? 0xffU
                                                                   : 
                                                                  (0xffU 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                                      >> 0xeU))))) 
                                                 << 0x2dU) 
                                                | (((QData)((IData)(
                                                                    ((0x3ffffc0U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                                                     | (0x3fU 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                                                           | (0x38U 
                                                                              & ((~ 
                                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__aFragnum) 
                                                                                | (0x3ffU 
                                                                                & (((IData)(0x3fU) 
                                                                                << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                                                >> 3U)))) 
                                                                                << 3U))))))) 
                                                    << 0x13U) 
                                                   | (QData)((IData)(
                                                                     (((0x7f000U 
                                                                        & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                                                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_source)
                                                                             : 
                                                                            ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                              << 0x16U) 
                                                                             | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xaU))) 
                                                                           << 0xcU)) 
                                                                       | ((0x800U 
                                                                           & ((~ 
                                                                               ((0U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__gennum))
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__dToggle)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__aToggle_r))) 
                                                                              << 0xbU)) 
                                                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__aFragnum) 
                                                                             << 8U))) 
                                                                      | ((((4U 
                                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_size))
                                                                            ? 3U
                                                                            : 
                                                                           (3U 
                                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_size))) 
                                                                          << 6U) 
                                                                         | ((0x38U 
                                                                             & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                                                                 : 
                                                                                ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 3U))) 
                                                                                << 3U)) 
                                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)))))))) 
                                               >> 0x20U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[0U] 
            = __Vtemp_1[0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[1U] 
            = __Vtemp_1[1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[2U] 
            = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                          << 0x2aU) | (((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                        << 0xaU) | 
                                       ((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                        >> 0x16U)))) 
                >> 0xbU) | ((IData)(((((QData)((IData)(
                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                                       << 0x2aU) | 
                                      (((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                        << 0xaU) | 
                                       ((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                        >> 0x16U))) 
                                     >> 0x20U)) << 0x15U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[3U] 
            = ((0x200000U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                               : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                  >> 0x16U)) << 0x15U)) 
               | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                             << 0x2aU) | (((QData)((IData)(
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                           << 0xaU) 
                                          | ((QData)((IData)(
                                                             vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                             >> 0x16U))) 
                           >> 0x20U)) >> 0xbU));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__822(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__822\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_21 
        = (IData)((0x48000000U == (0x48000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hc7c8d47f__0 
        = (IData)((0xc0000000U == (0xc0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_he0768f93__0 
        = ((0x200U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x16U)) << 9U)) | ((0x100U 
                                                 & ((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x17U)) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & ((~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                         >> 0x18U)) 
                                                       << 7U)) 
                                                   | ((0x40U 
                                                       & ((~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                            >> 0x19U)) 
                                                          << 6U)) 
                                                      | ((0x20U 
                                                          & ((~ 
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                               >> 0x1aU)) 
                                                             << 5U)) 
                                                         | ((0x10U 
                                                             & ((~ 
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                                  >> 0x1bU)) 
                                                                << 4U)) 
                                                            | ((8U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                                   >> 0x19U)) 
                                                               | ((4U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                                      >> 0x1bU)) 
                                                                  | ((2U 
                                                                      & ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                                           >> 0x1eU)) 
                                                                         << 1U)) 
                                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                                        >> 0x1fU))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hab14c173__0 
        = (IData)((0U == (0xc0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h79939cd5__0 
        = ((0x10U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                     >> 0x17U)) | ((8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                          >> 0x19U)) 
                                   | ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                             >> 0x1bU)) 
                                      | ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                >> 0x1dU)) 
                                         | (1U & (~ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                   >> 0x1fU)))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__823(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__823\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha9b0d59a__0 
        = ((2U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                      >> 0x1eU)) << 1U)) | (1U & (~ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                   >> 0x1fU))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_25) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
            = (((QData)((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn) 
                                  << 0xcU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_u) 
                                               << 0xbU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_g) 
                                                  << 0xaU) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_ae_ptw) 
                                                     << 9U) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_ae_final) 
                                                        << 8U) 
                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_pf) 
                                                           << 6U) 
                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_gf) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_sw) 
                                                                 << 4U) 
                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_sx) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_sr) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hw) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hx)))))))))))))) 
                << 0xaU) | (QData)((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hr) 
                                             << 9U) 
                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__prot_w) 
                                                << 8U) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__prot_x) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__prot_r) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___pma_io_resp_w) 
                                                         << 5U) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___pma_io_resp_w) 
                                                            << 4U) 
                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___pma_io_resp_w) 
                                                               << 3U) 
                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___pma_io_resp_eff) 
                                                                  << 2U) 
                                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___pma_io_resp_cacheable) 
                                                                    << 1U))))))))))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___r_superpage_repl_addr_T_5 
        = (7U & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_valid_0) 
                     << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_valid_0) 
                                << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_valid_0)))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_22) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
            = (((QData)((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn) 
                                  << 0xcU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_u) 
                                               << 0xbU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_g) 
                                                  << 0xaU) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_ae_ptw) 
                                                     << 9U) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_ae_final) 
                                                        << 8U) 
                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_pf) 
                                                           << 6U) 
                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_gf) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_sw) 
                                                                 << 4U) 
                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_sx) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_sr) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hw) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hx)))))))))))))) 
                << 0xaU) | (QData)((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hr) 
                                             << 9U) 
                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__prot_w) 
                                                << 8U) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__prot_x) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__prot_r) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___pma_io_resp_w) 
                                                         << 5U) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___pma_io_resp_w) 
                                                            << 4U) 
                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___pma_io_resp_w) 
                                                               << 3U) 
                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___pma_io_resp_eff) 
                                                                  << 2U) 
                                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___pma_io_resp_cacheable) 
                                                                    << 1U))))))))))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__824(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__824\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_28) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
            = (((QData)((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn) 
                                  << 0xcU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_u) 
                                               << 0xbU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_g) 
                                                  << 0xaU) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_ae_ptw) 
                                                     << 9U) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_ae_final) 
                                                        << 8U) 
                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_pf) 
                                                           << 6U) 
                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_gf) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_sw) 
                                                                 << 4U) 
                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_sx) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_sr) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hw) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hx)))))))))))))) 
                << 0xaU) | (QData)((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hr) 
                                             << 9U) 
                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__prot_w) 
                                                << 8U) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__prot_x) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__prot_r) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___pma_io_resp_w) 
                                                         << 5U) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___pma_io_resp_w) 
                                                            << 4U) 
                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___pma_io_resp_w) 
                                                               << 3U) 
                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___pma_io_resp_eff) 
                                                                  << 2U) 
                                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___pma_io_resp_cacheable) 
                                                                    << 1U))))))))))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___r_sectored_repl_addr_valids_T_21 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_0) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_1));
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_1)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__waddr_1)) 
                        & (0U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___sectored_entries_0_0_data_T;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_1)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__waddr_1)) 
                        & (1U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___sectored_entries_0_0_data_T;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_1)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__waddr_1)) 
                        & (2U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_2 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___sectored_entries_0_0_data_T;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__825(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__825\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_32)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_1)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__waddr_1)) 
                        & (3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_3 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___sectored_entries_0_0_data_T;
    }
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_41)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_1)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__waddr_1)) 
                        & (3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_3 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___sectored_entries_0_0_data_T;
    }
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_50)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_1)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__waddr_1)) 
                        & (3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_3 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___sectored_entries_0_0_data_T;
    }
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_59)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_1)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__waddr_1)) 
                        & (3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_data_3 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___sectored_entries_0_0_data_T;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__826(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__826\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_68)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_1)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__waddr_1)) 
                        & (3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_data_3 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___sectored_entries_0_0_data_T;
    }
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_77)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_1)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__waddr_1)) 
                        & (3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_data_3 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___sectored_entries_0_0_data_T;
    }
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_86)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_1)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__waddr_1)) 
                        & (3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_data_3 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___sectored_entries_0_0_data_T;
    }
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_94)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_1)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__waddr_1)) 
                        & (3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_3 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___sectored_entries_0_0_data_T;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__827(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__827\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_19) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_22) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_25) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_28) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_16) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_pc_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_mem_size 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_mem_size;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__state_reg_touch_way_sized 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_btb_update_pipe_v)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__waddr)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_resp_pipe_b_entry));
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_20)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_jalr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_jalr;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_inst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_inst;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__updatePageHit 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pageValid) 
           & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_5 
                == (0x1ffffffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_btb_update_pipe_b_pc 
                                          >> 0xeU)))) 
               << 5U) | (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_4 
                           == (0x1ffffffU & (IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_btb_update_pipe_b_pc 
                                                     >> 0xeU)))) 
                          << 4U) | (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_3 
                                      == (0x1ffffffU 
                                          & (IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_btb_update_pipe_b_pc 
                                                     >> 0xeU)))) 
                                     << 3U) | (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_2 
                                                 == 
                                                 (0x1ffffffU 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_btb_update_pipe_b_pc 
                                                             >> 0xeU)))) 
                                                << 2U) 
                                               | (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_1 
                                                    == 
                                                    (0x1ffffffU 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_btb_update_pipe_b_pc 
                                                                >> 0xeU)))) 
                                                   << 1U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_0 
                                                     == 
                                                     (0x1ffffffU 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_btb_update_pipe_b_pc 
                                                                 >> 0xeU))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fr_sectored_repl_addr_valids_T_2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_0_valid_0) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_0_valid_1) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_0_valid_2) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_0_valid_3))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__828(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__828\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fr_sectored_repl_addr_valids_T_11 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_3_valid_0) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_3_valid_1) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_3_valid_2) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_3_valid_3))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fr_sectored_repl_addr_valids_T_20 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_6_valid_0) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_6_valid_1) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_6_valid_2) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_6_valid_3))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s0_clk_en) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_size 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_size;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fr_superpage_repl_addr_T_5 
        = (7U & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_2_valid_0) 
                     << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_1_valid_0) 
                                << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_0_valid_0)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fr_sectored_repl_addr_valids_T_14 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_4_valid_0) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_4_valid_1) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_4_valid_2) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_4_valid_3))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsector_hits_T_56 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_7_valid_0) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_7_valid_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fr_sectored_repl_addr_valids_T_5 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_1_valid_0) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_1_valid_1) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_1_valid_2) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_1_valid_3))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fr_sectored_repl_addr_valids_T_8 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_0) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_1) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_2) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_2_valid_3))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fr_sectored_repl_addr_valids_T_17 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_5_valid_0) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_5_valid_1) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_5_valid_2) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_5_valid_3))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_57) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_0_level 
            = (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__count));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_0_data_0 
            = (((QData)((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn) 
                                  << 0xcU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_u) 
                                               << 0xbU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_g) 
                                                  << 0xaU) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_ae_ptw) 
                                                     << 9U) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_ae_final) 
                                                        << 8U) 
                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_pf) 
                                                           << 6U) 
                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_gf) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_sw) 
                                                                 << 4U) 
                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_sx) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_sr) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hw) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hx)))))))))))))) 
                << 0xaU) | (QData)((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hr) 
                                             << 9U) 
                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_prot_w) 
                                                << 8U) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_prot_x) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_prot_r) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_w) 
                                                         << 5U) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_w) 
                                                            << 4U) 
                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_w) 
                                                               << 3U) 
                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_eff) 
                                                                  << 2U) 
                                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_cacheable) 
                                                                    << 1U))))))))))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__829(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__829\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_60) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_1_data_0 
            = (((QData)((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn) 
                                  << 0xcU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_u) 
                                               << 0xbU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_g) 
                                                  << 0xaU) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_ae_ptw) 
                                                     << 9U) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_ae_final) 
                                                        << 8U) 
                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_pf) 
                                                           << 6U) 
                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_gf) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_sw) 
                                                                 << 4U) 
                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_sx) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_sr) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hw) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hx)))))))))))))) 
                << 0xaU) | (QData)((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hr) 
                                             << 9U) 
                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_prot_w) 
                                                << 8U) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_prot_x) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_prot_r) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_w) 
                                                         << 5U) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_w) 
                                                            << 4U) 
                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_w) 
                                                               << 3U) 
                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_eff) 
                                                                  << 2U) 
                                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_cacheable) 
                                                                    << 1U))))))))))));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_63) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_2_data_0 
            = (((QData)((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn) 
                                  << 0xcU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_u) 
                                               << 0xbU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_g) 
                                                  << 0xaU) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_ae_ptw) 
                                                     << 9U) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_ae_final) 
                                                        << 8U) 
                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_pf) 
                                                           << 6U) 
                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_gf) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_sw) 
                                                                 << 4U) 
                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_sx) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_sr) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hw) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hx)))))))))))))) 
                << 0xaU) | (QData)((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hr) 
                                             << 9U) 
                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_prot_w) 
                                                << 8U) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_prot_x) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_prot_r) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_w) 
                                                         << 5U) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_w) 
                                                            << 4U) 
                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_w) 
                                                               << 3U) 
                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_eff) 
                                                                  << 2U) 
                                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_cacheable) 
                                                                    << 1U))))))))))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__830(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__830\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_66) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_3_data_0 
            = (((QData)((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn) 
                                  << 0xcU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_u) 
                                               << 0xbU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_g) 
                                                  << 0xaU) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_ae_ptw) 
                                                     << 9U) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_ae_final) 
                                                        << 8U) 
                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_pf) 
                                                           << 6U) 
                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_gf) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_sw) 
                                                                 << 4U) 
                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_sx) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_sr) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hw) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hx)))))))))))))) 
                << 0xaU) | (QData)((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hr) 
                                             << 9U) 
                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_prot_w) 
                                                << 8U) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_prot_x) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_prot_r) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_w) 
                                                         << 5U) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_w) 
                                                            << 4U) 
                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_w) 
                                                               << 3U) 
                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_eff) 
                                                                  << 2U) 
                                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_cacheable) 
                                                                    << 1U))))))))))));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_54) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_special_entry_data_0 
            = (((QData)((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn) 
                                  << 0xcU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_u) 
                                               << 0xbU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_g) 
                                                  << 0xaU) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_ae_ptw) 
                                                     << 9U) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_ae_final) 
                                                        << 8U) 
                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_pf) 
                                                           << 6U) 
                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_gf) 
                                                              << 5U) 
                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_sw) 
                                                                 << 4U) 
                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_sx) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_newEntry_sr) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hw) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hx)))))))))))))) 
                << 0xaU) | (QData)((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_hr) 
                                             << 9U) 
                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_prot_w) 
                                                << 8U) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_prot_x) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_prot_r) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_w) 
                                                         << 5U) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_w) 
                                                            << 4U) 
                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_w) 
                                                               << 3U) 
                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_eff) 
                                                                  << 2U) 
                                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_cacheable) 
                                                                    << 1U))))))))))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__831(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__831\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_168) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__uncachedReqs_0_size 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_size;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (0U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_0_data_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (0U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_1_data_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (0U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_2_data_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (0U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_3_data_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (0U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_4_data_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__832(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__832\n"); );
    // Body
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (0U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_5_data_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (0U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_6_data_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (0U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_7_data_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (1U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_0_data_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (1U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_1_data_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__833(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__833\n"); );
    // Body
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (1U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_2_data_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (1U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_3_data_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (1U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_4_data_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (1U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_5_data_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (1U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_6_data_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__834(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__834\n"); );
    // Body
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (1U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_7_data_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (2U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_0_data_2 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (2U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_1_data_2 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (2U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_2_data_2 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (2U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_3_data_2 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__835(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__835\n"); );
    // Body
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (2U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_4_data_2 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (2U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_5_data_2 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (2U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_6_data_2 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (2U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_7_data_2 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_69)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_0_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_0_data_3 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__836(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__836\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_77)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_1_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_1_data_3 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_85)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_2_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_2_data_3 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_93)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_3_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_3_data_3 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_101)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_4_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_4_data_3 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__837(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__837\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_109)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_5_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_5_data_3 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_117)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_6_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_6_data_3 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_125)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_7_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_0)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_68)) 
                  | (~ ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_waddr_1)) 
                        & (3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag)))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_sectored_entries_0_7_data_3 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_0_data_T;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_57) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_0_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_60) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_1_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_63) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_2_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_66) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_superpage_entries_3_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_54) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_special_entry_tag_vpn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_r_refill_tag;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__838(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__838\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_d_bits_param 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_prio_0) 
            & ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_opcode)) 
               | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_opcode))))
            ? (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_param))
            : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT____VdfgTmp_hde525748__0 
        = ((0x17U >= (0x1fU & ((IData)(3U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_opcode))))
            ? (7U & ((0x911240U | ((2U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_param)) 
                                   << 0x12U)) >> (0x1fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_opcode)))))
            : 0U);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_latch) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_opcode 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_opcode;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_size 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_size;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___tail_ext_R0_data 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__tail_ext__DOT__Memory
        [(1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__put))];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT____VdfgTmp_h2713c3ba__0 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__valid) 
                 >> (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__put))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT__full) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_bits_size 
            = (7U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                      << 0x1bU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                                   >> 5U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_bits_sink 
            = (7U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                      << 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                                   >> 0xeU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_bits_denied 
            = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                     >> 0x11U));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_bits_size 
            = (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_size));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_bits_sink 
            = (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_sink));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_bits_denied 
            = (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_bad));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__839(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__839\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_anon_in_d_bits_source 
        = (0x3fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT__full)
                     ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                         << 0x18U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                                      >> 8U)) : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_req_source)));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__busy 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_latch) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_last))) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_valid) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__busy))));
    if (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__busy)) 
         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_valid))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_prio_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_prio_0;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_prio_2 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_prio_2;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_opcode 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_opcode;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_param 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_param;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_size 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_size;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_source 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_source;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_offset 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_offset;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_put 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_put;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_set 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__directory__io_write_bits_set;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_sink 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_select;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_way 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__directory__io_write_bits_way;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_bad 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_bad;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_latch) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__busy) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_prio_2 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_prio_2;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_source 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_source;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_put 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_put;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_sink 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_sink;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_bad 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_bad;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_prio_2 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_prio_2;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_source 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_source;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_put 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_put;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_sink 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_select;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_bad 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_bad;
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_debug_sb__DOT__widget__DOT__repeat_last 
        = (1U & ((~ (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_debug_sb__DOT__widget__DOT__repeated_repeater__DOT__full)
                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_debug_sb__DOT__widget__DOT__repeated_repeater__DOT__saved_opcode)
                            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]))) 
                 | ((7U & (~ ((IData)(7U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_debug_sb_widget_anon_in_d_bits_size)))) 
                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_debug_sb__DOT__widget__DOT__repeat_count))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__840(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__840\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
           & ((IData)(((0x2000U == (0x3e00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___coupler_from_debug_sb_auto_tl_out_d_ready))) 
              | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xdU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___coupler_from_port_named_serial_tl_0_in_auto_tl_out_d_ready))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT___GEN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT___q_io_deq_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___ser_1_io_in_ready));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT___GEN_2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_inner_ser_1_out_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT___q_io_deq_valid) 
              | (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT__beat))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___out_channels_1_2_io_beat_bits_tail 
        = (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__tail_counter)) 
            | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__tail_beats1))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT____VdfgTmp_hba375c0d__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q_io_deq_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___ser_1_io_in_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT____VdfgTmp_hba375c0d__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_debug_sb_widget_anon_in_d_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_debug_sb__DOT__widget__DOT__repeated_repeater__DOT__full) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_0_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_3_2__DOT___GEN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___in_channels_3_2_io_beat_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_inner_ser_3_in_valid) 
              & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_3__DOT__beat))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_3__DOT___GEN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_inner_ser_3_in_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___in_channels_3_2_io_beat_ready) 
              | (2U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_3__DOT__beat))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_2_2__DOT___GEN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___in_channels_2_2_io_beat_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_inner_ser_2_in_valid) 
              & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_2__DOT__beat))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_2__DOT___GEN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_inner_ser_2_in_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___in_channels_2_2_io_beat_ready) 
              | (2U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_2__DOT__beat))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_1_2__DOT___GEN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___in_channels_1_2_io_beat_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_inner_ser_1_in_valid) 
              & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_1__DOT__beat))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__841(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__841\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_1__DOT___GEN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_inner_ser_1_in_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___in_channels_1_2_io_beat_ready) 
              | (2U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_1__DOT__beat))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_port_named_serial_tl_0_in_buffer_in_a_ready) 
           & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__is_const)) 
               | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT__data_0) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___des_4_io_out_valid)));
    if ((2U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT__data_0)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___des_4_io_out_bits_payload[0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[1U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___des_4_io_out_bits_payload[1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___des_4_io_out_bits_payload[2U];
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_reg[0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[1U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_reg[1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_0[2U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__const_reg[2U];
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT___GEN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_inner_ser_4_in_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___in_channels_4_2_io_beat_ready) 
              | (2U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT__beat))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT___GEN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___in_channels_4_2_io_beat_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___des_4_io_out_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT___dFirst_size_T_8 
        = (7U & (VL_SHIFTR_III(3,3,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__dFirst_size_hi), 1U) 
                 | ((~ ((IData)(7U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_size))) 
                    & ((4U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_source)) 
                              << 2U)) | (3U & (((IData)(7U) 
                                                << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_size)) 
                                               >> 1U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___buffer_auto_out_d_ready) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__drop)) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_full)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_anon_out_d_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___buffer_auto_out_d_ready) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__drop));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1][0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1][1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1][2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1][3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__dToggle 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__dToggle;
}
