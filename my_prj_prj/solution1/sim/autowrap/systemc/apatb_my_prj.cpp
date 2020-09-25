// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#define AP_INT_MAX_W 32678

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "x_0_V"
#define AUTOTB_TVIN_x_0_V  "../tv/cdatafile/c.my_prj.autotvin_x_0_V.dat"
// wrapc file define: "x_1_V"
#define AUTOTB_TVIN_x_1_V  "../tv/cdatafile/c.my_prj.autotvin_x_1_V.dat"
// wrapc file define: "x_2_V"
#define AUTOTB_TVIN_x_2_V  "../tv/cdatafile/c.my_prj.autotvin_x_2_V.dat"
// wrapc file define: "x_3_V"
#define AUTOTB_TVIN_x_3_V  "../tv/cdatafile/c.my_prj.autotvin_x_3_V.dat"
// wrapc file define: "x_4_V"
#define AUTOTB_TVIN_x_4_V  "../tv/cdatafile/c.my_prj.autotvin_x_4_V.dat"
// wrapc file define: "x_5_V"
#define AUTOTB_TVIN_x_5_V  "../tv/cdatafile/c.my_prj.autotvin_x_5_V.dat"
// wrapc file define: "x_6_V"
#define AUTOTB_TVIN_x_6_V  "../tv/cdatafile/c.my_prj.autotvin_x_6_V.dat"
// wrapc file define: "score_0_V"
#define AUTOTB_TVOUT_score_0_V  "../tv/cdatafile/c.my_prj.autotvout_score_0_V.dat"
// wrapc file define: "tree_scores_0_V"
#define AUTOTB_TVOUT_tree_scores_0_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_0_V.dat"
// wrapc file define: "tree_scores_1_V"
#define AUTOTB_TVOUT_tree_scores_1_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_1_V.dat"
// wrapc file define: "tree_scores_2_V"
#define AUTOTB_TVOUT_tree_scores_2_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_2_V.dat"
// wrapc file define: "tree_scores_3_V"
#define AUTOTB_TVOUT_tree_scores_3_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_3_V.dat"
// wrapc file define: "tree_scores_4_V"
#define AUTOTB_TVOUT_tree_scores_4_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_4_V.dat"
// wrapc file define: "tree_scores_5_V"
#define AUTOTB_TVOUT_tree_scores_5_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_5_V.dat"
// wrapc file define: "tree_scores_6_V"
#define AUTOTB_TVOUT_tree_scores_6_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_6_V.dat"
// wrapc file define: "tree_scores_7_V"
#define AUTOTB_TVOUT_tree_scores_7_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_7_V.dat"
// wrapc file define: "tree_scores_8_V"
#define AUTOTB_TVOUT_tree_scores_8_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_8_V.dat"
// wrapc file define: "tree_scores_9_V"
#define AUTOTB_TVOUT_tree_scores_9_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_9_V.dat"
// wrapc file define: "tree_scores_10_V"
#define AUTOTB_TVOUT_tree_scores_10_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_10_V.dat"
// wrapc file define: "tree_scores_11_V"
#define AUTOTB_TVOUT_tree_scores_11_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_11_V.dat"
// wrapc file define: "tree_scores_12_V"
#define AUTOTB_TVOUT_tree_scores_12_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_12_V.dat"
// wrapc file define: "tree_scores_13_V"
#define AUTOTB_TVOUT_tree_scores_13_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_13_V.dat"
// wrapc file define: "tree_scores_14_V"
#define AUTOTB_TVOUT_tree_scores_14_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_14_V.dat"
// wrapc file define: "tree_scores_15_V"
#define AUTOTB_TVOUT_tree_scores_15_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_15_V.dat"
// wrapc file define: "tree_scores_16_V"
#define AUTOTB_TVOUT_tree_scores_16_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_16_V.dat"
// wrapc file define: "tree_scores_17_V"
#define AUTOTB_TVOUT_tree_scores_17_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_17_V.dat"
// wrapc file define: "tree_scores_18_V"
#define AUTOTB_TVOUT_tree_scores_18_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_18_V.dat"
// wrapc file define: "tree_scores_19_V"
#define AUTOTB_TVOUT_tree_scores_19_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_19_V.dat"
// wrapc file define: "tree_scores_20_V"
#define AUTOTB_TVOUT_tree_scores_20_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_20_V.dat"
// wrapc file define: "tree_scores_21_V"
#define AUTOTB_TVOUT_tree_scores_21_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_21_V.dat"
// wrapc file define: "tree_scores_22_V"
#define AUTOTB_TVOUT_tree_scores_22_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_22_V.dat"
// wrapc file define: "tree_scores_23_V"
#define AUTOTB_TVOUT_tree_scores_23_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_23_V.dat"
// wrapc file define: "tree_scores_24_V"
#define AUTOTB_TVOUT_tree_scores_24_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_24_V.dat"
// wrapc file define: "tree_scores_25_V"
#define AUTOTB_TVOUT_tree_scores_25_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_25_V.dat"
// wrapc file define: "tree_scores_26_V"
#define AUTOTB_TVOUT_tree_scores_26_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_26_V.dat"
// wrapc file define: "tree_scores_27_V"
#define AUTOTB_TVOUT_tree_scores_27_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_27_V.dat"
// wrapc file define: "tree_scores_28_V"
#define AUTOTB_TVOUT_tree_scores_28_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_28_V.dat"
// wrapc file define: "tree_scores_29_V"
#define AUTOTB_TVOUT_tree_scores_29_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_29_V.dat"
// wrapc file define: "tree_scores_30_V"
#define AUTOTB_TVOUT_tree_scores_30_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_30_V.dat"
// wrapc file define: "tree_scores_31_V"
#define AUTOTB_TVOUT_tree_scores_31_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_31_V.dat"
// wrapc file define: "tree_scores_32_V"
#define AUTOTB_TVOUT_tree_scores_32_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_32_V.dat"
// wrapc file define: "tree_scores_33_V"
#define AUTOTB_TVOUT_tree_scores_33_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_33_V.dat"
// wrapc file define: "tree_scores_34_V"
#define AUTOTB_TVOUT_tree_scores_34_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_34_V.dat"
// wrapc file define: "tree_scores_35_V"
#define AUTOTB_TVOUT_tree_scores_35_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_35_V.dat"
// wrapc file define: "tree_scores_36_V"
#define AUTOTB_TVOUT_tree_scores_36_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_36_V.dat"
// wrapc file define: "tree_scores_37_V"
#define AUTOTB_TVOUT_tree_scores_37_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_37_V.dat"
// wrapc file define: "tree_scores_38_V"
#define AUTOTB_TVOUT_tree_scores_38_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_38_V.dat"
// wrapc file define: "tree_scores_39_V"
#define AUTOTB_TVOUT_tree_scores_39_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_39_V.dat"
// wrapc file define: "tree_scores_40_V"
#define AUTOTB_TVOUT_tree_scores_40_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_40_V.dat"
// wrapc file define: "tree_scores_41_V"
#define AUTOTB_TVOUT_tree_scores_41_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_41_V.dat"
// wrapc file define: "tree_scores_42_V"
#define AUTOTB_TVOUT_tree_scores_42_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_42_V.dat"
// wrapc file define: "tree_scores_43_V"
#define AUTOTB_TVOUT_tree_scores_43_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_43_V.dat"
// wrapc file define: "tree_scores_44_V"
#define AUTOTB_TVOUT_tree_scores_44_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_44_V.dat"
// wrapc file define: "tree_scores_45_V"
#define AUTOTB_TVOUT_tree_scores_45_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_45_V.dat"
// wrapc file define: "tree_scores_46_V"
#define AUTOTB_TVOUT_tree_scores_46_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_46_V.dat"
// wrapc file define: "tree_scores_47_V"
#define AUTOTB_TVOUT_tree_scores_47_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_47_V.dat"
// wrapc file define: "tree_scores_48_V"
#define AUTOTB_TVOUT_tree_scores_48_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_48_V.dat"
// wrapc file define: "tree_scores_49_V"
#define AUTOTB_TVOUT_tree_scores_49_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_49_V.dat"
// wrapc file define: "tree_scores_50_V"
#define AUTOTB_TVOUT_tree_scores_50_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_50_V.dat"
// wrapc file define: "tree_scores_51_V"
#define AUTOTB_TVOUT_tree_scores_51_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_51_V.dat"
// wrapc file define: "tree_scores_52_V"
#define AUTOTB_TVOUT_tree_scores_52_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_52_V.dat"
// wrapc file define: "tree_scores_53_V"
#define AUTOTB_TVOUT_tree_scores_53_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_53_V.dat"
// wrapc file define: "tree_scores_54_V"
#define AUTOTB_TVOUT_tree_scores_54_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_54_V.dat"
// wrapc file define: "tree_scores_55_V"
#define AUTOTB_TVOUT_tree_scores_55_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_55_V.dat"
// wrapc file define: "tree_scores_56_V"
#define AUTOTB_TVOUT_tree_scores_56_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_56_V.dat"
// wrapc file define: "tree_scores_57_V"
#define AUTOTB_TVOUT_tree_scores_57_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_57_V.dat"
// wrapc file define: "tree_scores_58_V"
#define AUTOTB_TVOUT_tree_scores_58_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_58_V.dat"
// wrapc file define: "tree_scores_59_V"
#define AUTOTB_TVOUT_tree_scores_59_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_59_V.dat"
// wrapc file define: "tree_scores_60_V"
#define AUTOTB_TVOUT_tree_scores_60_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_60_V.dat"
// wrapc file define: "tree_scores_61_V"
#define AUTOTB_TVOUT_tree_scores_61_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_61_V.dat"
// wrapc file define: "tree_scores_62_V"
#define AUTOTB_TVOUT_tree_scores_62_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_62_V.dat"
// wrapc file define: "tree_scores_63_V"
#define AUTOTB_TVOUT_tree_scores_63_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_63_V.dat"
// wrapc file define: "tree_scores_64_V"
#define AUTOTB_TVOUT_tree_scores_64_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_64_V.dat"
// wrapc file define: "tree_scores_65_V"
#define AUTOTB_TVOUT_tree_scores_65_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_65_V.dat"
// wrapc file define: "tree_scores_66_V"
#define AUTOTB_TVOUT_tree_scores_66_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_66_V.dat"
// wrapc file define: "tree_scores_67_V"
#define AUTOTB_TVOUT_tree_scores_67_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_67_V.dat"
// wrapc file define: "tree_scores_68_V"
#define AUTOTB_TVOUT_tree_scores_68_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_68_V.dat"
// wrapc file define: "tree_scores_69_V"
#define AUTOTB_TVOUT_tree_scores_69_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_69_V.dat"
// wrapc file define: "tree_scores_70_V"
#define AUTOTB_TVOUT_tree_scores_70_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_70_V.dat"
// wrapc file define: "tree_scores_71_V"
#define AUTOTB_TVOUT_tree_scores_71_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_71_V.dat"
// wrapc file define: "tree_scores_72_V"
#define AUTOTB_TVOUT_tree_scores_72_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_72_V.dat"
// wrapc file define: "tree_scores_73_V"
#define AUTOTB_TVOUT_tree_scores_73_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_73_V.dat"
// wrapc file define: "tree_scores_74_V"
#define AUTOTB_TVOUT_tree_scores_74_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_74_V.dat"
// wrapc file define: "tree_scores_75_V"
#define AUTOTB_TVOUT_tree_scores_75_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_75_V.dat"
// wrapc file define: "tree_scores_76_V"
#define AUTOTB_TVOUT_tree_scores_76_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_76_V.dat"
// wrapc file define: "tree_scores_77_V"
#define AUTOTB_TVOUT_tree_scores_77_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_77_V.dat"
// wrapc file define: "tree_scores_78_V"
#define AUTOTB_TVOUT_tree_scores_78_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_78_V.dat"
// wrapc file define: "tree_scores_79_V"
#define AUTOTB_TVOUT_tree_scores_79_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_79_V.dat"
// wrapc file define: "tree_scores_80_V"
#define AUTOTB_TVOUT_tree_scores_80_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_80_V.dat"
// wrapc file define: "tree_scores_81_V"
#define AUTOTB_TVOUT_tree_scores_81_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_81_V.dat"
// wrapc file define: "tree_scores_82_V"
#define AUTOTB_TVOUT_tree_scores_82_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_82_V.dat"
// wrapc file define: "tree_scores_83_V"
#define AUTOTB_TVOUT_tree_scores_83_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_83_V.dat"
// wrapc file define: "tree_scores_84_V"
#define AUTOTB_TVOUT_tree_scores_84_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_84_V.dat"
// wrapc file define: "tree_scores_85_V"
#define AUTOTB_TVOUT_tree_scores_85_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_85_V.dat"
// wrapc file define: "tree_scores_86_V"
#define AUTOTB_TVOUT_tree_scores_86_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_86_V.dat"
// wrapc file define: "tree_scores_87_V"
#define AUTOTB_TVOUT_tree_scores_87_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_87_V.dat"
// wrapc file define: "tree_scores_88_V"
#define AUTOTB_TVOUT_tree_scores_88_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_88_V.dat"
// wrapc file define: "tree_scores_89_V"
#define AUTOTB_TVOUT_tree_scores_89_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_89_V.dat"
// wrapc file define: "tree_scores_90_V"
#define AUTOTB_TVOUT_tree_scores_90_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_90_V.dat"
// wrapc file define: "tree_scores_91_V"
#define AUTOTB_TVOUT_tree_scores_91_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_91_V.dat"
// wrapc file define: "tree_scores_92_V"
#define AUTOTB_TVOUT_tree_scores_92_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_92_V.dat"
// wrapc file define: "tree_scores_93_V"
#define AUTOTB_TVOUT_tree_scores_93_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_93_V.dat"
// wrapc file define: "tree_scores_94_V"
#define AUTOTB_TVOUT_tree_scores_94_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_94_V.dat"
// wrapc file define: "tree_scores_95_V"
#define AUTOTB_TVOUT_tree_scores_95_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_95_V.dat"
// wrapc file define: "tree_scores_96_V"
#define AUTOTB_TVOUT_tree_scores_96_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_96_V.dat"
// wrapc file define: "tree_scores_97_V"
#define AUTOTB_TVOUT_tree_scores_97_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_97_V.dat"
// wrapc file define: "tree_scores_98_V"
#define AUTOTB_TVOUT_tree_scores_98_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_98_V.dat"
// wrapc file define: "tree_scores_99_V"
#define AUTOTB_TVOUT_tree_scores_99_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_99_V.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "score_0_V"
#define AUTOTB_TVOUT_PC_score_0_V  "../tv/rtldatafile/rtl.my_prj.autotvout_score_0_V.dat"
// tvout file define: "tree_scores_0_V"
#define AUTOTB_TVOUT_PC_tree_scores_0_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_0_V.dat"
// tvout file define: "tree_scores_1_V"
#define AUTOTB_TVOUT_PC_tree_scores_1_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_1_V.dat"
// tvout file define: "tree_scores_2_V"
#define AUTOTB_TVOUT_PC_tree_scores_2_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_2_V.dat"
// tvout file define: "tree_scores_3_V"
#define AUTOTB_TVOUT_PC_tree_scores_3_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_3_V.dat"
// tvout file define: "tree_scores_4_V"
#define AUTOTB_TVOUT_PC_tree_scores_4_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_4_V.dat"
// tvout file define: "tree_scores_5_V"
#define AUTOTB_TVOUT_PC_tree_scores_5_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_5_V.dat"
// tvout file define: "tree_scores_6_V"
#define AUTOTB_TVOUT_PC_tree_scores_6_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_6_V.dat"
// tvout file define: "tree_scores_7_V"
#define AUTOTB_TVOUT_PC_tree_scores_7_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_7_V.dat"
// tvout file define: "tree_scores_8_V"
#define AUTOTB_TVOUT_PC_tree_scores_8_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_8_V.dat"
// tvout file define: "tree_scores_9_V"
#define AUTOTB_TVOUT_PC_tree_scores_9_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_9_V.dat"
// tvout file define: "tree_scores_10_V"
#define AUTOTB_TVOUT_PC_tree_scores_10_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_10_V.dat"
// tvout file define: "tree_scores_11_V"
#define AUTOTB_TVOUT_PC_tree_scores_11_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_11_V.dat"
// tvout file define: "tree_scores_12_V"
#define AUTOTB_TVOUT_PC_tree_scores_12_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_12_V.dat"
// tvout file define: "tree_scores_13_V"
#define AUTOTB_TVOUT_PC_tree_scores_13_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_13_V.dat"
// tvout file define: "tree_scores_14_V"
#define AUTOTB_TVOUT_PC_tree_scores_14_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_14_V.dat"
// tvout file define: "tree_scores_15_V"
#define AUTOTB_TVOUT_PC_tree_scores_15_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_15_V.dat"
// tvout file define: "tree_scores_16_V"
#define AUTOTB_TVOUT_PC_tree_scores_16_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_16_V.dat"
// tvout file define: "tree_scores_17_V"
#define AUTOTB_TVOUT_PC_tree_scores_17_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_17_V.dat"
// tvout file define: "tree_scores_18_V"
#define AUTOTB_TVOUT_PC_tree_scores_18_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_18_V.dat"
// tvout file define: "tree_scores_19_V"
#define AUTOTB_TVOUT_PC_tree_scores_19_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_19_V.dat"
// tvout file define: "tree_scores_20_V"
#define AUTOTB_TVOUT_PC_tree_scores_20_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_20_V.dat"
// tvout file define: "tree_scores_21_V"
#define AUTOTB_TVOUT_PC_tree_scores_21_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_21_V.dat"
// tvout file define: "tree_scores_22_V"
#define AUTOTB_TVOUT_PC_tree_scores_22_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_22_V.dat"
// tvout file define: "tree_scores_23_V"
#define AUTOTB_TVOUT_PC_tree_scores_23_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_23_V.dat"
// tvout file define: "tree_scores_24_V"
#define AUTOTB_TVOUT_PC_tree_scores_24_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_24_V.dat"
// tvout file define: "tree_scores_25_V"
#define AUTOTB_TVOUT_PC_tree_scores_25_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_25_V.dat"
// tvout file define: "tree_scores_26_V"
#define AUTOTB_TVOUT_PC_tree_scores_26_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_26_V.dat"
// tvout file define: "tree_scores_27_V"
#define AUTOTB_TVOUT_PC_tree_scores_27_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_27_V.dat"
// tvout file define: "tree_scores_28_V"
#define AUTOTB_TVOUT_PC_tree_scores_28_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_28_V.dat"
// tvout file define: "tree_scores_29_V"
#define AUTOTB_TVOUT_PC_tree_scores_29_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_29_V.dat"
// tvout file define: "tree_scores_30_V"
#define AUTOTB_TVOUT_PC_tree_scores_30_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_30_V.dat"
// tvout file define: "tree_scores_31_V"
#define AUTOTB_TVOUT_PC_tree_scores_31_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_31_V.dat"
// tvout file define: "tree_scores_32_V"
#define AUTOTB_TVOUT_PC_tree_scores_32_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_32_V.dat"
// tvout file define: "tree_scores_33_V"
#define AUTOTB_TVOUT_PC_tree_scores_33_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_33_V.dat"
// tvout file define: "tree_scores_34_V"
#define AUTOTB_TVOUT_PC_tree_scores_34_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_34_V.dat"
// tvout file define: "tree_scores_35_V"
#define AUTOTB_TVOUT_PC_tree_scores_35_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_35_V.dat"
// tvout file define: "tree_scores_36_V"
#define AUTOTB_TVOUT_PC_tree_scores_36_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_36_V.dat"
// tvout file define: "tree_scores_37_V"
#define AUTOTB_TVOUT_PC_tree_scores_37_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_37_V.dat"
// tvout file define: "tree_scores_38_V"
#define AUTOTB_TVOUT_PC_tree_scores_38_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_38_V.dat"
// tvout file define: "tree_scores_39_V"
#define AUTOTB_TVOUT_PC_tree_scores_39_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_39_V.dat"
// tvout file define: "tree_scores_40_V"
#define AUTOTB_TVOUT_PC_tree_scores_40_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_40_V.dat"
// tvout file define: "tree_scores_41_V"
#define AUTOTB_TVOUT_PC_tree_scores_41_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_41_V.dat"
// tvout file define: "tree_scores_42_V"
#define AUTOTB_TVOUT_PC_tree_scores_42_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_42_V.dat"
// tvout file define: "tree_scores_43_V"
#define AUTOTB_TVOUT_PC_tree_scores_43_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_43_V.dat"
// tvout file define: "tree_scores_44_V"
#define AUTOTB_TVOUT_PC_tree_scores_44_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_44_V.dat"
// tvout file define: "tree_scores_45_V"
#define AUTOTB_TVOUT_PC_tree_scores_45_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_45_V.dat"
// tvout file define: "tree_scores_46_V"
#define AUTOTB_TVOUT_PC_tree_scores_46_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_46_V.dat"
// tvout file define: "tree_scores_47_V"
#define AUTOTB_TVOUT_PC_tree_scores_47_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_47_V.dat"
// tvout file define: "tree_scores_48_V"
#define AUTOTB_TVOUT_PC_tree_scores_48_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_48_V.dat"
// tvout file define: "tree_scores_49_V"
#define AUTOTB_TVOUT_PC_tree_scores_49_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_49_V.dat"
// tvout file define: "tree_scores_50_V"
#define AUTOTB_TVOUT_PC_tree_scores_50_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_50_V.dat"
// tvout file define: "tree_scores_51_V"
#define AUTOTB_TVOUT_PC_tree_scores_51_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_51_V.dat"
// tvout file define: "tree_scores_52_V"
#define AUTOTB_TVOUT_PC_tree_scores_52_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_52_V.dat"
// tvout file define: "tree_scores_53_V"
#define AUTOTB_TVOUT_PC_tree_scores_53_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_53_V.dat"
// tvout file define: "tree_scores_54_V"
#define AUTOTB_TVOUT_PC_tree_scores_54_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_54_V.dat"
// tvout file define: "tree_scores_55_V"
#define AUTOTB_TVOUT_PC_tree_scores_55_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_55_V.dat"
// tvout file define: "tree_scores_56_V"
#define AUTOTB_TVOUT_PC_tree_scores_56_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_56_V.dat"
// tvout file define: "tree_scores_57_V"
#define AUTOTB_TVOUT_PC_tree_scores_57_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_57_V.dat"
// tvout file define: "tree_scores_58_V"
#define AUTOTB_TVOUT_PC_tree_scores_58_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_58_V.dat"
// tvout file define: "tree_scores_59_V"
#define AUTOTB_TVOUT_PC_tree_scores_59_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_59_V.dat"
// tvout file define: "tree_scores_60_V"
#define AUTOTB_TVOUT_PC_tree_scores_60_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_60_V.dat"
// tvout file define: "tree_scores_61_V"
#define AUTOTB_TVOUT_PC_tree_scores_61_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_61_V.dat"
// tvout file define: "tree_scores_62_V"
#define AUTOTB_TVOUT_PC_tree_scores_62_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_62_V.dat"
// tvout file define: "tree_scores_63_V"
#define AUTOTB_TVOUT_PC_tree_scores_63_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_63_V.dat"
// tvout file define: "tree_scores_64_V"
#define AUTOTB_TVOUT_PC_tree_scores_64_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_64_V.dat"
// tvout file define: "tree_scores_65_V"
#define AUTOTB_TVOUT_PC_tree_scores_65_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_65_V.dat"
// tvout file define: "tree_scores_66_V"
#define AUTOTB_TVOUT_PC_tree_scores_66_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_66_V.dat"
// tvout file define: "tree_scores_67_V"
#define AUTOTB_TVOUT_PC_tree_scores_67_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_67_V.dat"
// tvout file define: "tree_scores_68_V"
#define AUTOTB_TVOUT_PC_tree_scores_68_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_68_V.dat"
// tvout file define: "tree_scores_69_V"
#define AUTOTB_TVOUT_PC_tree_scores_69_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_69_V.dat"
// tvout file define: "tree_scores_70_V"
#define AUTOTB_TVOUT_PC_tree_scores_70_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_70_V.dat"
// tvout file define: "tree_scores_71_V"
#define AUTOTB_TVOUT_PC_tree_scores_71_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_71_V.dat"
// tvout file define: "tree_scores_72_V"
#define AUTOTB_TVOUT_PC_tree_scores_72_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_72_V.dat"
// tvout file define: "tree_scores_73_V"
#define AUTOTB_TVOUT_PC_tree_scores_73_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_73_V.dat"
// tvout file define: "tree_scores_74_V"
#define AUTOTB_TVOUT_PC_tree_scores_74_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_74_V.dat"
// tvout file define: "tree_scores_75_V"
#define AUTOTB_TVOUT_PC_tree_scores_75_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_75_V.dat"
// tvout file define: "tree_scores_76_V"
#define AUTOTB_TVOUT_PC_tree_scores_76_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_76_V.dat"
// tvout file define: "tree_scores_77_V"
#define AUTOTB_TVOUT_PC_tree_scores_77_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_77_V.dat"
// tvout file define: "tree_scores_78_V"
#define AUTOTB_TVOUT_PC_tree_scores_78_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_78_V.dat"
// tvout file define: "tree_scores_79_V"
#define AUTOTB_TVOUT_PC_tree_scores_79_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_79_V.dat"
// tvout file define: "tree_scores_80_V"
#define AUTOTB_TVOUT_PC_tree_scores_80_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_80_V.dat"
// tvout file define: "tree_scores_81_V"
#define AUTOTB_TVOUT_PC_tree_scores_81_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_81_V.dat"
// tvout file define: "tree_scores_82_V"
#define AUTOTB_TVOUT_PC_tree_scores_82_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_82_V.dat"
// tvout file define: "tree_scores_83_V"
#define AUTOTB_TVOUT_PC_tree_scores_83_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_83_V.dat"
// tvout file define: "tree_scores_84_V"
#define AUTOTB_TVOUT_PC_tree_scores_84_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_84_V.dat"
// tvout file define: "tree_scores_85_V"
#define AUTOTB_TVOUT_PC_tree_scores_85_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_85_V.dat"
// tvout file define: "tree_scores_86_V"
#define AUTOTB_TVOUT_PC_tree_scores_86_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_86_V.dat"
// tvout file define: "tree_scores_87_V"
#define AUTOTB_TVOUT_PC_tree_scores_87_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_87_V.dat"
// tvout file define: "tree_scores_88_V"
#define AUTOTB_TVOUT_PC_tree_scores_88_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_88_V.dat"
// tvout file define: "tree_scores_89_V"
#define AUTOTB_TVOUT_PC_tree_scores_89_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_89_V.dat"
// tvout file define: "tree_scores_90_V"
#define AUTOTB_TVOUT_PC_tree_scores_90_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_90_V.dat"
// tvout file define: "tree_scores_91_V"
#define AUTOTB_TVOUT_PC_tree_scores_91_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_91_V.dat"
// tvout file define: "tree_scores_92_V"
#define AUTOTB_TVOUT_PC_tree_scores_92_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_92_V.dat"
// tvout file define: "tree_scores_93_V"
#define AUTOTB_TVOUT_PC_tree_scores_93_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_93_V.dat"
// tvout file define: "tree_scores_94_V"
#define AUTOTB_TVOUT_PC_tree_scores_94_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_94_V.dat"
// tvout file define: "tree_scores_95_V"
#define AUTOTB_TVOUT_PC_tree_scores_95_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_95_V.dat"
// tvout file define: "tree_scores_96_V"
#define AUTOTB_TVOUT_PC_tree_scores_96_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_96_V.dat"
// tvout file define: "tree_scores_97_V"
#define AUTOTB_TVOUT_PC_tree_scores_97_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_97_V.dat"
// tvout file define: "tree_scores_98_V"
#define AUTOTB_TVOUT_PC_tree_scores_98_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_98_V.dat"
// tvout file define: "tree_scores_99_V"
#define AUTOTB_TVOUT_PC_tree_scores_99_V  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_99_V.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			x_0_V_depth = 0;
			x_1_V_depth = 0;
			x_2_V_depth = 0;
			x_3_V_depth = 0;
			x_4_V_depth = 0;
			x_5_V_depth = 0;
			x_6_V_depth = 0;
			score_0_V_depth = 0;
			tree_scores_0_V_depth = 0;
			tree_scores_1_V_depth = 0;
			tree_scores_2_V_depth = 0;
			tree_scores_3_V_depth = 0;
			tree_scores_4_V_depth = 0;
			tree_scores_5_V_depth = 0;
			tree_scores_6_V_depth = 0;
			tree_scores_7_V_depth = 0;
			tree_scores_8_V_depth = 0;
			tree_scores_9_V_depth = 0;
			tree_scores_10_V_depth = 0;
			tree_scores_11_V_depth = 0;
			tree_scores_12_V_depth = 0;
			tree_scores_13_V_depth = 0;
			tree_scores_14_V_depth = 0;
			tree_scores_15_V_depth = 0;
			tree_scores_16_V_depth = 0;
			tree_scores_17_V_depth = 0;
			tree_scores_18_V_depth = 0;
			tree_scores_19_V_depth = 0;
			tree_scores_20_V_depth = 0;
			tree_scores_21_V_depth = 0;
			tree_scores_22_V_depth = 0;
			tree_scores_23_V_depth = 0;
			tree_scores_24_V_depth = 0;
			tree_scores_25_V_depth = 0;
			tree_scores_26_V_depth = 0;
			tree_scores_27_V_depth = 0;
			tree_scores_28_V_depth = 0;
			tree_scores_29_V_depth = 0;
			tree_scores_30_V_depth = 0;
			tree_scores_31_V_depth = 0;
			tree_scores_32_V_depth = 0;
			tree_scores_33_V_depth = 0;
			tree_scores_34_V_depth = 0;
			tree_scores_35_V_depth = 0;
			tree_scores_36_V_depth = 0;
			tree_scores_37_V_depth = 0;
			tree_scores_38_V_depth = 0;
			tree_scores_39_V_depth = 0;
			tree_scores_40_V_depth = 0;
			tree_scores_41_V_depth = 0;
			tree_scores_42_V_depth = 0;
			tree_scores_43_V_depth = 0;
			tree_scores_44_V_depth = 0;
			tree_scores_45_V_depth = 0;
			tree_scores_46_V_depth = 0;
			tree_scores_47_V_depth = 0;
			tree_scores_48_V_depth = 0;
			tree_scores_49_V_depth = 0;
			tree_scores_50_V_depth = 0;
			tree_scores_51_V_depth = 0;
			tree_scores_52_V_depth = 0;
			tree_scores_53_V_depth = 0;
			tree_scores_54_V_depth = 0;
			tree_scores_55_V_depth = 0;
			tree_scores_56_V_depth = 0;
			tree_scores_57_V_depth = 0;
			tree_scores_58_V_depth = 0;
			tree_scores_59_V_depth = 0;
			tree_scores_60_V_depth = 0;
			tree_scores_61_V_depth = 0;
			tree_scores_62_V_depth = 0;
			tree_scores_63_V_depth = 0;
			tree_scores_64_V_depth = 0;
			tree_scores_65_V_depth = 0;
			tree_scores_66_V_depth = 0;
			tree_scores_67_V_depth = 0;
			tree_scores_68_V_depth = 0;
			tree_scores_69_V_depth = 0;
			tree_scores_70_V_depth = 0;
			tree_scores_71_V_depth = 0;
			tree_scores_72_V_depth = 0;
			tree_scores_73_V_depth = 0;
			tree_scores_74_V_depth = 0;
			tree_scores_75_V_depth = 0;
			tree_scores_76_V_depth = 0;
			tree_scores_77_V_depth = 0;
			tree_scores_78_V_depth = 0;
			tree_scores_79_V_depth = 0;
			tree_scores_80_V_depth = 0;
			tree_scores_81_V_depth = 0;
			tree_scores_82_V_depth = 0;
			tree_scores_83_V_depth = 0;
			tree_scores_84_V_depth = 0;
			tree_scores_85_V_depth = 0;
			tree_scores_86_V_depth = 0;
			tree_scores_87_V_depth = 0;
			tree_scores_88_V_depth = 0;
			tree_scores_89_V_depth = 0;
			tree_scores_90_V_depth = 0;
			tree_scores_91_V_depth = 0;
			tree_scores_92_V_depth = 0;
			tree_scores_93_V_depth = 0;
			tree_scores_94_V_depth = 0;
			tree_scores_95_V_depth = 0;
			tree_scores_96_V_depth = 0;
			tree_scores_97_V_depth = 0;
			tree_scores_98_V_depth = 0;
			tree_scores_99_V_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{x_0_V " << x_0_V_depth << "}\n";
			total_list << "{x_1_V " << x_1_V_depth << "}\n";
			total_list << "{x_2_V " << x_2_V_depth << "}\n";
			total_list << "{x_3_V " << x_3_V_depth << "}\n";
			total_list << "{x_4_V " << x_4_V_depth << "}\n";
			total_list << "{x_5_V " << x_5_V_depth << "}\n";
			total_list << "{x_6_V " << x_6_V_depth << "}\n";
			total_list << "{score_0_V " << score_0_V_depth << "}\n";
			total_list << "{tree_scores_0_V " << tree_scores_0_V_depth << "}\n";
			total_list << "{tree_scores_1_V " << tree_scores_1_V_depth << "}\n";
			total_list << "{tree_scores_2_V " << tree_scores_2_V_depth << "}\n";
			total_list << "{tree_scores_3_V " << tree_scores_3_V_depth << "}\n";
			total_list << "{tree_scores_4_V " << tree_scores_4_V_depth << "}\n";
			total_list << "{tree_scores_5_V " << tree_scores_5_V_depth << "}\n";
			total_list << "{tree_scores_6_V " << tree_scores_6_V_depth << "}\n";
			total_list << "{tree_scores_7_V " << tree_scores_7_V_depth << "}\n";
			total_list << "{tree_scores_8_V " << tree_scores_8_V_depth << "}\n";
			total_list << "{tree_scores_9_V " << tree_scores_9_V_depth << "}\n";
			total_list << "{tree_scores_10_V " << tree_scores_10_V_depth << "}\n";
			total_list << "{tree_scores_11_V " << tree_scores_11_V_depth << "}\n";
			total_list << "{tree_scores_12_V " << tree_scores_12_V_depth << "}\n";
			total_list << "{tree_scores_13_V " << tree_scores_13_V_depth << "}\n";
			total_list << "{tree_scores_14_V " << tree_scores_14_V_depth << "}\n";
			total_list << "{tree_scores_15_V " << tree_scores_15_V_depth << "}\n";
			total_list << "{tree_scores_16_V " << tree_scores_16_V_depth << "}\n";
			total_list << "{tree_scores_17_V " << tree_scores_17_V_depth << "}\n";
			total_list << "{tree_scores_18_V " << tree_scores_18_V_depth << "}\n";
			total_list << "{tree_scores_19_V " << tree_scores_19_V_depth << "}\n";
			total_list << "{tree_scores_20_V " << tree_scores_20_V_depth << "}\n";
			total_list << "{tree_scores_21_V " << tree_scores_21_V_depth << "}\n";
			total_list << "{tree_scores_22_V " << tree_scores_22_V_depth << "}\n";
			total_list << "{tree_scores_23_V " << tree_scores_23_V_depth << "}\n";
			total_list << "{tree_scores_24_V " << tree_scores_24_V_depth << "}\n";
			total_list << "{tree_scores_25_V " << tree_scores_25_V_depth << "}\n";
			total_list << "{tree_scores_26_V " << tree_scores_26_V_depth << "}\n";
			total_list << "{tree_scores_27_V " << tree_scores_27_V_depth << "}\n";
			total_list << "{tree_scores_28_V " << tree_scores_28_V_depth << "}\n";
			total_list << "{tree_scores_29_V " << tree_scores_29_V_depth << "}\n";
			total_list << "{tree_scores_30_V " << tree_scores_30_V_depth << "}\n";
			total_list << "{tree_scores_31_V " << tree_scores_31_V_depth << "}\n";
			total_list << "{tree_scores_32_V " << tree_scores_32_V_depth << "}\n";
			total_list << "{tree_scores_33_V " << tree_scores_33_V_depth << "}\n";
			total_list << "{tree_scores_34_V " << tree_scores_34_V_depth << "}\n";
			total_list << "{tree_scores_35_V " << tree_scores_35_V_depth << "}\n";
			total_list << "{tree_scores_36_V " << tree_scores_36_V_depth << "}\n";
			total_list << "{tree_scores_37_V " << tree_scores_37_V_depth << "}\n";
			total_list << "{tree_scores_38_V " << tree_scores_38_V_depth << "}\n";
			total_list << "{tree_scores_39_V " << tree_scores_39_V_depth << "}\n";
			total_list << "{tree_scores_40_V " << tree_scores_40_V_depth << "}\n";
			total_list << "{tree_scores_41_V " << tree_scores_41_V_depth << "}\n";
			total_list << "{tree_scores_42_V " << tree_scores_42_V_depth << "}\n";
			total_list << "{tree_scores_43_V " << tree_scores_43_V_depth << "}\n";
			total_list << "{tree_scores_44_V " << tree_scores_44_V_depth << "}\n";
			total_list << "{tree_scores_45_V " << tree_scores_45_V_depth << "}\n";
			total_list << "{tree_scores_46_V " << tree_scores_46_V_depth << "}\n";
			total_list << "{tree_scores_47_V " << tree_scores_47_V_depth << "}\n";
			total_list << "{tree_scores_48_V " << tree_scores_48_V_depth << "}\n";
			total_list << "{tree_scores_49_V " << tree_scores_49_V_depth << "}\n";
			total_list << "{tree_scores_50_V " << tree_scores_50_V_depth << "}\n";
			total_list << "{tree_scores_51_V " << tree_scores_51_V_depth << "}\n";
			total_list << "{tree_scores_52_V " << tree_scores_52_V_depth << "}\n";
			total_list << "{tree_scores_53_V " << tree_scores_53_V_depth << "}\n";
			total_list << "{tree_scores_54_V " << tree_scores_54_V_depth << "}\n";
			total_list << "{tree_scores_55_V " << tree_scores_55_V_depth << "}\n";
			total_list << "{tree_scores_56_V " << tree_scores_56_V_depth << "}\n";
			total_list << "{tree_scores_57_V " << tree_scores_57_V_depth << "}\n";
			total_list << "{tree_scores_58_V " << tree_scores_58_V_depth << "}\n";
			total_list << "{tree_scores_59_V " << tree_scores_59_V_depth << "}\n";
			total_list << "{tree_scores_60_V " << tree_scores_60_V_depth << "}\n";
			total_list << "{tree_scores_61_V " << tree_scores_61_V_depth << "}\n";
			total_list << "{tree_scores_62_V " << tree_scores_62_V_depth << "}\n";
			total_list << "{tree_scores_63_V " << tree_scores_63_V_depth << "}\n";
			total_list << "{tree_scores_64_V " << tree_scores_64_V_depth << "}\n";
			total_list << "{tree_scores_65_V " << tree_scores_65_V_depth << "}\n";
			total_list << "{tree_scores_66_V " << tree_scores_66_V_depth << "}\n";
			total_list << "{tree_scores_67_V " << tree_scores_67_V_depth << "}\n";
			total_list << "{tree_scores_68_V " << tree_scores_68_V_depth << "}\n";
			total_list << "{tree_scores_69_V " << tree_scores_69_V_depth << "}\n";
			total_list << "{tree_scores_70_V " << tree_scores_70_V_depth << "}\n";
			total_list << "{tree_scores_71_V " << tree_scores_71_V_depth << "}\n";
			total_list << "{tree_scores_72_V " << tree_scores_72_V_depth << "}\n";
			total_list << "{tree_scores_73_V " << tree_scores_73_V_depth << "}\n";
			total_list << "{tree_scores_74_V " << tree_scores_74_V_depth << "}\n";
			total_list << "{tree_scores_75_V " << tree_scores_75_V_depth << "}\n";
			total_list << "{tree_scores_76_V " << tree_scores_76_V_depth << "}\n";
			total_list << "{tree_scores_77_V " << tree_scores_77_V_depth << "}\n";
			total_list << "{tree_scores_78_V " << tree_scores_78_V_depth << "}\n";
			total_list << "{tree_scores_79_V " << tree_scores_79_V_depth << "}\n";
			total_list << "{tree_scores_80_V " << tree_scores_80_V_depth << "}\n";
			total_list << "{tree_scores_81_V " << tree_scores_81_V_depth << "}\n";
			total_list << "{tree_scores_82_V " << tree_scores_82_V_depth << "}\n";
			total_list << "{tree_scores_83_V " << tree_scores_83_V_depth << "}\n";
			total_list << "{tree_scores_84_V " << tree_scores_84_V_depth << "}\n";
			total_list << "{tree_scores_85_V " << tree_scores_85_V_depth << "}\n";
			total_list << "{tree_scores_86_V " << tree_scores_86_V_depth << "}\n";
			total_list << "{tree_scores_87_V " << tree_scores_87_V_depth << "}\n";
			total_list << "{tree_scores_88_V " << tree_scores_88_V_depth << "}\n";
			total_list << "{tree_scores_89_V " << tree_scores_89_V_depth << "}\n";
			total_list << "{tree_scores_90_V " << tree_scores_90_V_depth << "}\n";
			total_list << "{tree_scores_91_V " << tree_scores_91_V_depth << "}\n";
			total_list << "{tree_scores_92_V " << tree_scores_92_V_depth << "}\n";
			total_list << "{tree_scores_93_V " << tree_scores_93_V_depth << "}\n";
			total_list << "{tree_scores_94_V " << tree_scores_94_V_depth << "}\n";
			total_list << "{tree_scores_95_V " << tree_scores_95_V_depth << "}\n";
			total_list << "{tree_scores_96_V " << tree_scores_96_V_depth << "}\n";
			total_list << "{tree_scores_97_V " << tree_scores_97_V_depth << "}\n";
			total_list << "{tree_scores_98_V " << tree_scores_98_V_depth << "}\n";
			total_list << "{tree_scores_99_V " << tree_scores_99_V_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int x_0_V_depth;
		int x_1_V_depth;
		int x_2_V_depth;
		int x_3_V_depth;
		int x_4_V_depth;
		int x_5_V_depth;
		int x_6_V_depth;
		int score_0_V_depth;
		int tree_scores_0_V_depth;
		int tree_scores_1_V_depth;
		int tree_scores_2_V_depth;
		int tree_scores_3_V_depth;
		int tree_scores_4_V_depth;
		int tree_scores_5_V_depth;
		int tree_scores_6_V_depth;
		int tree_scores_7_V_depth;
		int tree_scores_8_V_depth;
		int tree_scores_9_V_depth;
		int tree_scores_10_V_depth;
		int tree_scores_11_V_depth;
		int tree_scores_12_V_depth;
		int tree_scores_13_V_depth;
		int tree_scores_14_V_depth;
		int tree_scores_15_V_depth;
		int tree_scores_16_V_depth;
		int tree_scores_17_V_depth;
		int tree_scores_18_V_depth;
		int tree_scores_19_V_depth;
		int tree_scores_20_V_depth;
		int tree_scores_21_V_depth;
		int tree_scores_22_V_depth;
		int tree_scores_23_V_depth;
		int tree_scores_24_V_depth;
		int tree_scores_25_V_depth;
		int tree_scores_26_V_depth;
		int tree_scores_27_V_depth;
		int tree_scores_28_V_depth;
		int tree_scores_29_V_depth;
		int tree_scores_30_V_depth;
		int tree_scores_31_V_depth;
		int tree_scores_32_V_depth;
		int tree_scores_33_V_depth;
		int tree_scores_34_V_depth;
		int tree_scores_35_V_depth;
		int tree_scores_36_V_depth;
		int tree_scores_37_V_depth;
		int tree_scores_38_V_depth;
		int tree_scores_39_V_depth;
		int tree_scores_40_V_depth;
		int tree_scores_41_V_depth;
		int tree_scores_42_V_depth;
		int tree_scores_43_V_depth;
		int tree_scores_44_V_depth;
		int tree_scores_45_V_depth;
		int tree_scores_46_V_depth;
		int tree_scores_47_V_depth;
		int tree_scores_48_V_depth;
		int tree_scores_49_V_depth;
		int tree_scores_50_V_depth;
		int tree_scores_51_V_depth;
		int tree_scores_52_V_depth;
		int tree_scores_53_V_depth;
		int tree_scores_54_V_depth;
		int tree_scores_55_V_depth;
		int tree_scores_56_V_depth;
		int tree_scores_57_V_depth;
		int tree_scores_58_V_depth;
		int tree_scores_59_V_depth;
		int tree_scores_60_V_depth;
		int tree_scores_61_V_depth;
		int tree_scores_62_V_depth;
		int tree_scores_63_V_depth;
		int tree_scores_64_V_depth;
		int tree_scores_65_V_depth;
		int tree_scores_66_V_depth;
		int tree_scores_67_V_depth;
		int tree_scores_68_V_depth;
		int tree_scores_69_V_depth;
		int tree_scores_70_V_depth;
		int tree_scores_71_V_depth;
		int tree_scores_72_V_depth;
		int tree_scores_73_V_depth;
		int tree_scores_74_V_depth;
		int tree_scores_75_V_depth;
		int tree_scores_76_V_depth;
		int tree_scores_77_V_depth;
		int tree_scores_78_V_depth;
		int tree_scores_79_V_depth;
		int tree_scores_80_V_depth;
		int tree_scores_81_V_depth;
		int tree_scores_82_V_depth;
		int tree_scores_83_V_depth;
		int tree_scores_84_V_depth;
		int tree_scores_85_V_depth;
		int tree_scores_86_V_depth;
		int tree_scores_87_V_depth;
		int tree_scores_88_V_depth;
		int tree_scores_89_V_depth;
		int tree_scores_90_V_depth;
		int tree_scores_91_V_depth;
		int tree_scores_92_V_depth;
		int tree_scores_93_V_depth;
		int tree_scores_94_V_depth;
		int tree_scores_95_V_depth;
		int tree_scores_96_V_depth;
		int tree_scores_97_V_depth;
		int tree_scores_98_V_depth;
		int tree_scores_99_V_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void my_prj (
ap_fixed<11, 6, (ap_q_mode) 5, (ap_o_mode)3, 0> x[7],
ap_fixed<11, 6, (ap_q_mode) 5, (ap_o_mode)3, 0> score[2],
ap_fixed<11, 6, (ap_q_mode) 5, (ap_o_mode)3, 0> tree_scores[100]);

void AESL_WRAP_my_prj (
ap_fixed<11, 6, (ap_q_mode) 5, (ap_o_mode)3, 0> x[7],
ap_fixed<11, 6, (ap_q_mode) 5, (ap_o_mode)3, 0> score[2],
ap_fixed<11, 6, (ap_q_mode) 5, (ap_o_mode)3, 0> tree_scores[100])
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "score_0_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_score_0_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_score_0_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_score_0_V, AESL_token); // data

			sc_bv<11> *score_0_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'score_0_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'score_0_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					score_0_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_score_0_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_score_0_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: score_0_V
				{
					// bitslice(10, 0)
					// {
						// celement: score.V(10, 0)
						// {
							sc_lv<11>* score_V_lv0_0_0_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: score.V(10, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								if (&(score[0]) != NULL) // check the null address if the c port is array or others
								{
									score_V_lv0_0_0_2[hls_map_index].range(10, 0) = sc_bv<11>(score_0_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: score.V(10, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : score[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : score[0]
								// output_left_conversion : (score[i_0]).range()
								// output_type_conversion : (score_V_lv0_0_0_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(score[0]) != NULL) // check the null address if the c port is array or others
								{
									(score[i_0]).range() = (score_V_lv0_0_0_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] score_0_V_pc_buffer;
		}

		// output port post check: "tree_scores_0_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_0_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_0_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_0_V, AESL_token); // data

			sc_bv<11> *tree_scores_0_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_0_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_0_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_0_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_0_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_0_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_0_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_0_0_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_0_0_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_0_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_0_0_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_0_0_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_0_V_pc_buffer;
		}

		// output port post check: "tree_scores_1_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_1_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_1_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_1_V, AESL_token); // data

			sc_bv<11> *tree_scores_1_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_1_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_1_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_1_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_1_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_1_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_1_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_1_1_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_1_1_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_1_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_1_1_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_1_1_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_1_V_pc_buffer;
		}

		// output port post check: "tree_scores_2_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_2_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_2_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_2_V, AESL_token); // data

			sc_bv<11> *tree_scores_2_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_2_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_2_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_2_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_2_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_2_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_2_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_2_2_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_2_2_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_2_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_2_2_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_2_2_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_2_V_pc_buffer;
		}

		// output port post check: "tree_scores_3_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_3_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_3_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_3_V, AESL_token); // data

			sc_bv<11> *tree_scores_3_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_3_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_3_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_3_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_3_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_3_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_3_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_3_3_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_3_3_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_3_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_3_3_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_3_3_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_3_V_pc_buffer;
		}

		// output port post check: "tree_scores_4_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_4_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_4_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_4_V, AESL_token); // data

			sc_bv<11> *tree_scores_4_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_4_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_4_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_4_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_4_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_4_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_4_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_4_4_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (4) => (4) @ (2)
							for (int i_0 = 4; i_0 <= 4; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_4_4_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_4_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (4) => (4) @ (2)
							for (int i_0 = 4; i_0 <= 4; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_4_4_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_4_4_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_4_V_pc_buffer;
		}

		// output port post check: "tree_scores_5_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_5_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_5_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_5_V, AESL_token); // data

			sc_bv<11> *tree_scores_5_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_5_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_5_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_5_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_5_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_5_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_5_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_5_5_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (5) => (5) @ (2)
							for (int i_0 = 5; i_0 <= 5; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_5_5_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_5_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (5) => (5) @ (2)
							for (int i_0 = 5; i_0 <= 5; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_5_5_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_5_5_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_5_V_pc_buffer;
		}

		// output port post check: "tree_scores_6_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_6_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_6_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_6_V, AESL_token); // data

			sc_bv<11> *tree_scores_6_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_6_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_6_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_6_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_6_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_6_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_6_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_6_6_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (6) => (6) @ (2)
							for (int i_0 = 6; i_0 <= 6; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_6_6_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_6_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (6) => (6) @ (2)
							for (int i_0 = 6; i_0 <= 6; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_6_6_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_6_6_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_6_V_pc_buffer;
		}

		// output port post check: "tree_scores_7_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_7_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_7_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_7_V, AESL_token); // data

			sc_bv<11> *tree_scores_7_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_7_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_7_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_7_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_7_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_7_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_7_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_7_7_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (7) => (7) @ (2)
							for (int i_0 = 7; i_0 <= 7; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_7_7_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_7_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (7) => (7) @ (2)
							for (int i_0 = 7; i_0 <= 7; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_7_7_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_7_7_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_7_V_pc_buffer;
		}

		// output port post check: "tree_scores_8_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_8_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_8_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_8_V, AESL_token); // data

			sc_bv<11> *tree_scores_8_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_8_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_8_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_8_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_8_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_8_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_8_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_8_8_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (8) => (8) @ (2)
							for (int i_0 = 8; i_0 <= 8; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_8_8_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_8_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (8) => (8) @ (2)
							for (int i_0 = 8; i_0 <= 8; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_8_8_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_8_8_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_8_V_pc_buffer;
		}

		// output port post check: "tree_scores_9_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_9_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_9_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_9_V, AESL_token); // data

			sc_bv<11> *tree_scores_9_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_9_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_9_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_9_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_9_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_9_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_9_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_9_9_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (9) => (9) @ (2)
							for (int i_0 = 9; i_0 <= 9; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_9_9_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_9_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (9) => (9) @ (2)
							for (int i_0 = 9; i_0 <= 9; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_9_9_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_9_9_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_9_V_pc_buffer;
		}

		// output port post check: "tree_scores_10_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_10_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_10_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_10_V, AESL_token); // data

			sc_bv<11> *tree_scores_10_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_10_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_10_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_10_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_10_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_10_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_10_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_10_10_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (10) => (10) @ (2)
							for (int i_0 = 10; i_0 <= 10; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_10_10_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_10_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (10) => (10) @ (2)
							for (int i_0 = 10; i_0 <= 10; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_10_10_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_10_10_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_10_V_pc_buffer;
		}

		// output port post check: "tree_scores_11_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_11_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_11_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_11_V, AESL_token); // data

			sc_bv<11> *tree_scores_11_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_11_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_11_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_11_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_11_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_11_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_11_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_11_11_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (11) => (11) @ (2)
							for (int i_0 = 11; i_0 <= 11; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_11_11_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_11_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (11) => (11) @ (2)
							for (int i_0 = 11; i_0 <= 11; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_11_11_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_11_11_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_11_V_pc_buffer;
		}

		// output port post check: "tree_scores_12_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_12_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_12_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_12_V, AESL_token); // data

			sc_bv<11> *tree_scores_12_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_12_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_12_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_12_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_12_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_12_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_12_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_12_12_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (12) => (12) @ (2)
							for (int i_0 = 12; i_0 <= 12; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_12_12_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_12_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (12) => (12) @ (2)
							for (int i_0 = 12; i_0 <= 12; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_12_12_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_12_12_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_12_V_pc_buffer;
		}

		// output port post check: "tree_scores_13_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_13_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_13_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_13_V, AESL_token); // data

			sc_bv<11> *tree_scores_13_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_13_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_13_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_13_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_13_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_13_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_13_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_13_13_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (13) => (13) @ (2)
							for (int i_0 = 13; i_0 <= 13; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_13_13_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_13_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (13) => (13) @ (2)
							for (int i_0 = 13; i_0 <= 13; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_13_13_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_13_13_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_13_V_pc_buffer;
		}

		// output port post check: "tree_scores_14_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_14_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_14_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_14_V, AESL_token); // data

			sc_bv<11> *tree_scores_14_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_14_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_14_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_14_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_14_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_14_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_14_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_14_14_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (14) => (14) @ (2)
							for (int i_0 = 14; i_0 <= 14; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_14_14_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_14_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (14) => (14) @ (2)
							for (int i_0 = 14; i_0 <= 14; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_14_14_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_14_14_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_14_V_pc_buffer;
		}

		// output port post check: "tree_scores_15_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_15_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_15_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_15_V, AESL_token); // data

			sc_bv<11> *tree_scores_15_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_15_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_15_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_15_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_15_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_15_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_15_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_15_15_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (15) => (15) @ (2)
							for (int i_0 = 15; i_0 <= 15; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_15_15_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_15_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (15) => (15) @ (2)
							for (int i_0 = 15; i_0 <= 15; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_15_15_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_15_15_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_15_V_pc_buffer;
		}

		// output port post check: "tree_scores_16_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_16_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_16_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_16_V, AESL_token); // data

			sc_bv<11> *tree_scores_16_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_16_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_16_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_16_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_16_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_16_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_16_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_16_16_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (16) => (16) @ (2)
							for (int i_0 = 16; i_0 <= 16; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_16_16_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_16_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (16) => (16) @ (2)
							for (int i_0 = 16; i_0 <= 16; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_16_16_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_16_16_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_16_V_pc_buffer;
		}

		// output port post check: "tree_scores_17_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_17_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_17_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_17_V, AESL_token); // data

			sc_bv<11> *tree_scores_17_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_17_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_17_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_17_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_17_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_17_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_17_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_17_17_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (17) => (17) @ (2)
							for (int i_0 = 17; i_0 <= 17; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_17_17_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_17_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (17) => (17) @ (2)
							for (int i_0 = 17; i_0 <= 17; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_17_17_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_17_17_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_17_V_pc_buffer;
		}

		// output port post check: "tree_scores_18_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_18_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_18_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_18_V, AESL_token); // data

			sc_bv<11> *tree_scores_18_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_18_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_18_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_18_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_18_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_18_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_18_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_18_18_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (18) => (18) @ (2)
							for (int i_0 = 18; i_0 <= 18; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_18_18_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_18_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (18) => (18) @ (2)
							for (int i_0 = 18; i_0 <= 18; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_18_18_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_18_18_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_18_V_pc_buffer;
		}

		// output port post check: "tree_scores_19_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_19_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_19_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_19_V, AESL_token); // data

			sc_bv<11> *tree_scores_19_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_19_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_19_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_19_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_19_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_19_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_19_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_19_19_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (19) => (19) @ (2)
							for (int i_0 = 19; i_0 <= 19; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_19_19_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_19_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (19) => (19) @ (2)
							for (int i_0 = 19; i_0 <= 19; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_19_19_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_19_19_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_19_V_pc_buffer;
		}

		// output port post check: "tree_scores_20_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_20_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_20_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_20_V, AESL_token); // data

			sc_bv<11> *tree_scores_20_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_20_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_20_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_20_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_20_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_20_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_20_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_20_20_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (20) => (20) @ (2)
							for (int i_0 = 20; i_0 <= 20; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_20_20_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_20_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (20) => (20) @ (2)
							for (int i_0 = 20; i_0 <= 20; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_20_20_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_20_20_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_20_V_pc_buffer;
		}

		// output port post check: "tree_scores_21_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_21_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_21_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_21_V, AESL_token); // data

			sc_bv<11> *tree_scores_21_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_21_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_21_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_21_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_21_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_21_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_21_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_21_21_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (21) => (21) @ (2)
							for (int i_0 = 21; i_0 <= 21; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_21_21_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_21_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (21) => (21) @ (2)
							for (int i_0 = 21; i_0 <= 21; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_21_21_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_21_21_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_21_V_pc_buffer;
		}

		// output port post check: "tree_scores_22_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_22_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_22_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_22_V, AESL_token); // data

			sc_bv<11> *tree_scores_22_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_22_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_22_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_22_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_22_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_22_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_22_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_22_22_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (22) => (22) @ (2)
							for (int i_0 = 22; i_0 <= 22; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_22_22_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_22_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (22) => (22) @ (2)
							for (int i_0 = 22; i_0 <= 22; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_22_22_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_22_22_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_22_V_pc_buffer;
		}

		// output port post check: "tree_scores_23_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_23_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_23_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_23_V, AESL_token); // data

			sc_bv<11> *tree_scores_23_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_23_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_23_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_23_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_23_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_23_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_23_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_23_23_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (23) => (23) @ (2)
							for (int i_0 = 23; i_0 <= 23; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_23_23_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_23_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (23) => (23) @ (2)
							for (int i_0 = 23; i_0 <= 23; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_23_23_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_23_23_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_23_V_pc_buffer;
		}

		// output port post check: "tree_scores_24_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_24_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_24_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_24_V, AESL_token); // data

			sc_bv<11> *tree_scores_24_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_24_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_24_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_24_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_24_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_24_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_24_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_24_24_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (24) => (24) @ (2)
							for (int i_0 = 24; i_0 <= 24; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_24_24_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_24_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (24) => (24) @ (2)
							for (int i_0 = 24; i_0 <= 24; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_24_24_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_24_24_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_24_V_pc_buffer;
		}

		// output port post check: "tree_scores_25_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_25_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_25_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_25_V, AESL_token); // data

			sc_bv<11> *tree_scores_25_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_25_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_25_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_25_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_25_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_25_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_25_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_25_25_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (25) => (25) @ (2)
							for (int i_0 = 25; i_0 <= 25; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_25_25_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_25_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (25) => (25) @ (2)
							for (int i_0 = 25; i_0 <= 25; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_25_25_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_25_25_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_25_V_pc_buffer;
		}

		// output port post check: "tree_scores_26_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_26_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_26_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_26_V, AESL_token); // data

			sc_bv<11> *tree_scores_26_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_26_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_26_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_26_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_26_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_26_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_26_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_26_26_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (26) => (26) @ (2)
							for (int i_0 = 26; i_0 <= 26; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_26_26_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_26_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (26) => (26) @ (2)
							for (int i_0 = 26; i_0 <= 26; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_26_26_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_26_26_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_26_V_pc_buffer;
		}

		// output port post check: "tree_scores_27_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_27_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_27_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_27_V, AESL_token); // data

			sc_bv<11> *tree_scores_27_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_27_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_27_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_27_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_27_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_27_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_27_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_27_27_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (27) => (27) @ (2)
							for (int i_0 = 27; i_0 <= 27; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_27_27_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_27_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (27) => (27) @ (2)
							for (int i_0 = 27; i_0 <= 27; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_27_27_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_27_27_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_27_V_pc_buffer;
		}

		// output port post check: "tree_scores_28_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_28_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_28_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_28_V, AESL_token); // data

			sc_bv<11> *tree_scores_28_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_28_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_28_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_28_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_28_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_28_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_28_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_28_28_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (28) => (28) @ (2)
							for (int i_0 = 28; i_0 <= 28; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_28_28_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_28_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (28) => (28) @ (2)
							for (int i_0 = 28; i_0 <= 28; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_28_28_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_28_28_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_28_V_pc_buffer;
		}

		// output port post check: "tree_scores_29_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_29_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_29_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_29_V, AESL_token); // data

			sc_bv<11> *tree_scores_29_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_29_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_29_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_29_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_29_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_29_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_29_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_29_29_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (29) => (29) @ (2)
							for (int i_0 = 29; i_0 <= 29; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_29_29_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_29_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (29) => (29) @ (2)
							for (int i_0 = 29; i_0 <= 29; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_29_29_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_29_29_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_29_V_pc_buffer;
		}

		// output port post check: "tree_scores_30_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_30_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_30_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_30_V, AESL_token); // data

			sc_bv<11> *tree_scores_30_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_30_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_30_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_30_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_30_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_30_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_30_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_30_30_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (30) => (30) @ (2)
							for (int i_0 = 30; i_0 <= 30; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_30_30_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_30_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (30) => (30) @ (2)
							for (int i_0 = 30; i_0 <= 30; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_30_30_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_30_30_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_30_V_pc_buffer;
		}

		// output port post check: "tree_scores_31_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_31_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_31_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_31_V, AESL_token); // data

			sc_bv<11> *tree_scores_31_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_31_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_31_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_31_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_31_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_31_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_31_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_31_31_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (31) => (31) @ (2)
							for (int i_0 = 31; i_0 <= 31; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_31_31_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_31_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (31) => (31) @ (2)
							for (int i_0 = 31; i_0 <= 31; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_31_31_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_31_31_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_31_V_pc_buffer;
		}

		// output port post check: "tree_scores_32_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_32_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_32_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_32_V, AESL_token); // data

			sc_bv<11> *tree_scores_32_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_32_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_32_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_32_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_32_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_32_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_32_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_32_32_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (32) => (32) @ (2)
							for (int i_0 = 32; i_0 <= 32; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_32_32_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_32_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (32) => (32) @ (2)
							for (int i_0 = 32; i_0 <= 32; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_32_32_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_32_32_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_32_V_pc_buffer;
		}

		// output port post check: "tree_scores_33_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_33_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_33_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_33_V, AESL_token); // data

			sc_bv<11> *tree_scores_33_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_33_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_33_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_33_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_33_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_33_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_33_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_33_33_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (33) => (33) @ (2)
							for (int i_0 = 33; i_0 <= 33; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_33_33_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_33_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (33) => (33) @ (2)
							for (int i_0 = 33; i_0 <= 33; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_33_33_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_33_33_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_33_V_pc_buffer;
		}

		// output port post check: "tree_scores_34_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_34_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_34_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_34_V, AESL_token); // data

			sc_bv<11> *tree_scores_34_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_34_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_34_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_34_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_34_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_34_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_34_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_34_34_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (34) => (34) @ (2)
							for (int i_0 = 34; i_0 <= 34; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_34_34_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_34_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (34) => (34) @ (2)
							for (int i_0 = 34; i_0 <= 34; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_34_34_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_34_34_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_34_V_pc_buffer;
		}

		// output port post check: "tree_scores_35_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_35_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_35_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_35_V, AESL_token); // data

			sc_bv<11> *tree_scores_35_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_35_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_35_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_35_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_35_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_35_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_35_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_35_35_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (35) => (35) @ (2)
							for (int i_0 = 35; i_0 <= 35; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_35_35_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_35_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (35) => (35) @ (2)
							for (int i_0 = 35; i_0 <= 35; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_35_35_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_35_35_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_35_V_pc_buffer;
		}

		// output port post check: "tree_scores_36_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_36_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_36_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_36_V, AESL_token); // data

			sc_bv<11> *tree_scores_36_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_36_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_36_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_36_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_36_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_36_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_36_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_36_36_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (36) => (36) @ (2)
							for (int i_0 = 36; i_0 <= 36; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_36_36_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_36_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (36) => (36) @ (2)
							for (int i_0 = 36; i_0 <= 36; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_36_36_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_36_36_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_36_V_pc_buffer;
		}

		// output port post check: "tree_scores_37_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_37_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_37_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_37_V, AESL_token); // data

			sc_bv<11> *tree_scores_37_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_37_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_37_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_37_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_37_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_37_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_37_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_37_37_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (37) => (37) @ (2)
							for (int i_0 = 37; i_0 <= 37; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_37_37_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_37_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (37) => (37) @ (2)
							for (int i_0 = 37; i_0 <= 37; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_37_37_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_37_37_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_37_V_pc_buffer;
		}

		// output port post check: "tree_scores_38_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_38_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_38_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_38_V, AESL_token); // data

			sc_bv<11> *tree_scores_38_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_38_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_38_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_38_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_38_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_38_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_38_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_38_38_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (38) => (38) @ (2)
							for (int i_0 = 38; i_0 <= 38; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_38_38_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_38_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (38) => (38) @ (2)
							for (int i_0 = 38; i_0 <= 38; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_38_38_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_38_38_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_38_V_pc_buffer;
		}

		// output port post check: "tree_scores_39_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_39_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_39_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_39_V, AESL_token); // data

			sc_bv<11> *tree_scores_39_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_39_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_39_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_39_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_39_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_39_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_39_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_39_39_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (39) => (39) @ (2)
							for (int i_0 = 39; i_0 <= 39; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_39_39_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_39_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (39) => (39) @ (2)
							for (int i_0 = 39; i_0 <= 39; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_39_39_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_39_39_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_39_V_pc_buffer;
		}

		// output port post check: "tree_scores_40_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_40_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_40_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_40_V, AESL_token); // data

			sc_bv<11> *tree_scores_40_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_40_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_40_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_40_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_40_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_40_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_40_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_40_40_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (40) => (40) @ (2)
							for (int i_0 = 40; i_0 <= 40; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_40_40_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_40_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (40) => (40) @ (2)
							for (int i_0 = 40; i_0 <= 40; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_40_40_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_40_40_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_40_V_pc_buffer;
		}

		// output port post check: "tree_scores_41_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_41_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_41_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_41_V, AESL_token); // data

			sc_bv<11> *tree_scores_41_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_41_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_41_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_41_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_41_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_41_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_41_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_41_41_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (41) => (41) @ (2)
							for (int i_0 = 41; i_0 <= 41; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_41_41_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_41_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (41) => (41) @ (2)
							for (int i_0 = 41; i_0 <= 41; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_41_41_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_41_41_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_41_V_pc_buffer;
		}

		// output port post check: "tree_scores_42_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_42_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_42_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_42_V, AESL_token); // data

			sc_bv<11> *tree_scores_42_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_42_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_42_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_42_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_42_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_42_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_42_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_42_42_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (42) => (42) @ (2)
							for (int i_0 = 42; i_0 <= 42; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_42_42_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_42_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (42) => (42) @ (2)
							for (int i_0 = 42; i_0 <= 42; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_42_42_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_42_42_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_42_V_pc_buffer;
		}

		// output port post check: "tree_scores_43_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_43_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_43_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_43_V, AESL_token); // data

			sc_bv<11> *tree_scores_43_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_43_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_43_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_43_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_43_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_43_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_43_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_43_43_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (43) => (43) @ (2)
							for (int i_0 = 43; i_0 <= 43; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_43_43_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_43_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (43) => (43) @ (2)
							for (int i_0 = 43; i_0 <= 43; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_43_43_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_43_43_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_43_V_pc_buffer;
		}

		// output port post check: "tree_scores_44_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_44_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_44_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_44_V, AESL_token); // data

			sc_bv<11> *tree_scores_44_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_44_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_44_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_44_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_44_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_44_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_44_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_44_44_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (44) => (44) @ (2)
							for (int i_0 = 44; i_0 <= 44; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_44_44_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_44_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (44) => (44) @ (2)
							for (int i_0 = 44; i_0 <= 44; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_44_44_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_44_44_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_44_V_pc_buffer;
		}

		// output port post check: "tree_scores_45_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_45_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_45_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_45_V, AESL_token); // data

			sc_bv<11> *tree_scores_45_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_45_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_45_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_45_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_45_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_45_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_45_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_45_45_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (45) => (45) @ (2)
							for (int i_0 = 45; i_0 <= 45; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_45_45_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_45_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (45) => (45) @ (2)
							for (int i_0 = 45; i_0 <= 45; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_45_45_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_45_45_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_45_V_pc_buffer;
		}

		// output port post check: "tree_scores_46_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_46_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_46_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_46_V, AESL_token); // data

			sc_bv<11> *tree_scores_46_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_46_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_46_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_46_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_46_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_46_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_46_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_46_46_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (46) => (46) @ (2)
							for (int i_0 = 46; i_0 <= 46; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_46_46_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_46_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (46) => (46) @ (2)
							for (int i_0 = 46; i_0 <= 46; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_46_46_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_46_46_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_46_V_pc_buffer;
		}

		// output port post check: "tree_scores_47_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_47_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_47_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_47_V, AESL_token); // data

			sc_bv<11> *tree_scores_47_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_47_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_47_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_47_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_47_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_47_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_47_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_47_47_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (47) => (47) @ (2)
							for (int i_0 = 47; i_0 <= 47; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_47_47_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_47_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (47) => (47) @ (2)
							for (int i_0 = 47; i_0 <= 47; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_47_47_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_47_47_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_47_V_pc_buffer;
		}

		// output port post check: "tree_scores_48_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_48_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_48_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_48_V, AESL_token); // data

			sc_bv<11> *tree_scores_48_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_48_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_48_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_48_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_48_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_48_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_48_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_48_48_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (48) => (48) @ (2)
							for (int i_0 = 48; i_0 <= 48; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_48_48_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_48_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (48) => (48) @ (2)
							for (int i_0 = 48; i_0 <= 48; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_48_48_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_48_48_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_48_V_pc_buffer;
		}

		// output port post check: "tree_scores_49_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_49_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_49_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_49_V, AESL_token); // data

			sc_bv<11> *tree_scores_49_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_49_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_49_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_49_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_49_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_49_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_49_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_49_49_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (49) => (49) @ (2)
							for (int i_0 = 49; i_0 <= 49; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_49_49_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_49_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (49) => (49) @ (2)
							for (int i_0 = 49; i_0 <= 49; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_49_49_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_49_49_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_49_V_pc_buffer;
		}

		// output port post check: "tree_scores_50_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_50_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_50_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_50_V, AESL_token); // data

			sc_bv<11> *tree_scores_50_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_50_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_50_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_50_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_50_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_50_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_50_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_50_50_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (50) => (50) @ (2)
							for (int i_0 = 50; i_0 <= 50; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_50_50_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_50_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (50) => (50) @ (2)
							for (int i_0 = 50; i_0 <= 50; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_50_50_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_50_50_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_50_V_pc_buffer;
		}

		// output port post check: "tree_scores_51_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_51_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_51_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_51_V, AESL_token); // data

			sc_bv<11> *tree_scores_51_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_51_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_51_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_51_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_51_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_51_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_51_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_51_51_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (51) => (51) @ (2)
							for (int i_0 = 51; i_0 <= 51; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_51_51_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_51_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (51) => (51) @ (2)
							for (int i_0 = 51; i_0 <= 51; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_51_51_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_51_51_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_51_V_pc_buffer;
		}

		// output port post check: "tree_scores_52_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_52_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_52_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_52_V, AESL_token); // data

			sc_bv<11> *tree_scores_52_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_52_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_52_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_52_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_52_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_52_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_52_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_52_52_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (52) => (52) @ (2)
							for (int i_0 = 52; i_0 <= 52; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_52_52_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_52_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (52) => (52) @ (2)
							for (int i_0 = 52; i_0 <= 52; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_52_52_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_52_52_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_52_V_pc_buffer;
		}

		// output port post check: "tree_scores_53_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_53_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_53_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_53_V, AESL_token); // data

			sc_bv<11> *tree_scores_53_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_53_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_53_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_53_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_53_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_53_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_53_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_53_53_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (53) => (53) @ (2)
							for (int i_0 = 53; i_0 <= 53; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_53_53_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_53_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (53) => (53) @ (2)
							for (int i_0 = 53; i_0 <= 53; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_53_53_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_53_53_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_53_V_pc_buffer;
		}

		// output port post check: "tree_scores_54_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_54_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_54_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_54_V, AESL_token); // data

			sc_bv<11> *tree_scores_54_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_54_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_54_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_54_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_54_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_54_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_54_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_54_54_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (54) => (54) @ (2)
							for (int i_0 = 54; i_0 <= 54; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_54_54_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_54_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (54) => (54) @ (2)
							for (int i_0 = 54; i_0 <= 54; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_54_54_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_54_54_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_54_V_pc_buffer;
		}

		// output port post check: "tree_scores_55_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_55_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_55_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_55_V, AESL_token); // data

			sc_bv<11> *tree_scores_55_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_55_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_55_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_55_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_55_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_55_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_55_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_55_55_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (55) => (55) @ (2)
							for (int i_0 = 55; i_0 <= 55; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_55_55_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_55_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (55) => (55) @ (2)
							for (int i_0 = 55; i_0 <= 55; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_55_55_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_55_55_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_55_V_pc_buffer;
		}

		// output port post check: "tree_scores_56_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_56_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_56_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_56_V, AESL_token); // data

			sc_bv<11> *tree_scores_56_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_56_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_56_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_56_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_56_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_56_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_56_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_56_56_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (56) => (56) @ (2)
							for (int i_0 = 56; i_0 <= 56; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_56_56_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_56_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (56) => (56) @ (2)
							for (int i_0 = 56; i_0 <= 56; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_56_56_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_56_56_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_56_V_pc_buffer;
		}

		// output port post check: "tree_scores_57_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_57_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_57_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_57_V, AESL_token); // data

			sc_bv<11> *tree_scores_57_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_57_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_57_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_57_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_57_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_57_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_57_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_57_57_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (57) => (57) @ (2)
							for (int i_0 = 57; i_0 <= 57; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_57_57_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_57_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (57) => (57) @ (2)
							for (int i_0 = 57; i_0 <= 57; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_57_57_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_57_57_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_57_V_pc_buffer;
		}

		// output port post check: "tree_scores_58_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_58_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_58_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_58_V, AESL_token); // data

			sc_bv<11> *tree_scores_58_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_58_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_58_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_58_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_58_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_58_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_58_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_58_58_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (58) => (58) @ (2)
							for (int i_0 = 58; i_0 <= 58; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_58_58_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_58_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (58) => (58) @ (2)
							for (int i_0 = 58; i_0 <= 58; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_58_58_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_58_58_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_58_V_pc_buffer;
		}

		// output port post check: "tree_scores_59_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_59_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_59_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_59_V, AESL_token); // data

			sc_bv<11> *tree_scores_59_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_59_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_59_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_59_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_59_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_59_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_59_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_59_59_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (59) => (59) @ (2)
							for (int i_0 = 59; i_0 <= 59; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_59_59_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_59_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (59) => (59) @ (2)
							for (int i_0 = 59; i_0 <= 59; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_59_59_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_59_59_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_59_V_pc_buffer;
		}

		// output port post check: "tree_scores_60_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_60_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_60_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_60_V, AESL_token); // data

			sc_bv<11> *tree_scores_60_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_60_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_60_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_60_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_60_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_60_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_60_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_60_60_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (60) => (60) @ (2)
							for (int i_0 = 60; i_0 <= 60; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_60_60_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_60_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (60) => (60) @ (2)
							for (int i_0 = 60; i_0 <= 60; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_60_60_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_60_60_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_60_V_pc_buffer;
		}

		// output port post check: "tree_scores_61_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_61_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_61_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_61_V, AESL_token); // data

			sc_bv<11> *tree_scores_61_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_61_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_61_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_61_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_61_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_61_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_61_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_61_61_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (61) => (61) @ (2)
							for (int i_0 = 61; i_0 <= 61; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_61_61_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_61_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (61) => (61) @ (2)
							for (int i_0 = 61; i_0 <= 61; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_61_61_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_61_61_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_61_V_pc_buffer;
		}

		// output port post check: "tree_scores_62_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_62_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_62_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_62_V, AESL_token); // data

			sc_bv<11> *tree_scores_62_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_62_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_62_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_62_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_62_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_62_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_62_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_62_62_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (62) => (62) @ (2)
							for (int i_0 = 62; i_0 <= 62; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_62_62_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_62_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (62) => (62) @ (2)
							for (int i_0 = 62; i_0 <= 62; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_62_62_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_62_62_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_62_V_pc_buffer;
		}

		// output port post check: "tree_scores_63_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_63_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_63_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_63_V, AESL_token); // data

			sc_bv<11> *tree_scores_63_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_63_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_63_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_63_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_63_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_63_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_63_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_63_63_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (63) => (63) @ (2)
							for (int i_0 = 63; i_0 <= 63; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_63_63_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_63_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (63) => (63) @ (2)
							for (int i_0 = 63; i_0 <= 63; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_63_63_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_63_63_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_63_V_pc_buffer;
		}

		// output port post check: "tree_scores_64_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_64_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_64_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_64_V, AESL_token); // data

			sc_bv<11> *tree_scores_64_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_64_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_64_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_64_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_64_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_64_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_64_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_64_64_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (64) => (64) @ (2)
							for (int i_0 = 64; i_0 <= 64; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_64_64_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_64_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (64) => (64) @ (2)
							for (int i_0 = 64; i_0 <= 64; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_64_64_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_64_64_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_64_V_pc_buffer;
		}

		// output port post check: "tree_scores_65_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_65_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_65_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_65_V, AESL_token); // data

			sc_bv<11> *tree_scores_65_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_65_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_65_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_65_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_65_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_65_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_65_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_65_65_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (65) => (65) @ (2)
							for (int i_0 = 65; i_0 <= 65; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_65_65_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_65_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (65) => (65) @ (2)
							for (int i_0 = 65; i_0 <= 65; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_65_65_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_65_65_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_65_V_pc_buffer;
		}

		// output port post check: "tree_scores_66_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_66_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_66_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_66_V, AESL_token); // data

			sc_bv<11> *tree_scores_66_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_66_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_66_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_66_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_66_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_66_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_66_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_66_66_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (66) => (66) @ (2)
							for (int i_0 = 66; i_0 <= 66; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_66_66_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_66_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (66) => (66) @ (2)
							for (int i_0 = 66; i_0 <= 66; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_66_66_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_66_66_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_66_V_pc_buffer;
		}

		// output port post check: "tree_scores_67_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_67_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_67_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_67_V, AESL_token); // data

			sc_bv<11> *tree_scores_67_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_67_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_67_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_67_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_67_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_67_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_67_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_67_67_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (67) => (67) @ (2)
							for (int i_0 = 67; i_0 <= 67; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_67_67_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_67_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (67) => (67) @ (2)
							for (int i_0 = 67; i_0 <= 67; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_67_67_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_67_67_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_67_V_pc_buffer;
		}

		// output port post check: "tree_scores_68_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_68_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_68_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_68_V, AESL_token); // data

			sc_bv<11> *tree_scores_68_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_68_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_68_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_68_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_68_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_68_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_68_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_68_68_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (68) => (68) @ (2)
							for (int i_0 = 68; i_0 <= 68; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_68_68_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_68_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (68) => (68) @ (2)
							for (int i_0 = 68; i_0 <= 68; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_68_68_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_68_68_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_68_V_pc_buffer;
		}

		// output port post check: "tree_scores_69_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_69_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_69_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_69_V, AESL_token); // data

			sc_bv<11> *tree_scores_69_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_69_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_69_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_69_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_69_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_69_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_69_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_69_69_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (69) => (69) @ (2)
							for (int i_0 = 69; i_0 <= 69; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_69_69_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_69_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (69) => (69) @ (2)
							for (int i_0 = 69; i_0 <= 69; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_69_69_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_69_69_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_69_V_pc_buffer;
		}

		// output port post check: "tree_scores_70_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_70_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_70_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_70_V, AESL_token); // data

			sc_bv<11> *tree_scores_70_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_70_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_70_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_70_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_70_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_70_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_70_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_70_70_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (70) => (70) @ (2)
							for (int i_0 = 70; i_0 <= 70; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_70_70_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_70_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (70) => (70) @ (2)
							for (int i_0 = 70; i_0 <= 70; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_70_70_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_70_70_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_70_V_pc_buffer;
		}

		// output port post check: "tree_scores_71_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_71_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_71_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_71_V, AESL_token); // data

			sc_bv<11> *tree_scores_71_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_71_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_71_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_71_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_71_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_71_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_71_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_71_71_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (71) => (71) @ (2)
							for (int i_0 = 71; i_0 <= 71; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_71_71_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_71_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (71) => (71) @ (2)
							for (int i_0 = 71; i_0 <= 71; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_71_71_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_71_71_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_71_V_pc_buffer;
		}

		// output port post check: "tree_scores_72_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_72_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_72_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_72_V, AESL_token); // data

			sc_bv<11> *tree_scores_72_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_72_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_72_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_72_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_72_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_72_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_72_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_72_72_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (72) => (72) @ (2)
							for (int i_0 = 72; i_0 <= 72; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_72_72_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_72_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (72) => (72) @ (2)
							for (int i_0 = 72; i_0 <= 72; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_72_72_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_72_72_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_72_V_pc_buffer;
		}

		// output port post check: "tree_scores_73_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_73_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_73_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_73_V, AESL_token); // data

			sc_bv<11> *tree_scores_73_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_73_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_73_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_73_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_73_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_73_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_73_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_73_73_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (73) => (73) @ (2)
							for (int i_0 = 73; i_0 <= 73; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_73_73_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_73_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (73) => (73) @ (2)
							for (int i_0 = 73; i_0 <= 73; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_73_73_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_73_73_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_73_V_pc_buffer;
		}

		// output port post check: "tree_scores_74_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_74_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_74_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_74_V, AESL_token); // data

			sc_bv<11> *tree_scores_74_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_74_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_74_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_74_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_74_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_74_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_74_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_74_74_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (74) => (74) @ (2)
							for (int i_0 = 74; i_0 <= 74; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_74_74_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_74_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (74) => (74) @ (2)
							for (int i_0 = 74; i_0 <= 74; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_74_74_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_74_74_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_74_V_pc_buffer;
		}

		// output port post check: "tree_scores_75_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_75_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_75_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_75_V, AESL_token); // data

			sc_bv<11> *tree_scores_75_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_75_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_75_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_75_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_75_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_75_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_75_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_75_75_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (75) => (75) @ (2)
							for (int i_0 = 75; i_0 <= 75; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_75_75_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_75_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (75) => (75) @ (2)
							for (int i_0 = 75; i_0 <= 75; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_75_75_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_75_75_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_75_V_pc_buffer;
		}

		// output port post check: "tree_scores_76_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_76_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_76_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_76_V, AESL_token); // data

			sc_bv<11> *tree_scores_76_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_76_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_76_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_76_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_76_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_76_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_76_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_76_76_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (76) => (76) @ (2)
							for (int i_0 = 76; i_0 <= 76; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_76_76_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_76_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (76) => (76) @ (2)
							for (int i_0 = 76; i_0 <= 76; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_76_76_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_76_76_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_76_V_pc_buffer;
		}

		// output port post check: "tree_scores_77_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_77_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_77_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_77_V, AESL_token); // data

			sc_bv<11> *tree_scores_77_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_77_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_77_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_77_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_77_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_77_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_77_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_77_77_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (77) => (77) @ (2)
							for (int i_0 = 77; i_0 <= 77; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_77_77_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_77_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (77) => (77) @ (2)
							for (int i_0 = 77; i_0 <= 77; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_77_77_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_77_77_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_77_V_pc_buffer;
		}

		// output port post check: "tree_scores_78_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_78_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_78_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_78_V, AESL_token); // data

			sc_bv<11> *tree_scores_78_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_78_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_78_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_78_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_78_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_78_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_78_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_78_78_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (78) => (78) @ (2)
							for (int i_0 = 78; i_0 <= 78; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_78_78_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_78_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (78) => (78) @ (2)
							for (int i_0 = 78; i_0 <= 78; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_78_78_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_78_78_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_78_V_pc_buffer;
		}

		// output port post check: "tree_scores_79_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_79_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_79_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_79_V, AESL_token); // data

			sc_bv<11> *tree_scores_79_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_79_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_79_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_79_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_79_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_79_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_79_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_79_79_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (79) => (79) @ (2)
							for (int i_0 = 79; i_0 <= 79; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_79_79_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_79_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (79) => (79) @ (2)
							for (int i_0 = 79; i_0 <= 79; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_79_79_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_79_79_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_79_V_pc_buffer;
		}

		// output port post check: "tree_scores_80_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_80_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_80_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_80_V, AESL_token); // data

			sc_bv<11> *tree_scores_80_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_80_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_80_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_80_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_80_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_80_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_80_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_80_80_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (80) => (80) @ (2)
							for (int i_0 = 80; i_0 <= 80; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_80_80_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_80_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (80) => (80) @ (2)
							for (int i_0 = 80; i_0 <= 80; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_80_80_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_80_80_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_80_V_pc_buffer;
		}

		// output port post check: "tree_scores_81_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_81_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_81_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_81_V, AESL_token); // data

			sc_bv<11> *tree_scores_81_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_81_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_81_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_81_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_81_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_81_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_81_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_81_81_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (81) => (81) @ (2)
							for (int i_0 = 81; i_0 <= 81; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_81_81_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_81_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (81) => (81) @ (2)
							for (int i_0 = 81; i_0 <= 81; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_81_81_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_81_81_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_81_V_pc_buffer;
		}

		// output port post check: "tree_scores_82_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_82_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_82_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_82_V, AESL_token); // data

			sc_bv<11> *tree_scores_82_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_82_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_82_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_82_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_82_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_82_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_82_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_82_82_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (82) => (82) @ (2)
							for (int i_0 = 82; i_0 <= 82; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_82_82_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_82_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (82) => (82) @ (2)
							for (int i_0 = 82; i_0 <= 82; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_82_82_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_82_82_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_82_V_pc_buffer;
		}

		// output port post check: "tree_scores_83_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_83_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_83_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_83_V, AESL_token); // data

			sc_bv<11> *tree_scores_83_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_83_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_83_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_83_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_83_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_83_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_83_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_83_83_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (83) => (83) @ (2)
							for (int i_0 = 83; i_0 <= 83; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_83_83_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_83_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (83) => (83) @ (2)
							for (int i_0 = 83; i_0 <= 83; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_83_83_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_83_83_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_83_V_pc_buffer;
		}

		// output port post check: "tree_scores_84_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_84_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_84_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_84_V, AESL_token); // data

			sc_bv<11> *tree_scores_84_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_84_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_84_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_84_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_84_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_84_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_84_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_84_84_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (84) => (84) @ (2)
							for (int i_0 = 84; i_0 <= 84; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_84_84_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_84_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (84) => (84) @ (2)
							for (int i_0 = 84; i_0 <= 84; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_84_84_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_84_84_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_84_V_pc_buffer;
		}

		// output port post check: "tree_scores_85_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_85_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_85_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_85_V, AESL_token); // data

			sc_bv<11> *tree_scores_85_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_85_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_85_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_85_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_85_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_85_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_85_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_85_85_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (85) => (85) @ (2)
							for (int i_0 = 85; i_0 <= 85; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_85_85_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_85_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (85) => (85) @ (2)
							for (int i_0 = 85; i_0 <= 85; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_85_85_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_85_85_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_85_V_pc_buffer;
		}

		// output port post check: "tree_scores_86_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_86_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_86_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_86_V, AESL_token); // data

			sc_bv<11> *tree_scores_86_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_86_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_86_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_86_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_86_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_86_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_86_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_86_86_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (86) => (86) @ (2)
							for (int i_0 = 86; i_0 <= 86; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_86_86_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_86_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (86) => (86) @ (2)
							for (int i_0 = 86; i_0 <= 86; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_86_86_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_86_86_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_86_V_pc_buffer;
		}

		// output port post check: "tree_scores_87_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_87_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_87_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_87_V, AESL_token); // data

			sc_bv<11> *tree_scores_87_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_87_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_87_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_87_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_87_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_87_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_87_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_87_87_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (87) => (87) @ (2)
							for (int i_0 = 87; i_0 <= 87; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_87_87_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_87_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (87) => (87) @ (2)
							for (int i_0 = 87; i_0 <= 87; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_87_87_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_87_87_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_87_V_pc_buffer;
		}

		// output port post check: "tree_scores_88_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_88_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_88_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_88_V, AESL_token); // data

			sc_bv<11> *tree_scores_88_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_88_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_88_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_88_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_88_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_88_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_88_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_88_88_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (88) => (88) @ (2)
							for (int i_0 = 88; i_0 <= 88; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_88_88_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_88_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (88) => (88) @ (2)
							for (int i_0 = 88; i_0 <= 88; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_88_88_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_88_88_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_88_V_pc_buffer;
		}

		// output port post check: "tree_scores_89_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_89_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_89_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_89_V, AESL_token); // data

			sc_bv<11> *tree_scores_89_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_89_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_89_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_89_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_89_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_89_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_89_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_89_89_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (89) => (89) @ (2)
							for (int i_0 = 89; i_0 <= 89; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_89_89_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_89_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (89) => (89) @ (2)
							for (int i_0 = 89; i_0 <= 89; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_89_89_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_89_89_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_89_V_pc_buffer;
		}

		// output port post check: "tree_scores_90_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_90_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_90_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_90_V, AESL_token); // data

			sc_bv<11> *tree_scores_90_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_90_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_90_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_90_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_90_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_90_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_90_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_90_90_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (90) => (90) @ (2)
							for (int i_0 = 90; i_0 <= 90; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_90_90_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_90_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (90) => (90) @ (2)
							for (int i_0 = 90; i_0 <= 90; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_90_90_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_90_90_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_90_V_pc_buffer;
		}

		// output port post check: "tree_scores_91_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_91_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_91_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_91_V, AESL_token); // data

			sc_bv<11> *tree_scores_91_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_91_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_91_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_91_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_91_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_91_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_91_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_91_91_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (91) => (91) @ (2)
							for (int i_0 = 91; i_0 <= 91; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_91_91_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_91_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (91) => (91) @ (2)
							for (int i_0 = 91; i_0 <= 91; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_91_91_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_91_91_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_91_V_pc_buffer;
		}

		// output port post check: "tree_scores_92_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_92_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_92_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_92_V, AESL_token); // data

			sc_bv<11> *tree_scores_92_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_92_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_92_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_92_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_92_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_92_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_92_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_92_92_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (92) => (92) @ (2)
							for (int i_0 = 92; i_0 <= 92; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_92_92_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_92_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (92) => (92) @ (2)
							for (int i_0 = 92; i_0 <= 92; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_92_92_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_92_92_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_92_V_pc_buffer;
		}

		// output port post check: "tree_scores_93_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_93_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_93_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_93_V, AESL_token); // data

			sc_bv<11> *tree_scores_93_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_93_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_93_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_93_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_93_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_93_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_93_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_93_93_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (93) => (93) @ (2)
							for (int i_0 = 93; i_0 <= 93; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_93_93_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_93_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (93) => (93) @ (2)
							for (int i_0 = 93; i_0 <= 93; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_93_93_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_93_93_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_93_V_pc_buffer;
		}

		// output port post check: "tree_scores_94_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_94_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_94_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_94_V, AESL_token); // data

			sc_bv<11> *tree_scores_94_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_94_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_94_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_94_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_94_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_94_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_94_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_94_94_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (94) => (94) @ (2)
							for (int i_0 = 94; i_0 <= 94; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_94_94_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_94_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (94) => (94) @ (2)
							for (int i_0 = 94; i_0 <= 94; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_94_94_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_94_94_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_94_V_pc_buffer;
		}

		// output port post check: "tree_scores_95_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_95_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_95_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_95_V, AESL_token); // data

			sc_bv<11> *tree_scores_95_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_95_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_95_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_95_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_95_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_95_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_95_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_95_95_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (95) => (95) @ (2)
							for (int i_0 = 95; i_0 <= 95; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_95_95_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_95_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (95) => (95) @ (2)
							for (int i_0 = 95; i_0 <= 95; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_95_95_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_95_95_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_95_V_pc_buffer;
		}

		// output port post check: "tree_scores_96_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_96_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_96_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_96_V, AESL_token); // data

			sc_bv<11> *tree_scores_96_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_96_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_96_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_96_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_96_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_96_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_96_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_96_96_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (96) => (96) @ (2)
							for (int i_0 = 96; i_0 <= 96; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_96_96_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_96_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (96) => (96) @ (2)
							for (int i_0 = 96; i_0 <= 96; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_96_96_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_96_96_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_96_V_pc_buffer;
		}

		// output port post check: "tree_scores_97_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_97_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_97_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_97_V, AESL_token); // data

			sc_bv<11> *tree_scores_97_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_97_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_97_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_97_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_97_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_97_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_97_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_97_97_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (97) => (97) @ (2)
							for (int i_0 = 97; i_0 <= 97; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_97_97_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_97_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (97) => (97) @ (2)
							for (int i_0 = 97; i_0 <= 97; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_97_97_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_97_97_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_97_V_pc_buffer;
		}

		// output port post check: "tree_scores_98_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_98_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_98_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_98_V, AESL_token); // data

			sc_bv<11> *tree_scores_98_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_98_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_98_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_98_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_98_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_98_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_98_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_98_98_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (98) => (98) @ (2)
							for (int i_0 = 98; i_0 <= 98; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_98_98_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_98_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (98) => (98) @ (2)
							for (int i_0 = 98; i_0 <= 98; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_98_98_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_98_98_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_98_V_pc_buffer;
		}

		// output port post check: "tree_scores_99_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_99_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_99_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_99_V, AESL_token); // data

			sc_bv<11> *tree_scores_99_V_pc_buffer = new sc_bv<11>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_99_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'tree_scores_99_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					tree_scores_99_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_tree_scores_99_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_tree_scores_99_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: tree_scores_99_V
				{
					// bitslice(10, 0)
					// {
						// celement: tree_scores.V(10, 0)
						// {
							sc_lv<11>* tree_scores_V_lv0_99_99_2 = new sc_lv<11>[1];
						// }
					// }

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (99) => (99) @ (2)
							for (int i_0 = 99; i_0 <= 99; i_0 += 2)
							{
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									tree_scores_V_lv0_99_99_2[hls_map_index].range(10, 0) = sc_bv<11>(tree_scores_99_V_pc_buffer[hls_map_index].range(10, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(10, 0)
					{
						int hls_map_index = 0;
						// celement: tree_scores.V(10, 0)
						{
							// carray: (99) => (99) @ (2)
							for (int i_0 = 99; i_0 <= 99; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : tree_scores[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : tree_scores[0]
								// output_left_conversion : (tree_scores[i_0]).range()
								// output_type_conversion : (tree_scores_V_lv0_99_99_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
								{
									(tree_scores[i_0]).range() = (tree_scores_V_lv0_99_99_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] tree_scores_99_V_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "x_0_V"
		char* tvin_x_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_x_0_V);

		// "x_1_V"
		char* tvin_x_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_x_1_V);

		// "x_2_V"
		char* tvin_x_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_x_2_V);

		// "x_3_V"
		char* tvin_x_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_x_3_V);

		// "x_4_V"
		char* tvin_x_4_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_x_4_V);

		// "x_5_V"
		char* tvin_x_5_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_x_5_V);

		// "x_6_V"
		char* tvin_x_6_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_x_6_V);

		// "score_0_V"
		char* tvout_score_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_score_0_V);

		// "tree_scores_0_V"
		char* tvout_tree_scores_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_0_V);

		// "tree_scores_1_V"
		char* tvout_tree_scores_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_1_V);

		// "tree_scores_2_V"
		char* tvout_tree_scores_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_2_V);

		// "tree_scores_3_V"
		char* tvout_tree_scores_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_3_V);

		// "tree_scores_4_V"
		char* tvout_tree_scores_4_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_4_V);

		// "tree_scores_5_V"
		char* tvout_tree_scores_5_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_5_V);

		// "tree_scores_6_V"
		char* tvout_tree_scores_6_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_6_V);

		// "tree_scores_7_V"
		char* tvout_tree_scores_7_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_7_V);

		// "tree_scores_8_V"
		char* tvout_tree_scores_8_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_8_V);

		// "tree_scores_9_V"
		char* tvout_tree_scores_9_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_9_V);

		// "tree_scores_10_V"
		char* tvout_tree_scores_10_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_10_V);

		// "tree_scores_11_V"
		char* tvout_tree_scores_11_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_11_V);

		// "tree_scores_12_V"
		char* tvout_tree_scores_12_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_12_V);

		// "tree_scores_13_V"
		char* tvout_tree_scores_13_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_13_V);

		// "tree_scores_14_V"
		char* tvout_tree_scores_14_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_14_V);

		// "tree_scores_15_V"
		char* tvout_tree_scores_15_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_15_V);

		// "tree_scores_16_V"
		char* tvout_tree_scores_16_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_16_V);

		// "tree_scores_17_V"
		char* tvout_tree_scores_17_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_17_V);

		// "tree_scores_18_V"
		char* tvout_tree_scores_18_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_18_V);

		// "tree_scores_19_V"
		char* tvout_tree_scores_19_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_19_V);

		// "tree_scores_20_V"
		char* tvout_tree_scores_20_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_20_V);

		// "tree_scores_21_V"
		char* tvout_tree_scores_21_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_21_V);

		// "tree_scores_22_V"
		char* tvout_tree_scores_22_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_22_V);

		// "tree_scores_23_V"
		char* tvout_tree_scores_23_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_23_V);

		// "tree_scores_24_V"
		char* tvout_tree_scores_24_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_24_V);

		// "tree_scores_25_V"
		char* tvout_tree_scores_25_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_25_V);

		// "tree_scores_26_V"
		char* tvout_tree_scores_26_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_26_V);

		// "tree_scores_27_V"
		char* tvout_tree_scores_27_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_27_V);

		// "tree_scores_28_V"
		char* tvout_tree_scores_28_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_28_V);

		// "tree_scores_29_V"
		char* tvout_tree_scores_29_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_29_V);

		// "tree_scores_30_V"
		char* tvout_tree_scores_30_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_30_V);

		// "tree_scores_31_V"
		char* tvout_tree_scores_31_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_31_V);

		// "tree_scores_32_V"
		char* tvout_tree_scores_32_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_32_V);

		// "tree_scores_33_V"
		char* tvout_tree_scores_33_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_33_V);

		// "tree_scores_34_V"
		char* tvout_tree_scores_34_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_34_V);

		// "tree_scores_35_V"
		char* tvout_tree_scores_35_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_35_V);

		// "tree_scores_36_V"
		char* tvout_tree_scores_36_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_36_V);

		// "tree_scores_37_V"
		char* tvout_tree_scores_37_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_37_V);

		// "tree_scores_38_V"
		char* tvout_tree_scores_38_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_38_V);

		// "tree_scores_39_V"
		char* tvout_tree_scores_39_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_39_V);

		// "tree_scores_40_V"
		char* tvout_tree_scores_40_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_40_V);

		// "tree_scores_41_V"
		char* tvout_tree_scores_41_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_41_V);

		// "tree_scores_42_V"
		char* tvout_tree_scores_42_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_42_V);

		// "tree_scores_43_V"
		char* tvout_tree_scores_43_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_43_V);

		// "tree_scores_44_V"
		char* tvout_tree_scores_44_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_44_V);

		// "tree_scores_45_V"
		char* tvout_tree_scores_45_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_45_V);

		// "tree_scores_46_V"
		char* tvout_tree_scores_46_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_46_V);

		// "tree_scores_47_V"
		char* tvout_tree_scores_47_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_47_V);

		// "tree_scores_48_V"
		char* tvout_tree_scores_48_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_48_V);

		// "tree_scores_49_V"
		char* tvout_tree_scores_49_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_49_V);

		// "tree_scores_50_V"
		char* tvout_tree_scores_50_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_50_V);

		// "tree_scores_51_V"
		char* tvout_tree_scores_51_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_51_V);

		// "tree_scores_52_V"
		char* tvout_tree_scores_52_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_52_V);

		// "tree_scores_53_V"
		char* tvout_tree_scores_53_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_53_V);

		// "tree_scores_54_V"
		char* tvout_tree_scores_54_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_54_V);

		// "tree_scores_55_V"
		char* tvout_tree_scores_55_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_55_V);

		// "tree_scores_56_V"
		char* tvout_tree_scores_56_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_56_V);

		// "tree_scores_57_V"
		char* tvout_tree_scores_57_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_57_V);

		// "tree_scores_58_V"
		char* tvout_tree_scores_58_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_58_V);

		// "tree_scores_59_V"
		char* tvout_tree_scores_59_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_59_V);

		// "tree_scores_60_V"
		char* tvout_tree_scores_60_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_60_V);

		// "tree_scores_61_V"
		char* tvout_tree_scores_61_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_61_V);

		// "tree_scores_62_V"
		char* tvout_tree_scores_62_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_62_V);

		// "tree_scores_63_V"
		char* tvout_tree_scores_63_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_63_V);

		// "tree_scores_64_V"
		char* tvout_tree_scores_64_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_64_V);

		// "tree_scores_65_V"
		char* tvout_tree_scores_65_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_65_V);

		// "tree_scores_66_V"
		char* tvout_tree_scores_66_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_66_V);

		// "tree_scores_67_V"
		char* tvout_tree_scores_67_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_67_V);

		// "tree_scores_68_V"
		char* tvout_tree_scores_68_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_68_V);

		// "tree_scores_69_V"
		char* tvout_tree_scores_69_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_69_V);

		// "tree_scores_70_V"
		char* tvout_tree_scores_70_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_70_V);

		// "tree_scores_71_V"
		char* tvout_tree_scores_71_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_71_V);

		// "tree_scores_72_V"
		char* tvout_tree_scores_72_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_72_V);

		// "tree_scores_73_V"
		char* tvout_tree_scores_73_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_73_V);

		// "tree_scores_74_V"
		char* tvout_tree_scores_74_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_74_V);

		// "tree_scores_75_V"
		char* tvout_tree_scores_75_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_75_V);

		// "tree_scores_76_V"
		char* tvout_tree_scores_76_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_76_V);

		// "tree_scores_77_V"
		char* tvout_tree_scores_77_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_77_V);

		// "tree_scores_78_V"
		char* tvout_tree_scores_78_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_78_V);

		// "tree_scores_79_V"
		char* tvout_tree_scores_79_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_79_V);

		// "tree_scores_80_V"
		char* tvout_tree_scores_80_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_80_V);

		// "tree_scores_81_V"
		char* tvout_tree_scores_81_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_81_V);

		// "tree_scores_82_V"
		char* tvout_tree_scores_82_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_82_V);

		// "tree_scores_83_V"
		char* tvout_tree_scores_83_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_83_V);

		// "tree_scores_84_V"
		char* tvout_tree_scores_84_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_84_V);

		// "tree_scores_85_V"
		char* tvout_tree_scores_85_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_85_V);

		// "tree_scores_86_V"
		char* tvout_tree_scores_86_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_86_V);

		// "tree_scores_87_V"
		char* tvout_tree_scores_87_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_87_V);

		// "tree_scores_88_V"
		char* tvout_tree_scores_88_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_88_V);

		// "tree_scores_89_V"
		char* tvout_tree_scores_89_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_89_V);

		// "tree_scores_90_V"
		char* tvout_tree_scores_90_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_90_V);

		// "tree_scores_91_V"
		char* tvout_tree_scores_91_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_91_V);

		// "tree_scores_92_V"
		char* tvout_tree_scores_92_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_92_V);

		// "tree_scores_93_V"
		char* tvout_tree_scores_93_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_93_V);

		// "tree_scores_94_V"
		char* tvout_tree_scores_94_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_94_V);

		// "tree_scores_95_V"
		char* tvout_tree_scores_95_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_95_V);

		// "tree_scores_96_V"
		char* tvout_tree_scores_96_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_96_V);

		// "tree_scores_97_V"
		char* tvout_tree_scores_97_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_97_V);

		// "tree_scores_98_V"
		char* tvout_tree_scores_98_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_98_V);

		// "tree_scores_99_V"
		char* tvout_tree_scores_99_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_tree_scores_99_V);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_x_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_x_0_V, tvin_x_0_V);

		sc_bv<11>* x_0_V_tvin_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: x_0_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: x.V(10, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : x[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : x[0]
						// regulate_c_name       : x_V
						// input_type_conversion : (x[i_0]).range().to_string(SC_BIN).c_str()
						if (&(x[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> x_V_tmp_mem;
							x_V_tmp_mem = (x[i_0]).range().to_string(SC_BIN).c_str();
							x_0_V_tvin_wrapc_buffer[hls_map_index].range(10, 0) = x_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_x_0_V, "%s\n", (x_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_x_0_V, tvin_x_0_V);
		}

		tcl_file.set_num(1, &tcl_file.x_0_V_depth);
		sprintf(tvin_x_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_x_0_V, tvin_x_0_V);

		// release memory allocation
		delete [] x_0_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_x_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_x_1_V, tvin_x_1_V);

		sc_bv<11>* x_1_V_tvin_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: x_1_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: x.V(10, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : x[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : x[0]
						// regulate_c_name       : x_V
						// input_type_conversion : (x[i_0]).range().to_string(SC_BIN).c_str()
						if (&(x[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> x_V_tmp_mem;
							x_V_tmp_mem = (x[i_0]).range().to_string(SC_BIN).c_str();
							x_1_V_tvin_wrapc_buffer[hls_map_index].range(10, 0) = x_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_x_1_V, "%s\n", (x_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_x_1_V, tvin_x_1_V);
		}

		tcl_file.set_num(1, &tcl_file.x_1_V_depth);
		sprintf(tvin_x_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_x_1_V, tvin_x_1_V);

		// release memory allocation
		delete [] x_1_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_x_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_x_2_V, tvin_x_2_V);

		sc_bv<11>* x_2_V_tvin_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: x_2_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: x.V(10, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : x[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : x[0]
						// regulate_c_name       : x_V
						// input_type_conversion : (x[i_0]).range().to_string(SC_BIN).c_str()
						if (&(x[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> x_V_tmp_mem;
							x_V_tmp_mem = (x[i_0]).range().to_string(SC_BIN).c_str();
							x_2_V_tvin_wrapc_buffer[hls_map_index].range(10, 0) = x_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_x_2_V, "%s\n", (x_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_x_2_V, tvin_x_2_V);
		}

		tcl_file.set_num(1, &tcl_file.x_2_V_depth);
		sprintf(tvin_x_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_x_2_V, tvin_x_2_V);

		// release memory allocation
		delete [] x_2_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_x_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_x_3_V, tvin_x_3_V);

		sc_bv<11>* x_3_V_tvin_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: x_3_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: x.V(10, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : x[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : x[0]
						// regulate_c_name       : x_V
						// input_type_conversion : (x[i_0]).range().to_string(SC_BIN).c_str()
						if (&(x[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> x_V_tmp_mem;
							x_V_tmp_mem = (x[i_0]).range().to_string(SC_BIN).c_str();
							x_3_V_tvin_wrapc_buffer[hls_map_index].range(10, 0) = x_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_x_3_V, "%s\n", (x_3_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_x_3_V, tvin_x_3_V);
		}

		tcl_file.set_num(1, &tcl_file.x_3_V_depth);
		sprintf(tvin_x_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_x_3_V, tvin_x_3_V);

		// release memory allocation
		delete [] x_3_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_x_4_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_x_4_V, tvin_x_4_V);

		sc_bv<11>* x_4_V_tvin_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: x_4_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: x.V(10, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : x[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : x[0]
						// regulate_c_name       : x_V
						// input_type_conversion : (x[i_0]).range().to_string(SC_BIN).c_str()
						if (&(x[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> x_V_tmp_mem;
							x_V_tmp_mem = (x[i_0]).range().to_string(SC_BIN).c_str();
							x_4_V_tvin_wrapc_buffer[hls_map_index].range(10, 0) = x_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_x_4_V, "%s\n", (x_4_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_x_4_V, tvin_x_4_V);
		}

		tcl_file.set_num(1, &tcl_file.x_4_V_depth);
		sprintf(tvin_x_4_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_x_4_V, tvin_x_4_V);

		// release memory allocation
		delete [] x_4_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_x_5_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_x_5_V, tvin_x_5_V);

		sc_bv<11>* x_5_V_tvin_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: x_5_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: x.V(10, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : x[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : x[0]
						// regulate_c_name       : x_V
						// input_type_conversion : (x[i_0]).range().to_string(SC_BIN).c_str()
						if (&(x[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> x_V_tmp_mem;
							x_V_tmp_mem = (x[i_0]).range().to_string(SC_BIN).c_str();
							x_5_V_tvin_wrapc_buffer[hls_map_index].range(10, 0) = x_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_x_5_V, "%s\n", (x_5_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_x_5_V, tvin_x_5_V);
		}

		tcl_file.set_num(1, &tcl_file.x_5_V_depth);
		sprintf(tvin_x_5_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_x_5_V, tvin_x_5_V);

		// release memory allocation
		delete [] x_5_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_x_6_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_x_6_V, tvin_x_6_V);

		sc_bv<11>* x_6_V_tvin_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: x_6_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: x.V(10, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : x[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : x[0]
						// regulate_c_name       : x_V
						// input_type_conversion : (x[i_0]).range().to_string(SC_BIN).c_str()
						if (&(x[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> x_V_tmp_mem;
							x_V_tmp_mem = (x[i_0]).range().to_string(SC_BIN).c_str();
							x_6_V_tvin_wrapc_buffer[hls_map_index].range(10, 0) = x_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_x_6_V, "%s\n", (x_6_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_x_6_V, tvin_x_6_V);
		}

		tcl_file.set_num(1, &tcl_file.x_6_V_depth);
		sprintf(tvin_x_6_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_x_6_V, tvin_x_6_V);

		// release memory allocation
		delete [] x_6_V_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		my_prj(x, score, tree_scores);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_score_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_score_0_V, tvout_score_0_V);

		sc_bv<11>* score_0_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: score_0_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: score.V(10, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : score[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : score[0]
						// regulate_c_name       : score_V
						// input_type_conversion : (score[i_0]).range().to_string(SC_BIN).c_str()
						if (&(score[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> score_V_tmp_mem;
							score_V_tmp_mem = (score[i_0]).range().to_string(SC_BIN).c_str();
							score_0_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = score_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_score_0_V, "%s\n", (score_0_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_score_0_V, tvout_score_0_V);
		}

		tcl_file.set_num(1, &tcl_file.score_0_V_depth);
		sprintf(tvout_score_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_score_0_V, tvout_score_0_V);

		// release memory allocation
		delete [] score_0_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_0_V, tvout_tree_scores_0_V);

		sc_bv<11>* tree_scores_0_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_0_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_0_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_0_V, "%s\n", (tree_scores_0_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_0_V, tvout_tree_scores_0_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_0_V_depth);
		sprintf(tvout_tree_scores_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_0_V, tvout_tree_scores_0_V);

		// release memory allocation
		delete [] tree_scores_0_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_1_V, tvout_tree_scores_1_V);

		sc_bv<11>* tree_scores_1_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_1_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_1_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_1_V, "%s\n", (tree_scores_1_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_1_V, tvout_tree_scores_1_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_1_V_depth);
		sprintf(tvout_tree_scores_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_1_V, tvout_tree_scores_1_V);

		// release memory allocation
		delete [] tree_scores_1_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_2_V, tvout_tree_scores_2_V);

		sc_bv<11>* tree_scores_2_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_2_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_2_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_2_V, "%s\n", (tree_scores_2_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_2_V, tvout_tree_scores_2_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_2_V_depth);
		sprintf(tvout_tree_scores_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_2_V, tvout_tree_scores_2_V);

		// release memory allocation
		delete [] tree_scores_2_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_3_V, tvout_tree_scores_3_V);

		sc_bv<11>* tree_scores_3_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_3_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_3_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_3_V, "%s\n", (tree_scores_3_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_3_V, tvout_tree_scores_3_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_3_V_depth);
		sprintf(tvout_tree_scores_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_3_V, tvout_tree_scores_3_V);

		// release memory allocation
		delete [] tree_scores_3_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_4_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_4_V, tvout_tree_scores_4_V);

		sc_bv<11>* tree_scores_4_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_4_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_4_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_4_V, "%s\n", (tree_scores_4_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_4_V, tvout_tree_scores_4_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_4_V_depth);
		sprintf(tvout_tree_scores_4_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_4_V, tvout_tree_scores_4_V);

		// release memory allocation
		delete [] tree_scores_4_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_5_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_5_V, tvout_tree_scores_5_V);

		sc_bv<11>* tree_scores_5_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_5_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_5_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_5_V, "%s\n", (tree_scores_5_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_5_V, tvout_tree_scores_5_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_5_V_depth);
		sprintf(tvout_tree_scores_5_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_5_V, tvout_tree_scores_5_V);

		// release memory allocation
		delete [] tree_scores_5_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_6_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_6_V, tvout_tree_scores_6_V);

		sc_bv<11>* tree_scores_6_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_6_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_6_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_6_V, "%s\n", (tree_scores_6_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_6_V, tvout_tree_scores_6_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_6_V_depth);
		sprintf(tvout_tree_scores_6_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_6_V, tvout_tree_scores_6_V);

		// release memory allocation
		delete [] tree_scores_6_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_7_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_7_V, tvout_tree_scores_7_V);

		sc_bv<11>* tree_scores_7_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_7_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_7_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_7_V, "%s\n", (tree_scores_7_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_7_V, tvout_tree_scores_7_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_7_V_depth);
		sprintf(tvout_tree_scores_7_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_7_V, tvout_tree_scores_7_V);

		// release memory allocation
		delete [] tree_scores_7_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_8_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_8_V, tvout_tree_scores_8_V);

		sc_bv<11>* tree_scores_8_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_8_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (8) => (8) @ (2)
					for (int i_0 = 8; i_0 <= 8; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_8_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_8_V, "%s\n", (tree_scores_8_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_8_V, tvout_tree_scores_8_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_8_V_depth);
		sprintf(tvout_tree_scores_8_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_8_V, tvout_tree_scores_8_V);

		// release memory allocation
		delete [] tree_scores_8_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_9_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_9_V, tvout_tree_scores_9_V);

		sc_bv<11>* tree_scores_9_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_9_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (9) => (9) @ (2)
					for (int i_0 = 9; i_0 <= 9; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_9_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_9_V, "%s\n", (tree_scores_9_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_9_V, tvout_tree_scores_9_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_9_V_depth);
		sprintf(tvout_tree_scores_9_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_9_V, tvout_tree_scores_9_V);

		// release memory allocation
		delete [] tree_scores_9_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_10_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_10_V, tvout_tree_scores_10_V);

		sc_bv<11>* tree_scores_10_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_10_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (10) => (10) @ (2)
					for (int i_0 = 10; i_0 <= 10; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_10_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_10_V, "%s\n", (tree_scores_10_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_10_V, tvout_tree_scores_10_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_10_V_depth);
		sprintf(tvout_tree_scores_10_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_10_V, tvout_tree_scores_10_V);

		// release memory allocation
		delete [] tree_scores_10_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_11_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_11_V, tvout_tree_scores_11_V);

		sc_bv<11>* tree_scores_11_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_11_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (11) => (11) @ (2)
					for (int i_0 = 11; i_0 <= 11; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_11_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_11_V, "%s\n", (tree_scores_11_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_11_V, tvout_tree_scores_11_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_11_V_depth);
		sprintf(tvout_tree_scores_11_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_11_V, tvout_tree_scores_11_V);

		// release memory allocation
		delete [] tree_scores_11_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_12_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_12_V, tvout_tree_scores_12_V);

		sc_bv<11>* tree_scores_12_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_12_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (12) => (12) @ (2)
					for (int i_0 = 12; i_0 <= 12; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_12_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_12_V, "%s\n", (tree_scores_12_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_12_V, tvout_tree_scores_12_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_12_V_depth);
		sprintf(tvout_tree_scores_12_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_12_V, tvout_tree_scores_12_V);

		// release memory allocation
		delete [] tree_scores_12_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_13_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_13_V, tvout_tree_scores_13_V);

		sc_bv<11>* tree_scores_13_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_13_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (13) => (13) @ (2)
					for (int i_0 = 13; i_0 <= 13; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_13_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_13_V, "%s\n", (tree_scores_13_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_13_V, tvout_tree_scores_13_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_13_V_depth);
		sprintf(tvout_tree_scores_13_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_13_V, tvout_tree_scores_13_V);

		// release memory allocation
		delete [] tree_scores_13_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_14_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_14_V, tvout_tree_scores_14_V);

		sc_bv<11>* tree_scores_14_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_14_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (14) => (14) @ (2)
					for (int i_0 = 14; i_0 <= 14; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_14_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_14_V, "%s\n", (tree_scores_14_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_14_V, tvout_tree_scores_14_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_14_V_depth);
		sprintf(tvout_tree_scores_14_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_14_V, tvout_tree_scores_14_V);

		// release memory allocation
		delete [] tree_scores_14_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_15_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_15_V, tvout_tree_scores_15_V);

		sc_bv<11>* tree_scores_15_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_15_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (15) => (15) @ (2)
					for (int i_0 = 15; i_0 <= 15; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_15_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_15_V, "%s\n", (tree_scores_15_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_15_V, tvout_tree_scores_15_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_15_V_depth);
		sprintf(tvout_tree_scores_15_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_15_V, tvout_tree_scores_15_V);

		// release memory allocation
		delete [] tree_scores_15_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_16_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_16_V, tvout_tree_scores_16_V);

		sc_bv<11>* tree_scores_16_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_16_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (16) => (16) @ (2)
					for (int i_0 = 16; i_0 <= 16; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_16_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_16_V, "%s\n", (tree_scores_16_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_16_V, tvout_tree_scores_16_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_16_V_depth);
		sprintf(tvout_tree_scores_16_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_16_V, tvout_tree_scores_16_V);

		// release memory allocation
		delete [] tree_scores_16_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_17_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_17_V, tvout_tree_scores_17_V);

		sc_bv<11>* tree_scores_17_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_17_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (17) => (17) @ (2)
					for (int i_0 = 17; i_0 <= 17; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_17_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_17_V, "%s\n", (tree_scores_17_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_17_V, tvout_tree_scores_17_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_17_V_depth);
		sprintf(tvout_tree_scores_17_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_17_V, tvout_tree_scores_17_V);

		// release memory allocation
		delete [] tree_scores_17_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_18_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_18_V, tvout_tree_scores_18_V);

		sc_bv<11>* tree_scores_18_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_18_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (18) => (18) @ (2)
					for (int i_0 = 18; i_0 <= 18; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_18_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_18_V, "%s\n", (tree_scores_18_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_18_V, tvout_tree_scores_18_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_18_V_depth);
		sprintf(tvout_tree_scores_18_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_18_V, tvout_tree_scores_18_V);

		// release memory allocation
		delete [] tree_scores_18_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_19_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_19_V, tvout_tree_scores_19_V);

		sc_bv<11>* tree_scores_19_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_19_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (19) => (19) @ (2)
					for (int i_0 = 19; i_0 <= 19; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_19_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_19_V, "%s\n", (tree_scores_19_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_19_V, tvout_tree_scores_19_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_19_V_depth);
		sprintf(tvout_tree_scores_19_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_19_V, tvout_tree_scores_19_V);

		// release memory allocation
		delete [] tree_scores_19_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_20_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_20_V, tvout_tree_scores_20_V);

		sc_bv<11>* tree_scores_20_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_20_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (20) => (20) @ (2)
					for (int i_0 = 20; i_0 <= 20; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_20_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_20_V, "%s\n", (tree_scores_20_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_20_V, tvout_tree_scores_20_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_20_V_depth);
		sprintf(tvout_tree_scores_20_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_20_V, tvout_tree_scores_20_V);

		// release memory allocation
		delete [] tree_scores_20_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_21_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_21_V, tvout_tree_scores_21_V);

		sc_bv<11>* tree_scores_21_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_21_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (21) => (21) @ (2)
					for (int i_0 = 21; i_0 <= 21; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_21_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_21_V, "%s\n", (tree_scores_21_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_21_V, tvout_tree_scores_21_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_21_V_depth);
		sprintf(tvout_tree_scores_21_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_21_V, tvout_tree_scores_21_V);

		// release memory allocation
		delete [] tree_scores_21_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_22_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_22_V, tvout_tree_scores_22_V);

		sc_bv<11>* tree_scores_22_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_22_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (22) => (22) @ (2)
					for (int i_0 = 22; i_0 <= 22; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_22_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_22_V, "%s\n", (tree_scores_22_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_22_V, tvout_tree_scores_22_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_22_V_depth);
		sprintf(tvout_tree_scores_22_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_22_V, tvout_tree_scores_22_V);

		// release memory allocation
		delete [] tree_scores_22_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_23_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_23_V, tvout_tree_scores_23_V);

		sc_bv<11>* tree_scores_23_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_23_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (23) => (23) @ (2)
					for (int i_0 = 23; i_0 <= 23; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_23_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_23_V, "%s\n", (tree_scores_23_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_23_V, tvout_tree_scores_23_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_23_V_depth);
		sprintf(tvout_tree_scores_23_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_23_V, tvout_tree_scores_23_V);

		// release memory allocation
		delete [] tree_scores_23_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_24_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_24_V, tvout_tree_scores_24_V);

		sc_bv<11>* tree_scores_24_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_24_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (24) => (24) @ (2)
					for (int i_0 = 24; i_0 <= 24; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_24_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_24_V, "%s\n", (tree_scores_24_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_24_V, tvout_tree_scores_24_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_24_V_depth);
		sprintf(tvout_tree_scores_24_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_24_V, tvout_tree_scores_24_V);

		// release memory allocation
		delete [] tree_scores_24_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_25_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_25_V, tvout_tree_scores_25_V);

		sc_bv<11>* tree_scores_25_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_25_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (25) => (25) @ (2)
					for (int i_0 = 25; i_0 <= 25; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_25_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_25_V, "%s\n", (tree_scores_25_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_25_V, tvout_tree_scores_25_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_25_V_depth);
		sprintf(tvout_tree_scores_25_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_25_V, tvout_tree_scores_25_V);

		// release memory allocation
		delete [] tree_scores_25_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_26_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_26_V, tvout_tree_scores_26_V);

		sc_bv<11>* tree_scores_26_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_26_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (26) => (26) @ (2)
					for (int i_0 = 26; i_0 <= 26; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_26_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_26_V, "%s\n", (tree_scores_26_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_26_V, tvout_tree_scores_26_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_26_V_depth);
		sprintf(tvout_tree_scores_26_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_26_V, tvout_tree_scores_26_V);

		// release memory allocation
		delete [] tree_scores_26_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_27_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_27_V, tvout_tree_scores_27_V);

		sc_bv<11>* tree_scores_27_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_27_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (27) => (27) @ (2)
					for (int i_0 = 27; i_0 <= 27; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_27_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_27_V, "%s\n", (tree_scores_27_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_27_V, tvout_tree_scores_27_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_27_V_depth);
		sprintf(tvout_tree_scores_27_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_27_V, tvout_tree_scores_27_V);

		// release memory allocation
		delete [] tree_scores_27_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_28_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_28_V, tvout_tree_scores_28_V);

		sc_bv<11>* tree_scores_28_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_28_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (28) => (28) @ (2)
					for (int i_0 = 28; i_0 <= 28; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_28_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_28_V, "%s\n", (tree_scores_28_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_28_V, tvout_tree_scores_28_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_28_V_depth);
		sprintf(tvout_tree_scores_28_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_28_V, tvout_tree_scores_28_V);

		// release memory allocation
		delete [] tree_scores_28_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_29_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_29_V, tvout_tree_scores_29_V);

		sc_bv<11>* tree_scores_29_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_29_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (29) => (29) @ (2)
					for (int i_0 = 29; i_0 <= 29; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_29_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_29_V, "%s\n", (tree_scores_29_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_29_V, tvout_tree_scores_29_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_29_V_depth);
		sprintf(tvout_tree_scores_29_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_29_V, tvout_tree_scores_29_V);

		// release memory allocation
		delete [] tree_scores_29_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_30_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_30_V, tvout_tree_scores_30_V);

		sc_bv<11>* tree_scores_30_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_30_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (30) => (30) @ (2)
					for (int i_0 = 30; i_0 <= 30; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_30_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_30_V, "%s\n", (tree_scores_30_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_30_V, tvout_tree_scores_30_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_30_V_depth);
		sprintf(tvout_tree_scores_30_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_30_V, tvout_tree_scores_30_V);

		// release memory allocation
		delete [] tree_scores_30_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_31_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_31_V, tvout_tree_scores_31_V);

		sc_bv<11>* tree_scores_31_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_31_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (31) => (31) @ (2)
					for (int i_0 = 31; i_0 <= 31; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_31_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_31_V, "%s\n", (tree_scores_31_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_31_V, tvout_tree_scores_31_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_31_V_depth);
		sprintf(tvout_tree_scores_31_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_31_V, tvout_tree_scores_31_V);

		// release memory allocation
		delete [] tree_scores_31_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_32_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_32_V, tvout_tree_scores_32_V);

		sc_bv<11>* tree_scores_32_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_32_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (32) => (32) @ (2)
					for (int i_0 = 32; i_0 <= 32; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_32_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_32_V, "%s\n", (tree_scores_32_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_32_V, tvout_tree_scores_32_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_32_V_depth);
		sprintf(tvout_tree_scores_32_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_32_V, tvout_tree_scores_32_V);

		// release memory allocation
		delete [] tree_scores_32_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_33_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_33_V, tvout_tree_scores_33_V);

		sc_bv<11>* tree_scores_33_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_33_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (33) => (33) @ (2)
					for (int i_0 = 33; i_0 <= 33; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_33_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_33_V, "%s\n", (tree_scores_33_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_33_V, tvout_tree_scores_33_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_33_V_depth);
		sprintf(tvout_tree_scores_33_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_33_V, tvout_tree_scores_33_V);

		// release memory allocation
		delete [] tree_scores_33_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_34_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_34_V, tvout_tree_scores_34_V);

		sc_bv<11>* tree_scores_34_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_34_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (34) => (34) @ (2)
					for (int i_0 = 34; i_0 <= 34; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_34_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_34_V, "%s\n", (tree_scores_34_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_34_V, tvout_tree_scores_34_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_34_V_depth);
		sprintf(tvout_tree_scores_34_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_34_V, tvout_tree_scores_34_V);

		// release memory allocation
		delete [] tree_scores_34_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_35_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_35_V, tvout_tree_scores_35_V);

		sc_bv<11>* tree_scores_35_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_35_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (35) => (35) @ (2)
					for (int i_0 = 35; i_0 <= 35; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_35_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_35_V, "%s\n", (tree_scores_35_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_35_V, tvout_tree_scores_35_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_35_V_depth);
		sprintf(tvout_tree_scores_35_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_35_V, tvout_tree_scores_35_V);

		// release memory allocation
		delete [] tree_scores_35_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_36_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_36_V, tvout_tree_scores_36_V);

		sc_bv<11>* tree_scores_36_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_36_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (36) => (36) @ (2)
					for (int i_0 = 36; i_0 <= 36; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_36_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_36_V, "%s\n", (tree_scores_36_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_36_V, tvout_tree_scores_36_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_36_V_depth);
		sprintf(tvout_tree_scores_36_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_36_V, tvout_tree_scores_36_V);

		// release memory allocation
		delete [] tree_scores_36_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_37_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_37_V, tvout_tree_scores_37_V);

		sc_bv<11>* tree_scores_37_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_37_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (37) => (37) @ (2)
					for (int i_0 = 37; i_0 <= 37; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_37_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_37_V, "%s\n", (tree_scores_37_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_37_V, tvout_tree_scores_37_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_37_V_depth);
		sprintf(tvout_tree_scores_37_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_37_V, tvout_tree_scores_37_V);

		// release memory allocation
		delete [] tree_scores_37_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_38_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_38_V, tvout_tree_scores_38_V);

		sc_bv<11>* tree_scores_38_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_38_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (38) => (38) @ (2)
					for (int i_0 = 38; i_0 <= 38; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_38_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_38_V, "%s\n", (tree_scores_38_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_38_V, tvout_tree_scores_38_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_38_V_depth);
		sprintf(tvout_tree_scores_38_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_38_V, tvout_tree_scores_38_V);

		// release memory allocation
		delete [] tree_scores_38_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_39_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_39_V, tvout_tree_scores_39_V);

		sc_bv<11>* tree_scores_39_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_39_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (39) => (39) @ (2)
					for (int i_0 = 39; i_0 <= 39; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_39_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_39_V, "%s\n", (tree_scores_39_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_39_V, tvout_tree_scores_39_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_39_V_depth);
		sprintf(tvout_tree_scores_39_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_39_V, tvout_tree_scores_39_V);

		// release memory allocation
		delete [] tree_scores_39_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_40_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_40_V, tvout_tree_scores_40_V);

		sc_bv<11>* tree_scores_40_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_40_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (40) => (40) @ (2)
					for (int i_0 = 40; i_0 <= 40; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_40_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_40_V, "%s\n", (tree_scores_40_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_40_V, tvout_tree_scores_40_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_40_V_depth);
		sprintf(tvout_tree_scores_40_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_40_V, tvout_tree_scores_40_V);

		// release memory allocation
		delete [] tree_scores_40_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_41_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_41_V, tvout_tree_scores_41_V);

		sc_bv<11>* tree_scores_41_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_41_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (41) => (41) @ (2)
					for (int i_0 = 41; i_0 <= 41; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_41_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_41_V, "%s\n", (tree_scores_41_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_41_V, tvout_tree_scores_41_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_41_V_depth);
		sprintf(tvout_tree_scores_41_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_41_V, tvout_tree_scores_41_V);

		// release memory allocation
		delete [] tree_scores_41_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_42_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_42_V, tvout_tree_scores_42_V);

		sc_bv<11>* tree_scores_42_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_42_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (42) => (42) @ (2)
					for (int i_0 = 42; i_0 <= 42; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_42_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_42_V, "%s\n", (tree_scores_42_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_42_V, tvout_tree_scores_42_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_42_V_depth);
		sprintf(tvout_tree_scores_42_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_42_V, tvout_tree_scores_42_V);

		// release memory allocation
		delete [] tree_scores_42_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_43_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_43_V, tvout_tree_scores_43_V);

		sc_bv<11>* tree_scores_43_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_43_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (43) => (43) @ (2)
					for (int i_0 = 43; i_0 <= 43; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_43_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_43_V, "%s\n", (tree_scores_43_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_43_V, tvout_tree_scores_43_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_43_V_depth);
		sprintf(tvout_tree_scores_43_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_43_V, tvout_tree_scores_43_V);

		// release memory allocation
		delete [] tree_scores_43_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_44_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_44_V, tvout_tree_scores_44_V);

		sc_bv<11>* tree_scores_44_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_44_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (44) => (44) @ (2)
					for (int i_0 = 44; i_0 <= 44; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_44_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_44_V, "%s\n", (tree_scores_44_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_44_V, tvout_tree_scores_44_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_44_V_depth);
		sprintf(tvout_tree_scores_44_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_44_V, tvout_tree_scores_44_V);

		// release memory allocation
		delete [] tree_scores_44_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_45_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_45_V, tvout_tree_scores_45_V);

		sc_bv<11>* tree_scores_45_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_45_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (45) => (45) @ (2)
					for (int i_0 = 45; i_0 <= 45; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_45_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_45_V, "%s\n", (tree_scores_45_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_45_V, tvout_tree_scores_45_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_45_V_depth);
		sprintf(tvout_tree_scores_45_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_45_V, tvout_tree_scores_45_V);

		// release memory allocation
		delete [] tree_scores_45_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_46_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_46_V, tvout_tree_scores_46_V);

		sc_bv<11>* tree_scores_46_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_46_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (46) => (46) @ (2)
					for (int i_0 = 46; i_0 <= 46; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_46_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_46_V, "%s\n", (tree_scores_46_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_46_V, tvout_tree_scores_46_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_46_V_depth);
		sprintf(tvout_tree_scores_46_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_46_V, tvout_tree_scores_46_V);

		// release memory allocation
		delete [] tree_scores_46_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_47_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_47_V, tvout_tree_scores_47_V);

		sc_bv<11>* tree_scores_47_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_47_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (47) => (47) @ (2)
					for (int i_0 = 47; i_0 <= 47; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_47_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_47_V, "%s\n", (tree_scores_47_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_47_V, tvout_tree_scores_47_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_47_V_depth);
		sprintf(tvout_tree_scores_47_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_47_V, tvout_tree_scores_47_V);

		// release memory allocation
		delete [] tree_scores_47_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_48_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_48_V, tvout_tree_scores_48_V);

		sc_bv<11>* tree_scores_48_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_48_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (48) => (48) @ (2)
					for (int i_0 = 48; i_0 <= 48; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_48_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_48_V, "%s\n", (tree_scores_48_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_48_V, tvout_tree_scores_48_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_48_V_depth);
		sprintf(tvout_tree_scores_48_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_48_V, tvout_tree_scores_48_V);

		// release memory allocation
		delete [] tree_scores_48_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_49_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_49_V, tvout_tree_scores_49_V);

		sc_bv<11>* tree_scores_49_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_49_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (49) => (49) @ (2)
					for (int i_0 = 49; i_0 <= 49; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_49_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_49_V, "%s\n", (tree_scores_49_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_49_V, tvout_tree_scores_49_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_49_V_depth);
		sprintf(tvout_tree_scores_49_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_49_V, tvout_tree_scores_49_V);

		// release memory allocation
		delete [] tree_scores_49_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_50_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_50_V, tvout_tree_scores_50_V);

		sc_bv<11>* tree_scores_50_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_50_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (50) => (50) @ (2)
					for (int i_0 = 50; i_0 <= 50; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_50_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_50_V, "%s\n", (tree_scores_50_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_50_V, tvout_tree_scores_50_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_50_V_depth);
		sprintf(tvout_tree_scores_50_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_50_V, tvout_tree_scores_50_V);

		// release memory allocation
		delete [] tree_scores_50_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_51_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_51_V, tvout_tree_scores_51_V);

		sc_bv<11>* tree_scores_51_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_51_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (51) => (51) @ (2)
					for (int i_0 = 51; i_0 <= 51; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_51_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_51_V, "%s\n", (tree_scores_51_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_51_V, tvout_tree_scores_51_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_51_V_depth);
		sprintf(tvout_tree_scores_51_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_51_V, tvout_tree_scores_51_V);

		// release memory allocation
		delete [] tree_scores_51_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_52_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_52_V, tvout_tree_scores_52_V);

		sc_bv<11>* tree_scores_52_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_52_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (52) => (52) @ (2)
					for (int i_0 = 52; i_0 <= 52; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_52_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_52_V, "%s\n", (tree_scores_52_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_52_V, tvout_tree_scores_52_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_52_V_depth);
		sprintf(tvout_tree_scores_52_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_52_V, tvout_tree_scores_52_V);

		// release memory allocation
		delete [] tree_scores_52_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_53_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_53_V, tvout_tree_scores_53_V);

		sc_bv<11>* tree_scores_53_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_53_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (53) => (53) @ (2)
					for (int i_0 = 53; i_0 <= 53; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_53_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_53_V, "%s\n", (tree_scores_53_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_53_V, tvout_tree_scores_53_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_53_V_depth);
		sprintf(tvout_tree_scores_53_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_53_V, tvout_tree_scores_53_V);

		// release memory allocation
		delete [] tree_scores_53_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_54_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_54_V, tvout_tree_scores_54_V);

		sc_bv<11>* tree_scores_54_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_54_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (54) => (54) @ (2)
					for (int i_0 = 54; i_0 <= 54; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_54_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_54_V, "%s\n", (tree_scores_54_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_54_V, tvout_tree_scores_54_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_54_V_depth);
		sprintf(tvout_tree_scores_54_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_54_V, tvout_tree_scores_54_V);

		// release memory allocation
		delete [] tree_scores_54_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_55_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_55_V, tvout_tree_scores_55_V);

		sc_bv<11>* tree_scores_55_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_55_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (55) => (55) @ (2)
					for (int i_0 = 55; i_0 <= 55; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_55_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_55_V, "%s\n", (tree_scores_55_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_55_V, tvout_tree_scores_55_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_55_V_depth);
		sprintf(tvout_tree_scores_55_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_55_V, tvout_tree_scores_55_V);

		// release memory allocation
		delete [] tree_scores_55_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_56_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_56_V, tvout_tree_scores_56_V);

		sc_bv<11>* tree_scores_56_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_56_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (56) => (56) @ (2)
					for (int i_0 = 56; i_0 <= 56; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_56_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_56_V, "%s\n", (tree_scores_56_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_56_V, tvout_tree_scores_56_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_56_V_depth);
		sprintf(tvout_tree_scores_56_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_56_V, tvout_tree_scores_56_V);

		// release memory allocation
		delete [] tree_scores_56_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_57_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_57_V, tvout_tree_scores_57_V);

		sc_bv<11>* tree_scores_57_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_57_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (57) => (57) @ (2)
					for (int i_0 = 57; i_0 <= 57; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_57_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_57_V, "%s\n", (tree_scores_57_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_57_V, tvout_tree_scores_57_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_57_V_depth);
		sprintf(tvout_tree_scores_57_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_57_V, tvout_tree_scores_57_V);

		// release memory allocation
		delete [] tree_scores_57_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_58_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_58_V, tvout_tree_scores_58_V);

		sc_bv<11>* tree_scores_58_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_58_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (58) => (58) @ (2)
					for (int i_0 = 58; i_0 <= 58; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_58_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_58_V, "%s\n", (tree_scores_58_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_58_V, tvout_tree_scores_58_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_58_V_depth);
		sprintf(tvout_tree_scores_58_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_58_V, tvout_tree_scores_58_V);

		// release memory allocation
		delete [] tree_scores_58_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_59_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_59_V, tvout_tree_scores_59_V);

		sc_bv<11>* tree_scores_59_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_59_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (59) => (59) @ (2)
					for (int i_0 = 59; i_0 <= 59; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_59_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_59_V, "%s\n", (tree_scores_59_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_59_V, tvout_tree_scores_59_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_59_V_depth);
		sprintf(tvout_tree_scores_59_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_59_V, tvout_tree_scores_59_V);

		// release memory allocation
		delete [] tree_scores_59_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_60_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_60_V, tvout_tree_scores_60_V);

		sc_bv<11>* tree_scores_60_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_60_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (60) => (60) @ (2)
					for (int i_0 = 60; i_0 <= 60; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_60_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_60_V, "%s\n", (tree_scores_60_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_60_V, tvout_tree_scores_60_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_60_V_depth);
		sprintf(tvout_tree_scores_60_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_60_V, tvout_tree_scores_60_V);

		// release memory allocation
		delete [] tree_scores_60_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_61_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_61_V, tvout_tree_scores_61_V);

		sc_bv<11>* tree_scores_61_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_61_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (61) => (61) @ (2)
					for (int i_0 = 61; i_0 <= 61; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_61_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_61_V, "%s\n", (tree_scores_61_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_61_V, tvout_tree_scores_61_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_61_V_depth);
		sprintf(tvout_tree_scores_61_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_61_V, tvout_tree_scores_61_V);

		// release memory allocation
		delete [] tree_scores_61_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_62_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_62_V, tvout_tree_scores_62_V);

		sc_bv<11>* tree_scores_62_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_62_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (62) => (62) @ (2)
					for (int i_0 = 62; i_0 <= 62; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_62_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_62_V, "%s\n", (tree_scores_62_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_62_V, tvout_tree_scores_62_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_62_V_depth);
		sprintf(tvout_tree_scores_62_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_62_V, tvout_tree_scores_62_V);

		// release memory allocation
		delete [] tree_scores_62_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_63_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_63_V, tvout_tree_scores_63_V);

		sc_bv<11>* tree_scores_63_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_63_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (63) => (63) @ (2)
					for (int i_0 = 63; i_0 <= 63; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_63_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_63_V, "%s\n", (tree_scores_63_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_63_V, tvout_tree_scores_63_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_63_V_depth);
		sprintf(tvout_tree_scores_63_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_63_V, tvout_tree_scores_63_V);

		// release memory allocation
		delete [] tree_scores_63_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_64_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_64_V, tvout_tree_scores_64_V);

		sc_bv<11>* tree_scores_64_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_64_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (64) => (64) @ (2)
					for (int i_0 = 64; i_0 <= 64; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_64_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_64_V, "%s\n", (tree_scores_64_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_64_V, tvout_tree_scores_64_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_64_V_depth);
		sprintf(tvout_tree_scores_64_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_64_V, tvout_tree_scores_64_V);

		// release memory allocation
		delete [] tree_scores_64_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_65_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_65_V, tvout_tree_scores_65_V);

		sc_bv<11>* tree_scores_65_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_65_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (65) => (65) @ (2)
					for (int i_0 = 65; i_0 <= 65; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_65_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_65_V, "%s\n", (tree_scores_65_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_65_V, tvout_tree_scores_65_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_65_V_depth);
		sprintf(tvout_tree_scores_65_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_65_V, tvout_tree_scores_65_V);

		// release memory allocation
		delete [] tree_scores_65_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_66_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_66_V, tvout_tree_scores_66_V);

		sc_bv<11>* tree_scores_66_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_66_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (66) => (66) @ (2)
					for (int i_0 = 66; i_0 <= 66; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_66_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_66_V, "%s\n", (tree_scores_66_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_66_V, tvout_tree_scores_66_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_66_V_depth);
		sprintf(tvout_tree_scores_66_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_66_V, tvout_tree_scores_66_V);

		// release memory allocation
		delete [] tree_scores_66_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_67_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_67_V, tvout_tree_scores_67_V);

		sc_bv<11>* tree_scores_67_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_67_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (67) => (67) @ (2)
					for (int i_0 = 67; i_0 <= 67; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_67_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_67_V, "%s\n", (tree_scores_67_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_67_V, tvout_tree_scores_67_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_67_V_depth);
		sprintf(tvout_tree_scores_67_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_67_V, tvout_tree_scores_67_V);

		// release memory allocation
		delete [] tree_scores_67_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_68_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_68_V, tvout_tree_scores_68_V);

		sc_bv<11>* tree_scores_68_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_68_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (68) => (68) @ (2)
					for (int i_0 = 68; i_0 <= 68; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_68_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_68_V, "%s\n", (tree_scores_68_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_68_V, tvout_tree_scores_68_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_68_V_depth);
		sprintf(tvout_tree_scores_68_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_68_V, tvout_tree_scores_68_V);

		// release memory allocation
		delete [] tree_scores_68_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_69_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_69_V, tvout_tree_scores_69_V);

		sc_bv<11>* tree_scores_69_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_69_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (69) => (69) @ (2)
					for (int i_0 = 69; i_0 <= 69; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_69_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_69_V, "%s\n", (tree_scores_69_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_69_V, tvout_tree_scores_69_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_69_V_depth);
		sprintf(tvout_tree_scores_69_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_69_V, tvout_tree_scores_69_V);

		// release memory allocation
		delete [] tree_scores_69_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_70_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_70_V, tvout_tree_scores_70_V);

		sc_bv<11>* tree_scores_70_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_70_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (70) => (70) @ (2)
					for (int i_0 = 70; i_0 <= 70; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_70_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_70_V, "%s\n", (tree_scores_70_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_70_V, tvout_tree_scores_70_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_70_V_depth);
		sprintf(tvout_tree_scores_70_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_70_V, tvout_tree_scores_70_V);

		// release memory allocation
		delete [] tree_scores_70_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_71_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_71_V, tvout_tree_scores_71_V);

		sc_bv<11>* tree_scores_71_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_71_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (71) => (71) @ (2)
					for (int i_0 = 71; i_0 <= 71; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_71_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_71_V, "%s\n", (tree_scores_71_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_71_V, tvout_tree_scores_71_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_71_V_depth);
		sprintf(tvout_tree_scores_71_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_71_V, tvout_tree_scores_71_V);

		// release memory allocation
		delete [] tree_scores_71_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_72_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_72_V, tvout_tree_scores_72_V);

		sc_bv<11>* tree_scores_72_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_72_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (72) => (72) @ (2)
					for (int i_0 = 72; i_0 <= 72; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_72_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_72_V, "%s\n", (tree_scores_72_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_72_V, tvout_tree_scores_72_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_72_V_depth);
		sprintf(tvout_tree_scores_72_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_72_V, tvout_tree_scores_72_V);

		// release memory allocation
		delete [] tree_scores_72_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_73_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_73_V, tvout_tree_scores_73_V);

		sc_bv<11>* tree_scores_73_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_73_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (73) => (73) @ (2)
					for (int i_0 = 73; i_0 <= 73; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_73_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_73_V, "%s\n", (tree_scores_73_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_73_V, tvout_tree_scores_73_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_73_V_depth);
		sprintf(tvout_tree_scores_73_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_73_V, tvout_tree_scores_73_V);

		// release memory allocation
		delete [] tree_scores_73_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_74_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_74_V, tvout_tree_scores_74_V);

		sc_bv<11>* tree_scores_74_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_74_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (74) => (74) @ (2)
					for (int i_0 = 74; i_0 <= 74; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_74_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_74_V, "%s\n", (tree_scores_74_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_74_V, tvout_tree_scores_74_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_74_V_depth);
		sprintf(tvout_tree_scores_74_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_74_V, tvout_tree_scores_74_V);

		// release memory allocation
		delete [] tree_scores_74_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_75_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_75_V, tvout_tree_scores_75_V);

		sc_bv<11>* tree_scores_75_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_75_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (75) => (75) @ (2)
					for (int i_0 = 75; i_0 <= 75; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_75_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_75_V, "%s\n", (tree_scores_75_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_75_V, tvout_tree_scores_75_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_75_V_depth);
		sprintf(tvout_tree_scores_75_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_75_V, tvout_tree_scores_75_V);

		// release memory allocation
		delete [] tree_scores_75_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_76_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_76_V, tvout_tree_scores_76_V);

		sc_bv<11>* tree_scores_76_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_76_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (76) => (76) @ (2)
					for (int i_0 = 76; i_0 <= 76; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_76_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_76_V, "%s\n", (tree_scores_76_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_76_V, tvout_tree_scores_76_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_76_V_depth);
		sprintf(tvout_tree_scores_76_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_76_V, tvout_tree_scores_76_V);

		// release memory allocation
		delete [] tree_scores_76_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_77_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_77_V, tvout_tree_scores_77_V);

		sc_bv<11>* tree_scores_77_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_77_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (77) => (77) @ (2)
					for (int i_0 = 77; i_0 <= 77; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_77_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_77_V, "%s\n", (tree_scores_77_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_77_V, tvout_tree_scores_77_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_77_V_depth);
		sprintf(tvout_tree_scores_77_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_77_V, tvout_tree_scores_77_V);

		// release memory allocation
		delete [] tree_scores_77_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_78_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_78_V, tvout_tree_scores_78_V);

		sc_bv<11>* tree_scores_78_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_78_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (78) => (78) @ (2)
					for (int i_0 = 78; i_0 <= 78; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_78_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_78_V, "%s\n", (tree_scores_78_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_78_V, tvout_tree_scores_78_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_78_V_depth);
		sprintf(tvout_tree_scores_78_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_78_V, tvout_tree_scores_78_V);

		// release memory allocation
		delete [] tree_scores_78_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_79_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_79_V, tvout_tree_scores_79_V);

		sc_bv<11>* tree_scores_79_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_79_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (79) => (79) @ (2)
					for (int i_0 = 79; i_0 <= 79; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_79_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_79_V, "%s\n", (tree_scores_79_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_79_V, tvout_tree_scores_79_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_79_V_depth);
		sprintf(tvout_tree_scores_79_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_79_V, tvout_tree_scores_79_V);

		// release memory allocation
		delete [] tree_scores_79_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_80_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_80_V, tvout_tree_scores_80_V);

		sc_bv<11>* tree_scores_80_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_80_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (80) => (80) @ (2)
					for (int i_0 = 80; i_0 <= 80; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_80_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_80_V, "%s\n", (tree_scores_80_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_80_V, tvout_tree_scores_80_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_80_V_depth);
		sprintf(tvout_tree_scores_80_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_80_V, tvout_tree_scores_80_V);

		// release memory allocation
		delete [] tree_scores_80_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_81_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_81_V, tvout_tree_scores_81_V);

		sc_bv<11>* tree_scores_81_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_81_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (81) => (81) @ (2)
					for (int i_0 = 81; i_0 <= 81; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_81_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_81_V, "%s\n", (tree_scores_81_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_81_V, tvout_tree_scores_81_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_81_V_depth);
		sprintf(tvout_tree_scores_81_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_81_V, tvout_tree_scores_81_V);

		// release memory allocation
		delete [] tree_scores_81_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_82_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_82_V, tvout_tree_scores_82_V);

		sc_bv<11>* tree_scores_82_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_82_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (82) => (82) @ (2)
					for (int i_0 = 82; i_0 <= 82; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_82_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_82_V, "%s\n", (tree_scores_82_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_82_V, tvout_tree_scores_82_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_82_V_depth);
		sprintf(tvout_tree_scores_82_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_82_V, tvout_tree_scores_82_V);

		// release memory allocation
		delete [] tree_scores_82_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_83_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_83_V, tvout_tree_scores_83_V);

		sc_bv<11>* tree_scores_83_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_83_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (83) => (83) @ (2)
					for (int i_0 = 83; i_0 <= 83; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_83_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_83_V, "%s\n", (tree_scores_83_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_83_V, tvout_tree_scores_83_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_83_V_depth);
		sprintf(tvout_tree_scores_83_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_83_V, tvout_tree_scores_83_V);

		// release memory allocation
		delete [] tree_scores_83_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_84_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_84_V, tvout_tree_scores_84_V);

		sc_bv<11>* tree_scores_84_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_84_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (84) => (84) @ (2)
					for (int i_0 = 84; i_0 <= 84; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_84_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_84_V, "%s\n", (tree_scores_84_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_84_V, tvout_tree_scores_84_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_84_V_depth);
		sprintf(tvout_tree_scores_84_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_84_V, tvout_tree_scores_84_V);

		// release memory allocation
		delete [] tree_scores_84_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_85_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_85_V, tvout_tree_scores_85_V);

		sc_bv<11>* tree_scores_85_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_85_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (85) => (85) @ (2)
					for (int i_0 = 85; i_0 <= 85; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_85_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_85_V, "%s\n", (tree_scores_85_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_85_V, tvout_tree_scores_85_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_85_V_depth);
		sprintf(tvout_tree_scores_85_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_85_V, tvout_tree_scores_85_V);

		// release memory allocation
		delete [] tree_scores_85_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_86_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_86_V, tvout_tree_scores_86_V);

		sc_bv<11>* tree_scores_86_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_86_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (86) => (86) @ (2)
					for (int i_0 = 86; i_0 <= 86; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_86_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_86_V, "%s\n", (tree_scores_86_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_86_V, tvout_tree_scores_86_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_86_V_depth);
		sprintf(tvout_tree_scores_86_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_86_V, tvout_tree_scores_86_V);

		// release memory allocation
		delete [] tree_scores_86_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_87_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_87_V, tvout_tree_scores_87_V);

		sc_bv<11>* tree_scores_87_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_87_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (87) => (87) @ (2)
					for (int i_0 = 87; i_0 <= 87; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_87_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_87_V, "%s\n", (tree_scores_87_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_87_V, tvout_tree_scores_87_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_87_V_depth);
		sprintf(tvout_tree_scores_87_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_87_V, tvout_tree_scores_87_V);

		// release memory allocation
		delete [] tree_scores_87_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_88_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_88_V, tvout_tree_scores_88_V);

		sc_bv<11>* tree_scores_88_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_88_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (88) => (88) @ (2)
					for (int i_0 = 88; i_0 <= 88; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_88_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_88_V, "%s\n", (tree_scores_88_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_88_V, tvout_tree_scores_88_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_88_V_depth);
		sprintf(tvout_tree_scores_88_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_88_V, tvout_tree_scores_88_V);

		// release memory allocation
		delete [] tree_scores_88_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_89_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_89_V, tvout_tree_scores_89_V);

		sc_bv<11>* tree_scores_89_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_89_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (89) => (89) @ (2)
					for (int i_0 = 89; i_0 <= 89; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_89_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_89_V, "%s\n", (tree_scores_89_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_89_V, tvout_tree_scores_89_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_89_V_depth);
		sprintf(tvout_tree_scores_89_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_89_V, tvout_tree_scores_89_V);

		// release memory allocation
		delete [] tree_scores_89_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_90_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_90_V, tvout_tree_scores_90_V);

		sc_bv<11>* tree_scores_90_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_90_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (90) => (90) @ (2)
					for (int i_0 = 90; i_0 <= 90; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_90_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_90_V, "%s\n", (tree_scores_90_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_90_V, tvout_tree_scores_90_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_90_V_depth);
		sprintf(tvout_tree_scores_90_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_90_V, tvout_tree_scores_90_V);

		// release memory allocation
		delete [] tree_scores_90_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_91_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_91_V, tvout_tree_scores_91_V);

		sc_bv<11>* tree_scores_91_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_91_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (91) => (91) @ (2)
					for (int i_0 = 91; i_0 <= 91; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_91_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_91_V, "%s\n", (tree_scores_91_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_91_V, tvout_tree_scores_91_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_91_V_depth);
		sprintf(tvout_tree_scores_91_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_91_V, tvout_tree_scores_91_V);

		// release memory allocation
		delete [] tree_scores_91_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_92_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_92_V, tvout_tree_scores_92_V);

		sc_bv<11>* tree_scores_92_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_92_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (92) => (92) @ (2)
					for (int i_0 = 92; i_0 <= 92; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_92_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_92_V, "%s\n", (tree_scores_92_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_92_V, tvout_tree_scores_92_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_92_V_depth);
		sprintf(tvout_tree_scores_92_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_92_V, tvout_tree_scores_92_V);

		// release memory allocation
		delete [] tree_scores_92_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_93_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_93_V, tvout_tree_scores_93_V);

		sc_bv<11>* tree_scores_93_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_93_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (93) => (93) @ (2)
					for (int i_0 = 93; i_0 <= 93; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_93_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_93_V, "%s\n", (tree_scores_93_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_93_V, tvout_tree_scores_93_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_93_V_depth);
		sprintf(tvout_tree_scores_93_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_93_V, tvout_tree_scores_93_V);

		// release memory allocation
		delete [] tree_scores_93_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_94_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_94_V, tvout_tree_scores_94_V);

		sc_bv<11>* tree_scores_94_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_94_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (94) => (94) @ (2)
					for (int i_0 = 94; i_0 <= 94; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_94_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_94_V, "%s\n", (tree_scores_94_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_94_V, tvout_tree_scores_94_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_94_V_depth);
		sprintf(tvout_tree_scores_94_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_94_V, tvout_tree_scores_94_V);

		// release memory allocation
		delete [] tree_scores_94_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_95_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_95_V, tvout_tree_scores_95_V);

		sc_bv<11>* tree_scores_95_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_95_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (95) => (95) @ (2)
					for (int i_0 = 95; i_0 <= 95; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_95_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_95_V, "%s\n", (tree_scores_95_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_95_V, tvout_tree_scores_95_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_95_V_depth);
		sprintf(tvout_tree_scores_95_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_95_V, tvout_tree_scores_95_V);

		// release memory allocation
		delete [] tree_scores_95_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_96_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_96_V, tvout_tree_scores_96_V);

		sc_bv<11>* tree_scores_96_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_96_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (96) => (96) @ (2)
					for (int i_0 = 96; i_0 <= 96; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_96_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_96_V, "%s\n", (tree_scores_96_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_96_V, tvout_tree_scores_96_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_96_V_depth);
		sprintf(tvout_tree_scores_96_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_96_V, tvout_tree_scores_96_V);

		// release memory allocation
		delete [] tree_scores_96_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_97_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_97_V, tvout_tree_scores_97_V);

		sc_bv<11>* tree_scores_97_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_97_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (97) => (97) @ (2)
					for (int i_0 = 97; i_0 <= 97; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_97_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_97_V, "%s\n", (tree_scores_97_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_97_V, tvout_tree_scores_97_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_97_V_depth);
		sprintf(tvout_tree_scores_97_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_97_V, tvout_tree_scores_97_V);

		// release memory allocation
		delete [] tree_scores_97_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_98_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_98_V, tvout_tree_scores_98_V);

		sc_bv<11>* tree_scores_98_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_98_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (98) => (98) @ (2)
					for (int i_0 = 98; i_0 <= 98; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_98_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_98_V, "%s\n", (tree_scores_98_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_98_V, tvout_tree_scores_98_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_98_V_depth);
		sprintf(tvout_tree_scores_98_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_98_V, tvout_tree_scores_98_V);

		// release memory allocation
		delete [] tree_scores_98_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_tree_scores_99_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_99_V, tvout_tree_scores_99_V);

		sc_bv<11>* tree_scores_99_V_tvout_wrapc_buffer = new sc_bv<11>[1];

		// RTL Name: tree_scores_99_V
		{
			// bitslice(10, 0)
			{
				int hls_map_index = 0;
				// celement: tree_scores.V(10, 0)
				{
					// carray: (99) => (99) @ (2)
					for (int i_0 = 99; i_0 <= 99; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : tree_scores[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : tree_scores[0]
						// regulate_c_name       : tree_scores_V
						// input_type_conversion : (tree_scores[i_0]).range().to_string(SC_BIN).c_str()
						if (&(tree_scores[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<11> tree_scores_V_tmp_mem;
							tree_scores_V_tmp_mem = (tree_scores[i_0]).range().to_string(SC_BIN).c_str();
							tree_scores_99_V_tvout_wrapc_buffer[hls_map_index].range(10, 0) = tree_scores_V_tmp_mem.range(10, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_tree_scores_99_V, "%s\n", (tree_scores_99_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_tree_scores_99_V, tvout_tree_scores_99_V);
		}

		tcl_file.set_num(1, &tcl_file.tree_scores_99_V_depth);
		sprintf(tvout_tree_scores_99_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_tree_scores_99_V, tvout_tree_scores_99_V);

		// release memory allocation
		delete [] tree_scores_99_V_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "x_0_V"
		delete [] tvin_x_0_V;
		// release memory allocation: "x_1_V"
		delete [] tvin_x_1_V;
		// release memory allocation: "x_2_V"
		delete [] tvin_x_2_V;
		// release memory allocation: "x_3_V"
		delete [] tvin_x_3_V;
		// release memory allocation: "x_4_V"
		delete [] tvin_x_4_V;
		// release memory allocation: "x_5_V"
		delete [] tvin_x_5_V;
		// release memory allocation: "x_6_V"
		delete [] tvin_x_6_V;
		// release memory allocation: "score_0_V"
		delete [] tvout_score_0_V;
		// release memory allocation: "tree_scores_0_V"
		delete [] tvout_tree_scores_0_V;
		// release memory allocation: "tree_scores_1_V"
		delete [] tvout_tree_scores_1_V;
		// release memory allocation: "tree_scores_2_V"
		delete [] tvout_tree_scores_2_V;
		// release memory allocation: "tree_scores_3_V"
		delete [] tvout_tree_scores_3_V;
		// release memory allocation: "tree_scores_4_V"
		delete [] tvout_tree_scores_4_V;
		// release memory allocation: "tree_scores_5_V"
		delete [] tvout_tree_scores_5_V;
		// release memory allocation: "tree_scores_6_V"
		delete [] tvout_tree_scores_6_V;
		// release memory allocation: "tree_scores_7_V"
		delete [] tvout_tree_scores_7_V;
		// release memory allocation: "tree_scores_8_V"
		delete [] tvout_tree_scores_8_V;
		// release memory allocation: "tree_scores_9_V"
		delete [] tvout_tree_scores_9_V;
		// release memory allocation: "tree_scores_10_V"
		delete [] tvout_tree_scores_10_V;
		// release memory allocation: "tree_scores_11_V"
		delete [] tvout_tree_scores_11_V;
		// release memory allocation: "tree_scores_12_V"
		delete [] tvout_tree_scores_12_V;
		// release memory allocation: "tree_scores_13_V"
		delete [] tvout_tree_scores_13_V;
		// release memory allocation: "tree_scores_14_V"
		delete [] tvout_tree_scores_14_V;
		// release memory allocation: "tree_scores_15_V"
		delete [] tvout_tree_scores_15_V;
		// release memory allocation: "tree_scores_16_V"
		delete [] tvout_tree_scores_16_V;
		// release memory allocation: "tree_scores_17_V"
		delete [] tvout_tree_scores_17_V;
		// release memory allocation: "tree_scores_18_V"
		delete [] tvout_tree_scores_18_V;
		// release memory allocation: "tree_scores_19_V"
		delete [] tvout_tree_scores_19_V;
		// release memory allocation: "tree_scores_20_V"
		delete [] tvout_tree_scores_20_V;
		// release memory allocation: "tree_scores_21_V"
		delete [] tvout_tree_scores_21_V;
		// release memory allocation: "tree_scores_22_V"
		delete [] tvout_tree_scores_22_V;
		// release memory allocation: "tree_scores_23_V"
		delete [] tvout_tree_scores_23_V;
		// release memory allocation: "tree_scores_24_V"
		delete [] tvout_tree_scores_24_V;
		// release memory allocation: "tree_scores_25_V"
		delete [] tvout_tree_scores_25_V;
		// release memory allocation: "tree_scores_26_V"
		delete [] tvout_tree_scores_26_V;
		// release memory allocation: "tree_scores_27_V"
		delete [] tvout_tree_scores_27_V;
		// release memory allocation: "tree_scores_28_V"
		delete [] tvout_tree_scores_28_V;
		// release memory allocation: "tree_scores_29_V"
		delete [] tvout_tree_scores_29_V;
		// release memory allocation: "tree_scores_30_V"
		delete [] tvout_tree_scores_30_V;
		// release memory allocation: "tree_scores_31_V"
		delete [] tvout_tree_scores_31_V;
		// release memory allocation: "tree_scores_32_V"
		delete [] tvout_tree_scores_32_V;
		// release memory allocation: "tree_scores_33_V"
		delete [] tvout_tree_scores_33_V;
		// release memory allocation: "tree_scores_34_V"
		delete [] tvout_tree_scores_34_V;
		// release memory allocation: "tree_scores_35_V"
		delete [] tvout_tree_scores_35_V;
		// release memory allocation: "tree_scores_36_V"
		delete [] tvout_tree_scores_36_V;
		// release memory allocation: "tree_scores_37_V"
		delete [] tvout_tree_scores_37_V;
		// release memory allocation: "tree_scores_38_V"
		delete [] tvout_tree_scores_38_V;
		// release memory allocation: "tree_scores_39_V"
		delete [] tvout_tree_scores_39_V;
		// release memory allocation: "tree_scores_40_V"
		delete [] tvout_tree_scores_40_V;
		// release memory allocation: "tree_scores_41_V"
		delete [] tvout_tree_scores_41_V;
		// release memory allocation: "tree_scores_42_V"
		delete [] tvout_tree_scores_42_V;
		// release memory allocation: "tree_scores_43_V"
		delete [] tvout_tree_scores_43_V;
		// release memory allocation: "tree_scores_44_V"
		delete [] tvout_tree_scores_44_V;
		// release memory allocation: "tree_scores_45_V"
		delete [] tvout_tree_scores_45_V;
		// release memory allocation: "tree_scores_46_V"
		delete [] tvout_tree_scores_46_V;
		// release memory allocation: "tree_scores_47_V"
		delete [] tvout_tree_scores_47_V;
		// release memory allocation: "tree_scores_48_V"
		delete [] tvout_tree_scores_48_V;
		// release memory allocation: "tree_scores_49_V"
		delete [] tvout_tree_scores_49_V;
		// release memory allocation: "tree_scores_50_V"
		delete [] tvout_tree_scores_50_V;
		// release memory allocation: "tree_scores_51_V"
		delete [] tvout_tree_scores_51_V;
		// release memory allocation: "tree_scores_52_V"
		delete [] tvout_tree_scores_52_V;
		// release memory allocation: "tree_scores_53_V"
		delete [] tvout_tree_scores_53_V;
		// release memory allocation: "tree_scores_54_V"
		delete [] tvout_tree_scores_54_V;
		// release memory allocation: "tree_scores_55_V"
		delete [] tvout_tree_scores_55_V;
		// release memory allocation: "tree_scores_56_V"
		delete [] tvout_tree_scores_56_V;
		// release memory allocation: "tree_scores_57_V"
		delete [] tvout_tree_scores_57_V;
		// release memory allocation: "tree_scores_58_V"
		delete [] tvout_tree_scores_58_V;
		// release memory allocation: "tree_scores_59_V"
		delete [] tvout_tree_scores_59_V;
		// release memory allocation: "tree_scores_60_V"
		delete [] tvout_tree_scores_60_V;
		// release memory allocation: "tree_scores_61_V"
		delete [] tvout_tree_scores_61_V;
		// release memory allocation: "tree_scores_62_V"
		delete [] tvout_tree_scores_62_V;
		// release memory allocation: "tree_scores_63_V"
		delete [] tvout_tree_scores_63_V;
		// release memory allocation: "tree_scores_64_V"
		delete [] tvout_tree_scores_64_V;
		// release memory allocation: "tree_scores_65_V"
		delete [] tvout_tree_scores_65_V;
		// release memory allocation: "tree_scores_66_V"
		delete [] tvout_tree_scores_66_V;
		// release memory allocation: "tree_scores_67_V"
		delete [] tvout_tree_scores_67_V;
		// release memory allocation: "tree_scores_68_V"
		delete [] tvout_tree_scores_68_V;
		// release memory allocation: "tree_scores_69_V"
		delete [] tvout_tree_scores_69_V;
		// release memory allocation: "tree_scores_70_V"
		delete [] tvout_tree_scores_70_V;
		// release memory allocation: "tree_scores_71_V"
		delete [] tvout_tree_scores_71_V;
		// release memory allocation: "tree_scores_72_V"
		delete [] tvout_tree_scores_72_V;
		// release memory allocation: "tree_scores_73_V"
		delete [] tvout_tree_scores_73_V;
		// release memory allocation: "tree_scores_74_V"
		delete [] tvout_tree_scores_74_V;
		// release memory allocation: "tree_scores_75_V"
		delete [] tvout_tree_scores_75_V;
		// release memory allocation: "tree_scores_76_V"
		delete [] tvout_tree_scores_76_V;
		// release memory allocation: "tree_scores_77_V"
		delete [] tvout_tree_scores_77_V;
		// release memory allocation: "tree_scores_78_V"
		delete [] tvout_tree_scores_78_V;
		// release memory allocation: "tree_scores_79_V"
		delete [] tvout_tree_scores_79_V;
		// release memory allocation: "tree_scores_80_V"
		delete [] tvout_tree_scores_80_V;
		// release memory allocation: "tree_scores_81_V"
		delete [] tvout_tree_scores_81_V;
		// release memory allocation: "tree_scores_82_V"
		delete [] tvout_tree_scores_82_V;
		// release memory allocation: "tree_scores_83_V"
		delete [] tvout_tree_scores_83_V;
		// release memory allocation: "tree_scores_84_V"
		delete [] tvout_tree_scores_84_V;
		// release memory allocation: "tree_scores_85_V"
		delete [] tvout_tree_scores_85_V;
		// release memory allocation: "tree_scores_86_V"
		delete [] tvout_tree_scores_86_V;
		// release memory allocation: "tree_scores_87_V"
		delete [] tvout_tree_scores_87_V;
		// release memory allocation: "tree_scores_88_V"
		delete [] tvout_tree_scores_88_V;
		// release memory allocation: "tree_scores_89_V"
		delete [] tvout_tree_scores_89_V;
		// release memory allocation: "tree_scores_90_V"
		delete [] tvout_tree_scores_90_V;
		// release memory allocation: "tree_scores_91_V"
		delete [] tvout_tree_scores_91_V;
		// release memory allocation: "tree_scores_92_V"
		delete [] tvout_tree_scores_92_V;
		// release memory allocation: "tree_scores_93_V"
		delete [] tvout_tree_scores_93_V;
		// release memory allocation: "tree_scores_94_V"
		delete [] tvout_tree_scores_94_V;
		// release memory allocation: "tree_scores_95_V"
		delete [] tvout_tree_scores_95_V;
		// release memory allocation: "tree_scores_96_V"
		delete [] tvout_tree_scores_96_V;
		// release memory allocation: "tree_scores_97_V"
		delete [] tvout_tree_scores_97_V;
		// release memory allocation: "tree_scores_98_V"
		delete [] tvout_tree_scores_98_V;
		// release memory allocation: "tree_scores_99_V"
		delete [] tvout_tree_scores_99_V;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

