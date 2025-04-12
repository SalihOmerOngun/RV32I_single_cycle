// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___eval_static(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb___024root___eval_final(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_final\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_settle(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_settle\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf);
VL_ATTR_COLD void Vtb___024root____Vm_traceActivitySetAll(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb___024root___stl_sequent__TOP__0(vlSelf);
        Vtb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___stl_sequent__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_1_0;
    tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_1_0 = 0;
    // Body
    vlSelfRef.tb__DOT__data = vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
        [(0x7ffU & vlSelfRef.tb__DOT__addr)];
    tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_1_0 
        = (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem
           [(0x7ffU & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_excte 
                       >> 2U))]);
    vlSelfRef.tb__DOT__i_core_model__DOT__instr = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem
        [(0x7ffU & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_excte 
                    >> 2U))];
    vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
    if ((0x40U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
        if ((0x20U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            if ((0x10U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
            } else if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        if ((1U & (~ vlSelfRef.tb__DOT__i_core_model__DOT__instr))) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
                            vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
                        }
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
                }
                vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en 
                    = ((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                              >> 2U)) && ((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)));
            } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((1U & (~ vlSelfRef.tb__DOT__i_core_model__DOT__instr))) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
                }
                vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en 
                    = ((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                              >> 1U)) && (1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr));
            } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                  >> 0xeU)))) {
                        if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
                            vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 0U;
                        }
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 0U;
                }
                if ((1U & (~ vlSelfRef.tb__DOT__i_core_model__DOT__instr))) {
                    vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
            }
        } else {
            vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
        }
    } else if ((0x20U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
        if ((0x10U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
            } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((1U & (~ vlSelfRef.tb__DOT__i_core_model__DOT__instr))) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
                }
                vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en 
                    = ((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                              >> 1U)) && (1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr));
            } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                if ((1U & (~ vlSelfRef.tb__DOT__i_core_model__DOT__instr))) {
                    vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
                }
                if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                                if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                            >> 0x19U))) {
                                    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 1U;
                                }
                            } else if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                               >> 0x19U))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 1U;
                            }
                        } else if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                        >> 0x19U))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 1U;
                            } else if ((0x20U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                  >> 0x19U))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 1U;
                            }
                        } else if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                           >> 0x19U))) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 1U;
                        }
                    } else if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                        >> 0x19U))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 1U;
                            }
                        } else if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                           >> 0x19U))) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 1U;
                        }
                    } else if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                    >> 0x19U))) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 1U;
                        }
                    } else if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                       >> 0x19U))) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 1U;
                    } else if ((0x20U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                          >> 0x19U))) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 1U;
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 0U;
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
            }
        } else {
            vlSelfRef.tb__DOT__i_core_model__DOT__mem_en 
                = ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                >> 1U)) 
                                              && ((1U 
                                                   & vlSelfRef.tb__DOT__i_core_model__DOT__instr) 
                                                  && ((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                           >> 0xcU))) 
                                                      || ((1U 
                                                           == 
                                                           (7U 
                                                            & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                               >> 0xcU))) 
                                                          || (2U 
                                                              == 
                                                              (7U 
                                                               & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                                  >> 0xcU)))))))));
            if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
            } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
            } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((0U != (7U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                      >> 0xcU)))) {
                        if ((1U != (7U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                          >> 0xcU)))) {
                            if ((2U != (7U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                              >> 0xcU)))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 0U;
                            }
                        }
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 0U;
                }
                if ((1U & (~ vlSelfRef.tb__DOT__i_core_model__DOT__instr))) {
                    vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
            }
        }
    } else if ((0x10U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
        if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
        } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                if ((1U & (~ vlSelfRef.tb__DOT__i_core_model__DOT__instr))) {
                    vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
            }
            vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en 
                = ((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                          >> 1U)) && (1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr));
        } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                              >> 0xeU)))) {
                    if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                  >> 0xdU)))) {
                        if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            if ((0U != (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                        >> 0x19U))) {
                                if ((0x30U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                               >> 0x19U))) {
                                    if ((0U != (0x1fU 
                                                & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                   >> 0x14U)))) {
                                        if ((1U != 
                                             (0x1fU 
                                              & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                 >> 0x14U)))) {
                                            if ((2U 
                                                 != 
                                                 (0x1fU 
                                                  & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                     >> 0x14U)))) {
                                                vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
                                            }
                                        }
                                    }
                                } else {
                                    vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
                                }
                            }
                        }
                    }
                }
                if ((0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 1U;
                    } else if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                    >> 0x19U))) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 1U;
                        } else if ((0x20U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                              >> 0x19U))) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 1U;
                        }
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 1U;
                    }
                    if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                  >> 0xdU)))) {
                        if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__shamt 
                                = (0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                            >> 0x14U));
                        }
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en 
                        = ((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                  >> 0xdU)) || ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                     >> 0xcU))) 
                                                || ((0U 
                                                     == 
                                                     (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                      >> 0x19U)) 
                                                    || (0x30U 
                                                        == 
                                                        (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                         >> 0x19U)))));
                    if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                  >> 0xdU)))) {
                        if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                        >> 0x19U))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__shamt 
                                    = (0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                >> 0x14U));
                            } else if ((0x30U != (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                  >> 0x19U))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
                            }
                        }
                    }
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
            }
        } else {
            vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
        }
    } else {
        if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
        } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
        } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                if ((0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
                    }
                } else if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
                    }
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
            }
            if ((1U & (~ vlSelfRef.tb__DOT__i_core_model__DOT__instr))) {
                vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
            }
        } else {
            vlSelfRef.tb__DOT__i_core_model__DOT__mem_en = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
        }
        vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en 
            = ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                         >> 3U))) && ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                >> 2U))) 
                                      && ((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                 >> 1U)) 
                                          && ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr) 
                                              && (1U 
                                                  & ((0x4000U 
                                                      & vlSelfRef.tb__DOT__i_core_model__DOT__instr)
                                                      ? 
                                                     (~ 
                                                      (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                       >> 0xdU))
                                                      : 
                                                     ((1U 
                                                       & (~ 
                                                          (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                           >> 0xdU))) 
                                                      || (1U 
                                                          & (~ 
                                                             (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                              >> 0xcU))))))))));
    }
    if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                  >> 6U)))) {
        if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                      >> 5U)))) {
            if ((0x10U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                                if ((0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                                    if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                                            if ((0U 
                                                 == 
                                                 (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                  >> 0x19U))) {
                                                vlSelfRef.tb__DOT__i_core_model__DOT__shamt_data 
                                                    = vlSelfRef.tb__DOT__i_core_model__DOT__shamt;
                                            } else if (
                                                       (0x20U 
                                                        == 
                                                        (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                         >> 0x19U))) {
                                                vlSelfRef.tb__DOT__i_core_model__DOT__shamt_data 
                                                    = vlSelfRef.tb__DOT__i_core_model__DOT__shamt;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                   >> 0xdU)))) {
                                    if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                                        if ((0U == 
                                             (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                              >> 0x19U))) {
                                            vlSelfRef.tb__DOT__i_core_model__DOT__shamt_data 
                                                = vlSelfRef.tb__DOT__i_core_model__DOT__shamt;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
        if ((0x20U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            if ((0x10U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
            } else if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data 
                            = ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)
                                ? ((VL_EXTENDS_II(12,1, 
                                                  (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                   >> 0x1fU)) 
                                    << 0x14U) | (((0xff000U 
                                                   & vlSelfRef.tb__DOT__i_core_model__DOT__instr) 
                                                  | (0x800U 
                                                     & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                        >> 9U))) 
                                                 | (0x7feU 
                                                    & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                       >> 0x14U))))
                                : 0U);
                        if ((1U & (~ vlSelfRef.tb__DOT__i_core_model__DOT__instr))) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
                            vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
                        }
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
                }
            } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        if ((0U == (7U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                          >> 0xcU)))) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data 
                                = ((VL_EXTENDS_II(20,1, 
                                                  (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                   >> 0x1fU)) 
                                    << 0xcU) | (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                >> 0x14U));
                            vlSelfRef.tb__DOT__i_core_model__DOT__rs1 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file
                                [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                           >> 0xfU))];
                        }
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
                    }
                    if ((1U & (~ vlSelfRef.tb__DOT__i_core_model__DOT__instr))) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
                }
            } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data 
                        = ((VL_EXTENDS_II(19,1, (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                 >> 0x1fU)) 
                            << 0xdU) | (((0x1000U & 
                                          (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                           >> 0x13U)) 
                                         | (0x800U 
                                            & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                               << 4U))) 
                                        | ((0x7e0U 
                                            & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                 >> 7U)))));
                    vlSelfRef.tb__DOT__i_core_model__DOT__rs1 
                        = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file
                        [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                   >> 0xfU))];
                    vlSelfRef.tb__DOT__i_core_model__DOT__rs2 
                        = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file
                        [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                   >> 0x14U))];
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
            }
        } else {
            vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
        }
    } else if ((0x20U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
        if ((0x10U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
            } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data 
                        = ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)
                            ? (0xfffff000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)
                            : 0U);
                    if ((1U & (~ vlSelfRef.tb__DOT__i_core_model__DOT__instr))) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
                }
            } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                if ((1U & (~ vlSelfRef.tb__DOT__i_core_model__DOT__instr))) {
                    vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
                }
                if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    vlSelfRef.tb__DOT__i_core_model__DOT__rs1 
                        = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file
                        [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                   >> 0xfU))];
                    vlSelfRef.tb__DOT__i_core_model__DOT__rs2 
                        = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file
                        [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                   >> 0x14U))];
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
            }
        } else if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
        } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
        } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data 
                    = ((VL_EXTENDS_II(20,1, (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                             >> 0x1fU)) 
                        << 0xcU) | ((0xfe0U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                               >> 0x14U)) 
                                    | (0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                >> 7U))));
                vlSelfRef.tb__DOT__i_core_model__DOT__rs1 
                    = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file
                    [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                               >> 0xfU))];
                vlSelfRef.tb__DOT__i_core_model__DOT__rs2 
                    = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file
                    [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                               >> 0x14U))];
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
            }
        } else {
            vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
        }
    } else if ((0x10U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
        if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
        } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data 
                    = ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)
                        ? (0xfffff000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)
                        : 0U);
                if ((1U & (~ vlSelfRef.tb__DOT__i_core_model__DOT__instr))) {
                    vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
            }
        } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                if ((0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data 
                                = ((VL_EXTENDS_II(20,1, 
                                                  (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                   >> 0x1fU)) 
                                    << 0xcU) | (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                >> 0x14U));
                            vlSelfRef.tb__DOT__i_core_model__DOT__rs1 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file
                                [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                           >> 0xfU))];
                        } else {
                            vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data 
                                = ((VL_EXTENDS_II(20,1, 
                                                  (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                   >> 0x1fU)) 
                                    << 0xcU) | (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                >> 0x14U));
                            vlSelfRef.tb__DOT__i_core_model__DOT__rs1 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file
                                [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                           >> 0xfU))];
                        }
                    } else {
                        if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                      >> 0xcU)))) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data 
                                = ((VL_EXTENDS_II(20,1, 
                                                  (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                   >> 0x1fU)) 
                                    << 0xcU) | (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                >> 0x14U));
                        }
                        vlSelfRef.tb__DOT__i_core_model__DOT__rs1 
                            = ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)
                                ? vlSelfRef.tb__DOT__i_core_model__DOT__reg_file
                               [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                          >> 0xfU))]
                                : vlSelfRef.tb__DOT__i_core_model__DOT__reg_file
                               [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                          >> 0xfU))]);
                    }
                } else if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data 
                            = ((VL_EXTENDS_II(20,1, 
                                              (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                               >> 0x1fU)) 
                                << 0xcU) | (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                            >> 0x14U));
                        vlSelfRef.tb__DOT__i_core_model__DOT__rs1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file
                            [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                       >> 0xfU))];
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data 
                            = ((VL_EXTENDS_II(20,1, 
                                              (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                               >> 0x1fU)) 
                                << 0xcU) | (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                            >> 0x14U));
                        vlSelfRef.tb__DOT__i_core_model__DOT__rs1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file
                            [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                       >> 0xfU))];
                    }
                } else {
                    if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                  >> 0xcU)))) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data 
                            = ((VL_EXTENDS_II(20,1, 
                                              (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                               >> 0x1fU)) 
                                << 0xcU) | (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                            >> 0x14U));
                    }
                    vlSelfRef.tb__DOT__i_core_model__DOT__rs1 
                        = ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)
                            ? ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                       >> 0x19U)) ? 
                               vlSelfRef.tb__DOT__i_core_model__DOT__reg_file
                               [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                          >> 0xfU))]
                                : ((0x30U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                              >> 0x19U))
                                    ? vlSelfRef.tb__DOT__i_core_model__DOT__reg_file
                                   [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                              >> 0xfU))]
                                    : 0U)) : vlSelfRef.tb__DOT__i_core_model__DOT__reg_file
                           [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                      >> 0xfU))]);
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
            }
            if ((1U & (~ vlSelfRef.tb__DOT__i_core_model__DOT__instr))) {
                vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
            }
        } else {
            vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
        }
    } else if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
        vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
    } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
        vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
    } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
        if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data 
                = ((VL_EXTENDS_II(20,1, (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                         >> 0x1fU)) 
                    << 0xcU) | (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                >> 0x14U));
            vlSelfRef.tb__DOT__i_core_model__DOT__rs1 
                = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file
                [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                           >> 0xfU))];
            vlSelfRef.tb__DOT__i_core_model__DOT__rs2 
                = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file
                [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                           >> 0x14U))];
        } else {
            vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
        }
    } else {
        vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
    }
    if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                  >> 6U)))) {
        if ((0x20U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                                if ((0U == (7U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                  >> 0xcU)))) {
                                    vlSelfRef.tb__DOT__i_core_model__DOT__mem_data 
                                        = vlSelfRef.tb__DOT__i_core_model__DOT__rs2;
                                } else if ((1U == (7U 
                                                   & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                      >> 0xcU)))) {
                                    vlSelfRef.tb__DOT__i_core_model__DOT__mem_data 
                                        = vlSelfRef.tb__DOT__i_core_model__DOT__rs2;
                                } else if ((2U == (7U 
                                                   & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                      >> 0xcU)))) {
                                    vlSelfRef.tb__DOT__i_core_model__DOT__mem_data 
                                        = vlSelfRef.tb__DOT__i_core_model__DOT__rs2;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
    if ((0x40U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
        if ((0x20U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            if ((0x10U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
            } else if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok 
                    = ((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                              >> 2U)) && ((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)));
                if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                            vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__pc_excte;
                        } else {
                            vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                            vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                        }
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                }
            } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok 
                    = ((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                              >> 1U)) && (1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr));
                if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__rs1;
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                }
            } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                                if ((vlSelfRef.tb__DOT__i_core_model__DOT__rs1 
                                     >= vlSelfRef.tb__DOT__i_core_model__DOT__rs2)) {
                                    vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 1U;
                                    vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                        = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                                    vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                        = vlSelfRef.tb__DOT__i_core_model__DOT__pc_excte;
                                }
                            } else if ((vlSelfRef.tb__DOT__i_core_model__DOT__rs1 
                                        < vlSelfRef.tb__DOT__i_core_model__DOT__rs2)) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 1U;
                                vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                                vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__pc_excte;
                            }
                        } else if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            if (VL_GTES_III(32, vlSelfRef.tb__DOT__i_core_model__DOT__rs1, vlSelfRef.tb__DOT__i_core_model__DOT__rs2)) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 1U;
                                vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                                vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__pc_excte;
                            }
                        } else if (VL_LTS_III(32, vlSelfRef.tb__DOT__i_core_model__DOT__rs1, vlSelfRef.tb__DOT__i_core_model__DOT__rs2)) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 1U;
                            vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                            vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__pc_excte;
                        }
                    } else if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                    } else if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        if ((vlSelfRef.tb__DOT__i_core_model__DOT__rs1 
                             != vlSelfRef.tb__DOT__i_core_model__DOT__rs2)) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 1U;
                            vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                            vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__pc_excte;
                        }
                    } else if ((vlSelfRef.tb__DOT__i_core_model__DOT__rs1 
                                == vlSelfRef.tb__DOT__i_core_model__DOT__rs2)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 1U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__pc_excte;
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
            }
            if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                          >> 4U)))) {
                if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                        }
                    }
                } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        if ((0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                                if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                                    if ((vlSelfRef.tb__DOT__i_core_model__DOT__rs1 
                                         >= vlSelfRef.tb__DOT__i_core_model__DOT__rs2)) {
                                        vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                                    }
                                } else if ((vlSelfRef.tb__DOT__i_core_model__DOT__rs1 
                                            < vlSelfRef.tb__DOT__i_core_model__DOT__rs2)) {
                                    vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                                }
                            } else if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                                if (VL_GTES_III(32, vlSelfRef.tb__DOT__i_core_model__DOT__rs1, vlSelfRef.tb__DOT__i_core_model__DOT__rs2)) {
                                    vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                                }
                            } else if (VL_LTS_III(32, vlSelfRef.tb__DOT__i_core_model__DOT__rs1, vlSelfRef.tb__DOT__i_core_model__DOT__rs2)) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                            }
                        } else if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                             >> 0xdU)))) {
                            if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                                if ((vlSelfRef.tb__DOT__i_core_model__DOT__rs1 
                                     != vlSelfRef.tb__DOT__i_core_model__DOT__rs2)) {
                                    vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                                }
                            } else if ((vlSelfRef.tb__DOT__i_core_model__DOT__rs1 
                                        == vlSelfRef.tb__DOT__i_core_model__DOT__rs2)) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                            }
                        }
                    }
                }
            }
        } else {
            vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
        }
    } else if ((0x20U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
        if ((0x10U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
            } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((1U & (~ vlSelfRef.tb__DOT__i_core_model__DOT__instr))) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                    }
                    vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                        = ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)
                            ? vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data
                            : 0U);
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                }
            } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                if ((1U & (~ vlSelfRef.tb__DOT__i_core_model__DOT__instr))) {
                    vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
                }
                if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                                if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                            >> 0x19U))) {
                                    vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                        = vlSelfRef.tb__DOT__i_core_model__DOT__rs1;
                                    vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                        = vlSelfRef.tb__DOT__i_core_model__DOT__rs2;
                                }
                            } else if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                               >> 0x19U))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__rs1;
                                vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__rs2;
                            }
                        } else if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                        >> 0x19U))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__rs1;
                                vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__rs2;
                            } else if ((0x20U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                  >> 0x19U))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__rs1;
                                vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__rs2;
                            }
                        } else if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                           >> 0x19U))) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__rs1;
                            vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__rs2;
                        }
                    } else if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                         >> 0xdU)))) {
                        if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                        >> 0x19U))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__rs1;
                                vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__rs2;
                            }
                        } else if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                           >> 0x19U))) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__rs1;
                            vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__rs2;
                        } else if ((0x20U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                              >> 0x19U))) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__rs1;
                            vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__rs2;
                        }
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
            }
            if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                          >> 3U)))) {
                if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0xdU;
                        }
                    }
                } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        if ((0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                                if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                                    if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                >> 0x19U))) {
                                        vlSelfRef.tb__DOT__i_core_model__DOT__sel = 4U;
                                    }
                                } else if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                   >> 0x19U))) {
                                    vlSelfRef.tb__DOT__i_core_model__DOT__sel = 2U;
                                }
                            } else if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                                if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                            >> 0x19U))) {
                                    vlSelfRef.tb__DOT__i_core_model__DOT__sel = 6U;
                                } else if ((0x20U == 
                                            (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                             >> 0x19U))) {
                                    vlSelfRef.tb__DOT__i_core_model__DOT__sel = 7U;
                                }
                            } else if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                               >> 0x19U))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__sel = 3U;
                            }
                        } else if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                                if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                            >> 0x19U))) {
                                    vlSelfRef.tb__DOT__i_core_model__DOT__sel 
                                        = ((vlSelfRef.tb__DOT__i_core_model__DOT__rs1 
                                            < vlSelfRef.tb__DOT__i_core_model__DOT__rs2)
                                            ? 0xcU : 0xbU);
                                }
                            } else if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                               >> 0x19U))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__sel 
                                    = (VL_LTS_III(32, vlSelfRef.tb__DOT__i_core_model__DOT__rs1, vlSelfRef.tb__DOT__i_core_model__DOT__rs2)
                                        ? 0xcU : 0xbU);
                            }
                        } else if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                        >> 0x19U))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__sel = 5U;
                            }
                        } else if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                           >> 0x19U))) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                        } else if ((0x20U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                              >> 0x19U))) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__sel = 1U;
                        }
                    }
                }
            }
        } else {
            if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
            } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
            } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((0U != (7U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                      >> 0xcU)))) {
                        if ((1U != (7U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                          >> 0xcU)))) {
                            if ((2U != (7U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                              >> 0xcU)))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
                            }
                        }
                    }
                    if ((0U == (7U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                      >> 0xcU)))) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__rs1;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                    } else if ((1U == (7U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__rs1;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                    } else if ((2U == (7U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                             >> 0xcU)))) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__rs1;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
            }
            if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            if ((0U == (7U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                              >> 0xcU)))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                            } else if ((1U == (7U & 
                                               (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                >> 0xcU)))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                            } else if ((2U == (7U & 
                                               (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                >> 0xcU)))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x10U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
        if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
        } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                if ((1U & (~ vlSelfRef.tb__DOT__i_core_model__DOT__instr))) {
                    vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
                }
                if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                        = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                        = vlSelfRef.tb__DOT__i_core_model__DOT__pc_excte;
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
            }
        } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                              >> 0xeU)))) {
                    if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                  >> 0xdU)))) {
                        if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            if ((0U != (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                        >> 0x19U))) {
                                if ((0x30U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                               >> 0x19U))) {
                                    if ((0U != (0x1fU 
                                                & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                   >> 0x14U)))) {
                                        if ((1U != 
                                             (0x1fU 
                                              & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                 >> 0x14U)))) {
                                            if ((2U 
                                                 != 
                                                 (0x1fU 
                                                  & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                     >> 0x14U)))) {
                                                vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
                                            }
                                        }
                                    }
                                } else {
                                    vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
                                }
                            }
                        }
                    }
                }
                if ((0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__rs1;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                    } else {
                        if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                        >> 0x19U))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__rs1;
                            } else if ((0x20U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                  >> 0x19U))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__rs1;
                            }
                        } else {
                            vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__rs1;
                        }
                        if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                      >> 0xcU)))) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                     >> 0xdU)))) {
                    if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            = ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                       >> 0x19U)) ? vlSelfRef.tb__DOT__i_core_model__DOT__rs1
                                : ((0x30U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                              >> 0x19U))
                                    ? ((0U == (0x1fU 
                                               & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                  >> 0x14U)))
                                        ? vlSelfRef.tb__DOT__i_core_model__DOT__rs1
                                        : ((1U == (0x1fU 
                                                   & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                      >> 0x14U)))
                                            ? vlSelfRef.tb__DOT__i_core_model__DOT__rs1
                                            : ((2U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                    >> 0x14U)))
                                                ? vlSelfRef.tb__DOT__i_core_model__DOT__rs1
                                                : 0U)))
                                    : 0U));
                        if ((0U != (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                    >> 0x19U))) {
                            if ((0x30U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                           >> 0x19U))) {
                                if ((0U != (0x1fU & 
                                            (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                             >> 0x14U)))) {
                                    if ((1U != (0x1fU 
                                                & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                   >> 0x14U)))) {
                                        if ((2U != 
                                             (0x1fU 
                                              & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                 >> 0x14U)))) {
                                            vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                                        }
                                    }
                                }
                            } else {
                                vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                            }
                        }
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__rs1;
                    }
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
            }
        } else {
            vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
        }
        if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                      >> 3U)))) {
            if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                    }
                }
            } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__sel 
                                = ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)
                                    ? 4U : 2U);
                        } else if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                        >> 0x19U))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__sel = 9U;
                            } else if ((0x20U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                  >> 0x19U))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0xaU;
                            }
                        } else {
                            vlSelfRef.tb__DOT__i_core_model__DOT__sel = 3U;
                        }
                    } else if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__sel 
                            = ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)
                                ? ((vlSelfRef.tb__DOT__i_core_model__DOT__rs1 
                                    < vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data)
                                    ? 0xcU : 0xbU) : 
                               (VL_LTS_III(32, vlSelfRef.tb__DOT__i_core_model__DOT__rs1, vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data)
                                 ? 0xcU : 0xbU));
                    } else if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                    >> 0x19U))) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__sel = 8U;
                        } else if ((0x30U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                              >> 0x19U))) {
                            if ((0U == (0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                 >> 0x14U)))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0xeU;
                            } else if ((1U == (0x1fU 
                                               & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                  >> 0x14U)))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0xfU;
                            } else if ((2U == (0x1fU 
                                               & (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                                  >> 0x14U)))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0x10U;
                            }
                        }
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                    }
                }
            }
        }
    } else {
        if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
        } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
        } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
            if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                if ((0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__rs1;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                    }
                } else if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__rs1;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                        = vlSelfRef.tb__DOT__i_core_model__DOT__rs1;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                        = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
            }
        } else {
            vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
        }
        if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                      >> 3U)))) {
            if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                          >> 2U)))) {
                if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                    if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                        if ((0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                          >> 0xdU)))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                            }
                        } else if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)) {
                            if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr 
                                          >> 0xcU)))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                            }
                        } else {
                            vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb__DOT__i_core_model__DOT__alu_out = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16 = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8 = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4 = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val2 = 0U;
    if ((0x10U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel)))) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__i = 0x20U;
                    }
                }
            }
        }
        if ((8U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))) {
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val2 = 0U;
        } else if ((4U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))) {
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val2 = 0U;
        } else if ((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))) {
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val2 = 0U;
        } else if ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))) {
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val2 = 0U;
        } else {
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & vlSelfRef.tb__DOT__i_core_model__DOT__number1));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 1U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 2U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 3U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 4U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 5U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 6U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 7U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 8U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 9U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0xaU)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0xbU)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0xcU)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0xdU)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0xeU)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0xfU)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x10U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x11U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x12U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x13U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x14U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x15U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x16U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x17U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x18U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x19U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x1aU)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x1bU)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x1cU)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x1dU)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x1eU)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                   + (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                      >> 0x1fU));
        }
    } else if ((8U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))) {
        if ((4U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))) {
            if ((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))) {
                if ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))) {
                    if ((0U == vlSelfRef.tb__DOT__i_core_model__DOT__number1)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__alu_out = 0x20U;
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result 
                            = ((0xfU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result)) 
                               | ((0U == (0xffffU & vlSelfRef.tb__DOT__i_core_model__DOT__number1)) 
                                  << 4U));
                        vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16 
                            = (0xffffU & ((0x10U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result))
                                           ? (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                              >> 0x10U)
                                           : vlSelfRef.tb__DOT__i_core_model__DOT__number1));
                        vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result 
                            = ((0x17U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result)) 
                               | ((0U == (0xffU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16))) 
                                  << 3U));
                        vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8 
                            = (0xffU & ((8U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result))
                                         ? ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16) 
                                            >> 8U) : (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16)));
                        vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result 
                            = ((0x1bU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result)) 
                               | ((0U == (0xfU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8))) 
                                  << 2U));
                        vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4 
                            = (0xfU & ((4U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result))
                                        ? ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8) 
                                           >> 4U) : (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8)));
                        vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result 
                            = ((0x1dU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result)) 
                               | ((0U == (3U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4))) 
                                  << 1U));
                        vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val2 
                            = (3U & ((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result))
                                      ? ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4) 
                                         >> 2U) : (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4)));
                        vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result 
                            = ((0x1eU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result)) 
                               | (1U & (~ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val2))));
                        vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result;
                    }
                } else if ((0U == vlSelfRef.tb__DOT__i_core_model__DOT__number1)) {
                    vlSelfRef.tb__DOT__i_core_model__DOT__alu_out = 0x20U;
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result 
                        = ((0xfU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result)) 
                           | ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                      >> 0x10U)) << 4U));
                    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16 
                        = (0xffffU & ((0x10U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result))
                                       ? vlSelfRef.tb__DOT__i_core_model__DOT__number1
                                       : (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                          >> 0x10U)));
                    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result 
                        = ((0x17U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result)) 
                           | ((0U == (0xffU & ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16) 
                                               >> 8U))) 
                              << 3U));
                    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8 
                        = (0xffU & ((8U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result))
                                     ? (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16)
                                     : ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16) 
                                        >> 8U)));
                    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result 
                        = ((0x1bU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result)) 
                           | ((0U == (0xfU & ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8) 
                                              >> 4U))) 
                              << 2U));
                    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4 
                        = (0xfU & ((4U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result))
                                    ? (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8)
                                    : ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8) 
                                       >> 4U)));
                    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result 
                        = ((0x1dU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result)) 
                           | ((0U == (3U & ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4) 
                                            >> 2U))) 
                              << 1U));
                    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val2 
                        = (3U & ((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result))
                                  ? (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4)
                                  : ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4) 
                                     >> 2U)));
                    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result 
                        = ((0x1eU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result)) 
                           | (1U & (~ ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val2) 
                                       >> 1U))));
                    vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                        = vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result;
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                    = ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))
                        ? vlSelfRef.tb__DOT__i_core_model__DOT__number1
                        : 1U);
            }
        } else {
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
                = ((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))
                    ? ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))
                        ? 0U : (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                >> (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__shamt_data)))
                    : ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))
                        ? (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                           >> (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__shamt_data))
                        : (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                           << (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__shamt_data))));
        }
    } else {
        vlSelfRef.tb__DOT__i_core_model__DOT__alu_out 
            = ((4U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))
                ? ((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))
                    ? ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))
                        ? VL_SHIFTRS_III(32,32,32, vlSelfRef.tb__DOT__i_core_model__DOT__number1, vlSelfRef.tb__DOT__i_core_model__DOT__number2)
                        : VL_SHIFTR_III(32,32,32, vlSelfRef.tb__DOT__i_core_model__DOT__number1, vlSelfRef.tb__DOT__i_core_model__DOT__number2))
                    : ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))
                        ? VL_SHIFTL_III(32,32,32, vlSelfRef.tb__DOT__i_core_model__DOT__number1, vlSelfRef.tb__DOT__i_core_model__DOT__number2)
                        : (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                           & vlSelfRef.tb__DOT__i_core_model__DOT__number2)))
                : ((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))
                    ? ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))
                        ? (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                           ^ vlSelfRef.tb__DOT__i_core_model__DOT__number2)
                        : (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                           | vlSelfRef.tb__DOT__i_core_model__DOT__number2))
                    : ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))
                        ? (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                           - vlSelfRef.tb__DOT__i_core_model__DOT__number2)
                        : (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                           + vlSelfRef.tb__DOT__i_core_model__DOT__number2))));
    }
    vlSelfRef.tb__DOT__i_core_model__DOT__mem_adres = 0U;
    if (vlSelfRef.tb__DOT__i_core_model__DOT__mem_en) {
        vlSelfRef.tb__DOT__i_core_model__DOT__mem_adres 
            = vlSelfRef.tb__DOT__i_core_model__DOT__alu_out;
    }
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_data = 0U;
    if (vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en) {
        vlSelfRef.tb__DOT__i_core_model__DOT__reg_data 
            = (((0x6fU == (IData)(tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_1_0)) 
                | (0x67U == (IData)(tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_1_0)))
                ? ((IData)(4U) + vlSelfRef.tb__DOT__i_core_model__DOT__pc_excte)
                : ((3U == (IData)(tb__DOT__i_core_model__DOT____VdfgRegularize_h5aecc879_1_0))
                    ? ((0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)
                        ? ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)
                            ? 0U : ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)
                                     ? (0xffffU & vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
                                        [(0x7ffU & vlSelfRef.tb__DOT__i_core_model__DOT__alu_out)])
                                     : (0xffU & vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
                                        [(0x7ffU & vlSelfRef.tb__DOT__i_core_model__DOT__alu_out)])))
                        : ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)
                            ? ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)
                                ? 0U : vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
                               [(0x7ffU & vlSelfRef.tb__DOT__i_core_model__DOT__alu_out)])
                            : ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr)
                                ? ((0x10000U & (vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
                                                [(0x7ffU 
                                                  & vlSelfRef.tb__DOT__i_core_model__DOT__alu_out)] 
                                                << 9U)) 
                                   | (0xffffU & vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
                                      [(0x7ffU & vlSelfRef.tb__DOT__i_core_model__DOT__alu_out)]))
                                : ((0x100U & (vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
                                              [(0x7ffU 
                                                & vlSelfRef.tb__DOT__i_core_model__DOT__alu_out)] 
                                              << 1U)) 
                                   | (0xffU & vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
                                      [(0x7ffU & vlSelfRef.tb__DOT__i_core_model__DOT__alu_out)])))))
                    : vlSelfRef.tb__DOT__i_core_model__DOT__alu_out));
    }
    vlSelfRef.tb__DOT__i_core_model__DOT__jump_pc = 0U;
    if (vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok) {
        vlSelfRef.tb__DOT__i_core_model__DOT__jump_pc 
            = vlSelfRef.tb__DOT__i_core_model__DOT__alu_out;
        vlSelfRef.tb__DOT__i_core_model__DOT__pc_next 
            = vlSelfRef.tb__DOT__i_core_model__DOT__jump_pc;
    } else {
        vlSelfRef.tb__DOT__i_core_model__DOT__pc_next 
            = ((IData)(4U) + vlSelfRef.tb__DOT__i_core_model__DOT__pc_excte);
    }
}

VL_ATTR_COLD void Vtb___024root___eval_triggers__stl(Vtb___024root* vlSelf);

VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root____Vm_traceActivitySetAll(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vm_traceActivitySetAll\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vtb___024root___ctor_var_reset(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__update = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__rstn = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__file_pointer = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb__DOT__i_core_model__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__pc_excte = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__jump_pc = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__jump_ok = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT__instr = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb__DOT__i_core_model__DOT__instr_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb__DOT__i_core_model__DOT__data_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb__DOT__i_core_model__DOT__reg_file[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb__DOT__i_core_model__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__instr_mem_data = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__i_core_model__DOT__reg_data = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__reg_data_adres = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__reg_file_en = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT__mem_data = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__mem_adres = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__mem_en = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT__sel = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__i_core_model__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__number1 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__number2 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__shamt_data = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__i_core_model__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb__DOT__i_core_model__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tb__DOT__i_core_model__DOT__alu_inst__DOT__result = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__i_core_model__DOT__alu_inst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__alu_inst__DOT__val16 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__i_core_model__DOT__alu_inst__DOT__val8 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__i_core_model__DOT__alu_inst__DOT__val4 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__i_core_model__DOT__alu_inst__DOT__val2 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
