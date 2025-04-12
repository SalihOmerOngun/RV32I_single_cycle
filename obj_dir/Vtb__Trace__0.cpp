// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0_sub_0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb__DOT__i_core_model__DOT__pc_excte),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_data),32);
        bufp->chgIData(oldp+2,(((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__mem_en)
                                 ? (0x7ffU & vlSelfRef.tb__DOT__i_core_model__DOT__mem_adres)
                                 : 0U)),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb__DOT__i_core_model__DOT__mem_data),32);
        bufp->chgBit(oldp+4,(vlSelfRef.tb__DOT__update));
        bufp->chgIData(oldp+5,(((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok)
                                 ? vlSelfRef.tb__DOT__i_core_model__DOT__jump_pc
                                 : ((IData)(4U) + vlSelfRef.tb__DOT__i_core_model__DOT__pc_excte))),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb__DOT__i_core_model__DOT__jump_pc),32);
        bufp->chgBit(oldp+7,(vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok));
        bufp->chgIData(oldp+8,(vlSelfRef.tb__DOT__i_core_model__DOT__instr),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[0]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[1]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[2]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[3]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[4]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[5]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[6]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[7]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[8]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[9]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[10]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[11]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[12]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[13]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[14]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[15]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[16]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[17]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[18]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[19]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[20]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[21]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[22]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[23]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[24]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[25]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[26]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[27]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[28]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[29]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[30]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file[31]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.tb__DOT__i_core_model__DOT__rs1),32);
        bufp->chgIData(oldp+42,(vlSelfRef.tb__DOT__i_core_model__DOT__rs2),32);
        bufp->chgIData(oldp+43,(vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data),32);
        bufp->chgCData(oldp+44,(vlSelfRef.tb__DOT__i_core_model__DOT__shamt),5);
        bufp->chgBit(oldp+45,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en));
        bufp->chgIData(oldp+46,(vlSelfRef.tb__DOT__i_core_model__DOT__mem_adres),32);
        bufp->chgBit(oldp+47,(vlSelfRef.tb__DOT__i_core_model__DOT__mem_en));
        bufp->chgCData(oldp+48,(vlSelfRef.tb__DOT__i_core_model__DOT__sel),5);
        bufp->chgIData(oldp+49,(vlSelfRef.tb__DOT__i_core_model__DOT__alu_out),32);
        bufp->chgIData(oldp+50,(vlSelfRef.tb__DOT__i_core_model__DOT__number1),32);
        bufp->chgIData(oldp+51,(vlSelfRef.tb__DOT__i_core_model__DOT__number2),32);
        bufp->chgCData(oldp+52,(vlSelfRef.tb__DOT__i_core_model__DOT__shamt_data),5);
        bufp->chgCData(oldp+53,(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result),5);
        bufp->chgIData(oldp+54,(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__i),32);
        bufp->chgSData(oldp+55,(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16),16);
        bufp->chgCData(oldp+56,(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8),8);
        bufp->chgCData(oldp+57,(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4),4);
        bufp->chgCData(oldp+58,(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val2),2);
        bufp->chgIData(oldp+59,(vlSelfRef.tb__DOT__i_core_model__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+60,(vlSelfRef.tb__DOT__i_core_model__DOT__unnamedblk2__DOT__i),32);
    }
    bufp->chgIData(oldp+61,(vlSelfRef.tb__DOT__addr),32);
    bufp->chgIData(oldp+62,(vlSelfRef.tb__DOT__i_core_model__DOT__data_mem
                            [(0x7ffU & vlSelfRef.tb__DOT__addr)]),32);
    bufp->chgIData(oldp+63,(vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem
                            [(0x7ffU & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_excte 
                                        >> 2U))]),32);
    bufp->chgCData(oldp+64,(((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en)
                              ? (0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem
                                          [(0x7ffU 
                                            & (vlSelfRef.tb__DOT__i_core_model__DOT__pc_excte 
                                               >> 2U))] 
                                          >> 7U)) : 0U)),5);
    bufp->chgBit(oldp+65,(vlSelfRef.tb__DOT__clk));
    bufp->chgBit(oldp+66,(vlSelfRef.tb__DOT__rstn));
    bufp->chgIData(oldp+67,(vlSelfRef.tb__DOT__file_pointer),32);
    bufp->chgIData(oldp+68,(vlSelfRef.tb__DOT__unnamedblk1__DOT__i),32);
}

void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_cleanup\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
