// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__225(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__225\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__winner_0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_out_c_valid) 
           & (7U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____VdfgTmp_hfaf30802__0 
        = (1U & ((~ (IData)(vlSelf->__VdfgTmp_he6da1251__0)) 
                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkD_io_source 
        = (7U & ((IData)(vlSelf->__VdfgTmp_he6da1251__0)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__io_source_r)
                  : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[0U] 
                      << 0x18U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[0U] 
                                   >> 8U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq_io_enq_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__fq_io_enq_valid_REG) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_valid) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___fq_io_enq_bits_replay_T_5) 
                    | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_tlb_resp_miss)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache_io_s2_kill))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_miss 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache_io_s2_kill) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_hit))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s2_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcIF_io_cache_req_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__replaying)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT___nackq_io_deq_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT____VdfgTmp_h9e3c328b__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall_counter) 
           | ((1U & (~ (IData)(vlSelf->__VdfgTmp_h40f73a86__0))) 
              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__c_a_bits_a_mask_sub_1_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__c_a_bits_a_mask_sub_sub_0_1) 
           | (IData)(((8U == (0x18U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U])) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__c_a_bits_a_mask_sub_1_2))));
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
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__226(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__226\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__a_a_bits_opcode 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT___GEN)
            ? 4U : (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__insn_call 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                  >> 0x14U)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h473a13d8__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__insn_break 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
               >> 0x14U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h473a13d8__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__dMode 
        = ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___newBPC_T_8 
                    >> 0x2fU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_debug));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_28 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__insn_ret)) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_27)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_26 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__insn_ret) 
           & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                  >> 0x1dU)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_v))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx_widx_bin) 
              + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT___widx_T_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx_ridx_bin) 
              + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT___widx_T_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___out_rofireMux_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T) 
           & (0x40000000000000ULL == (0x70000000000000ULL 
                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T_2 
        = ((4U != (7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                 >> 0x34U)))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h65e24775__0 
        = (1U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp) 
                     >> 0xbU)) & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hfb821a63__0 
                                          >> 1U))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__227(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__227\n"); );
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
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_ha6790822__0 
        = ((0x800U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))
            ? 0ULL : (0x1fffffffffffffULL & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hfb821a63__0 
                                             >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___common_underflow_T_4 
        = (1U & (((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp) 
                      >> 0xbU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hfb821a63__0)) 
                 | (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                            >> 0x37U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_anon_out_a_bits_size 
        = ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___repeater_io_deq_bits_size))
            ? 3U : (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___repeater_io_deq_bits_size)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0 
        = (7U & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__gennum))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__gennum) 
                                              - (IData)(1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size 
        = ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___repeater_io_deq_bits_size))
            ? 3U : (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___repeater_io_deq_bits_size)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0 
        = (7U & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__gennum))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__gennum) 
                                              - (IData)(1U))));
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

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__228(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__228\n"); );
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
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_0));
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

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__229(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__229\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T 
        = (((0x1ffeU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z) 
                        << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__notZeroRem_Z)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hf4cd4ae4__0 
        = (0x2222U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_5) 
                      & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mideleg 
                                  >> 1U)) << 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hef6497f8__0 
        = (0xffffU & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_5)) 
                         | (0x2222U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mideleg 
                                                >> 1U)) 
                                       << 1U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___mbus_auto_buffer_out_d_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bank_auto_xbar_anon_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bank_auto_xbar_anon_in_d_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___mbus_auto_buffer_out_d_ready));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___binder_auto_in_d_valid 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__beatsLeft))
            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT___buffer_1_auto_in_d_valid) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_widget_anon_in_d_valid))
            : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_widget_anon_in_d_valid) 
                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__state_0)) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT___buffer_1_auto_in_d_valid) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__state_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__readys_valid 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT___buffer_1_auto_in_d_valid) 
            << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_widget_anon_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT____VdfgTmp_hfdb5cacb__0 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT___x_T_20) 
             & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
                        >> 2U))) << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT___x_T_20) 
                                            << 2U) 
                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT___x_T_18) 
                                               << 1U) 
                                              | (1U 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__r_4 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__r_counter) 
               - (IData)(1U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__r_beats1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_cnt 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__r_counter) 
               - (IData)(1U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__r_beats1));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__230(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__230\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__d_last 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__r_counter)) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__r_beats1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___victimWay_T_1 
        = (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimWay_hi) 
                  >> 1U) | ((((0x17fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR)) 
                              << 2U) | (((IData)((0U 
                                                  != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___GEN_0))) 
                                         << 1U) | (0U 
                                                   != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___GEN)))) 
                            & ((4U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_9)) 
                                      << 2U)) | (((0x17fU 
                                                   >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR)) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___GEN_0))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h5a282bfc__0 
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
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h1db002f0__0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hafcbd1e5__0 
        = ((0x200U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x16U)) << 9U)) | ((0x100U 
                                                 & ((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x17U)) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                       >> 0x11U)) 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h1db002f0__0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pma__DOT____VdfgTmp_heba393ee__0 
        = ((8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                  >> 5U)) | ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                    >> 2U)) | (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pma__DOT____VdfgTmp_he096de70__0 
        = (1U & (~ (IData)((0x80000U != (0x90000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn)))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__231(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__231\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_h7e9fc62b__0 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_1)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_debug))) 
                    & (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pma__DOT____VdfgTmp_h38e0ae89__0 
        = ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                  >> 7U)) | (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                   >> 4U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___pma_io_resp_r 
        = ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
           | ((0U == ((0xffffffeU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                      | (1U & (~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn)))) 
              | ((0U == ((0xffffffcU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                         | (3U & (~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn)))) 
                 | ((0U == ((0xfffffeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                          >> 4U)) | 
                            (1U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                      >> 4U))))) | 
                    ((0U == ((0xffffe00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                             | (0x1ffU & (0x100U ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn)))) 
                     | ((0U == ((0xffffe00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                                | (0x1ffU & (0x110U 
                                             ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn)))) 
                        | ((0U == ((0xfffc00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                 >> 4U)) 
                                   | (0x3ffU & (0x200U 
                                                ^ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                   >> 4U))))) 
                           | ((0U == ((0xfffc000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                                      | (0x3fffU & 
                                         (0x2010U ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn)))) 
                              | ((0U == ((0xfff000U 
                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                             >> 4U)) 
                                         | (0xfffU 
                                            & (0x800U 
                                               ^ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                  >> 4U))))) 
                                 | ((0U == ((0x3ffcU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                >> 0xeU)) 
                                            | (3U & 
                                               (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                   >> 0xeU))))) 
                                    | ((0U == ((0xffe0000U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                                               | (0x1ffffU 
                                                  & (0x10020U 
                                                     ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn)))) 
                                       | (0U == ((0xff0U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                     >> 0x10U)) 
                                                 | (0xfU 
                                                    & (8U 
                                                       ^ 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                        >> 0x10U))))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__232(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__232\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT____Vcellinp__pmp__io_addr 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
            << 0xcU) | (0xfffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT___out_T_3 
        = (0U == ((0x7ffffffeU & (((IData)(vlSelf->__VdfgTmp_h66bcfe56__0) 
                                   << 1U) & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqReg_addr) 
                                             >> 1U))) 
                  | (IData)(vlSelf->__VdfgTmp_haa5b0e0c__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__requestAIO_0_0 
        = ((0U == ((IData)(vlSelf->__VdfgTmp_h66bcfe56__0)
                    ? (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqReg_addr) 
                             >> 4U)) : 1U)) | ((0U 
                                                == 
                                                (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_h53dafab2__0) 
                                                  << 4U) 
                                                 | ((0xeU 
                                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___GEN) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT___GEN))))) 
                                               | ((0U 
                                                   == 
                                                   (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_h53dafab2__0) 
                                                     << 4U) 
                                                    | (0xbU 
                                                       ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_h53ca0f32__0)))) 
                                                  | ((0U 
                                                      == 
                                                      (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_h53dafab2__0) 
                                                        << 2U) 
                                                       | (3U 
                                                          & (~ 
                                                             ((IData)(vlSelf->__VdfgTmp_h66bcfe56__0)
                                                               ? 
                                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqReg_addr) 
                                                               >> 3U)
                                                               : 2U))))) 
                                                     | ((0U 
                                                         == 
                                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_h53d6d937__0) 
                                                           << 1U) 
                                                          | (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->__VdfgTmp_h66bcfe56__0) 
                                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqReg_addr) 
                                                                    >> 5U)))))) 
                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_h53d6d937__0))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__requestAIO_0_1 
        = ((0U == (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_h53dafab2__0) 
                    << 4U) | ((0xeU & (8U ^ (((IData)(vlSelf->__VdfgTmp_h66bcfe56__0)
                                               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqReg_addr) 
                                                  >> 2U)
                                               : 4U) 
                                             << 1U))) 
                              | (IData)(vlSelf->__VdfgTmp_haa5b0e0c__0)))) 
           | (0U == (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_h53dafab2__0) 
                      << 4U) | (0xaU ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_h53ca0f32__0)))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__233(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__233\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_prevRVI_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_valid) 
           & (3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_xcpt 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_xcpt) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_2) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_3) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_4) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_5) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_6) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_1) 
                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_1_s2_xcpt_ma_ld))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_valid_masked 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_valid_no_xcpt) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_not_nacked_in_s1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q_io_deq_ready 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last)) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT___buffer_auto_out_d_ready) 
                    & ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__r_counter)) 
                       | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__r_beats1))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hdca82c65__0 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_he8eeab97__0 
            << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___common_underflow_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1 
        = (1U | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_he8eeab97__0 
                  << 2U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___common_underflow_T_4) 
                            << 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_hdca82c65__0 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_he8eeab97__0 
            << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___common_underflow_T_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_1 
        = (1U | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_he8eeab97__0 
                  << 2U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___common_underflow_T_4) 
                            << 1U)));
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
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__234(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__234\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshr_insertOH_T_6 
        = (0x3fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshr_insertOH_T_3) 
                    | VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshr_insertOH_T_3), 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___hits_T 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__tags_0 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___hits_T_1 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__tags_1 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___hits_T_2 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__tags_2 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___hits_T_3 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__tags_3 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___hits_T_4 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__tags_4 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___hits_T_5 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__tags_5 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___hits_T_6 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__tags_6 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___hits_T_7 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__tags_7 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_17 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn) 
            << 0xcU) & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__pmpHomogeneous_pgMask_7);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__latch 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_prci_ctrl_fixer_anon_out_d_ready) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__beatsLeft)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___io_result_bits_way_T_1 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_55) 
             << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_48) 
                        << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_41))) 
           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_27) 
               << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_20) 
                          << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_13))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____VdfgTmp_h640947e0__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_55) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_48) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_41) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_34) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_27) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_20) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_13) 
                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_6))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h4b27d750__0 
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
                                                                & ((~ 
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                                     >> 0x1cU)) 
                                                                   << 3U)) 
                                                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hb29765f9__0))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__235(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__235\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hee6be135__0 
        = ((8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                  >> 0x19U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hb29765f9__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_ha7eb522c__0 
        = ((0x40U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                     >> 0x13U)) | ((0x20U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                 >> 0x1aU)) 
                                             << 5U)) 
                                   | ((0x10U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                                                >> 0x17U)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hd88ef07d__0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hf5d3cdb7__0 
        = ((0x10U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                         >> 0x1bU)) << 4U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hd88ef07d__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pma__DOT____VdfgTmp_heba393ee__0 
        = ((8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn 
                  >> 5U)) | ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn 
                                    >> 2U)) | (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h880e6ac8__0 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h21b3dd91__0)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_debug))) 
                    & (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pma__DOT____VdfgTmp_he096de70__0 
        = (1U & (~ (IData)((0x80000U != (0x90000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pma__DOT____VdfgTmp_h38e0ae89__0 
        = ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn 
                  >> 7U)) | (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn 
                                   >> 4U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___tlb_pma_io_resp_r 
        = ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn) 
           | ((0U == ((0xffffffeU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn) 
                      | (1U & (~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn)))) 
              | ((0U == ((0xffffffcU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn) 
                         | (3U & (~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn)))) 
                 | ((0U == ((0xfffffeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn 
                                          >> 4U)) | 
                            (1U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn 
                                      >> 4U))))) | 
                    ((0U == ((0xffffe00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn) 
                             | (0x1ffU & (0x100U ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn)))) 
                     | ((0U == ((0xffffe00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn) 
                                | (0x1ffU & (0x110U 
                                             ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn)))) 
                        | ((0U == ((0xfffc00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                 >> 4U)) 
                                   | (0x3ffU & (0x200U 
                                                ^ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                   >> 4U))))) 
                           | ((0U == ((0xfffc000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn) 
                                      | (0x3fffU & 
                                         (0x2010U ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn)))) 
                              | ((0U == ((0xfff000U 
                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn 
                                             >> 4U)) 
                                         | (0xfffU 
                                            & (0x800U 
                                               ^ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                  >> 4U))))) 
                                 | ((0U == ((0x3ffcU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                >> 0xeU)) 
                                            | (3U & 
                                               (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                   >> 0xeU))))) 
                                    | ((0U == ((0xffe0000U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn) 
                                               | (0x1ffffU 
                                                  & (0x10020U 
                                                     ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn)))) 
                                       | (0U == ((0xff0U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                     >> 0x10U)) 
                                                 | (0xfU 
                                                    & (8U 
                                                       ^ 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                        >> 0x10U))))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__236(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__236\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h56959d38__0 
        = ((0x1ffffe00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_mpu_ppn 
                           << 9U)) | (0x1ffU & (IData)(
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                        >> 3U))));
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
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_ha72e8051__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_write) 
           | ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
              | (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__source_i_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___buffer_auto_in_a_ready) 
           & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__beatsLeft))
               ? (2U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_s_0_state))
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__state_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__aFragnum 
        = (7U & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__gennum))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__gennum) 
                                              - (IData)(1U))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__237(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__237\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFragnum 
        = (7U & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__gennum))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__gennum) 
                                              - (IData)(1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___wrapped_error_device_auto_buffer_in_a_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___buffer_auto_out_a_valid) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_prci_ctrl_auto_tl_in_a_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___buffer_auto_out_a_valid) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_7)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_anon_out_1_a_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___buffer_auto_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_anon_out_4_a_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___buffer_auto_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size 
        = ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size))
            ? 3U : (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0 
        = (7U & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__gennum))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__gennum) 
                                              - (IData)(1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_anon_out_6_a_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___buffer_auto_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_6));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_anon_out_3_a_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___buffer_auto_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_3));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_2 
        = ((0U == ((0x60U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                             >> 7U)) | ((0x10U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                  >> 6U)) 
                                        | ((8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                  >> 2U)) 
                                           | ((4U & 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                << 1U)) 
                                              | ((2U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x1dU)) 
                                                 | (1U 
                                                    & (~ 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x1dU))))))))) 
           | (0U == ((0x60U & (0x40U ^ ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                         << 0x19U) 
                                        | (0x1ffffe0U 
                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                              >> 7U))))) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT____VdfgTmp_hadd83883__0))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__238(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__238\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_5 
        = (0U == ((0x60U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                            >> 7U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT____VdfgTmp_hadd83883__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size 
        = ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size))
            ? 3U : (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0 
        = (7U & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__gennum))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__gennum) 
                                              - (IData)(1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size 
        = ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size))
            ? 3U : (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____VdfgTmp_h4c9fab7a__0 
        = (7U & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__gennum))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__gennum) 
                                              - (IData)(1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h07644e05__0 
        = (0xffU & ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr))
                     ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__io_cpu_resp_bits_data_zeroed_1) 
                        >> 8U) : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__io_cpu_resp_bits_data_zeroed_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN[0U] = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN[1U] = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN[2U] 
        = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_wdata);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN[3U] 
        = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_wdata 
                   >> 0x20U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN[4U] 
        = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_wdata);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN[5U] 
        = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_wdata 
                   >> 0x20U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN[6U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h3001d884__0)) 
                    << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__io_cpu_resp_bits_data_word_bypass_zeroed))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN[7U] 
        = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h3001d884__0)) 
                     << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__io_cpu_resp_bits_data_word_bypass_zeroed))) 
                   >> 0x20U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_c_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__nodeOut_c_q__DOT__do_deq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_c_ready));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__239(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__239\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT____Vcellinp__io_bs_adr_q__io_enq_bits_noop) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_set 
            = (0x3ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_set_r));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__resp 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__resp_r;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_set 
            = (0x3ffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                          << 0xbU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                      >> 0x15U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__resp 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__raw_resp;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__latch 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_a_ready) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__fbus_xbar__DOT__beatsLeft)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_0_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_bus_xing_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__requestAIO_0_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_bus_xing_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__requestAIO_0_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__beat 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__r_counter) 
               - (IData)(1U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__r_beats1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_resp_bits_last 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__r_counter)) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__r_beats1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT____VdfgTmp_h915bae21__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__buf_block)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT____VdfgTmp_hf0be1bf2__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__latch 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___buffer_auto_in_a_ready) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__beatsLeft)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_0_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__requestAIO_1_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_1_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__requestAIO_1_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rviCall_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___taken_taken_T_9) 
           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
              >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJALR_1 
        = ((~ (IData)((0U != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                       >> 0x12U))))) 
           & (0x26U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____VdfgTmp_hde5d6a02__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJR_1 
        = ((~ (IData)((0U != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                       >> 0x12U))))) 
           & (0x22U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____VdfgTmp_hde5d6a02__0)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__240(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__240\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_4;
    VlWide<6>/*191:0*/ __Vtemp_5;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcBranch_1 
        = ((0x19U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_1)) 
           | (0x1dU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJALR 
        = ((~ (IData)((0U != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                       >> 2U))))) & 
           (0x26U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____VdfgTmp_hde1cc83a__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJR 
        = ((~ (IData)((0U != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                       >> 2U))))) & 
           (0x22U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____VdfgTmp_hde1cc83a__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_predictJump 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_prevRVI) 
            & (0x6fU == (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_partial_insn)))) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_valid) 
              & (0x15U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcBranch 
        = ((0x19U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_0)) 
           | (0x1dU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_0)));
    __Vtemp_4[0U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_data 
                      << 0x10U) | (0xffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_data));
    __Vtemp_4[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_data;
    __Vtemp_4[2U] = (IData)((((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_data 
                                               >> 0x10U))) 
                              << 0x30U) | (((QData)((IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_data 
                                                             >> 0x10U))) 
                                            << 0x20U) 
                                           | (((QData)((IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_data 
                                                                >> 0x10U))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_data 
                                                                 >> 0x10U)))))));
    __Vtemp_4[3U] = (IData)(((((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_data 
                                                >> 0x10U))) 
                               << 0x30U) | (((QData)((IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_data 
                                                              >> 0x10U))) 
                                             << 0x20U) 
                                            | (((QData)((IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_data 
                                                                 >> 0x10U))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_data 
                                                                  >> 0x10U)))))) 
                             >> 0x20U));
    __Vtemp_4[4U] = 0U;
    __Vtemp_4[5U] = 0U;
    VL_SHIFTL_WWI(191,191,6, __Vtemp_5, __Vtemp_4, 
                  (0x30U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nBufValid) 
                              - (IData)(2U)) - (1U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___frontend_io_cpu_resp_bits_pc 
                                                           >> 1U)))) 
                            << 4U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
        = ((__Vtemp_5[2U] & ((IData)(0xffffffffU) << 
                             ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nBufValid) 
                              << 4U))) | ((~ ((IData)(0xffffffffU) 
                                              << ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nBufValid) 
                                                  << 4U))) 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__buf_data));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__241(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__241\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_4_io_schedule_bits_dir_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_4_io_schedule_bits_c_valid) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT____VdfgTmp_hc0826351__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_6_io_schedule_bits_dir_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_6_io_schedule_bits_c_valid) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT____VdfgTmp_hc0826351__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_5_io_schedule_bits_dir_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_5_io_schedule_bits_c_valid) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT____VdfgTmp_hc0826351__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_3_io_schedule_bits_dir_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_3_io_schedule_bits_c_valid) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT____VdfgTmp_hc0826351__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_2_io_schedule_bits_dir_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_2_io_schedule_bits_c_valid) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT____VdfgTmp_hc0826351__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_1_io_schedule_bits_dir_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_1_io_schedule_bits_c_valid) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT____VdfgTmp_hc0826351__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_0_io_schedule_bits_dir_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_0_io_schedule_bits_c_valid) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT____VdfgTmp_hc0826351__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT___q_1_io_enq_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_out_a_valid) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__toD)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__a_a_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__toD)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_out_a_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_cmd_write_perms 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__tlb_cmd_write) 
           | ((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_cmd)) 
              | (0x17U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_tlb_req_cmd))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT___buffer_auto_out_d_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT___error_auto_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx 
        = ((0xfffffff8U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                            << 3U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____VdfgTmp_h04800923__0))) 
           | (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____VdfgTmp_h04800923__0)
                      : 0U) ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____VdfgTmp_h04800923__0) 
                                   >> 1U) : 0U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx 
        = ((0xfffffff8U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                            << 3U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____VdfgTmp_h04800923__0))) 
           | (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____VdfgTmp_h04800923__0)
                      : 0U) ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____VdfgTmp_h04800923__0) 
                                   >> 1U) : 0U))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__242(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__242\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__goAbstract 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_6)) 
              & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_9 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____VdfgTmp_h14709afb__0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___memLatencyMask_T_11));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_10 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____VdfgTmp_h14709afb__0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_8));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_11 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____VdfgTmp_h14709afb__0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___memLatencyMask_T_6));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__full)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_back_front_q__DOT__full) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_oready)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__freeIdx_lo 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__used)) 
           & (1U | (0xfffeU & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___freeOH_T_9) 
                                   | VL_SHIFTL_III(15,15,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___freeOH_T_9), 8U))) 
                               << 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT___GEN_2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_4_out_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___q_io_deq_valid) 
              | (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT__beat))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_back_front_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_back_front_q__DOT__full)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__full) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_iready)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT___GEN_2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_inner_ser_1_out_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT___q_io_deq_valid) 
              | (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__ser_1__DOT__beat))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___freeOH_T_12 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___freeOH_T_9 
           | VL_SHIFTL_III(32,32,32, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___freeOH_T_9, 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant 
        = ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                   >> 0x1dU)) & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign) 
                                 | (0x19U > (0x3ffU 
                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T)))));
    __Vtemp_2[0U] = (IData)((0x1fffffffffffffULL & 
                             (- (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)))));
    __Vtemp_2[1U] = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                        ? (0x1000000U | ((0x800000U 
                                          & ((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                          >> 0x1dU)))) 
                                             << 0x17U)) 
                                         | (0x7fffffU 
                                            & (~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))))
                        : (((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                            >> 0x1dU))) 
                            << 0x17U) | (0x7fffffU 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))) 
                      << 0x15U) | (IData)(((0x1fffffffffffffULL 
                                            & (- (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)))) 
                                           >> 0x20U)));
    __Vtemp_2[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                       ? (0x1000000U | ((0x800000U 
                                         & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                         >> 0x1dU)))) 
                                            << 0x17U)) 
                                        | (0x7fffffU 
                                           & (~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))))
                       : (((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                           >> 0x1dU))) 
                           << 0x17U) | (0x7fffffU & 
                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))) 
                     >> 0xbU);
    VL_SHIFTRS_WWI(78,78,7, __Vtemp_3, __Vtemp_2, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
                                                    ? 0U
                                                    : 
                                                   ((0x4aU 
                                                     > 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T)))
                                                     ? 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T))
                                                     : 0x4aU)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
        = __Vtemp_3[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
        = __Vtemp_3[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
        = (0x3fffU & __Vtemp_3[2U]);
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__243(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__243\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_5;
    VlWide<6>/*191:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift 
        = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                           ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
                                             ? 0U : 
                                            ((0x4aU 
                                              > (0x3ffU 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T)))
                                              ? (0x1fU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T) 
                                                    >> 2U))
                                              : 0x12U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant 
        = ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                   >> 0x1dU)) & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign) 
                                 | (0x36U > (0x1fffU 
                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T)))));
    __Vtemp_5[0U] = (- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)));
    __Vtemp_5[1U] = (- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)));
    __Vtemp_5[2U] = (- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)));
    __Vtemp_5[3U] = (((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                                ? (0x20000000000000ULL 
                                   | (((QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                       >> 0x1dU))))))) 
                                       << 0x34U) | 
                                      (0xfffffffffffffULL 
                                       & (~ (((QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))))
                                : (((QData)((IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                      >> 0x1dU)))) 
                                    << 0x34U) | (0xfffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U]))))))) 
                      << 0xfU) | (0x7fffU & (- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)))));
    __Vtemp_5[4U] = (((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                                ? (0x20000000000000ULL 
                                   | (((QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                       >> 0x1dU))))))) 
                                       << 0x34U) | 
                                      (0xfffffffffffffULL 
                                       & (~ (((QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))))
                                : (((QData)((IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                      >> 0x1dU)))) 
                                    << 0x34U) | (0xfffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U]))))))) 
                      >> 0x11U) | ((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                                              ? (0x20000000000000ULL 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                                >> 0x1dU))))))) 
                                                     << 0x34U) 
                                                    | (0xfffffffffffffULL 
                                                       & (~ 
                                                          (((QData)((IData)(
                                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))))
                                              : (((QData)((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                    >> 0x1dU)))) 
                                                  << 0x34U) 
                                                 | (0xfffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))) 
                                            >> 0x20U)) 
                                   << 0xfU));
    __Vtemp_5[5U] = ((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                                ? (0x20000000000000ULL 
                                   | (((QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                       >> 0x1dU))))))) 
                                       << 0x34U) | 
                                      (0xfffffffffffffULL 
                                       & (~ (((QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))))
                                : (((QData)((IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                      >> 0x1dU)))) 
                                    << 0x34U) | (0xfffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))) 
                              >> 0x20U)) >> 0x11U);
    VL_SHIFTRS_WWI(165,165,8, __Vtemp_6, __Vtemp_5, 
                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
                     ? 0U : ((0xa1U > (0x1fffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T)))
                              ? (0xffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T))
                              : 0xa1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
        = __Vtemp_6[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
        = __Vtemp_6[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
        = __Vtemp_6[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[3U] 
        = __Vtemp_6[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[4U] 
        = __Vtemp_6[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[5U] 
        = (0x1fU & __Vtemp_6[5U]);
    __Vtemp_8[0U] = 0U;
    __Vtemp_8[1U] = 0U;
    __Vtemp_8[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_9, __Vtemp_8, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
                                                    ? 0U
                                                    : 
                                                   ((0xa1U 
                                                     > 
                                                     (0x1fffU 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T)))
                                                     ? 
                                                    (0x3fU 
                                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T) 
                                                        >> 2U))
                                                     : 0x28U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[0U] 
        = __Vtemp_9[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[1U] 
        = __Vtemp_9[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[2U] 
        = (1U & __Vtemp_9[2U]);
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__244(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__244\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant 
        = ((0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__in_in3[0U] 
                         >> 0xdU))) & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign) 
                                       | (0xcU > (0x7fU 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC 
        = (0x7fffffffffULL & VL_SHIFTRS_QQI(39,39,6, 
                                            (((QData)((IData)(
                                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                                                                ? 
                                                               (0x800U 
                                                                | ((0x400U 
                                                                    & ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__in_in3[0U] 
                                                                                >> 0xdU))))) 
                                                                       << 0xaU)) 
                                                                   | (0x3ffU 
                                                                      & (~ 
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__in_in3[0U]))))
                                                                : 
                                                               (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (7U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__in_in3[0U] 
                                                                              >> 0xdU)))) 
                                                                 << 0xaU) 
                                                                | (0x3ffU 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__in_in3[0U]))))) 
                                              << 0x1bU) 
                                             | (QData)((IData)(
                                                               (0x7ffffffU 
                                                                & (- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags))))))), 
                                            ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
                                              ? 0U : 
                                             ((0x23U 
                                               > (0x7fU 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T)))
                                               ? (0x3fU 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T))
                                               : 0x23U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift 
        = (0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
                                       ? 0U : ((0x23U 
                                                > (0x7fU 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T)))
                                                ? (0xfU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T) 
                                                      >> 2U))
                                                : 8U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT___index_T 
        = (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                   : 0U) ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0) 
                                >> 1U) : 0U)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__245(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__245\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT____VdfgTmp_h4434c2cc__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0) 
              >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___GEN_16 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___GEN_15)) 
                 | (0ULL == vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__len)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT___GEN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___phy_io_inner_ser_1_in_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___in_channels_1_2_io_beat_ready) 
              | (2U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__beat))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT___index_T 
        = (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                   : 0U) ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0) 
                                >> 1U) : 0U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT____VdfgTmp_h4434c2cc__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0) 
              >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx 
        = ((0xfffffff8U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                            << 3U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____VdfgTmp_h04800923__0))) 
           | (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____VdfgTmp_h04800923__0)
                      : 0U) ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____VdfgTmp_h04800923__0) 
                                   >> 1U) : 0U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT___GEN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT___q_io_deq_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___ser_1_io_in_ready));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx 
        = ((0xfffffff8U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                            << 3U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____VdfgTmp_h04800923__0))) 
           | (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____VdfgTmp_h04800923__0)
                      : 0U) ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                                ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____VdfgTmp_h04800923__0) 
                                   >> 1U) : 0U))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__246(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__246\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___GEN_0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___q_io_deq_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___ser_4_io_in_ready));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem 
        = (0x3ffffffffffffffULL & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
                                   - ((((QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___trialTerm_T_9 
                                                                    >> 0x36U))))) 
                                        << 0x36U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___trialTerm_T_9 
                                                                      >> 0x35U)) 
                                                             | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)) 
                                                                & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sqrtOp_Z))))))) 
                                         << 0x35U) 
                                        | (0x1fffffffffffffULL 
                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___trialTerm_T_9 
                                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
                                                  ? 0ULL
                                                  : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__fractB_Z))))) 
                                      | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)) 
                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sqrtOp_Z))
                                          ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                             << 1U)
                                          : 0ULL))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_1_auto_out_d_ready) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__d_drop)) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_in_d_valid)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_auto_in_d_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_1_auto_out_d_ready) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__d_drop)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___buffer_auto_in_d_valid) 
           & ((IData)(((0x2000U == (0x3e00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___coupler_from_debug_sb_auto_tl_out_d_ready))) 
              | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xdU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___coupler_from_port_named_serial_tl_0_in_auto_tl_out_d_ready))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___sb2tlOpt_io_wrDone 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__sb2tlOpt__DOT__sbState)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__sb2tlOpt__DOT__d_q__DOT__do_deq));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__sb2tlOpt__DOT__rdTxValid 
        = ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__sb2tlOpt__DOT__sbState)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__sb2tlOpt__DOT__d_q__DOT__do_deq));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT___index_T 
        = (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                   : 0U) ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0) 
                                >> 1U) : 0U)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__247(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__247\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____VdfgTmp_h4434c2cc__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0) 
              >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT___index_T 
        = (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                   : 0U) ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0) 
                                >> 1U) : 0U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT____VdfgTmp_h4434c2cc__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0) 
              >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT___index_T 
        = (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                   : 0U) ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0) 
                                >> 1U) : 0U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT____VdfgTmp_h4434c2cc__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0) 
              >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT___index_T 
        = (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                   : 0U) ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0) 
                                >> 1U) : 0U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT____VdfgTmp_h4434c2cc__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0) 
              >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT___index_T 
        = (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                   : 0U) ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0) 
                                >> 1U) : 0U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT____VdfgTmp_h4434c2cc__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0) 
              >> 3U));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__248(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__248\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT___index_T 
        = (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                   : 0U) ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0) 
                                >> 1U) : 0U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT____VdfgTmp_h4434c2cc__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0) 
              >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___freeOH_T_12 
        = (0x7fffffffffULL & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___freeOH_T_9 
                              | VL_SHIFTL_QQI(39,39,32, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___freeOH_T_9, 8U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sourceD_io_bs_wdat_data 
        = (((QData)((IData)((0xffU & (((((0xfU & (0xc8e6U 
                                                  >> 
                                                  (0xfU 
                                                   & VL_SHIFTL_III(4,4,32, 
                                                                   (3U 
                                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                         >> ((2U & 
                                              ((IData)(
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                        >> 0x3fU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                           >> 0x3fU))))) 
                                        << 0x1fU) | 
                                       ((0x40000000U 
                                         & (((0xfU 
                                              & (0xc8e6U 
                                                 >> 
                                                 (0xfU 
                                                  & VL_SHIFTL_III(4,4,32, 
                                                                  (3U 
                                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                             >> ((2U 
                                                  & ((IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                              >> 0x3eU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                               >> 0x3eU))))) 
                                            << 0x1eU)) 
                                        | ((0x20000000U 
                                            & (((0xfU 
                                                 & (0xc8e6U 
                                                    >> 
                                                    (0xfU 
                                                     & VL_SHIFTL_III(4,4,32, 
                                                                     (3U 
                                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                >> 
                                                ((2U 
                                                  & ((IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                              >> 0x3dU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                               >> 0x3dU))))) 
                                               << 0x1dU)) 
                                           | ((0x10000000U 
                                               & (((0xfU 
                                                    & (0xc8e6U 
                                                       >> 
                                                       (0xfU 
                                                        & VL_SHIFTL_III(4,4,32, 
                                                                        (3U 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                   >> 
                                                   ((2U 
                                                     & ((IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                 >> 0x3cU)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                  >> 0x3cU))))) 
                                                  << 0x1cU)) 
                                              | ((0x8000000U 
                                                  & (((0xfU 
                                                       & (0xc8e6U 
                                                          >> 
                                                          (0xfU 
                                                           & VL_SHIFTL_III(4,4,32, 
                                                                           (3U 
                                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                      >> 
                                                      ((2U 
                                                        & ((IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                    >> 0x3bU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                     >> 0x3bU))))) 
                                                     << 0x1bU)) 
                                                 | ((0x4000000U 
                                                     & (((0xfU 
                                                          & (0xc8e6U 
                                                             >> 
                                                             (0xfU 
                                                              & VL_SHIFTL_III(4,4,32, 
                                                                              (3U 
                                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                         >> 
                                                         ((2U 
                                                           & ((IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                       >> 0x3aU)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                        >> 0x3aU))))) 
                                                        << 0x1aU)) 
                                                    | ((0x2000000U 
                                                        & (((0xfU 
                                                             & (0xc8e6U 
                                                                >> 
                                                                (0xfU 
                                                                 & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                            >> 
                                                            ((2U 
                                                              & ((IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                          >> 0x39U)) 
                                                                 << 1U)) 
                                                             | (1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                           >> 0x39U))))) 
                                                           << 0x19U)) 
                                                       | ((0x1000000U 
                                                           & (((0xfU 
                                                                & (0xc8e6U 
                                                                   >> 
                                                                   (0xfU 
                                                                    & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                               >> 
                                                               ((2U 
                                                                 & ((IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                             >> 0x38U)) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                              >> 0x38U))))) 
                                                              << 0x18U)) 
                                                          | ((0xff0000U 
                                                              & ((IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_18 
                                                                          >> 0x38U)) 
                                                                 << 0x10U)) 
                                                             | ((0xff00U 
                                                                 & ((IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                             >> 0x38U)) 
                                                                    << 8U)) 
                                                                | (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                              >> 0x38U))))))))))))) 
                                      >> (0x1fU & VL_SHIFTL_III(5,5,32, 
                                                                ((0x80U 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask))
                                                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h3af395f3__0)
                                                                  : 0U), 3U)))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           (((((0xfU 
                                                & (0xc8e6U 
                                                   >> 
                                                   (0xfU 
                                                    & VL_SHIFTL_III(4,4,32, 
                                                                    (3U 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                >> 0x37U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                 >> 0x37U))))) 
                                              << 0x1fU) 
                                             | ((0x40000000U 
                                                 & (((0xfU 
                                                      & (0xc8e6U 
                                                         >> 
                                                         (0xfU 
                                                          & VL_SHIFTL_III(4,4,32, 
                                                                          (3U 
                                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                     >> 
                                                     ((2U 
                                                       & ((IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                   >> 0x36U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                    >> 0x36U))))) 
                                                    << 0x1eU)) 
                                                | ((0x20000000U 
                                                    & (((0xfU 
                                                         & (0xc8e6U 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,4,32, 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                        >> 
                                                        ((2U 
                                                          & ((IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                      >> 0x35U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                       >> 0x35U))))) 
                                                       << 0x1dU)) 
                                                   | ((0x10000000U 
                                                       & (((0xfU 
                                                            & (0xc8e6U 
                                                               >> 
                                                               (0xfU 
                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                           >> 
                                                           ((2U 
                                                             & ((IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                         >> 0x34U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                          >> 0x34U))))) 
                                                          << 0x1cU)) 
                                                      | ((0x8000000U 
                                                          & (((0xfU 
                                                               & (0xc8e6U 
                                                                  >> 
                                                                  (0xfU 
                                                                   & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                              >> 
                                                              ((2U 
                                                                & ((IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                            >> 0x33U)) 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                             >> 0x33U))))) 
                                                             << 0x1bU)) 
                                                         | ((0x4000000U 
                                                             & (((0xfU 
                                                                  & (0xc8e6U 
                                                                     >> 
                                                                     (0xfU 
                                                                      & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                 >> 
                                                                 ((2U 
                                                                   & ((IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                               >> 0x32U)) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x32U))))) 
                                                                << 0x1aU)) 
                                                            | ((0x2000000U 
                                                                & (((0xfU 
                                                                     & (0xc8e6U 
                                                                        >> 
                                                                        (0xfU 
                                                                         & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                    >> 
                                                                    ((2U 
                                                                      & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x31U)) 
                                                                         << 1U)) 
                                                                     | (1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x31U))))) 
                                                                   << 0x19U)) 
                                                               | ((0x1000000U 
                                                                   & (((0xfU 
                                                                        & (0xc8e6U 
                                                                           >> 
                                                                           (0xfU 
                                                                            & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                       >> 
                                                                       ((2U 
                                                                         & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x30U)) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x30U))))) 
                                                                      << 0x18U)) 
                                                                  | ((0xff0000U 
                                                                      & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_18 
                                                                                >> 0x30U)) 
                                                                         << 0x10U)) 
                                                                     | ((0xff00U 
                                                                         & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x30U)) 
                                                                            << 8U)) 
                                                                        | (0xffU 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x30U))))))))))))) 
                                            >> (0x1fU 
                                                & VL_SHIFTL_III(5,5,32, 
                                                                ((0x40U 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask))
                                                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h3af395f3__0)
                                                                  : 0U), 3U)))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & (((((0xfU 
                                                                & (0xc8e6U 
                                                                   >> 
                                                                   (0xfU 
                                                                    & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                               >> 
                                                               ((2U 
                                                                 & ((IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                             >> 0x2fU)) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                              >> 0x2fU))))) 
                                                              << 0x1fU) 
                                                             | ((0x40000000U 
                                                                 & (((0xfU 
                                                                      & (0xc8e6U 
                                                                         >> 
                                                                         (0xfU 
                                                                          & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                     >> 
                                                                     ((2U 
                                                                       & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x2eU)) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x2eU))))) 
                                                                    << 0x1eU)) 
                                                                | ((0x20000000U 
                                                                    & (((0xfU 
                                                                         & (0xc8e6U 
                                                                            >> 
                                                                            (0xfU 
                                                                             & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                        >> 
                                                                        ((2U 
                                                                          & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x2dU)) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x2dU))))) 
                                                                       << 0x1dU)) 
                                                                   | ((0x10000000U 
                                                                       & (((0xfU 
                                                                            & (0xc8e6U 
                                                                               >> 
                                                                               (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                           >> 
                                                                           ((2U 
                                                                             & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x2cU)) 
                                                                                << 1U)) 
                                                                            | (1U 
                                                                               & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x2cU))))) 
                                                                          << 0x1cU)) 
                                                                      | ((0x8000000U 
                                                                          & (((0xfU 
                                                                               & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                              >> 
                                                                              ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x2bU)) 
                                                                                << 1U)) 
                                                                               | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x2bU))))) 
                                                                             << 0x1bU)) 
                                                                         | ((0x4000000U 
                                                                             & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x2aU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x2aU))))) 
                                                                                << 0x1aU)) 
                                                                            | ((0x2000000U 
                                                                                & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x29U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x29U))))) 
                                                                                << 0x19U)) 
                                                                               | ((0x1000000U 
                                                                                & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x28U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x28U))))) 
                                                                                << 0x18U)) 
                                                                                | ((0xff0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_18 
                                                                                >> 0x28U)) 
                                                                                << 0x10U)) 
                                                                                | ((0xff00U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x28U)) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x28U))))))))))))) 
                                                            >> 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(5,5,32, 
                                                                             ((0x20U 
                                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask))
                                                                               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h3af395f3__0)
                                                                               : 0U), 3U)))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & (((((0xfU 
                                                                 & (0xc8e6U 
                                                                    >> 
                                                                    (0xfU 
                                                                     & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                >> 
                                                                ((2U 
                                                                  & ((IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                              >> 0x27U)) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                               >> 0x27U))))) 
                                                               << 0x1fU) 
                                                              | ((0x40000000U 
                                                                  & (((0xfU 
                                                                       & (0xc8e6U 
                                                                          >> 
                                                                          (0xfU 
                                                                           & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                      >> 
                                                                      ((2U 
                                                                        & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x26U)) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x26U))))) 
                                                                     << 0x1eU)) 
                                                                 | ((0x20000000U 
                                                                     & (((0xfU 
                                                                          & (0xc8e6U 
                                                                             >> 
                                                                             (0xfU 
                                                                              & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                         >> 
                                                                         ((2U 
                                                                           & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x25U)) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x25U))))) 
                                                                        << 0x1dU)) 
                                                                    | ((0x10000000U 
                                                                        & (((0xfU 
                                                                             & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                            >> 
                                                                            ((2U 
                                                                              & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x24U)) 
                                                                                << 1U)) 
                                                                             | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x24U))))) 
                                                                           << 0x1cU)) 
                                                                       | ((0x8000000U 
                                                                           & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                               >> 
                                                                               ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x23U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x23U))))) 
                                                                              << 0x1bU)) 
                                                                          | ((0x4000000U 
                                                                              & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x22U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x22U))))) 
                                                                                << 0x1aU)) 
                                                                             | ((0x2000000U 
                                                                                & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x21U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x21U))))) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x20U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x20U))))) 
                                                                                << 0x18U)) 
                                                                                | ((0xff0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_18 
                                                                                >> 0x20U)) 
                                                                                << 0x10U)) 
                                                                                | ((0xff00U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x20U)) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x20U))))))))))))) 
                                                             >> 
                                                             (0x1fU 
                                                              & VL_SHIFTL_III(5,5,32, 
                                                                              ((0x10U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask))
                                                                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h3af395f3__0)
                                                                                : 0U), 3U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((((((0xfU 
                                                                 & (0xc8e6U 
                                                                    >> 
                                                                    (0xfU 
                                                                     & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                >> 
                                                                ((2U 
                                                                  & ((IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                              >> 0x1fU)) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                               >> 0x1fU))))) 
                                                               << 0x1fU) 
                                                              | ((0x40000000U 
                                                                  & (((0xfU 
                                                                       & (0xc8e6U 
                                                                          >> 
                                                                          (0xfU 
                                                                           & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                      >> 
                                                                      ((2U 
                                                                        & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x1eU)) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x1eU))))) 
                                                                     << 0x1eU)) 
                                                                 | ((0x20000000U 
                                                                     & (((0xfU 
                                                                          & (0xc8e6U 
                                                                             >> 
                                                                             (0xfU 
                                                                              & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                         >> 
                                                                         ((2U 
                                                                           & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x1dU)) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x1dU))))) 
                                                                        << 0x1dU)) 
                                                                    | ((0x10000000U 
                                                                        & (((0xfU 
                                                                             & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                            >> 
                                                                            ((2U 
                                                                              & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x1cU)) 
                                                                                << 1U)) 
                                                                             | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x1cU))))) 
                                                                           << 0x1cU)) 
                                                                       | ((0x8000000U 
                                                                           & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                               >> 
                                                                               ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x1bU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x1bU))))) 
                                                                              << 0x1bU)) 
                                                                          | ((0x4000000U 
                                                                              & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x1aU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x1aU))))) 
                                                                                << 0x1aU)) 
                                                                             | ((0x2000000U 
                                                                                & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x19U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x19U))))) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x18U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x18U))))) 
                                                                                << 0x18U)) 
                                                                                | ((0xff0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_18 
                                                                                >> 0x18U)) 
                                                                                << 0x10U)) 
                                                                                | ((0xff00U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x18U)) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x18U))))))))))))) 
                                                             >> 
                                                             (0x1fU 
                                                              & VL_SHIFTL_III(5,5,32, 
                                                                              ((8U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask))
                                                                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h3af395f3__0)
                                                                                : 0U), 3U))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & ((((((0xfU 
                                                                       & (0xc8e6U 
                                                                          >> 
                                                                          (0xfU 
                                                                           & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                      >> 
                                                                      ((2U 
                                                                        & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x17U)) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x17U))))) 
                                                                     << 0x1fU) 
                                                                    | ((0x40000000U 
                                                                        & (((0xfU 
                                                                             & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                            >> 
                                                                            ((2U 
                                                                              & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x16U)) 
                                                                                << 1U)) 
                                                                             | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x16U))))) 
                                                                           << 0x1eU)) 
                                                                       | ((0x20000000U 
                                                                           & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                               >> 
                                                                               ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x15U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x15U))))) 
                                                                              << 0x1dU)) 
                                                                          | ((0x10000000U 
                                                                              & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x14U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x14U))))) 
                                                                                << 0x1cU)) 
                                                                             | ((0x8000000U 
                                                                                & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x13U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x13U))))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x12U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x12U))))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x11U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x11U))))) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x10U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x10U))))) 
                                                                                << 0x18U)) 
                                                                                | ((0xff0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_18 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0xff00U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0x10U)) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0x10U))))))))))))) 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & VL_SHIFTL_III(5,5,32, 
                                                                                ((4U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask))
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h3af395f3__0)
                                                                                 : 0U), 3U))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & ((((((0xfU 
                                                                          & (0xc8e6U 
                                                                             >> 
                                                                             (0xfU 
                                                                              & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                         >> 
                                                                         ((2U 
                                                                           & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0xfU)) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0xfU))))) 
                                                                        << 0x1fU) 
                                                                       | ((0x40000000U 
                                                                           & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                               >> 
                                                                               ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0xeU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0xeU))))) 
                                                                              << 0x1eU)) 
                                                                          | ((0x20000000U 
                                                                              & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0xdU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0xdU))))) 
                                                                                << 0x1dU)) 
                                                                             | ((0x10000000U 
                                                                                & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0xcU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0xcU))))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0xbU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0xbU))))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 0xaU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 0xaU))))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 9U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 9U))))) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 8U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 8U))))) 
                                                                                << 0x18U)) 
                                                                                | ((0xff0000U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_18 
                                                                                >> 8U)) 
                                                                                << 0x10U)) 
                                                                                | ((0xff00U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 8U))))))))))))) 
                                                                      >> 
                                                                      (0x1fU 
                                                                       & VL_SHIFTL_III(5,5,32, 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask))
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h3af395f3__0)
                                                                                 : 0U), 3U))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & (((((0xfU 
                                                                           & (0xc8e6U 
                                                                              >> 
                                                                              (0xfU 
                                                                               & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                          >> 
                                                                          ((2U 
                                                                            & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 7U)) 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 7U))))) 
                                                                         << 0x1fU) 
                                                                        | ((0x40000000U 
                                                                            & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 6U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 6U))))) 
                                                                               << 0x1eU)) 
                                                                           | ((0x20000000U 
                                                                               & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 5U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 5U))))) 
                                                                                << 0x1dU)) 
                                                                              | ((0x10000000U 
                                                                                & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 4U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 4U))))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 3U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 3U))))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 2U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 2U))))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata 
                                                                                >> 1U))))) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & (((0xfU 
                                                                                & (0xc8e6U 
                                                                                >> 
                                                                                (0xfU 
                                                                                & VL_SHIFTL_III(4,4,32, 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_req_param)), 2U)))) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata)))) 
                                                                                << 0x18U)) 
                                                                                | ((0xff0000U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT___sum_T_18) 
                                                                                << 0x10U)) 
                                                                                | ((0xff00U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_data) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_rdata)))))))))))) 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & VL_SHIFTL_III(5,5,32, 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_pdata_mask))
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__atomics__DOT____VdfgTmp_h3af395f3__0)
                                                                                 : 0U), 3U)))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__249(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__249\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_port_named_serial_tl_0_in_buffer_in_a_ready) 
           & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__in_channels_4_2__DOT__is_const)) 
               | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__des_4__DOT__data_0) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___des_4_io_out_valid)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT___index_T 
        = (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                   : 0U) ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0) 
                                >> 1U) : 0U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT____VdfgTmp_h4434c2cc__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0) 
              >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT___buffer_auto_out_d_ready) 
           & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__is_const)) 
               | vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__data_0) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___des_1_io_out_valid)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT___GEN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___in_channels_1_2_io_beat_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___des_1_io_out_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT___index_T 
        = (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                   : 0U) ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0) 
                                >> 1U) : 0U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____VdfgTmp_h4434c2cc__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0) 
              >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_l2_ctrl_auto_tl_in_d_bits_size 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__acknum))
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__dOrig));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_plic_auto_tl_in_d_bits_size 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__acknum))
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dOrig));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_debug_sb__DOT__widget__DOT__repeated_repeater__DOT___GEN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___coupler_from_debug_sb_auto_tl_out_d_ready) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_debug_sb__DOT__widget__DOT__repeat_last)) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_0_d_valid)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__250(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__250\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___fbus_auto_coupler_from_debug_sb_widget_anon_in_d_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT__coupler_from_debug_sb__DOT__widget__DOT__repeated_repeater__DOT__full) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus__DOT___fbus_xbar_auto_anon_in_0_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_26 
        = ((IData)(((0ULL == (0x7c00ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_6)) 
                    & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_6)))))))
            ? 0U : (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_rawIn_adjustedExp_T_14) 
                          >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_8 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT____VdfgTmp_h41b71d68__0)
            ? 0U : (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_rawIn_adjustedExp_T_4) 
                          >> 9U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN_0 
        = (1U & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT____VdfgTmp_h41b71d68__0)) 
                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_rawIn_adjustedExp_T_4) 
                     >> 9U)) | (IData)(((0xc00U == 
                                         (0xc00U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_rawIn_adjustedExp_T_4))) 
                                        & (0U != (0xfffffffffffffULL 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_6))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_17 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT____VdfgTmp_h67ab473d__0)
            ? 0U : (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_rawIn_adjustedExp_T_9) 
                          >> 6U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN_1 
        = (1U & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT____VdfgTmp_h67ab473d__0)) 
                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_rawIn_adjustedExp_T_9) 
                     >> 6U)) | (IData)(((0x180U == 
                                         (0x180U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_rawIn_adjustedExp_T_9))) 
                                        & (0U != (0x7fffffU 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_6)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___out_channels_1_2_io_beat_bits_tail 
        = (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__tail_counter)) 
            | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__tail_beats1))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT____VdfgTmp_hba375c0d__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT__q_io_deq_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___ser_1_io_in_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__out_channels_1_2__DOT____VdfgTmp_hba375c0d__0));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__251(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__251\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_anon_out_a_bits_address 
        = ((0xfffffc0U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
           | (0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                       | (0x38U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__aFragnum) 
                                       | (0x3ffU & 
                                          (((IData)(0x3fU) 
                                            << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                           >> 3U)))) 
                                   << 3U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_anon_out_a_bits_opcode) 
            >> 2U) & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__aFragnum)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT___GEN_0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_anon_out_d_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_full));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___ram_auto_in_a_ready 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_full)) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_anon_out_d_ready)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___out_channels_4_2_io_beat_bits_tail 
        = (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__tail_counter)) 
            | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__tail_beats1))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT____VdfgTmp_heee498bb__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q_io_deq_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT___ser_4_io_in_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT____VdfgTmp_heee498bb__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__metaArb_io_in_6_valid 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__release_state)) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_anon_in_0_b_valid) 
              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__block_probe_for_core_progress)) 
                 | ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lrscCount)) 
                    & (4U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lrscCount))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced4SigExtra_shift 
        = (0x1ffffU & VL_SHIFTRS_III(17,17,4, 0x10000U, 
                                     ((1U & (IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                     >> 0x32U)))
                                       ? 0xfU : ((0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                              >> 0x30U))))
                                                  ? 0xfU
                                                  : 
                                                 ((0U 
                                                   != 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                               >> 0x2eU))))
                                                   ? 0xeU
                                                   : 
                                                  ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 0x2cU))))
                                                    ? 0xeU
                                                    : 
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                 >> 0x2aU))))
                                                     ? 0xdU
                                                     : 
                                                    ((0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                  >> 0x28U))))
                                                      ? 0xdU
                                                      : 
                                                     ((0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 0x26U))))
                                                       ? 0xcU
                                                       : 
                                                      ((0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                    >> 0x24U))))
                                                        ? 0xcU
                                                        : 
                                                       ((0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                     >> 0x22U))))
                                                         ? 0xbU
                                                         : 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                      >> 0x20U))))
                                                          ? 0xbU
                                                          : 
                                                         ((0U 
                                                           != 
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                       >> 0x1eU))))
                                                           ? 0xaU
                                                           : 
                                                          ((0U 
                                                            != 
                                                            (3U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                        >> 0x1cU))))
                                                            ? 0xaU
                                                            : 
                                                           ((0U 
                                                             != 
                                                             (3U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                         >> 0x1aU))))
                                                             ? 9U
                                                             : 
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                          >> 0x18U))))
                                                              ? 9U
                                                              : 
                                                             ((0U 
                                                               != 
                                                               (3U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                           >> 0x16U))))
                                                               ? 8U
                                                               : 
                                                              ((0U 
                                                                != 
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                            >> 0x14U))))
                                                                ? 8U
                                                                : 
                                                               ((0U 
                                                                 != 
                                                                 (3U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                             >> 0x12U))))
                                                                 ? 7U
                                                                 : 
                                                                ((0U 
                                                                  != 
                                                                  (3U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                              >> 0x10U))))
                                                                  ? 7U
                                                                  : 
                                                                 ((0U 
                                                                   != 
                                                                   (3U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                               >> 0xeU))))
                                                                   ? 6U
                                                                   : 
                                                                  ((0U 
                                                                    != 
                                                                    (3U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0xcU))))
                                                                    ? 6U
                                                                    : 
                                                                   ((0U 
                                                                     != 
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 0xaU))))
                                                                     ? 5U
                                                                     : 
                                                                    ((0U 
                                                                      != 
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 8U))))
                                                                      ? 5U
                                                                      : 
                                                                     ((0U 
                                                                       != 
                                                                       (3U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 6U))))
                                                                       ? 4U
                                                                       : 
                                                                      ((0U 
                                                                        != 
                                                                        (3U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                                >> 4U))))
                                                                        ? 4U
                                                                        : 3U))))))))))))))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__253(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__253\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced4SigExtra_shift 
        = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                           ((0x1000U 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U])
                                             ? 0x1fU
                                             : ((0U 
                                                 != 
                                                 (3U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                     >> 0xaU)))
                                                 ? 0x1fU
                                                 : 
                                                ((0U 
                                                  != 
                                                  (3U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                      >> 8U)))
                                                  ? 0x1eU
                                                  : 
                                                 ((0U 
                                                   != 
                                                   (3U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                       >> 6U)))
                                                   ? 0x1eU
                                                   : 
                                                  ((0U 
                                                    != 
                                                    (3U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                        >> 4U)))
                                                    ? 0x1dU
                                                    : 
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                         >> 2U)))
                                                     ? 0x1dU
                                                     : 
                                                    ((0U 
                                                      != 
                                                      (3U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U]))
                                                      ? 0x1cU
                                                      : 
                                                     ((0U 
                                                       != 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                        >> 0x1eU))
                                                       ? 0x1cU
                                                       : 
                                                      ((0U 
                                                        != 
                                                        (3U 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                            >> 0x1cU)))
                                                        ? 0x1bU
                                                        : 
                                                       ((0U 
                                                         != 
                                                         (3U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                             >> 0x1aU)))
                                                         ? 0x1bU
                                                         : 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                              >> 0x18U)))
                                                          ? 0x1aU
                                                          : 
                                                         ((0U 
                                                           != 
                                                           (3U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                               >> 0x16U)))
                                                           ? 0x1aU
                                                           : 
                                                          ((0U 
                                                            != 
                                                            (3U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                >> 0x14U)))
                                                            ? 0x19U
                                                            : 
                                                           ((0U 
                                                             != 
                                                             (3U 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                 >> 0x12U)))
                                                             ? 0x19U
                                                             : 
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                  >> 0x10U)))
                                                              ? 0x18U
                                                              : 
                                                             ((0U 
                                                               != 
                                                               (3U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                   >> 0xeU)))
                                                               ? 0x18U
                                                               : 
                                                              ((0U 
                                                                != 
                                                                (3U 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                    >> 0xcU)))
                                                                ? 0x17U
                                                                : 
                                                               ((0U 
                                                                 != 
                                                                 (3U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                     >> 0xaU)))
                                                                 ? 0x17U
                                                                 : 
                                                                ((0U 
                                                                  != 
                                                                  (3U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                      >> 8U)))
                                                                  ? 0x16U
                                                                  : 
                                                                 ((0U 
                                                                   != 
                                                                   (3U 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                       >> 6U)))
                                                                   ? 0x16U
                                                                   : 
                                                                  ((0U 
                                                                    != 
                                                                    (3U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                        >> 4U)))
                                                                    ? 0x15U
                                                                    : 
                                                                   ((0U 
                                                                     != 
                                                                     (3U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                         >> 2U)))
                                                                     ? 0x15U
                                                                     : 
                                                                    ((0U 
                                                                      != 
                                                                      (3U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U]))
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0U 
                                                                       != 
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                        >> 0x1eU))
                                                                       ? 0x14U
                                                                       : 
                                                                      ((0U 
                                                                        != 
                                                                        (3U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                            >> 0x1cU)))
                                                                        ? 0x13U
                                                                        : 
                                                                       ((0U 
                                                                         != 
                                                                         (3U 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                             >> 0x1aU)))
                                                                         ? 0x13U
                                                                         : 
                                                                        ((0U 
                                                                          != 
                                                                          (3U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                              >> 0x18U)))
                                                                          ? 0x12U
                                                                          : 
                                                                         ((0U 
                                                                           != 
                                                                           (3U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                               >> 0x16U)))
                                                                           ? 0x12U
                                                                           : 
                                                                          ((0U 
                                                                            != 
                                                                            (3U 
                                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 0x14U)))
                                                                            ? 0x11U
                                                                            : 
                                                                           ((0U 
                                                                             != 
                                                                             (3U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 0x12U)))
                                                                             ? 0x11U
                                                                             : 
                                                                            ((0U 
                                                                              != 
                                                                              (3U 
                                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 0x10U)))
                                                                              ? 0x10U
                                                                              : 
                                                                             ((0U 
                                                                               != 
                                                                               (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 0xeU)))
                                                                               ? 0x10U
                                                                               : 
                                                                              ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 0xcU)))
                                                                                ? 0xfU
                                                                                : 
                                                                               ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 0xaU)))
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 8U)))
                                                                                 ? 0xeU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 6U)))
                                                                                 ? 0xeU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 4U)))
                                                                                 ? 0xdU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 2U)))
                                                                                 ? 0xdU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U]))
                                                                                 ? 0xcU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0x1eU))
                                                                                 ? 0xcU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0x1cU)))
                                                                                 ? 0xbU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0x1aU)))
                                                                                 ? 0xbU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0x18U)))
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0x16U)))
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0x14U)))
                                                                                 ? 9U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0x12U)))
                                                                                 ? 9U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0x10U)))
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0xeU)))
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0xcU)))
                                                                                 ? 7U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0xaU)))
                                                                                 ? 7U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 8U)))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 6U)))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 4U)))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 2U)))
                                                                                 ? 5U
                                                                                 : 4U))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__255(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__255\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced4SigExtra_shift 
        = (0x1ffU & VL_SHIFTRS_III(9,9,3, 0x100U, (
                                                   (0x1000000U 
                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum)
                                                    ? 7U
                                                    : 
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                         >> 0x16U)))
                                                     ? 7U
                                                     : 
                                                    ((0U 
                                                      != 
                                                      (3U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                          >> 0x14U)))
                                                      ? 6U
                                                      : 
                                                     ((0U 
                                                       != 
                                                       (3U 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 0x12U)))
                                                       ? 6U
                                                       : 
                                                      ((0U 
                                                        != 
                                                        (3U 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 0x10U)))
                                                        ? 5U
                                                        : 
                                                       ((0U 
                                                         != 
                                                         (3U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                             >> 0xeU)))
                                                         ? 5U
                                                         : 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                              >> 0xcU)))
                                                          ? 4U
                                                          : 
                                                         ((0U 
                                                           != 
                                                           (3U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                               >> 0xaU)))
                                                           ? 4U
                                                           : 
                                                          ((0U 
                                                            != 
                                                            (3U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                >> 8U)))
                                                            ? 3U
                                                            : 
                                                           ((0U 
                                                             != 
                                                             (3U 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                 >> 6U)))
                                                             ? 3U
                                                             : 
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                  >> 4U)))
                                                              ? 2U
                                                              : 
                                                             ((0U 
                                                               != 
                                                               (3U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                                   >> 2U)))
                                                               ? 2U
                                                               : 1U))))))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgTmp_h6bf72960__0 
        = (((0x1000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum)
             ? 0U : ((0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                   >> 0x16U))) ? 1U
                      : ((0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                       >> 0x14U))) ? 2U
                          : ((0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                           >> 0x12U)))
                              ? 3U : ((0U != (3U & 
                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                               >> 0x10U)))
                                       ? 4U : ((0U 
                                                != 
                                                (3U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                    >> 0xeU)))
                                                ? 5U
                                                : (
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                        >> 0xcU)))
                                                    ? 6U
                                                    : 
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                         >> 0xaU)))
                                                     ? 7U
                                                     : 
                                                    ((0U 
                                                      != 
                                                      (3U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                          >> 8U)))
                                                      ? 8U
                                                      : 
                                                     ((0U 
                                                       != 
                                                       (3U 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                           >> 6U)))
                                                       ? 9U
                                                       : 
                                                      ((0U 
                                                        != 
                                                        (3U 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                            >> 4U)))
                                                        ? 0xaU
                                                        : 
                                                       ((0U 
                                                         != 
                                                         (3U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__hfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                                                             >> 2U)))
                                                         ? 0xbU
                                                         : 0xcU)))))))))))) 
           << 1U);
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__256(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__256\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_6;
    VlWide<8>/*255:0*/ __Vtemp_12;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__source_i_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___buffer_1_auto_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__a_allow));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT___freeOH_T_12 
        = (0x7fffffffffULL & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT___freeOH_T_9 
                              | VL_SHIFTL_QQI(39,39,32, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT___freeOH_T_9, 8U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT____VdfgTmp_h64f2d675__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT__beat) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_in_ready));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT__beat) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT____VdfgTmp_h64f2d675__0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_serial_tl_0_out_ready_i;
        __Vtemp_6[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        __Vtemp_6[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        __Vtemp_6[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        __Vtemp_6[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        __Vtemp_6[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        __Vtemp_6[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        __Vtemp_6[6U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        __Vtemp_6[7U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit 
            = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT__chosen), 5U)))
                 ? 0U : (__Vtemp_6[(((IData)(0x1fU) 
                                     + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT__chosen), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT__chosen), 5U))))) 
               | (__Vtemp_6[(7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT__chosen), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT__chosen), 5U))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT____VdfgTmp_h64f2d675__0 = 0U;
        __Vtemp_6[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        __Vtemp_6[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        __Vtemp_6[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        __Vtemp_6[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        __Vtemp_6[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        __Vtemp_6[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        __Vtemp_6[6U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        __Vtemp_6[7U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_serial_tl_0_out_bits_phit 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT__chosen;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_arb_io_out_valid 
        = (1U & (((0xe0U & ((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_deq_valid))) 
                            << 5U)) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_4_io_deq_valid) 
                                        << 4U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_3_io_deq_valid) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_2_io_deq_valid) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_1_io_deq_valid) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_deq_valid)))))) 
                 >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT__chosen)));
    __Vtemp_12[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
    __Vtemp_12[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
    __Vtemp_12[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
    __Vtemp_12[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
    __Vtemp_12[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
    __Vtemp_12[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
    __Vtemp_12[6U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
    __Vtemp_12[7U] = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___in_demux_io_out_0_bits_phit 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT__beat)
            ? (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT__chosen), 5U)))
                 ? 0U : (__Vtemp_12[(((IData)(0x1fU) 
                                      + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT__chosen), 5U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT__chosen), 5U))))) 
               | (__Vtemp_12[(7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT__chosen), 5U) 
                                    >> 5U))] >> (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT__chosen), 5U))))
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT__chosen));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_arb_io_out_valid 
        = (1U & (((0xe0U & ((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_deq_valid))) 
                            << 5U)) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_4_io_deq_valid) 
                                        << 4U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_3_io_deq_valid) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_2_io_deq_valid) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_1_io_deq_valid) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_deq_valid)))))) 
                 >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT__chosen)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__257(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__257\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_1 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____VdfgTmp_hf0e08ad7__0)) 
            & (IData)(((0xc00U == (0xc00U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_rawIn_adjustedExp_T_4))) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN))))
            ? (((QData)((IData)((0xfffffU == (0xfffffU 
                                              & (IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_rawIn_out_sig_T_2 
                                                         >> 0x20U)))))) 
                << 0x3cU) | (((QData)((IData)((0x7fU 
                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_rawIn_adjustedExp_T_4) 
                                                  >> 1U)))) 
                              << 0x35U) | (((QData)((IData)(
                                                            ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____VdfgTmp_hdbdc4793__0) 
                                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_rawIn_adjustedExp_T_9) 
                                                                >> 8U)))) 
                                            << 0x34U) 
                                           | (((QData)((IData)(
                                                               (0xfffffU 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_rawIn_out_sig_T_2 
                                                                           >> 0x20U))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_T_6 
                                                                           >> 0x1fU)) 
                                                                  << 0x1fU) 
                                                                 | ((0xc0000000U 
                                                                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____VdfgTmp_hdbdc4793__0) 
                                                                         << 0x1eU) 
                                                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_rawIn_adjustedExp_T_9) 
                                                                           << 0x17U))) 
                                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0) 
                                                                        << 0x1dU) 
                                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____VdfgTmp_hdbdc4793__0) 
                                                                           & (IData)(
                                                                                ((0x180U 
                                                                                == 
                                                                                (0x180U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_rawIn_adjustedExp_T_9))) 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___GEN_0))))
                                                                           ? 
                                                                          (((IData)(
                                                                                (0x7fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_rawIn_out_sig_T_6 
                                                                                >> 0x10U)))) 
                                                                            << 0x1cU) 
                                                                           | ((0xf000000U 
                                                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_rawIn_adjustedExp_T_9) 
                                                                                << 0x17U)) 
                                                                              | ((0xff800000U 
                                                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____VdfgTmp_hd7c47abf__0) 
                                                                                << 0x17U) 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_rawIn_adjustedExp_T_14) 
                                                                                << 0x12U))) 
                                                                                | ((0x7f0000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_rawIn_out_sig_T_6) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_T_6 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0xffffc000U 
                                                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____VdfgTmp_hd7c47abf__0) 
                                                                                << 0xeU) 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_rawIn_adjustedExp_T_14) 
                                                                                << 0xaU))) 
                                                                                | (((0xffffe000U 
                                                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____VdfgTmp_hd7c47abf__0) 
                                                                                << 0xdU) 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_rawIn_adjustedExp_T_14) 
                                                                                << 0xaU))) 
                                                                                | ((IData)(
                                                                                ((0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_rawIn_adjustedExp_T_14))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x3ffU 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_T_6))))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1c00U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_rawIn_adjustedExp_T_14) 
                                                                                << 0xaU)) 
                                                                                | (0x3ffU 
                                                                                & ((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_T_6 
                                                                                >> 0xaU))))
                                                                                 ? 
                                                                                (0x3feU 
                                                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_T_6) 
                                                                                << 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_T_6 
                                                                                >> 9U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_T_6 
                                                                                >> 8U)))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_T_6 
                                                                                >> 7U)))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_T_6 
                                                                                >> 6U)))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_T_6 
                                                                                >> 5U)))
                                                                                 ? 4U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_T_6 
                                                                                >> 4U)))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_T_6 
                                                                                >> 3U)))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_T_6 
                                                                                >> 2U)))
                                                                                 ? 7U
                                                                                 : 
                                                                                (8U 
                                                                                | (1U 
                                                                                & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_T_6 
                                                                                >> 1U)))))))))))))) 
                                                                                << 1U))
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_T_6)))))))))))
                                                                           : 
                                                                          ((0x1f800000U 
                                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_rawIn_adjustedExp_T_9) 
                                                                               << 0x17U)) 
                                                                           | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_rawIn_out_sig_T_6)))))))))))
            : (((QData)((IData)((0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_rawIn_adjustedExp_T_4)))) 
                << 0x34U) | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___wdata_rawIn_out_sig_T_2));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__258(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__258\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_12;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_leftOne_10 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_9) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_10));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_9 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_11) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_12));
    __Vtemp_5[0U] = 0U;
    __Vtemp_5[1U] = 0U;
    __Vtemp_5[2U] = 0U;
    __Vtemp_6[0U] = 0xffffffffU;
    __Vtemp_6[1U] = 0xffffffffU;
    __Vtemp_6[2U] = 1U;
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_wflags) {
        if ((7U == (7U & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U] 
                            << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U] 
                                      >> 0x1dU)) & 
                          ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in2[1U] 
                            << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in2[1U] 
                                      >> 0x1dU)))))) {
            __Vtemp_12[0U] = 0U;
            __Vtemp_12[1U] = 0xe0080000U;
            __Vtemp_12[2U] = 0U;
        } else if ((1U & ((~ ((7U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U] 
                                      >> 0x1dU)) | 
                              ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_rm)) 
                               == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT___dcmp_io_lt) 
                                   | (VL_GTS_IWW(65, __Vtemp_5, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1) 
                                      & VL_LTS_IWW(65, __Vtemp_6, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2)))))) 
                          | (7U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in2[1U] 
                                    >> 0x1dU))))) {
            __Vtemp_12[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[0U];
            __Vtemp_12[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U];
            __Vtemp_12[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[2U];
        } else {
            __Vtemp_12[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in2[0U];
            __Vtemp_12[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in2[1U];
            __Vtemp_12[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in2[2U];
        }
    } else {
        __Vtemp_12[0U] = (IData)((((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[0U]))));
        __Vtemp_12[1U] = (IData)(((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[0U]))) 
                                  >> 0x20U));
        __Vtemp_12[2U] = (1U & ((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_rm))
                                 ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[2U] 
                                    ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in2[2U])
                                 : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_rm) 
                                    ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in2[2U])));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT___GEN) {
        if ((7U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U] 
                    >> 0x1dU))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[0U] = 0U;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] = 0xe0080000U;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] = 0U;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[0U] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[0U];
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U];
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[2U];
        }
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[0U] 
            = __Vtemp_12[0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
            = __Vtemp_12[1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
            = __Vtemp_12[2U];
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___mem_npc_T_4 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_jalr) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_sfence))
            ? (((QData)((IData)((1U & (((0U == (0x1ffffffU 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_wdata 
                                                           >> 0x27U)))) 
                                        | (0x1ffffffU 
                                           == (0x1ffffffU 
                                               & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_wdata 
                                                          >> 0x27U)))))
                                        ? (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_wdata 
                                                   >> 0x27U))
                                        : (~ (IData)(
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_wdata 
                                                      >> 0x26U))))))) 
                << 0x27U) | (0x7fffffffffULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_wdata))
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___mem_br_target_T_9);
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__259(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__259\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT___toint_ieee_T_4 
        = (0xffffU & ((7U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                              >> 0x1dU)) ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT____VdfgTmp_ha47cf77a__0)
                                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT____VdfgTmp_h4e9a4cb3__0)
                                             : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__io_out_bits_store_prevUnrecoded_unrecoded_isSubnormal_2)
                                                 ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT___io_out_bits_store_prevUnrecoded_unrecoded_denormFract_T_5
                                                 : 
                                                ((IData)(
                                                         ((0x40000000U 
                                                           == 
                                                           (0x60000000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U])) 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                             >> 0x14U)))
                                                  ? 0U
                                                  : 
                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U])))
                       : (VL_GTS_III(13, 0x402U, (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                  >> 0x14U))
                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT___io_out_bits_store_unrecoded_denormFract_T_5)
                           : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_2__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_isInf)
                               ? 0U : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT____VdfgTmp_h38569d64__0 
        = ((0x80000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U]) 
           | ((0x7f800000U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__io_out_bits_store_prevUnrecoded_unrecoded_isSubnormal_2)
                                 ? 0U : ((IData)(0x7fU) 
                                         + ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U] 
                                             << 9U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U] 
                                               >> 0x17U)))) 
                               | (- (IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT____VdfgTmp_h5c2f2006__0) 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U] 
                                                 >> 0x1dU)) 
                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__io_out_bits_store_prevUnrecoded_unrecoded_rawIn_2_isInf))))) 
                              << 0x17U)) | ((0x7f0000U 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__io_out_bits_store_prevUnrecoded_unrecoded_fractOut_2) 
                                            | (0xffffU 
                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT____VdfgTmp_ha47cf77a__0)
                                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT____VdfgTmp_h4e9a4cb3__0)
                                                   : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__io_out_bits_store_prevUnrecoded_unrecoded_fractOut_2)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_1) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_2));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__260(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__260\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_3 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_4) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_5));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hi_1 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_7) 
            << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_6) 
                       << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_5) 
                                  << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_4))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___r_sectored_hit_bits_T_2 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_7) 
             << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_6) 
                        << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_5))) 
           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_3) 
               << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_2) 
                          << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__real_hits 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_12) 
            << 0xcU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_11) 
                         << 0xbU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_10) 
                                      << 0xaU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_9) 
                                                   << 9U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_8) 
                                                      << 8U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_7) 
                                                         << 7U) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_6) 
                                                            << 6U) 
                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_5) 
                                                               << 5U) 
                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_4) 
                                                                  << 4U) 
                                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_3) 
                                                                     << 3U) 
                                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_2) 
                                                                        << 2U) 
                                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_1) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_0)))))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_6 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_7) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_8));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_hcee66223__0 
        = (0xfffffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_0)
                         ? (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
                                    >> 0x16U)) : 0U) 
                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_1)
                            ? (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
                                       >> 0x16U)) : 0U) 
                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_2)
                               ? (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
                                          >> 0x16U))
                               : 0U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_3)
                                          ? (IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
                                                     >> 0x16U))
                                          : 0U) | (
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_4)
                                                     ? (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
                                                                >> 0x16U))
                                                     : 0U) 
                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_5)
                                                        ? (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
                                                                   >> 0x16U))
                                                        : 0U) 
                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_6)
                                                           ? (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
                                                                      >> 0x16U))
                                                           : 0U) 
                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_7)
                                                              ? (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
                                                                         >> 0x16U))
                                                              : 0U) 
                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_8)
                                                                 ? 
                                                                ((0xc0000U 
                                                                  & ((IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                                                              >> 0x28U)) 
                                                                     << 0x12U)) 
                                                                 | ((0x3fe00U 
                                                                     & ((((0U 
                                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_level))
                                                                           ? (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                                >> 0x15U))
                                                                           : 0U) 
                                                                         | (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                                                                >> 0x1fU))) 
                                                                        << 9U)) 
                                                                    | (0x1ffU 
                                                                       & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                                >> 0xcU)) 
                                                                          | (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                                                                >> 0x16U))))))
                                                                 : 0U) 
                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_9)
                                                                    ? 
                                                                   ((0xc0000U 
                                                                     & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                                                                >> 0x28U)) 
                                                                        << 0x12U)) 
                                                                    | ((0x3fe00U 
                                                                        & ((((0U 
                                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_level))
                                                                              ? (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                                >> 0x15U))
                                                                              : 0U) 
                                                                            | (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                                                                >> 0x1fU))) 
                                                                           << 9U)) 
                                                                       | (0x1ffU 
                                                                          & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                                >> 0xcU)) 
                                                                             | (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                                                                >> 0x16U))))))
                                                                    : 0U) 
                                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_10)
                                                                       ? 
                                                                      ((0xc0000U 
                                                                        & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                                                                >> 0x28U)) 
                                                                           << 0x12U)) 
                                                                       | ((0x3fe00U 
                                                                           & ((((0U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_level))
                                                                                 ? (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                                >> 0x15U))
                                                                                 : 0U) 
                                                                               | (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                                                                >> 0x1fU))) 
                                                                              << 9U)) 
                                                                          | (0x1ffU 
                                                                             & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                                >> 0xcU)) 
                                                                                | (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                                                                >> 0x16U))))))
                                                                       : 0U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_11)
                                                                          ? 
                                                                         ((0xc0000U 
                                                                           & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                                                                >> 0x28U)) 
                                                                              << 0x12U)) 
                                                                          | ((0x3fe00U 
                                                                              & ((((0U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_level))
                                                                                 ? (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                                >> 0x15U))
                                                                                 : 0U) 
                                                                                | (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                                                                >> 0x1fU))) 
                                                                                << 9U)) 
                                                                             | (0x1ffU 
                                                                                & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                                >> 0xcU)) 
                                                                                | (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                                                                >> 0x16U))))))
                                                                          : 0U) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_12)
                                                                             ? vlSelf->__VdfgTmp_h9f135849__0
                                                                             : 0U) 
                                                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___vm_enabled_T_1)
                                                                               ? 0U
                                                                               : (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                                >> 0xcU)))))))))))))))));
}
