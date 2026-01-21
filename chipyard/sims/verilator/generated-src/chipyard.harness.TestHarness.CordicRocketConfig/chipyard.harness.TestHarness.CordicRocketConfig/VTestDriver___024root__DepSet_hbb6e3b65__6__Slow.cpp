// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__651(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__651\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__649(VTestDriver___024root* vlSelf);
VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__650(VTestDriver___024root* vlSelf);

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__652(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__652\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__649(vlSelf);
    VTestDriver___024root___eval_initial__TOP__650(vlSelf);
    VTestDriver___024root___eval_initial__TOP__651(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__653(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__653\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__654(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__654\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__652(vlSelf);
    VTestDriver___024root___eval_initial__TOP__653(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__655(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__655\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__656(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__656\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__654(vlSelf);
    VTestDriver___024root___eval_initial__TOP__655(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__657(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__657\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__658(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__658\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__656(vlSelf);
    VTestDriver___024root___eval_initial__TOP__657(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__659(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__659\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__660(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__660\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__658(vlSelf);
    VTestDriver___024root___eval_initial__TOP__659(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__661(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__661\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__662(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__662\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__660(vlSelf);
    VTestDriver___024root___eval_initial__TOP__661(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__663(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__663\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__664(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__664\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__662(vlSelf);
    VTestDriver___024root___eval_initial__TOP__663(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory[3U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory[4U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory[5U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory[6U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT__Memory[7U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_1__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__665(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__665\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
        [6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__666(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__666\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__667(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__667\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__664(vlSelf);
    VTestDriver___024root___eval_initial__TOP__665(vlSelf);
    VTestDriver___024root___eval_initial__TOP__666(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__668(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__668\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__669(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__669\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__667(vlSelf);
    VTestDriver___024root___eval_initial__TOP__668(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__670(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__670\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__671(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__671\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__669(vlSelf);
    VTestDriver___024root___eval_initial__TOP__670(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__672(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__672\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__673(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__673\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__671(vlSelf);
    VTestDriver___024root___eval_initial__TOP__672(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__674(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__674\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__675(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__675\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__673(vlSelf);
    VTestDriver___024root___eval_initial__TOP__674(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__676(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__676\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__677(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__677\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__675(vlSelf);
    VTestDriver___024root___eval_initial__TOP__676(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__678(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__678\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__679(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__679\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__677(vlSelf);
    VTestDriver___024root___eval_initial__TOP__678(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory[3U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory[4U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory[5U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory[6U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT__Memory[7U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_2__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__680(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__680\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
        [6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__681(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__681\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__682(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__682\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__679(vlSelf);
    VTestDriver___024root___eval_initial__TOP__680(vlSelf);
    VTestDriver___024root___eval_initial__TOP__681(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__683(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__683\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__684(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__684\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__682(vlSelf);
    VTestDriver___024root___eval_initial__TOP__683(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__685(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__685\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__686(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__686\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__684(vlSelf);
    VTestDriver___024root___eval_initial__TOP__685(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__687(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__687\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__688(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__688\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__686(vlSelf);
    VTestDriver___024root___eval_initial__TOP__687(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__689(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__689\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__690(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__690\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__688(vlSelf);
    VTestDriver___024root___eval_initial__TOP__689(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__691(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__691\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__692(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__692\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__690(vlSelf);
    VTestDriver___024root___eval_initial__TOP__691(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__693(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__693\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__694(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__694\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__692(vlSelf);
    VTestDriver___024root___eval_initial__TOP__693(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory[3U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory[4U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory[5U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory[6U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT__Memory[7U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_3__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__695(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__695\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
        [6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__696(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__696\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__697(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__697\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__694(vlSelf);
    VTestDriver___024root___eval_initial__TOP__695(vlSelf);
    VTestDriver___024root___eval_initial__TOP__696(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__698(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__698\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__699(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__699\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__697(vlSelf);
    VTestDriver___024root___eval_initial__TOP__698(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__700(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__700\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__701(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__701\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__699(vlSelf);
    VTestDriver___024root___eval_initial__TOP__700(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__702(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__702\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__703(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__703\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__701(vlSelf);
    VTestDriver___024root___eval_initial__TOP__702(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__704(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__704\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__705(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__705\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__703(vlSelf);
    VTestDriver___024root___eval_initial__TOP__704(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__706(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__706\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__707(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__707\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__705(vlSelf);
    VTestDriver___024root___eval_initial__TOP__706(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__708(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__708\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__709(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__709\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__707(vlSelf);
    VTestDriver___024root___eval_initial__TOP__708(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory[3U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory[4U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory[5U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory[6U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT__Memory[7U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_phits_out_async_io_enq_q_4__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT__beat 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT__chosen_reg 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__out_arb__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__710(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__710\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
        [6U];
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__711(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__711\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__712(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__712\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__709(vlSelf);
    VTestDriver___024root___eval_initial__TOP__710(vlSelf);
    VTestDriver___024root___eval_initial__TOP__711(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__713(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__713\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__714(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__714\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__712(vlSelf);
    VTestDriver___024root___eval_initial__TOP__713(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__715(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__715\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__716(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__716\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__714(vlSelf);
    VTestDriver___024root___eval_initial__TOP__715(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__717(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__717\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__718(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__718\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__716(vlSelf);
    VTestDriver___024root___eval_initial__TOP__717(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__719(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__719\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__720(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__720\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__718(vlSelf);
    VTestDriver___024root___eval_initial__TOP__719(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__721(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__721\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__722(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__722\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__720(vlSelf);
    VTestDriver___024root___eval_initial__TOP__721(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__723(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__723\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__724(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__724\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__722(vlSelf);
    VTestDriver___024root___eval_initial__TOP__723(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory[3U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory[4U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory[5U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory[6U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT__Memory[7U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_0_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__725(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__725\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
        [6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__726(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__726\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__727(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__727\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__724(vlSelf);
    VTestDriver___024root___eval_initial__TOP__725(vlSelf);
    VTestDriver___024root___eval_initial__TOP__726(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__728(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__728\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__729(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__729\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__727(vlSelf);
    VTestDriver___024root___eval_initial__TOP__728(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__730(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__730\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__731(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__731\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__729(vlSelf);
    VTestDriver___024root___eval_initial__TOP__730(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__732(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__732\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__733(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__733\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__731(vlSelf);
    VTestDriver___024root___eval_initial__TOP__732(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__734(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__734\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__735(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__735\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__733(vlSelf);
    VTestDriver___024root___eval_initial__TOP__734(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__736(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__736\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__737(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__737\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__735(vlSelf);
    VTestDriver___024root___eval_initial__TOP__736(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__738(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__738\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__739(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__739\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__737(vlSelf);
    VTestDriver___024root___eval_initial__TOP__738(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory[3U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory[4U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory[5U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory[6U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT__Memory[7U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_1_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__740(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__740\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
        [6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__741(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__741\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__742(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__742\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__739(vlSelf);
    VTestDriver___024root___eval_initial__TOP__740(vlSelf);
    VTestDriver___024root___eval_initial__TOP__741(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__743(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__743\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__744(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__744\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__742(vlSelf);
    VTestDriver___024root___eval_initial__TOP__743(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__745(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__745\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__746(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__746\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__744(vlSelf);
    VTestDriver___024root___eval_initial__TOP__745(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__747(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__747\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__748(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__748\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__746(vlSelf);
    VTestDriver___024root___eval_initial__TOP__747(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__749(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__749\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__750(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__750\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__748(vlSelf);
    VTestDriver___024root___eval_initial__TOP__749(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__751(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__751\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__752(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__752\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__750(vlSelf);
    VTestDriver___024root___eval_initial__TOP__751(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_2__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__753(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__753\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__754(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__754\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__752(vlSelf);
    VTestDriver___024root___eval_initial__TOP__753(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT__Memory[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT__Memory[3U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT__Memory[4U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT__Memory[5U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT__Memory[6U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT__Memory[7U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_2_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__755(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__755\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___RANDOM
        [6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__756(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__756\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__757(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__757\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__754(vlSelf);
    VTestDriver___024root___eval_initial__TOP__755(vlSelf);
    VTestDriver___024root___eval_initial__TOP__756(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__758(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__758\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__759(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__759\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__757(vlSelf);
    VTestDriver___024root___eval_initial__TOP__758(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__760(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__760\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__761(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__761\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__759(vlSelf);
    VTestDriver___024root___eval_initial__TOP__760(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__762(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__762\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__763(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__763\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__761(vlSelf);
    VTestDriver___024root___eval_initial__TOP__762(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__764(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__764\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__765(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__765\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__763(vlSelf);
    VTestDriver___024root___eval_initial__TOP__764(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__766(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__766\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__767(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__767\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__765(vlSelf);
    VTestDriver___024root___eval_initial__TOP__766(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_3__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__768(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__768\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__769(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__769\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__767(vlSelf);
    VTestDriver___024root___eval_initial__TOP__768(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT__Memory[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT__Memory[3U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT__Memory[4U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT__Memory[5U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT__Memory[6U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT__Memory[7U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_3_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__770(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__770\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___RANDOM[7U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT____Vlvbound_h09685ece__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___RANDOM[8U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT____Vlvbound_h09685ece__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_0_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_1_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___RANDOM
        [1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_2_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___RANDOM
        [2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_3_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___RANDOM
        [3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_4_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___RANDOM
        [4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_5_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___RANDOM
        [5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_6_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___RANDOM
        [6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__mem_7_phit 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___RANDOM
        [7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__widx_widx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___RANDOM
           [8U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ready_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___RANDOM
                 [8U] >> 4U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__771(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__771\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__widx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT___RANDOM
                   [8U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__widx_widx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ready_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__widx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__772(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__772\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__769(vlSelf);
    VTestDriver___024root___eval_initial__TOP__770(vlSelf);
    VTestDriver___024root___eval_initial__TOP__771(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__773(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__773\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__774(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__774\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__772(vlSelf);
    VTestDriver___024root___eval_initial__TOP__773(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__775(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__775\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__source_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__776(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__776\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__774(vlSelf);
    VTestDriver___024root___eval_initial__TOP__775(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__source__DOT____Vcellinp__sink_extend__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT___phy_io_outer_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__ridx_ridx_bin 
        = (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__777(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__777\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__valid_reg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__ridx_gray 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT___RANDOM
                   [0U] >> 5U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__valid_reg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__ridx_gray = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__778(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__778\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__776(vlSelf);
    VTestDriver___024root___eval_initial__TOP__777(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__779(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__779\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__780(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__780\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__778(vlSelf);
    VTestDriver___024root___eval_initial__TOP__779(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT___RANDOM
        [0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_0__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__781(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__781\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__sink_valid_1__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__782(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__782\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__780(vlSelf);
    VTestDriver___024root___eval_initial__TOP__781(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_1__DOT__sink__DOT____Vcellinp__sink_valid_0__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_in_async_4__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__783(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__783\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__784(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__784\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__782(vlSelf);
    VTestDriver___024root___eval_initial__TOP__783(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT__Memory[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT__Memory[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT__Memory[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT__Memory[3U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT__Memory[4U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT__Memory[5U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT__Memory[6U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT__Memory[7U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_phits_io_inner_ser_4_in_q__DOT__ram_flit_ext__DOT___RANDOM_MEM;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_demux__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_demux__DOT___RANDOM[1U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_demux__DOT__beat 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_demux__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__785(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__785\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_demux__DOT__channel_vec_0 
        = ((0xfffffffeU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_demux__DOT___RANDOM
            [0U]) | (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy__DOT__in_demux__DOT___RANDOM
                     [1U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__786(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__786\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__784(vlSelf);
    VTestDriver___024root___eval_initial__TOP__785(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy_io_outer_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy_io_outer_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy_io_outer_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy_io_outer_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy_io_outer_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy_io_outer_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy_io_outer_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy_io_outer_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy_io_outer_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__phy_io_outer_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT___RANDOM[1U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__div 
        = (0xffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txen 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT___RANDOM
                 [0U] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxen 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT___RANDOM
                 [0U] >> 0x11U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txwm 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT___RANDOM
                   [0U] >> 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxwm 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT___RANDOM
           [0U] >> 0x1cU);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__787(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__787\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__nstop 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT___RANDOM
           [1U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_rxwm 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT___RANDOM
                 [1U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_txwm 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT___RANDOM
                 [1U] >> 3U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__788(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__788\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VTestDriver___024root___eval_initial__TOP__786(vlSelf);
    VTestDriver___024root___eval_initial__TOP__787(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__intsource__DOT__reg_0__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__intsource__DOT__reg_0__DOT__reg_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__intsource__DOT__reg_0__DOT___RANDOM
           [0U]);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_anon_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__intsource__DOT__reg_0__DOT__reg_0 = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__prescaler 
        = (0xffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__counter 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT___RANDOM
                   [0U] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__shifter 
        = (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT___RANDOM
                     [0U] >> 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__out 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT___RANDOM
                 [0U] >> 0x1dU));
    __Vtemp_1[0U] = 0x783d2564U;
    __Vtemp_1[1U] = 0x72745f74U;
    __Vtemp_1[2U] = 0x7561U;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__plusarg_reader__DOT__myplus = 1U;
    }
    __Vtemp_2[0U] = 0x663d2564U;
    __Vtemp_2[1U] = 0x72696e74U;
    __Vtemp_2[2U] = 0x74785f70U;
    __Vtemp_2[3U] = 0x6172745fU;
    __Vtemp_2[4U] = 0x75U;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT___RANDOM
                 [0U] >> 3U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__789(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__789\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT___RANDOM
                 [0U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__790(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__790\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM = 0;
    // Body
    VTestDriver___024root___eval_initial__TOP__788(vlSelf);
    VTestDriver___024root___eval_initial__TOP__789(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT__Memory[0U] 
        = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT__Memory[1U] 
        = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT__Memory[2U] 
        = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT__Memory[3U] 
        = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT__Memory[4U] 
        = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT__Memory[5U] 
        = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT__Memory[6U] 
        = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT__Memory[7U] 
        = (0xffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__791(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__791\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT___RANDOM[1U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__debounce 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__prescaler 
        = (0x1fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT___RANDOM
                      [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__data_count 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT___RANDOM
                   [0U] >> 0xfU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__sample_count 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT___RANDOM
                   [0U] >> 0x13U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__sample 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT___RANDOM
                 [0U] >> 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__shifter 
        = ((0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT___RANDOM
                     [0U] >> 0x18U)) | (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT___RANDOM
                                        [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__valid 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT___RANDOM
                 [1U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__state 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT___RANDOM
                 [1U] >> 3U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__792(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__792\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__790(vlSelf);
    VTestDriver___024root___eval_initial__TOP__791(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__enq_ptr_value 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__deq_ptr_value 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT__Memory[0U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT__Memory[1U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT__Memory[2U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT__Memory[3U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT__Memory[4U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT__Memory[5U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__793(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__793\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT__Memory[6U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT__Memory[7U] 
        = (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT___RANDOM_MEM);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__794(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__794\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__792(vlSelf);
    VTestDriver___024root___eval_initial__TOP__793(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__beatsLeft 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__readys_mask 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__state_0 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT___RANDOM
                 [0U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__state_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__regs_0__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__regs_0__DOT__reg_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__regs_0__DOT___RANDOM
           [0U]);
    if (vlSelf->TestDriver__DOT__reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__regs_0__DOT__reg_0 = 1U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__795(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__795\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__794(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__acknum 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__dOrig 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__dToggle 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__gennum 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT___RANDOM
                 [0U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__aToggle_r 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT___RANDOM
                 [0U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__repeater__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__repeater__DOT___RANDOM[1U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__repeater__DOT__full 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__repeater__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__repeater__DOT__saved_opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__repeater__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__repeater__DOT__saved_size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__repeater__DOT___RANDOM
                 [0U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__repeater__DOT__saved_source 
        = (0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__repeater__DOT___RANDOM
                    [0U] >> 0xaU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__796(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__796\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__repeater__DOT__saved_address 
        = ((0x1fffc0U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__repeater__DOT___RANDOM
                         [0U] >> 0xbU)) | (0x3fU & 
                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__repeater__DOT___RANDOM
                                           [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__repeater__DOT__saved_mask 
        = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__repeater__DOT___RANDOM
                    [1U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__797(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__797\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__795(vlSelf);
    VTestDriver___024root___eval_initial__TOP__796(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__acknum 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__dOrig 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__dToggle 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__gennum 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT___RANDOM
                 [0U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__aToggle_r 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT___RANDOM
                 [0U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT___RANDOM[1U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__saved_opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__saved_size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT___RANDOM
                 [0U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__saved_source 
        = (0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT___RANDOM
                    [0U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__saved_mask 
        = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT___RANDOM
                    [1U] >> 6U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__798(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__798\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__797(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT___RANDOM[1U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__busyReg 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__stickyBusyReg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__stickyNonzeroRespReg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__downgradeOpReg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqReg_addr 
        = (0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT___RANDOM
                    [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqReg_data 
        = ((0xfffff800U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT___RANDOM
            [0U]) | (0x7ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT___RANDOM
                     [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqReg_op 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT___RANDOM
                 [1U] >> 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqValidReg 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT___RANDOM
                 [1U] >> 0xdU));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__busyReg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__stickyBusyReg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__stickyNonzeroRespReg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__downgradeOpReg = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqValidReg = 0U;
    }
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__799(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__799\n"); );
    // Body
    VTestDriver___024root___eval_initial__TOP__798(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_0 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_2 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_3 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_4 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 4U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_5 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_6 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_7 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_8 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_9 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_10 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 0xaU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__800(VTestDriver___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__800\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_11 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_12 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_13 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_14 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 0xeU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_15 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 0xfU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_16 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 0x10U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_17 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 0x11U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_18 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 0x12U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_19 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 0x13U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_20 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_21 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 0x15U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_22 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT___RANDOM
                 [0U] >> 0x16U));
}
