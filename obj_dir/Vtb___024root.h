// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb__DOT__clk;
    CData/*0:0*/ tb__DOT__update;
    CData/*0:0*/ tb__DOT__rstn;
    CData/*0:0*/ tb__DOT__i_core_model__DOT__jump_ok;
    CData/*4:0*/ tb__DOT__i_core_model__DOT__shamt;
    CData/*0:0*/ tb__DOT__i_core_model__DOT__reg_file_en;
    CData/*0:0*/ tb__DOT__i_core_model__DOT__mem_en;
    CData/*4:0*/ tb__DOT__i_core_model__DOT__sel;
    CData/*4:0*/ tb__DOT__i_core_model__DOT__shamt_data;
    CData/*4:0*/ tb__DOT__i_core_model__DOT__alu_inst__DOT__result;
    CData/*7:0*/ tb__DOT__i_core_model__DOT__alu_inst__DOT__val8;
    CData/*3:0*/ tb__DOT__i_core_model__DOT__alu_inst__DOT__val4;
    CData/*1:0*/ tb__DOT__i_core_model__DOT__alu_inst__DOT__val2;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb__DOT__i_core_model__DOT__alu_inst__DOT__val16;
    IData/*31:0*/ tb__DOT__addr;
    IData/*31:0*/ tb__DOT__data;
    IData/*31:0*/ tb__DOT__file_pointer;
    IData/*31:0*/ tb__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ tb__DOT__i_core_model__DOT__pc_next;
    IData/*31:0*/ tb__DOT__i_core_model__DOT__pc_excte;
    IData/*31:0*/ tb__DOT__i_core_model__DOT__jump_pc;
    IData/*31:0*/ tb__DOT__i_core_model__DOT__instr;
    IData/*31:0*/ tb__DOT__i_core_model__DOT__rs1;
    IData/*31:0*/ tb__DOT__i_core_model__DOT__rs2;
    IData/*31:0*/ tb__DOT__i_core_model__DOT__instr_mem_data;
    IData/*31:0*/ tb__DOT__i_core_model__DOT__reg_data;
    IData/*31:0*/ tb__DOT__i_core_model__DOT__reg_data_adres;
    IData/*31:0*/ tb__DOT__i_core_model__DOT__mem_data;
    IData/*31:0*/ tb__DOT__i_core_model__DOT__mem_adres;
    IData/*31:0*/ tb__DOT__i_core_model__DOT__alu_out;
    IData/*31:0*/ tb__DOT__i_core_model__DOT__number1;
    IData/*31:0*/ tb__DOT__i_core_model__DOT__number2;
    IData/*31:0*/ tb__DOT__i_core_model__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ tb__DOT__i_core_model__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ tb__DOT__i_core_model__DOT__alu_inst__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 2048> tb__DOT__i_core_model__DOT__instr_mem;
    VlUnpacked<IData/*31:0*/, 2048> tb__DOT__i_core_model__DOT__data_mem;
    VlUnpacked<IData/*31:0*/, 32> tb__DOT__i_core_model__DOT__reg_file;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 2048>, true, IData/*31:0*/, 1> __VdlyCommitQueuetb__DOT__i_core_model__DOT__data_mem;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb___024root(Vtb__Syms* symsp, const char* v__name);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
