// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1429(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1429\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__goReg 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__goAbstract) 
              | ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_536) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hf539b976__0))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__goReg))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT___widx_T_1) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_data 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT___dmInner_auto_dmi_in_d_bits_data;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_opcode 
            = (4U == (7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                    >> 0x34U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_size 
            = (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                             >> 0x2fU)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_source 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                             >> 0x2eU)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1430(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1430\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__SBADDRESSFieldsReg_0 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__SBADDRESSFieldsReg_0;
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1433(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1433\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_resumereq) 
                << 0xeU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hartsel) 
                             << 4U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_ackhavereset) 
                                        << 3U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__mem_0_hrmask_0))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__SBCSRdData_sberror 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__sbErrorReg_2) 
            << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__sbErrorReg_1) 
                       << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__sbErrorReg_0)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEn) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__COMMANDReg_control 
                = (0xffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrDataVal);
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_45) 
             & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                        >> 0x23U)))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__SBCSFieldsReg_sbaccess 
                = (7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                 >> 0x12U)));
        }
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__COMMANDReg_control = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__SBCSFieldsReg_sbaccess = 2U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hb778be90__0 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__SBDATAFieldsReg_1_3) 
            << 0x18U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__SBDATAFieldsReg_1_2) 
                          << 0x10U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__SBDATAFieldsReg_1_1) 
                                        << 8U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__SBDATAFieldsReg_1_0))));
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmactive_synced_dmactiveSync__DOT__output_chain__DOT__sync_0)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__SBCSFieldsReg_sbbusy 
            = (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__sb2tlOpt__DOT__sbState));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_7 
        = (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1434(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1434\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_5 
        = (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hc9c7b7ff__0 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs) 
            << 0x11U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__goReg) 
                          << 0x10U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs) 
                                        << 9U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__goReg) 
                                                   << 8U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__goReg))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_ha6dd002d__0 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs) 
            << 0x19U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__goReg) 
                          << 0x18U) | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hc9c7b7ff__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_3 
        = (1U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__COMMANDReg_control 
                     >> 0x11U)) | ((0U != (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__COMMANDReg_control 
                                                   >> 0xcU))) 
                                   & ((0x1020U > (0xffffU 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__COMMANDReg_control)) 
                                      & ((2U == (7U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__COMMANDReg_control 
                                                    >> 0x14U))) 
                                         | (3U == (7U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__COMMANDReg_control 
                                                      >> 0x14U))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__sbAccessError 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__SBCSFieldsReg_sbaccess)) 
           | (4U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__SBCSFieldsReg_sbaccess)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = (0x1001e00000000ULL | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_opcode)) 
                                      << 0x34U) | (
                                                   ((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_address)) 
                                                    << 0x25U) 
                                                   | ((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_data)) 
                                                      << 1U))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1435(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1435\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__commandRegIsUnsupported 
        = (1U & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__COMMANDReg_cmdtype)) 
                 | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_3))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__commandRegBadHaltResume 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__COMMANDReg_cmdtype)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartHalted)) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_3)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_6 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__commandRegIsUnsupported) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__commandRegBadHaltResume));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h32060466__0 
        = (IData)((0x28000000000ULL == (0x3f8000000000ULL 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h315fc1ea__0 
        = (IData)((0x48000000000ULL == (0x3f8000000000ULL 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hcfc7795c__0 
        = (IData)((0x148000000000ULL == (0x3f8000000000ULL 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h32e4c22a__0 
        = (IData)((0x118000000000ULL == (0x3f8000000000ULL 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h32aff4eb__0 
        = (IData)((0x40000000000ULL == (0x3f8000000000ULL 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h32183e0f__0 
        = (IData)((0x20000000000ULL == (0x3f8000000000ULL 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1436(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1436\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h316a4523__0 
        = (IData)((0x178000000000ULL == (0x3f8000000000ULL 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h31733432__0 
        = (IData)((0x50000000000ULL == (0x3f8000000000ULL 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hcfc4cdb4__0 
        = (IData)((0x150000000000ULL == (0x3f8000000000ULL 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h3148a2d0__0 
        = (IData)((0x128000000000ULL == (0x3f8000000000ULL 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h3146bdfb__0 
        = (IData)((0x170000000000ULL == (0x3f8000000000ULL 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h31ebd98d__0 
        = (IData)((0x30000000000ULL == (0x3f8000000000ULL 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hcfd4aff4__0 
        = (IData)((0x130000000000ULL == (0x3f8000000000ULL 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h329cb6f1__0 
        = (IData)((0x108000000000ULL == (0x3f8000000000ULL 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1437(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1437\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hcf5274bc__0 
        = (IData)((0x168000000000ULL == (0x3f8000000000ULL 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h314b96e5__0 
        = (IData)((0x100000000000ULL == (0x3f8000000000ULL 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h329de3eb__0 
        = (IData)((0x110000000000ULL == (0x3f8000000000ULL 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hcf5e0f7e__0 
        = (IData)((0x160000000000ULL == (0x3f8000000000ULL 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h31770249__0 
        = (IData)((0x38000000000ULL == (0x3f8000000000ULL 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hcfe898b9__0 
        = (IData)((0x138000000000ULL == (0x3f8000000000ULL 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h315d3cf0__0 
        = (IData)((0x58000000000ULL == (0x3f8000000000ULL 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hcff9d759__0 
        = (IData)((0x158000000000ULL == (0x3f8000000000ULL 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1438(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1438\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_hcf4e5f7e__0 
        = (IData)((0x140000000000ULL == (0x3f8000000000ULL 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h32879232__0 
        = (IData)((0x120000000000ULL == (0x3f8000000000ULL 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_backMask 
        = (((- (IData)((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                      >> 0x24U))))) 
            << 0x18U) | ((0xff0000U & ((- (IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                              >> 0x23U))))) 
                                       << 0x10U)) | 
                         ((0xff00U & ((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                             >> 0x22U))))) 
                                      << 8U)) | (0xffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                          >> 0x21U)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__goAbstract 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_6)) 
              & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h7dec5c0e__0 
        = ((~ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                       >> 0x2dU))) & (0xffffffffU == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_backMask));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1439(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1439\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1441(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1441\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1442(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1442\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_widx_bin = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT____VdfgTmp_h04800923__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____VdfgTmp_h04800923__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____VdfgTmp_h04800923__0)
                : 0U);
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1443(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1443\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__ridx_ridx_bin = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____VdfgTmp_h04800923__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____VdfgTmp_h04800923__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                : 0U);
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ready_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__widx) 
                  != (0xcU ^ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                               << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ready_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__widx) 
                  != (0xcU ^ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                               << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ready_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx) 
                  != (0xcU ^ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                               << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1444(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1444\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ready_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx) 
                  != (0xcU ^ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                               << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ready_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx) 
                  != (0xcU ^ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                               << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1447(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1447\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1448(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1448\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1449(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1449\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1452(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1452\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_gray) 
                     >> 2U)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1453(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1453\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_gray) 
                     >> 2U)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1454(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1454\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_4_io_deq_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__valid_reg));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_3_io_deq_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__valid_reg));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_2_io_deq_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__valid_reg));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_1_io_deq_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__valid_reg));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_deq_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__valid_reg));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1455(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1455\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___in_phits_in_async_4_io_enq_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ready_reg) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___in_phits_in_async_3_io_enq_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ready_reg) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___in_phits_in_async_2_io_enq_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ready_reg) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1456(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1456\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___in_phits_in_async_1_io_enq_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ready_reg) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___in_phits_in_async_io_enq_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ready_reg) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1457(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1457\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT__chosen_prio 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_io_deq_valid)
            ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_1_io_deq_valid)
                     ? 1U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_2_io_deq_valid)
                              ? 2U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT___out_phits_out_async_3_io_deq_valid)
                                       ? 3U : 4U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1459(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1459\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__ridx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__ridx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__ridx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__ridx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__ridx_gray) 
                     >> 3U)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1460(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1460\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__ridx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__ridx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__ridx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_gray) 
                     >> 1U)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1461(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1461\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1463(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1463\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestDriver__DOT__reset)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1466(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1466\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1467(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1467\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1468(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1468\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1469(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1469\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_ridx_bin = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____VdfgTmp_h04800923__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____VdfgTmp_h04800923__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____VdfgTmp_h04800923__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____VdfgTmp_h04800923__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____VdfgTmp_h04800923__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                : 0U);
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1470(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1470\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__ridx_ridx_bin = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT____VdfgTmp_h04800923__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____VdfgTmp_h04800923__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____VdfgTmp_h04800923__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____VdfgTmp_h04800923__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____VdfgTmp_h04800923__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                : 0U);
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1471(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1471\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ready_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx) 
                  != (0xcU ^ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                               << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ready_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx) 
                  != (0xcU ^ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                               << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ready_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx) 
                  != (0xcU ^ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                               << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ready_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx) 
                  != (0xcU ^ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                               << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ready_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx) 
                  != (0xcU ^ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                               << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ready_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__widx) 
                  != (0xcU ^ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                               << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1472(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1472\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ready_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__widx) 
                  != (0xcU ^ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                               << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ready_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx) 
                  != (0xcU ^ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                               << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ready_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx) 
                  != (0xcU ^ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                               << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ready_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx) 
                  != (0xcU ^ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                               << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1478(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1478\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1479(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1479\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1480(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1480\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1481(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1481\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1482(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1482\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1483(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1483\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1489(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1489\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__widx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__widx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__widx_gray) 
                     >> 1U)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1490(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1490\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__widx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__widx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__widx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__widx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__widx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_gray) 
                     >> 1U)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1491(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1491\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_gray) 
                     >> 1U)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1492(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1492\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_gray) 
                     >> 1U)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1493(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1493\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_4_io_deq_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__valid_reg));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_3_io_deq_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__valid_reg));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_2_io_deq_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__valid_reg));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_1_io_deq_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__valid_reg));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_deq_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__valid_reg));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1494(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1494\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1495(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1495\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___in_phits_in_async_4_io_enq_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ready_reg) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___in_phits_in_async_3_io_enq_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ready_reg) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1496(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1496\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___in_phits_in_async_2_io_enq_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ready_reg) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___in_phits_in_async_1_io_enq_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ready_reg) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___in_phits_in_async_io_enq_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ready_reg) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1499(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1499\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT__chosen_prio 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_io_deq_valid)
            ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_1_io_deq_valid)
                     ? 1U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_2_io_deq_valid)
                              ? 2U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT___out_phits_out_async_3_io_deq_valid)
                                       ? 3U : 4U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1502(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1502\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__widx_gray = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__widx_gray = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_gray = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_gray = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_gray = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_gray = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_gray = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_gray = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_gray = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_gray = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__widx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__widx;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__widx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__widx;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1503(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1503\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__ridx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__ridx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__ridx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__ridx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__ridx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__ridx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__ridx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__ridx_gray)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1504(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1504\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__ridx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__ridx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__ridx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__ridx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__ridx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__ridx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__ridx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__ridx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__ridx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__ridx_gray) 
                     >> 2U)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1505(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1505\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__ridx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__ridx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__ridx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__ridx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__ridx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__ridx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__ridx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__ridx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__ridx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__ridx_gray)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1506(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1506\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_gray) 
                     >> 2U)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1507(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1507\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1510(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1510\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__index 
        = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__widx_gray) 
                          >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__index 
        = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__widx_gray) 
                          >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__index 
        = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_gray) 
                          >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__index 
        = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_gray) 
                          >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__index 
        = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_gray) 
                          >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__index 
        = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_gray) 
                          >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__index 
        = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_gray) 
                          >> 1U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1511(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1511\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__index 
        = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_gray) 
                          >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__index 
        = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_gray) 
                          >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__index 
        = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_gray) 
                          >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__ridx_gray 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i)
            ? 0U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__ridx));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1512(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1512\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__ridx_gray = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__ridx_gray = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__ridx_gray = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__ridx_gray = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__ridx_gray = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__ridx_gray = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_gray = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_gray = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__ridx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__ridx;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__ridx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__ridx;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__ridx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__ridx;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__ridx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__ridx;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__ridx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__ridx;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__ridx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__ridx;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1513(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1513\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_gray 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i)
            ? 0U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1514(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1514\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1515(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1515\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1516(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1516\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1517(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1517\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1518(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1518\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1519(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1519\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1520(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1520\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1521(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1521\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1522(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1522\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1524(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1524\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1525(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1525\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1526(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1526\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1527(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1527\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1528(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1528\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1529(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1529\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1531(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1531\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1534(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1534\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__valid_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1535(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1535\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1536(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1536\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_ridx_bin = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____VdfgTmp_h04800923__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____VdfgTmp_h04800923__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____VdfgTmp_h04800923__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____VdfgTmp_h04800923__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____VdfgTmp_h04800923__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                : 0U);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT____VdfgTmp_h53fc3cf3__0)
                : 0U);
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ready_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx) 
                  != (0xcU ^ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                               << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1537(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1537\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ready_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx) 
                  != (0xcU ^ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                               << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ready_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx) 
                  != (0xcU ^ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                               << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ready_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx) 
                  != (0xcU ^ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                               << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ready_reg 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx) 
                  != (0xcU ^ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                               << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                          << 2U) | 
                                         (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plic_domain__DOT__intsource_1__DOT__reg_0__DOT__reg_0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plic_domain__DOT__plic__DOT__intnodeOut_0_REG_1) 
              > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plic_domain__DOT__plic__DOT__threshold_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plic_domain__DOT__intsource__DOT__reg_0__DOT__reg_0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plic_domain__DOT__plic__DOT__intnodeOut_0_REG) 
              > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plic_domain__DOT__plic__DOT__threshold_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__intsource__DOT__reg_0__DOT__reg_0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset)
            ? 0U : (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0 
                      >= vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad) 
                     << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__ipi_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__intsource__DOT__reg_0__DOT__reg_0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset)) 
           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_txwm) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_txwm)) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_rxwm) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_rxwm))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1538(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1538\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_gray = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_gray = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_gray = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_gray = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_gray = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__ridx_gray = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__ridx_gray = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_gray = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_gray = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_gray = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__ridx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__ridx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__ridx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__ridx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_gray 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1541(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1541\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1542(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1542\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1543(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1543\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1544(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1544\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1547(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1547\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__widx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__widx_gray) 
                     >> 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__widx_gray) 
                     >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__widx_gray)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__widx_gray) 
                     >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset))) 
           && (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__widx_gray) 
                     >> 2U)));
}
