// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__801(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__801\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_23 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_24 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_25 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_26 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_27 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 0x1bU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_28 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 0x1cU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_29 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 0x1dU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_30 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 0x1eU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_31 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
           [0U] >> 0x1fU);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__799(VTestDriver___024root* vlSelf);
VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__800(VTestDriver___024root* vlSelf);

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__802(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__802\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__799(vlSelf);
    VTestDriver___024root___eval_initial__TOP__800(vlSelf);
    VTestDriver___024root___eval_initial__TOP__801(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM[1U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_3 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_4 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_5 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_6 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_7 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_8 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_9 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 9U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__803(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__803\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_10 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_11 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_12 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_13 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_14 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 0xeU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_15 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 0xfU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_16 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_17 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 0x11U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_18 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 0x12U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_19 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 0x13U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_20 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_21 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 0x15U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__804(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__804\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_22 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_23 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_24 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_25 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_26 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_27 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 0x1bU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_28 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 0x1cU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_29 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 0x1dU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_30 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [0U] >> 0x1eU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_31 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
           [0U] >> 0x1fU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_32 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
           [1U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_33 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [1U] >> 1U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__805(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__805\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_34 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [1U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_35 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [1U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_36 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [1U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_37 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [1U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_38 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [1U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_39 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [1U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_40 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT___RANDOM
                 [1U] >> 8U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__806(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__806\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__802(vlSelf);
    VTestDriver___024root___eval_initial__TOP__803(vlSelf);
    VTestDriver___024root___eval_initial__TOP__804(vlSelf);
    VTestDriver___024root___eval_initial__TOP__805(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_3 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_4 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_5 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_6 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_7 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_8 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_9 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 9U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__807(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__807\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_10 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_11 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_12 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_13 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_14 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 0xeU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_15 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 0xfU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_16 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_17 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 0x11U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_18 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 0x12U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_19 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 0x13U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_20 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_21 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 0x15U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__808(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__808\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_22 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_23 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_24 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_25 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_26 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_27 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 0x1bU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_28 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 0x1cU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_29 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 0x1dU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_30 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
                 [0U] >> 0x1eU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_31 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT___RANDOM
           [0U] >> 0x1fU);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__809(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__809\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__806(vlSelf);
    VTestDriver___024root___eval_initial__TOP__807(vlSelf);
    VTestDriver___024root___eval_initial__TOP__808(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__tdoReg 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction 
        = (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT___RANDOM
                    [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT___RANDOM
           [0U]);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__tdoReg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__activeInstruction = 1U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__stateMachine__DOT__currState = 0xfU;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_3 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT__regs_4 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__irChain__DOT___RANDOM
                 [0U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__810(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__810\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_bypassChain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_bypassChain__DOT__reg_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_bypassChain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__811(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__811\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__809(vlSelf);
    VTestDriver___024root___eval_initial__TOP__810(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__debug_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__dmactiveAck_dmactiveAck__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__812(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__812\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__814(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__814\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__813(VTestDriver___024root* vlSelf);

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__815(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__815\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__813(vlSelf);
    VTestDriver___024root___eval_initial__TOP__814(vlSelf);
    TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT__Memory[0U] 
        = (0xffU & TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM);
    TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT__Memory[1U] 
        = (0xffU & TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM);
    TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT__Memory[2U] 
        = (0xffU & TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM);
    TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT__Memory[3U] 
        = (0xffU & TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM);
    TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT__Memory[4U] 
        = (0xffU & TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM);
    TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT__Memory[5U] 
        = (0xffU & TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM);
    TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT__Memory[6U] 
        = (0xffU & TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM);
    TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT__Memory[7U] 
        = (0xffU & TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxm__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__816(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__816\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxm__DOT__prescaler 
        = (0xffffU & vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxm__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxm__DOT__counter 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxm__DOT___RANDOM
                   [0U] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxm__DOT__shifter 
        = (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxm__DOT___RANDOM
                     [0U] >> 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxm__DOT__out 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxm__DOT___RANDOM
                 [0U] >> 0x1dU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__817(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__817\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VTestDriver___024root___eval_initial__TOP__815(vlSelf);
    VTestDriver___024root___eval_initial__TOP__816(vlSelf);
    __Vtemp_1[0U] = 0x783d2564U;
    __Vtemp_1[1U] = 0x72745f74U;
    __Vtemp_1[2U] = 0x7561U;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxm__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxm__DOT__plusarg_reader__DOT__myplus = 1U;
    }
    __Vtemp_2[0U] = 0x663d2564U;
    __Vtemp_2[1U] = 0x72696e74U;
    __Vtemp_2[2U] = 0x74785f70U;
    __Vtemp_2[3U] = 0x6172745fU;
    __Vtemp_2[4U] = 0x75U;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxm__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxm__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT__Memory[0U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT__Memory[1U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT__Memory[2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT__Memory[3U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__818(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__818\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT__Memory[4U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT__Memory[5U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT__Memory[6U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT__Memory[7U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__819(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__819\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT____Vlvbound_h06f15279__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT____Vlvbound_h06f15279__0 = 0;
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VTestDriver___024root___eval_initial__TOP__817(vlSelf);
    VTestDriver___024root___eval_initial__TOP__818(vlSelf);
    __Vtemp_1[0U] = 0x6e3d2564U;
    __Vtemp_1[1U] = 0x745f7069U;
    __Vtemp_1[2U] = 0x5f626f6fU;
    __Vtemp_1[3U] = 0x73746f6dU;
    __Vtemp_1[4U] = 0x6375U;
    if ((! VL_VALUEPLUSARGS_INI(1, VL_CVT_PACK_STR_NW(5, __Vtemp_1), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_2[0U] = 0x653d2564U;
    __Vtemp_2[1U] = 0x6e61626cU;
    __Vtemp_2[2U] = 0x62625f65U;
    __Vtemp_2[3U] = 0x61675f72U;
    __Vtemp_2[4U] = 0x6a74U;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__head_counter 
        = (0x1ffU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__tail_counter 
        = (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___RANDOM
                     [0U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__is_body 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT___RANDOM
                 [0U] >> 0x12U));
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT____Vlvbound_h06f15279__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT____Vlvbound_h06f15279__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT____Vlvbound_h06f15279__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT____Vlvbound_h06f15279__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT____Vlvbound_h06f15279__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT____Vlvbound_h06f15279__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT____Vlvbound_h06f15279__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM[3U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT____Vlvbound_h06f15279__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT____Vlvbound_h06f15279__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM[4U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT____Vlvbound_h06f15279__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__820(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__820\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[2U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM
                                    [1U])) << 0x20U) 
                   | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM
                                     [2U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[3U] 
        = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM
                                     [1U])) << 0x20U) 
                    | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM
                                      [2U]))) >> 0x20U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__ram[4U] 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM
           [0U] >> 1U);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT__full 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__out_channels_4_2__DOT__q__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__821(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__821\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__819(vlSelf);
    VTestDriver___024root___eval_initial__TOP__820(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT___RANDOM[1U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT___RANDOM[2U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT___RANDOM[3U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT__data_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT__data_2 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT__beat 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_2__DOT___RANDOM
           [3U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT___RANDOM[1U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT___RANDOM[2U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT___RANDOM[3U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT__data_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT__data_2 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT__beat 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__ser_4__DOT___RANDOM
           [3U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_0_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_0_2__DOT__is_const 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_0_2__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__822(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__822\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT__is_const 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_1_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__823(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__823\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT____Vlvbound_h9bac8a17__0 = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__821(vlSelf);
    VTestDriver___024root___eval_initial__TOP__822(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_2_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_2_2__DOT__is_const 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_2_2__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_3_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_3_2__DOT__is_const 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_3_2__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_4_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_4_2__DOT__is_const 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__in_channels_4_2__DOT___RANDOM
           [0U]);
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT___RANDOM[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT___RANDOM[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT___RANDOM[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__data_0 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__data_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT__beat 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_1__DOT___RANDOM
           [2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__824(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__824\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT__data_0 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT__beat 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_2__DOT___RANDOM
           [2U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__825(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__825\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT____Vlvbound_h9bac8a17__0 = 0;
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT____Vlvbound_h9bac8a17__0 = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__823(vlSelf);
    VTestDriver___024root___eval_initial__TOP__824(vlSelf);
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT___RANDOM[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT___RANDOM[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT___RANDOM[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT__data_0 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT__beat 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_3__DOT___RANDOM
           [2U]);
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT___RANDOM[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT___RANDOM[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT____Vlvbound_h9bac8a17__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT___RANDOM[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT__data_0 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT__beat 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__des_4__DOT___RANDOM
           [2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM[1U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM[2U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM[3U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__826(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__826\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM[4U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM[5U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM[6U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM[7U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__cmd 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
        = (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM
                            [1U])) << 0x20U) | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM
                                                               [2U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__len 
        = (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM
                            [3U])) << 0x20U) | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM
                                                               [4U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__body_0 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__body_1 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM
        [6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__bodyValid 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM
           [7U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__idx 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM
                 [7U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__state 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT___RANDOM
                   [7U] >> 3U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__827(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__827\n"); );
    // Init
    VlWide<4>/*127:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM;
    VL_ZERO_W(128, TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM);
    QData/*63:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__825(vlSelf);
    VTestDriver___024root___eval_initial__TOP__826(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM
                 [0U] >> 2U));
    VL_RANDOM_W(128, TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0U][0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0U][1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0U][2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0U][3U] 
        = (0xfffffU & TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[3U]);
    VL_RANDOM_W(128, TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1U][0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1U][1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1U][2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1U][3U] 
        = (0xfffffU & TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[3U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM
                 [0U] >> 2U));
    TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_Q();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_Q();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__828(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__828\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__827(vlSelf);
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[3U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[4U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[5U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[6U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[7U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM[8U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
        [4U];
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__829(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__829\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
        [6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__830(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__830\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__828(vlSelf);
    VTestDriver___024root___eval_initial__TOP__829(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__831(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__831\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__832(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__832\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__830(vlSelf);
    VTestDriver___024root___eval_initial__TOP__831(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__833(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__833\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__834(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__834\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__832(vlSelf);
    VTestDriver___024root___eval_initial__TOP__833(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__835(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__835\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__836(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__836\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__834(vlSelf);
    VTestDriver___024root___eval_initial__TOP__835(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__837(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__837\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__838(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__838\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__836(vlSelf);
    VTestDriver___024root___eval_initial__TOP__837(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__839(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__839\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__840(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__840\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__838(vlSelf);
    VTestDriver___024root___eval_initial__TOP__839(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__841(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__841\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__842(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__842\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__840(vlSelf);
    VTestDriver___024root___eval_initial__TOP__841(vlSelf);
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT__Memory[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT__Memory[3U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT__Memory[4U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT__Memory[5U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT__Memory[6U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT__Memory[7U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__843(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__843\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
        [6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__844(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__844\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__845(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__845\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__842(vlSelf);
    VTestDriver___024root___eval_initial__TOP__843(vlSelf);
    VTestDriver___024root___eval_initial__TOP__844(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__846(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__846\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__847(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__847\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__845(vlSelf);
    VTestDriver___024root___eval_initial__TOP__846(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__848(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__848\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__849(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__849\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__847(vlSelf);
    VTestDriver___024root___eval_initial__TOP__848(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__850(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__850\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__851(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__851\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__849(vlSelf);
    VTestDriver___024root___eval_initial__TOP__850(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__852(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__852\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__853(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__853\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__851(vlSelf);
    VTestDriver___024root___eval_initial__TOP__852(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__854(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__854\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__855(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__855\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__853(vlSelf);
    VTestDriver___024root___eval_initial__TOP__854(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__856(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__856\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__857(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__857\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__855(vlSelf);
    VTestDriver___024root___eval_initial__TOP__856(vlSelf);
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory[3U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory[4U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory[5U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory[6U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory[7U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__858(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__858\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
        [6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__859(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__859\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__860(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__860\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__857(vlSelf);
    VTestDriver___024root___eval_initial__TOP__858(vlSelf);
    VTestDriver___024root___eval_initial__TOP__859(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__861(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__861\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__862(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__862\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__860(vlSelf);
    VTestDriver___024root___eval_initial__TOP__861(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__863(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__863\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__864(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__864\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__862(vlSelf);
    VTestDriver___024root___eval_initial__TOP__863(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__865(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__865\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__866(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__866\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__864(vlSelf);
    VTestDriver___024root___eval_initial__TOP__865(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__867(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__867\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__868(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__868\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__866(vlSelf);
    VTestDriver___024root___eval_initial__TOP__867(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__869(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__869\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__870(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__870\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__868(vlSelf);
    VTestDriver___024root___eval_initial__TOP__869(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__871(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__871\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__872(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__872\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__870(vlSelf);
    VTestDriver___024root___eval_initial__TOP__871(vlSelf);
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory[3U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory[4U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory[5U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory[6U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory[7U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__873(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__873\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
        [6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__874(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__874\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__875(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__875\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__872(vlSelf);
    VTestDriver___024root___eval_initial__TOP__873(vlSelf);
    VTestDriver___024root___eval_initial__TOP__874(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__876(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__876\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__877(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__877\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__875(vlSelf);
    VTestDriver___024root___eval_initial__TOP__876(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__878(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__878\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__879(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__879\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__877(vlSelf);
    VTestDriver___024root___eval_initial__TOP__878(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__880(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__880\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__881(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__881\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__879(vlSelf);
    VTestDriver___024root___eval_initial__TOP__880(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__882(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__882\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__883(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__883\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__881(vlSelf);
    VTestDriver___024root___eval_initial__TOP__882(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__884(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__884\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__885(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__885\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__883(vlSelf);
    VTestDriver___024root___eval_initial__TOP__884(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__886(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__886\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__887(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__887\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__885(vlSelf);
    VTestDriver___024root___eval_initial__TOP__886(vlSelf);
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory[3U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory[4U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory[5U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory[6U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory[7U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__888(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__888\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
        [6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__889(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__889\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__890(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__890\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__887(vlSelf);
    VTestDriver___024root___eval_initial__TOP__888(vlSelf);
    VTestDriver___024root___eval_initial__TOP__889(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__891(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__891\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__892(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__892\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__890(vlSelf);
    VTestDriver___024root___eval_initial__TOP__891(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__893(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__893\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__894(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__894\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__892(vlSelf);
    VTestDriver___024root___eval_initial__TOP__893(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__895(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__895\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__896(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__896\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__894(vlSelf);
    VTestDriver___024root___eval_initial__TOP__895(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__897(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__897\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__898(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__898\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__896(vlSelf);
    VTestDriver___024root___eval_initial__TOP__897(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__899(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__899\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__900(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__900\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__898(vlSelf);
    VTestDriver___024root___eval_initial__TOP__899(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__901(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__901\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__902(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__902\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__900(vlSelf);
    VTestDriver___024root___eval_initial__TOP__901(vlSelf);
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory[3U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory[4U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory[5U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory[6U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory[7U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT__beat 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT__chosen_reg 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__out_arb__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__903(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__903\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
        [6U];
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__904(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__904\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__905(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__905\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__902(vlSelf);
    VTestDriver___024root___eval_initial__TOP__903(vlSelf);
    VTestDriver___024root___eval_initial__TOP__904(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__906(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__906\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__907(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__907\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__905(vlSelf);
    VTestDriver___024root___eval_initial__TOP__906(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__908(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__908\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__909(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__909\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__907(vlSelf);
    VTestDriver___024root___eval_initial__TOP__908(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__910(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__910\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__911(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__911\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__909(vlSelf);
    VTestDriver___024root___eval_initial__TOP__910(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__912(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__912\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__913(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__913\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__911(vlSelf);
    VTestDriver___024root___eval_initial__TOP__912(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__914(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__914\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__915(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__915\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__913(vlSelf);
    VTestDriver___024root___eval_initial__TOP__914(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__916(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__916\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__917(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__917\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__915(vlSelf);
    VTestDriver___024root___eval_initial__TOP__916(vlSelf);
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory[3U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory[4U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory[5U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory[6U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory[7U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__918(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__918\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
        [6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__919(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__919\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__920(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__920\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__917(vlSelf);
    VTestDriver___024root___eval_initial__TOP__918(vlSelf);
    VTestDriver___024root___eval_initial__TOP__919(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__921(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__921\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__922(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__922\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__920(vlSelf);
    VTestDriver___024root___eval_initial__TOP__921(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__923(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__923\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__924(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__924\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__922(vlSelf);
    VTestDriver___024root___eval_initial__TOP__923(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__925(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__925\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__926(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__926\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__924(vlSelf);
    VTestDriver___024root___eval_initial__TOP__925(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__927(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__927\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__928(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__928\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__926(vlSelf);
    VTestDriver___024root___eval_initial__TOP__927(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__929(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__929\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__930(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__930\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__928(vlSelf);
    VTestDriver___024root___eval_initial__TOP__929(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__931(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__931\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__932(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__932\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__930(vlSelf);
    VTestDriver___024root___eval_initial__TOP__931(vlSelf);
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory[3U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory[4U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory[5U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory[6U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory[7U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__933(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__933\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
        [6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__934(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__934\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__935(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__935\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__932(vlSelf);
    VTestDriver___024root___eval_initial__TOP__933(vlSelf);
    VTestDriver___024root___eval_initial__TOP__934(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__936(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__936\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__937(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__937\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__935(vlSelf);
    VTestDriver___024root___eval_initial__TOP__936(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__938(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__938\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__939(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__939\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__937(vlSelf);
    VTestDriver___024root___eval_initial__TOP__938(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__940(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__940\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__941(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__941\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__939(vlSelf);
    VTestDriver___024root___eval_initial__TOP__940(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__942(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__942\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__943(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__943\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__941(vlSelf);
    VTestDriver___024root___eval_initial__TOP__942(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__944(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__944\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__945(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__945\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__943(vlSelf);
    VTestDriver___024root___eval_initial__TOP__944(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___iocell_jtag_reset_i) {
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__946(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__946\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__947(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__947\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__945(vlSelf);
    VTestDriver___024root___eval_initial__TOP__946(vlSelf);
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT__Memory[2U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT__Memory[3U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT__Memory[4U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT__Memory[5U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT__Memory[6U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT__Memory[7U] 
        = TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
}
