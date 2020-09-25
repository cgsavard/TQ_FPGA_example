// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
 `timescale 1ns/1ps


`define AUTOTB_DUT      my_prj
`define AUTOTB_DUT_INST AESL_inst_my_prj
`define AUTOTB_TOP      apatb_my_prj_top
`define AUTOTB_LAT_RESULT_FILE "my_prj.result.lat.rb"
`define AUTOTB_PER_RESULT_TRANS_FILE "my_prj.performance.result.transaction.xml"
`define AUTOTB_TOP_INST AESL_inst_apatb_my_prj_top
`define AUTOTB_MAX_ALLOW_LATENCY  15000000
`define AUTOTB_CLOCK_PERIOD_DIV2 2.08

`define AESL_DEPTH_x_0_V 1
`define AESL_DEPTH_x_1_V 1
`define AESL_DEPTH_x_2_V 1
`define AESL_DEPTH_x_3_V 1
`define AESL_DEPTH_x_4_V 1
`define AESL_DEPTH_x_5_V 1
`define AESL_DEPTH_x_6_V 1
`define AESL_DEPTH_score_0_V 1
`define AESL_DEPTH_score_1_V 0
`define AESL_DEPTH_tree_scores_0_V 1
`define AESL_DEPTH_tree_scores_1_V 1
`define AESL_DEPTH_tree_scores_2_V 1
`define AESL_DEPTH_tree_scores_3_V 1
`define AESL_DEPTH_tree_scores_4_V 1
`define AESL_DEPTH_tree_scores_5_V 1
`define AESL_DEPTH_tree_scores_6_V 1
`define AESL_DEPTH_tree_scores_7_V 1
`define AESL_DEPTH_tree_scores_8_V 1
`define AESL_DEPTH_tree_scores_9_V 1
`define AESL_DEPTH_tree_scores_10_V 1
`define AESL_DEPTH_tree_scores_11_V 1
`define AESL_DEPTH_tree_scores_12_V 1
`define AESL_DEPTH_tree_scores_13_V 1
`define AESL_DEPTH_tree_scores_14_V 1
`define AESL_DEPTH_tree_scores_15_V 1
`define AESL_DEPTH_tree_scores_16_V 1
`define AESL_DEPTH_tree_scores_17_V 1
`define AESL_DEPTH_tree_scores_18_V 1
`define AESL_DEPTH_tree_scores_19_V 1
`define AESL_DEPTH_tree_scores_20_V 1
`define AESL_DEPTH_tree_scores_21_V 1
`define AESL_DEPTH_tree_scores_22_V 1
`define AESL_DEPTH_tree_scores_23_V 1
`define AESL_DEPTH_tree_scores_24_V 1
`define AESL_DEPTH_tree_scores_25_V 1
`define AESL_DEPTH_tree_scores_26_V 1
`define AESL_DEPTH_tree_scores_27_V 1
`define AESL_DEPTH_tree_scores_28_V 1
`define AESL_DEPTH_tree_scores_29_V 1
`define AESL_DEPTH_tree_scores_30_V 1
`define AESL_DEPTH_tree_scores_31_V 1
`define AESL_DEPTH_tree_scores_32_V 1
`define AESL_DEPTH_tree_scores_33_V 1
`define AESL_DEPTH_tree_scores_34_V 1
`define AESL_DEPTH_tree_scores_35_V 1
`define AESL_DEPTH_tree_scores_36_V 1
`define AESL_DEPTH_tree_scores_37_V 1
`define AESL_DEPTH_tree_scores_38_V 1
`define AESL_DEPTH_tree_scores_39_V 1
`define AESL_DEPTH_tree_scores_40_V 1
`define AESL_DEPTH_tree_scores_41_V 1
`define AESL_DEPTH_tree_scores_42_V 1
`define AESL_DEPTH_tree_scores_43_V 1
`define AESL_DEPTH_tree_scores_44_V 1
`define AESL_DEPTH_tree_scores_45_V 1
`define AESL_DEPTH_tree_scores_46_V 1
`define AESL_DEPTH_tree_scores_47_V 1
`define AESL_DEPTH_tree_scores_48_V 1
`define AESL_DEPTH_tree_scores_49_V 1
`define AESL_DEPTH_tree_scores_50_V 1
`define AESL_DEPTH_tree_scores_51_V 1
`define AESL_DEPTH_tree_scores_52_V 1
`define AESL_DEPTH_tree_scores_53_V 1
`define AESL_DEPTH_tree_scores_54_V 1
`define AESL_DEPTH_tree_scores_55_V 1
`define AESL_DEPTH_tree_scores_56_V 1
`define AESL_DEPTH_tree_scores_57_V 1
`define AESL_DEPTH_tree_scores_58_V 1
`define AESL_DEPTH_tree_scores_59_V 1
`define AESL_DEPTH_tree_scores_60_V 1
`define AESL_DEPTH_tree_scores_61_V 1
`define AESL_DEPTH_tree_scores_62_V 1
`define AESL_DEPTH_tree_scores_63_V 1
`define AESL_DEPTH_tree_scores_64_V 1
`define AESL_DEPTH_tree_scores_65_V 1
`define AESL_DEPTH_tree_scores_66_V 1
`define AESL_DEPTH_tree_scores_67_V 1
`define AESL_DEPTH_tree_scores_68_V 1
`define AESL_DEPTH_tree_scores_69_V 1
`define AESL_DEPTH_tree_scores_70_V 1
`define AESL_DEPTH_tree_scores_71_V 1
`define AESL_DEPTH_tree_scores_72_V 1
`define AESL_DEPTH_tree_scores_73_V 1
`define AESL_DEPTH_tree_scores_74_V 1
`define AESL_DEPTH_tree_scores_75_V 1
`define AESL_DEPTH_tree_scores_76_V 1
`define AESL_DEPTH_tree_scores_77_V 1
`define AESL_DEPTH_tree_scores_78_V 1
`define AESL_DEPTH_tree_scores_79_V 1
`define AESL_DEPTH_tree_scores_80_V 1
`define AESL_DEPTH_tree_scores_81_V 1
`define AESL_DEPTH_tree_scores_82_V 1
`define AESL_DEPTH_tree_scores_83_V 1
`define AESL_DEPTH_tree_scores_84_V 1
`define AESL_DEPTH_tree_scores_85_V 1
`define AESL_DEPTH_tree_scores_86_V 1
`define AESL_DEPTH_tree_scores_87_V 1
`define AESL_DEPTH_tree_scores_88_V 1
`define AESL_DEPTH_tree_scores_89_V 1
`define AESL_DEPTH_tree_scores_90_V 1
`define AESL_DEPTH_tree_scores_91_V 1
`define AESL_DEPTH_tree_scores_92_V 1
`define AESL_DEPTH_tree_scores_93_V 1
`define AESL_DEPTH_tree_scores_94_V 1
`define AESL_DEPTH_tree_scores_95_V 1
`define AESL_DEPTH_tree_scores_96_V 1
`define AESL_DEPTH_tree_scores_97_V 1
`define AESL_DEPTH_tree_scores_98_V 1
`define AESL_DEPTH_tree_scores_99_V 1
`define AUTOTB_TVIN_x_0_V  "../tv/cdatafile/c.my_prj.autotvin_x_0_V.dat"
`define AUTOTB_TVIN_x_1_V  "../tv/cdatafile/c.my_prj.autotvin_x_1_V.dat"
`define AUTOTB_TVIN_x_2_V  "../tv/cdatafile/c.my_prj.autotvin_x_2_V.dat"
`define AUTOTB_TVIN_x_3_V  "../tv/cdatafile/c.my_prj.autotvin_x_3_V.dat"
`define AUTOTB_TVIN_x_4_V  "../tv/cdatafile/c.my_prj.autotvin_x_4_V.dat"
`define AUTOTB_TVIN_x_5_V  "../tv/cdatafile/c.my_prj.autotvin_x_5_V.dat"
`define AUTOTB_TVIN_x_6_V  "../tv/cdatafile/c.my_prj.autotvin_x_6_V.dat"
`define AUTOTB_TVIN_x_0_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvin_x_0_V.dat"
`define AUTOTB_TVIN_x_1_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvin_x_1_V.dat"
`define AUTOTB_TVIN_x_2_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvin_x_2_V.dat"
`define AUTOTB_TVIN_x_3_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvin_x_3_V.dat"
`define AUTOTB_TVIN_x_4_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvin_x_4_V.dat"
`define AUTOTB_TVIN_x_5_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvin_x_5_V.dat"
`define AUTOTB_TVIN_x_6_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvin_x_6_V.dat"
`define AUTOTB_TVOUT_score_0_V  "../tv/cdatafile/c.my_prj.autotvout_score_0_V.dat"
`define AUTOTB_TVOUT_tree_scores_0_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_0_V.dat"
`define AUTOTB_TVOUT_tree_scores_1_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_1_V.dat"
`define AUTOTB_TVOUT_tree_scores_2_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_2_V.dat"
`define AUTOTB_TVOUT_tree_scores_3_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_3_V.dat"
`define AUTOTB_TVOUT_tree_scores_4_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_4_V.dat"
`define AUTOTB_TVOUT_tree_scores_5_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_5_V.dat"
`define AUTOTB_TVOUT_tree_scores_6_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_6_V.dat"
`define AUTOTB_TVOUT_tree_scores_7_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_7_V.dat"
`define AUTOTB_TVOUT_tree_scores_8_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_8_V.dat"
`define AUTOTB_TVOUT_tree_scores_9_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_9_V.dat"
`define AUTOTB_TVOUT_tree_scores_10_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_10_V.dat"
`define AUTOTB_TVOUT_tree_scores_11_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_11_V.dat"
`define AUTOTB_TVOUT_tree_scores_12_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_12_V.dat"
`define AUTOTB_TVOUT_tree_scores_13_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_13_V.dat"
`define AUTOTB_TVOUT_tree_scores_14_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_14_V.dat"
`define AUTOTB_TVOUT_tree_scores_15_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_15_V.dat"
`define AUTOTB_TVOUT_tree_scores_16_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_16_V.dat"
`define AUTOTB_TVOUT_tree_scores_17_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_17_V.dat"
`define AUTOTB_TVOUT_tree_scores_18_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_18_V.dat"
`define AUTOTB_TVOUT_tree_scores_19_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_19_V.dat"
`define AUTOTB_TVOUT_tree_scores_20_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_20_V.dat"
`define AUTOTB_TVOUT_tree_scores_21_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_21_V.dat"
`define AUTOTB_TVOUT_tree_scores_22_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_22_V.dat"
`define AUTOTB_TVOUT_tree_scores_23_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_23_V.dat"
`define AUTOTB_TVOUT_tree_scores_24_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_24_V.dat"
`define AUTOTB_TVOUT_tree_scores_25_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_25_V.dat"
`define AUTOTB_TVOUT_tree_scores_26_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_26_V.dat"
`define AUTOTB_TVOUT_tree_scores_27_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_27_V.dat"
`define AUTOTB_TVOUT_tree_scores_28_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_28_V.dat"
`define AUTOTB_TVOUT_tree_scores_29_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_29_V.dat"
`define AUTOTB_TVOUT_tree_scores_30_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_30_V.dat"
`define AUTOTB_TVOUT_tree_scores_31_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_31_V.dat"
`define AUTOTB_TVOUT_tree_scores_32_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_32_V.dat"
`define AUTOTB_TVOUT_tree_scores_33_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_33_V.dat"
`define AUTOTB_TVOUT_tree_scores_34_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_34_V.dat"
`define AUTOTB_TVOUT_tree_scores_35_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_35_V.dat"
`define AUTOTB_TVOUT_tree_scores_36_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_36_V.dat"
`define AUTOTB_TVOUT_tree_scores_37_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_37_V.dat"
`define AUTOTB_TVOUT_tree_scores_38_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_38_V.dat"
`define AUTOTB_TVOUT_tree_scores_39_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_39_V.dat"
`define AUTOTB_TVOUT_tree_scores_40_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_40_V.dat"
`define AUTOTB_TVOUT_tree_scores_41_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_41_V.dat"
`define AUTOTB_TVOUT_tree_scores_42_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_42_V.dat"
`define AUTOTB_TVOUT_tree_scores_43_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_43_V.dat"
`define AUTOTB_TVOUT_tree_scores_44_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_44_V.dat"
`define AUTOTB_TVOUT_tree_scores_45_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_45_V.dat"
`define AUTOTB_TVOUT_tree_scores_46_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_46_V.dat"
`define AUTOTB_TVOUT_tree_scores_47_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_47_V.dat"
`define AUTOTB_TVOUT_tree_scores_48_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_48_V.dat"
`define AUTOTB_TVOUT_tree_scores_49_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_49_V.dat"
`define AUTOTB_TVOUT_tree_scores_50_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_50_V.dat"
`define AUTOTB_TVOUT_tree_scores_51_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_51_V.dat"
`define AUTOTB_TVOUT_tree_scores_52_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_52_V.dat"
`define AUTOTB_TVOUT_tree_scores_53_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_53_V.dat"
`define AUTOTB_TVOUT_tree_scores_54_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_54_V.dat"
`define AUTOTB_TVOUT_tree_scores_55_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_55_V.dat"
`define AUTOTB_TVOUT_tree_scores_56_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_56_V.dat"
`define AUTOTB_TVOUT_tree_scores_57_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_57_V.dat"
`define AUTOTB_TVOUT_tree_scores_58_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_58_V.dat"
`define AUTOTB_TVOUT_tree_scores_59_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_59_V.dat"
`define AUTOTB_TVOUT_tree_scores_60_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_60_V.dat"
`define AUTOTB_TVOUT_tree_scores_61_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_61_V.dat"
`define AUTOTB_TVOUT_tree_scores_62_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_62_V.dat"
`define AUTOTB_TVOUT_tree_scores_63_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_63_V.dat"
`define AUTOTB_TVOUT_tree_scores_64_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_64_V.dat"
`define AUTOTB_TVOUT_tree_scores_65_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_65_V.dat"
`define AUTOTB_TVOUT_tree_scores_66_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_66_V.dat"
`define AUTOTB_TVOUT_tree_scores_67_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_67_V.dat"
`define AUTOTB_TVOUT_tree_scores_68_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_68_V.dat"
`define AUTOTB_TVOUT_tree_scores_69_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_69_V.dat"
`define AUTOTB_TVOUT_tree_scores_70_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_70_V.dat"
`define AUTOTB_TVOUT_tree_scores_71_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_71_V.dat"
`define AUTOTB_TVOUT_tree_scores_72_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_72_V.dat"
`define AUTOTB_TVOUT_tree_scores_73_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_73_V.dat"
`define AUTOTB_TVOUT_tree_scores_74_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_74_V.dat"
`define AUTOTB_TVOUT_tree_scores_75_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_75_V.dat"
`define AUTOTB_TVOUT_tree_scores_76_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_76_V.dat"
`define AUTOTB_TVOUT_tree_scores_77_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_77_V.dat"
`define AUTOTB_TVOUT_tree_scores_78_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_78_V.dat"
`define AUTOTB_TVOUT_tree_scores_79_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_79_V.dat"
`define AUTOTB_TVOUT_tree_scores_80_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_80_V.dat"
`define AUTOTB_TVOUT_tree_scores_81_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_81_V.dat"
`define AUTOTB_TVOUT_tree_scores_82_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_82_V.dat"
`define AUTOTB_TVOUT_tree_scores_83_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_83_V.dat"
`define AUTOTB_TVOUT_tree_scores_84_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_84_V.dat"
`define AUTOTB_TVOUT_tree_scores_85_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_85_V.dat"
`define AUTOTB_TVOUT_tree_scores_86_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_86_V.dat"
`define AUTOTB_TVOUT_tree_scores_87_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_87_V.dat"
`define AUTOTB_TVOUT_tree_scores_88_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_88_V.dat"
`define AUTOTB_TVOUT_tree_scores_89_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_89_V.dat"
`define AUTOTB_TVOUT_tree_scores_90_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_90_V.dat"
`define AUTOTB_TVOUT_tree_scores_91_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_91_V.dat"
`define AUTOTB_TVOUT_tree_scores_92_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_92_V.dat"
`define AUTOTB_TVOUT_tree_scores_93_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_93_V.dat"
`define AUTOTB_TVOUT_tree_scores_94_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_94_V.dat"
`define AUTOTB_TVOUT_tree_scores_95_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_95_V.dat"
`define AUTOTB_TVOUT_tree_scores_96_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_96_V.dat"
`define AUTOTB_TVOUT_tree_scores_97_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_97_V.dat"
`define AUTOTB_TVOUT_tree_scores_98_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_98_V.dat"
`define AUTOTB_TVOUT_tree_scores_99_V  "../tv/cdatafile/c.my_prj.autotvout_tree_scores_99_V.dat"
`define AUTOTB_TVOUT_score_0_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_score_0_V.dat"
`define AUTOTB_TVOUT_tree_scores_0_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_0_V.dat"
`define AUTOTB_TVOUT_tree_scores_1_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_1_V.dat"
`define AUTOTB_TVOUT_tree_scores_2_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_2_V.dat"
`define AUTOTB_TVOUT_tree_scores_3_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_3_V.dat"
`define AUTOTB_TVOUT_tree_scores_4_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_4_V.dat"
`define AUTOTB_TVOUT_tree_scores_5_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_5_V.dat"
`define AUTOTB_TVOUT_tree_scores_6_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_6_V.dat"
`define AUTOTB_TVOUT_tree_scores_7_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_7_V.dat"
`define AUTOTB_TVOUT_tree_scores_8_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_8_V.dat"
`define AUTOTB_TVOUT_tree_scores_9_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_9_V.dat"
`define AUTOTB_TVOUT_tree_scores_10_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_10_V.dat"
`define AUTOTB_TVOUT_tree_scores_11_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_11_V.dat"
`define AUTOTB_TVOUT_tree_scores_12_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_12_V.dat"
`define AUTOTB_TVOUT_tree_scores_13_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_13_V.dat"
`define AUTOTB_TVOUT_tree_scores_14_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_14_V.dat"
`define AUTOTB_TVOUT_tree_scores_15_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_15_V.dat"
`define AUTOTB_TVOUT_tree_scores_16_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_16_V.dat"
`define AUTOTB_TVOUT_tree_scores_17_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_17_V.dat"
`define AUTOTB_TVOUT_tree_scores_18_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_18_V.dat"
`define AUTOTB_TVOUT_tree_scores_19_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_19_V.dat"
`define AUTOTB_TVOUT_tree_scores_20_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_20_V.dat"
`define AUTOTB_TVOUT_tree_scores_21_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_21_V.dat"
`define AUTOTB_TVOUT_tree_scores_22_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_22_V.dat"
`define AUTOTB_TVOUT_tree_scores_23_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_23_V.dat"
`define AUTOTB_TVOUT_tree_scores_24_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_24_V.dat"
`define AUTOTB_TVOUT_tree_scores_25_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_25_V.dat"
`define AUTOTB_TVOUT_tree_scores_26_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_26_V.dat"
`define AUTOTB_TVOUT_tree_scores_27_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_27_V.dat"
`define AUTOTB_TVOUT_tree_scores_28_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_28_V.dat"
`define AUTOTB_TVOUT_tree_scores_29_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_29_V.dat"
`define AUTOTB_TVOUT_tree_scores_30_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_30_V.dat"
`define AUTOTB_TVOUT_tree_scores_31_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_31_V.dat"
`define AUTOTB_TVOUT_tree_scores_32_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_32_V.dat"
`define AUTOTB_TVOUT_tree_scores_33_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_33_V.dat"
`define AUTOTB_TVOUT_tree_scores_34_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_34_V.dat"
`define AUTOTB_TVOUT_tree_scores_35_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_35_V.dat"
`define AUTOTB_TVOUT_tree_scores_36_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_36_V.dat"
`define AUTOTB_TVOUT_tree_scores_37_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_37_V.dat"
`define AUTOTB_TVOUT_tree_scores_38_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_38_V.dat"
`define AUTOTB_TVOUT_tree_scores_39_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_39_V.dat"
`define AUTOTB_TVOUT_tree_scores_40_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_40_V.dat"
`define AUTOTB_TVOUT_tree_scores_41_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_41_V.dat"
`define AUTOTB_TVOUT_tree_scores_42_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_42_V.dat"
`define AUTOTB_TVOUT_tree_scores_43_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_43_V.dat"
`define AUTOTB_TVOUT_tree_scores_44_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_44_V.dat"
`define AUTOTB_TVOUT_tree_scores_45_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_45_V.dat"
`define AUTOTB_TVOUT_tree_scores_46_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_46_V.dat"
`define AUTOTB_TVOUT_tree_scores_47_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_47_V.dat"
`define AUTOTB_TVOUT_tree_scores_48_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_48_V.dat"
`define AUTOTB_TVOUT_tree_scores_49_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_49_V.dat"
`define AUTOTB_TVOUT_tree_scores_50_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_50_V.dat"
`define AUTOTB_TVOUT_tree_scores_51_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_51_V.dat"
`define AUTOTB_TVOUT_tree_scores_52_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_52_V.dat"
`define AUTOTB_TVOUT_tree_scores_53_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_53_V.dat"
`define AUTOTB_TVOUT_tree_scores_54_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_54_V.dat"
`define AUTOTB_TVOUT_tree_scores_55_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_55_V.dat"
`define AUTOTB_TVOUT_tree_scores_56_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_56_V.dat"
`define AUTOTB_TVOUT_tree_scores_57_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_57_V.dat"
`define AUTOTB_TVOUT_tree_scores_58_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_58_V.dat"
`define AUTOTB_TVOUT_tree_scores_59_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_59_V.dat"
`define AUTOTB_TVOUT_tree_scores_60_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_60_V.dat"
`define AUTOTB_TVOUT_tree_scores_61_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_61_V.dat"
`define AUTOTB_TVOUT_tree_scores_62_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_62_V.dat"
`define AUTOTB_TVOUT_tree_scores_63_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_63_V.dat"
`define AUTOTB_TVOUT_tree_scores_64_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_64_V.dat"
`define AUTOTB_TVOUT_tree_scores_65_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_65_V.dat"
`define AUTOTB_TVOUT_tree_scores_66_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_66_V.dat"
`define AUTOTB_TVOUT_tree_scores_67_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_67_V.dat"
`define AUTOTB_TVOUT_tree_scores_68_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_68_V.dat"
`define AUTOTB_TVOUT_tree_scores_69_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_69_V.dat"
`define AUTOTB_TVOUT_tree_scores_70_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_70_V.dat"
`define AUTOTB_TVOUT_tree_scores_71_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_71_V.dat"
`define AUTOTB_TVOUT_tree_scores_72_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_72_V.dat"
`define AUTOTB_TVOUT_tree_scores_73_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_73_V.dat"
`define AUTOTB_TVOUT_tree_scores_74_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_74_V.dat"
`define AUTOTB_TVOUT_tree_scores_75_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_75_V.dat"
`define AUTOTB_TVOUT_tree_scores_76_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_76_V.dat"
`define AUTOTB_TVOUT_tree_scores_77_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_77_V.dat"
`define AUTOTB_TVOUT_tree_scores_78_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_78_V.dat"
`define AUTOTB_TVOUT_tree_scores_79_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_79_V.dat"
`define AUTOTB_TVOUT_tree_scores_80_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_80_V.dat"
`define AUTOTB_TVOUT_tree_scores_81_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_81_V.dat"
`define AUTOTB_TVOUT_tree_scores_82_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_82_V.dat"
`define AUTOTB_TVOUT_tree_scores_83_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_83_V.dat"
`define AUTOTB_TVOUT_tree_scores_84_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_84_V.dat"
`define AUTOTB_TVOUT_tree_scores_85_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_85_V.dat"
`define AUTOTB_TVOUT_tree_scores_86_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_86_V.dat"
`define AUTOTB_TVOUT_tree_scores_87_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_87_V.dat"
`define AUTOTB_TVOUT_tree_scores_88_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_88_V.dat"
`define AUTOTB_TVOUT_tree_scores_89_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_89_V.dat"
`define AUTOTB_TVOUT_tree_scores_90_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_90_V.dat"
`define AUTOTB_TVOUT_tree_scores_91_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_91_V.dat"
`define AUTOTB_TVOUT_tree_scores_92_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_92_V.dat"
`define AUTOTB_TVOUT_tree_scores_93_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_93_V.dat"
`define AUTOTB_TVOUT_tree_scores_94_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_94_V.dat"
`define AUTOTB_TVOUT_tree_scores_95_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_95_V.dat"
`define AUTOTB_TVOUT_tree_scores_96_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_96_V.dat"
`define AUTOTB_TVOUT_tree_scores_97_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_97_V.dat"
`define AUTOTB_TVOUT_tree_scores_98_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_98_V.dat"
`define AUTOTB_TVOUT_tree_scores_99_V_out_wrapc  "../tv/rtldatafile/rtl.my_prj.autotvout_tree_scores_99_V.dat"
module `AUTOTB_TOP;

parameter AUTOTB_TRANSACTION_NUM = 5000;
parameter PROGRESS_TIMEOUT = 10000000;
parameter LATENCY_ESTIMATION = 6;
parameter LENGTH_x_0_V = 1;
parameter LENGTH_x_1_V = 1;
parameter LENGTH_x_2_V = 1;
parameter LENGTH_x_3_V = 1;
parameter LENGTH_x_4_V = 1;
parameter LENGTH_x_5_V = 1;
parameter LENGTH_x_6_V = 1;
parameter LENGTH_score_0_V = 1;
parameter LENGTH_tree_scores_0_V = 1;
parameter LENGTH_tree_scores_1_V = 1;
parameter LENGTH_tree_scores_2_V = 1;
parameter LENGTH_tree_scores_3_V = 1;
parameter LENGTH_tree_scores_4_V = 1;
parameter LENGTH_tree_scores_5_V = 1;
parameter LENGTH_tree_scores_6_V = 1;
parameter LENGTH_tree_scores_7_V = 1;
parameter LENGTH_tree_scores_8_V = 1;
parameter LENGTH_tree_scores_9_V = 1;
parameter LENGTH_tree_scores_10_V = 1;
parameter LENGTH_tree_scores_11_V = 1;
parameter LENGTH_tree_scores_12_V = 1;
parameter LENGTH_tree_scores_13_V = 1;
parameter LENGTH_tree_scores_14_V = 1;
parameter LENGTH_tree_scores_15_V = 1;
parameter LENGTH_tree_scores_16_V = 1;
parameter LENGTH_tree_scores_17_V = 1;
parameter LENGTH_tree_scores_18_V = 1;
parameter LENGTH_tree_scores_19_V = 1;
parameter LENGTH_tree_scores_20_V = 1;
parameter LENGTH_tree_scores_21_V = 1;
parameter LENGTH_tree_scores_22_V = 1;
parameter LENGTH_tree_scores_23_V = 1;
parameter LENGTH_tree_scores_24_V = 1;
parameter LENGTH_tree_scores_25_V = 1;
parameter LENGTH_tree_scores_26_V = 1;
parameter LENGTH_tree_scores_27_V = 1;
parameter LENGTH_tree_scores_28_V = 1;
parameter LENGTH_tree_scores_29_V = 1;
parameter LENGTH_tree_scores_30_V = 1;
parameter LENGTH_tree_scores_31_V = 1;
parameter LENGTH_tree_scores_32_V = 1;
parameter LENGTH_tree_scores_33_V = 1;
parameter LENGTH_tree_scores_34_V = 1;
parameter LENGTH_tree_scores_35_V = 1;
parameter LENGTH_tree_scores_36_V = 1;
parameter LENGTH_tree_scores_37_V = 1;
parameter LENGTH_tree_scores_38_V = 1;
parameter LENGTH_tree_scores_39_V = 1;
parameter LENGTH_tree_scores_40_V = 1;
parameter LENGTH_tree_scores_41_V = 1;
parameter LENGTH_tree_scores_42_V = 1;
parameter LENGTH_tree_scores_43_V = 1;
parameter LENGTH_tree_scores_44_V = 1;
parameter LENGTH_tree_scores_45_V = 1;
parameter LENGTH_tree_scores_46_V = 1;
parameter LENGTH_tree_scores_47_V = 1;
parameter LENGTH_tree_scores_48_V = 1;
parameter LENGTH_tree_scores_49_V = 1;
parameter LENGTH_tree_scores_50_V = 1;
parameter LENGTH_tree_scores_51_V = 1;
parameter LENGTH_tree_scores_52_V = 1;
parameter LENGTH_tree_scores_53_V = 1;
parameter LENGTH_tree_scores_54_V = 1;
parameter LENGTH_tree_scores_55_V = 1;
parameter LENGTH_tree_scores_56_V = 1;
parameter LENGTH_tree_scores_57_V = 1;
parameter LENGTH_tree_scores_58_V = 1;
parameter LENGTH_tree_scores_59_V = 1;
parameter LENGTH_tree_scores_60_V = 1;
parameter LENGTH_tree_scores_61_V = 1;
parameter LENGTH_tree_scores_62_V = 1;
parameter LENGTH_tree_scores_63_V = 1;
parameter LENGTH_tree_scores_64_V = 1;
parameter LENGTH_tree_scores_65_V = 1;
parameter LENGTH_tree_scores_66_V = 1;
parameter LENGTH_tree_scores_67_V = 1;
parameter LENGTH_tree_scores_68_V = 1;
parameter LENGTH_tree_scores_69_V = 1;
parameter LENGTH_tree_scores_70_V = 1;
parameter LENGTH_tree_scores_71_V = 1;
parameter LENGTH_tree_scores_72_V = 1;
parameter LENGTH_tree_scores_73_V = 1;
parameter LENGTH_tree_scores_74_V = 1;
parameter LENGTH_tree_scores_75_V = 1;
parameter LENGTH_tree_scores_76_V = 1;
parameter LENGTH_tree_scores_77_V = 1;
parameter LENGTH_tree_scores_78_V = 1;
parameter LENGTH_tree_scores_79_V = 1;
parameter LENGTH_tree_scores_80_V = 1;
parameter LENGTH_tree_scores_81_V = 1;
parameter LENGTH_tree_scores_82_V = 1;
parameter LENGTH_tree_scores_83_V = 1;
parameter LENGTH_tree_scores_84_V = 1;
parameter LENGTH_tree_scores_85_V = 1;
parameter LENGTH_tree_scores_86_V = 1;
parameter LENGTH_tree_scores_87_V = 1;
parameter LENGTH_tree_scores_88_V = 1;
parameter LENGTH_tree_scores_89_V = 1;
parameter LENGTH_tree_scores_90_V = 1;
parameter LENGTH_tree_scores_91_V = 1;
parameter LENGTH_tree_scores_92_V = 1;
parameter LENGTH_tree_scores_93_V = 1;
parameter LENGTH_tree_scores_94_V = 1;
parameter LENGTH_tree_scores_95_V = 1;
parameter LENGTH_tree_scores_96_V = 1;
parameter LENGTH_tree_scores_97_V = 1;
parameter LENGTH_tree_scores_98_V = 1;
parameter LENGTH_tree_scores_99_V = 1;

task read_token;
    input integer fp;
    output reg [207 : 0] token;
    integer ret;
    begin
        token = "";
        ret = 0;
        ret = $fscanf(fp,"%s",token);
    end
endtask

reg AESL_clock;
reg rst;
reg start;
reg ce;
reg tb_continue;
wire AESL_start;
wire AESL_reset;
wire AESL_ce;
wire AESL_ready;
wire AESL_idle;
wire AESL_continue;
wire AESL_done;
reg AESL_done_delay = 0;
reg AESL_done_delay2 = 0;
reg AESL_ready_delay = 0;
wire ready;
wire ready_wire;
wire ap_start;
wire ap_done;
wire ap_idle;
wire ap_ready;
wire [10 : 0] x_0_V;
wire [10 : 0] x_1_V;
wire [10 : 0] x_2_V;
wire [10 : 0] x_3_V;
wire [10 : 0] x_4_V;
wire [10 : 0] x_5_V;
wire [10 : 0] x_6_V;
wire [10 : 0] score_0_V;
wire  score_0_V_ap_vld;
wire [10 : 0] score_1_V;
wire [10 : 0] tree_scores_0_V;
wire  tree_scores_0_V_ap_vld;
wire [10 : 0] tree_scores_1_V;
wire  tree_scores_1_V_ap_vld;
wire [10 : 0] tree_scores_2_V;
wire  tree_scores_2_V_ap_vld;
wire [10 : 0] tree_scores_3_V;
wire  tree_scores_3_V_ap_vld;
wire [10 : 0] tree_scores_4_V;
wire  tree_scores_4_V_ap_vld;
wire [10 : 0] tree_scores_5_V;
wire  tree_scores_5_V_ap_vld;
wire [10 : 0] tree_scores_6_V;
wire  tree_scores_6_V_ap_vld;
wire [10 : 0] tree_scores_7_V;
wire  tree_scores_7_V_ap_vld;
wire [10 : 0] tree_scores_8_V;
wire  tree_scores_8_V_ap_vld;
wire [10 : 0] tree_scores_9_V;
wire  tree_scores_9_V_ap_vld;
wire [10 : 0] tree_scores_10_V;
wire  tree_scores_10_V_ap_vld;
wire [10 : 0] tree_scores_11_V;
wire  tree_scores_11_V_ap_vld;
wire [10 : 0] tree_scores_12_V;
wire  tree_scores_12_V_ap_vld;
wire [10 : 0] tree_scores_13_V;
wire  tree_scores_13_V_ap_vld;
wire [10 : 0] tree_scores_14_V;
wire  tree_scores_14_V_ap_vld;
wire [10 : 0] tree_scores_15_V;
wire  tree_scores_15_V_ap_vld;
wire [10 : 0] tree_scores_16_V;
wire  tree_scores_16_V_ap_vld;
wire [10 : 0] tree_scores_17_V;
wire  tree_scores_17_V_ap_vld;
wire [10 : 0] tree_scores_18_V;
wire  tree_scores_18_V_ap_vld;
wire [10 : 0] tree_scores_19_V;
wire  tree_scores_19_V_ap_vld;
wire [10 : 0] tree_scores_20_V;
wire  tree_scores_20_V_ap_vld;
wire [10 : 0] tree_scores_21_V;
wire  tree_scores_21_V_ap_vld;
wire [10 : 0] tree_scores_22_V;
wire  tree_scores_22_V_ap_vld;
wire [10 : 0] tree_scores_23_V;
wire  tree_scores_23_V_ap_vld;
wire [10 : 0] tree_scores_24_V;
wire  tree_scores_24_V_ap_vld;
wire [10 : 0] tree_scores_25_V;
wire  tree_scores_25_V_ap_vld;
wire [10 : 0] tree_scores_26_V;
wire  tree_scores_26_V_ap_vld;
wire [10 : 0] tree_scores_27_V;
wire  tree_scores_27_V_ap_vld;
wire [10 : 0] tree_scores_28_V;
wire  tree_scores_28_V_ap_vld;
wire [10 : 0] tree_scores_29_V;
wire  tree_scores_29_V_ap_vld;
wire [10 : 0] tree_scores_30_V;
wire  tree_scores_30_V_ap_vld;
wire [10 : 0] tree_scores_31_V;
wire  tree_scores_31_V_ap_vld;
wire [10 : 0] tree_scores_32_V;
wire  tree_scores_32_V_ap_vld;
wire [10 : 0] tree_scores_33_V;
wire  tree_scores_33_V_ap_vld;
wire [10 : 0] tree_scores_34_V;
wire  tree_scores_34_V_ap_vld;
wire [10 : 0] tree_scores_35_V;
wire  tree_scores_35_V_ap_vld;
wire [10 : 0] tree_scores_36_V;
wire  tree_scores_36_V_ap_vld;
wire [10 : 0] tree_scores_37_V;
wire  tree_scores_37_V_ap_vld;
wire [10 : 0] tree_scores_38_V;
wire  tree_scores_38_V_ap_vld;
wire [10 : 0] tree_scores_39_V;
wire  tree_scores_39_V_ap_vld;
wire [10 : 0] tree_scores_40_V;
wire  tree_scores_40_V_ap_vld;
wire [10 : 0] tree_scores_41_V;
wire  tree_scores_41_V_ap_vld;
wire [10 : 0] tree_scores_42_V;
wire  tree_scores_42_V_ap_vld;
wire [10 : 0] tree_scores_43_V;
wire  tree_scores_43_V_ap_vld;
wire [10 : 0] tree_scores_44_V;
wire  tree_scores_44_V_ap_vld;
wire [10 : 0] tree_scores_45_V;
wire  tree_scores_45_V_ap_vld;
wire [10 : 0] tree_scores_46_V;
wire  tree_scores_46_V_ap_vld;
wire [10 : 0] tree_scores_47_V;
wire  tree_scores_47_V_ap_vld;
wire [10 : 0] tree_scores_48_V;
wire  tree_scores_48_V_ap_vld;
wire [10 : 0] tree_scores_49_V;
wire  tree_scores_49_V_ap_vld;
wire [10 : 0] tree_scores_50_V;
wire  tree_scores_50_V_ap_vld;
wire [10 : 0] tree_scores_51_V;
wire  tree_scores_51_V_ap_vld;
wire [10 : 0] tree_scores_52_V;
wire  tree_scores_52_V_ap_vld;
wire [10 : 0] tree_scores_53_V;
wire  tree_scores_53_V_ap_vld;
wire [10 : 0] tree_scores_54_V;
wire  tree_scores_54_V_ap_vld;
wire [10 : 0] tree_scores_55_V;
wire  tree_scores_55_V_ap_vld;
wire [10 : 0] tree_scores_56_V;
wire  tree_scores_56_V_ap_vld;
wire [10 : 0] tree_scores_57_V;
wire  tree_scores_57_V_ap_vld;
wire [10 : 0] tree_scores_58_V;
wire  tree_scores_58_V_ap_vld;
wire [10 : 0] tree_scores_59_V;
wire  tree_scores_59_V_ap_vld;
wire [10 : 0] tree_scores_60_V;
wire  tree_scores_60_V_ap_vld;
wire [10 : 0] tree_scores_61_V;
wire  tree_scores_61_V_ap_vld;
wire [10 : 0] tree_scores_62_V;
wire  tree_scores_62_V_ap_vld;
wire [10 : 0] tree_scores_63_V;
wire  tree_scores_63_V_ap_vld;
wire [10 : 0] tree_scores_64_V;
wire  tree_scores_64_V_ap_vld;
wire [10 : 0] tree_scores_65_V;
wire  tree_scores_65_V_ap_vld;
wire [10 : 0] tree_scores_66_V;
wire  tree_scores_66_V_ap_vld;
wire [10 : 0] tree_scores_67_V;
wire  tree_scores_67_V_ap_vld;
wire [10 : 0] tree_scores_68_V;
wire  tree_scores_68_V_ap_vld;
wire [10 : 0] tree_scores_69_V;
wire  tree_scores_69_V_ap_vld;
wire [10 : 0] tree_scores_70_V;
wire  tree_scores_70_V_ap_vld;
wire [10 : 0] tree_scores_71_V;
wire  tree_scores_71_V_ap_vld;
wire [10 : 0] tree_scores_72_V;
wire  tree_scores_72_V_ap_vld;
wire [10 : 0] tree_scores_73_V;
wire  tree_scores_73_V_ap_vld;
wire [10 : 0] tree_scores_74_V;
wire  tree_scores_74_V_ap_vld;
wire [10 : 0] tree_scores_75_V;
wire  tree_scores_75_V_ap_vld;
wire [10 : 0] tree_scores_76_V;
wire  tree_scores_76_V_ap_vld;
wire [10 : 0] tree_scores_77_V;
wire  tree_scores_77_V_ap_vld;
wire [10 : 0] tree_scores_78_V;
wire  tree_scores_78_V_ap_vld;
wire [10 : 0] tree_scores_79_V;
wire  tree_scores_79_V_ap_vld;
wire [10 : 0] tree_scores_80_V;
wire  tree_scores_80_V_ap_vld;
wire [10 : 0] tree_scores_81_V;
wire  tree_scores_81_V_ap_vld;
wire [10 : 0] tree_scores_82_V;
wire  tree_scores_82_V_ap_vld;
wire [10 : 0] tree_scores_83_V;
wire  tree_scores_83_V_ap_vld;
wire [10 : 0] tree_scores_84_V;
wire  tree_scores_84_V_ap_vld;
wire [10 : 0] tree_scores_85_V;
wire  tree_scores_85_V_ap_vld;
wire [10 : 0] tree_scores_86_V;
wire  tree_scores_86_V_ap_vld;
wire [10 : 0] tree_scores_87_V;
wire  tree_scores_87_V_ap_vld;
wire [10 : 0] tree_scores_88_V;
wire  tree_scores_88_V_ap_vld;
wire [10 : 0] tree_scores_89_V;
wire  tree_scores_89_V_ap_vld;
wire [10 : 0] tree_scores_90_V;
wire  tree_scores_90_V_ap_vld;
wire [10 : 0] tree_scores_91_V;
wire  tree_scores_91_V_ap_vld;
wire [10 : 0] tree_scores_92_V;
wire  tree_scores_92_V_ap_vld;
wire [10 : 0] tree_scores_93_V;
wire  tree_scores_93_V_ap_vld;
wire [10 : 0] tree_scores_94_V;
wire  tree_scores_94_V_ap_vld;
wire [10 : 0] tree_scores_95_V;
wire  tree_scores_95_V_ap_vld;
wire [10 : 0] tree_scores_96_V;
wire  tree_scores_96_V_ap_vld;
wire [10 : 0] tree_scores_97_V;
wire  tree_scores_97_V_ap_vld;
wire [10 : 0] tree_scores_98_V;
wire  tree_scores_98_V_ap_vld;
wire [10 : 0] tree_scores_99_V;
wire  tree_scores_99_V_ap_vld;
integer done_cnt = 0;
integer AESL_ready_cnt = 0;
integer ready_cnt = 0;
reg ready_initial;
reg ready_initial_n;
reg ready_last_n;
reg ready_delay_last_n;
reg done_delay_last_n;
reg interface_done = 0;

wire ap_clk;
wire ap_rst;
wire ap_rst_n;

`AUTOTB_DUT `AUTOTB_DUT_INST(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(ap_start),
    .ap_done(ap_done),
    .ap_idle(ap_idle),
    .ap_ready(ap_ready),
    .x_0_V(x_0_V),
    .x_1_V(x_1_V),
    .x_2_V(x_2_V),
    .x_3_V(x_3_V),
    .x_4_V(x_4_V),
    .x_5_V(x_5_V),
    .x_6_V(x_6_V),
    .score_0_V(score_0_V),
    .score_0_V_ap_vld(score_0_V_ap_vld),
    .score_1_V(score_1_V),
    .tree_scores_0_V(tree_scores_0_V),
    .tree_scores_0_V_ap_vld(tree_scores_0_V_ap_vld),
    .tree_scores_1_V(tree_scores_1_V),
    .tree_scores_1_V_ap_vld(tree_scores_1_V_ap_vld),
    .tree_scores_2_V(tree_scores_2_V),
    .tree_scores_2_V_ap_vld(tree_scores_2_V_ap_vld),
    .tree_scores_3_V(tree_scores_3_V),
    .tree_scores_3_V_ap_vld(tree_scores_3_V_ap_vld),
    .tree_scores_4_V(tree_scores_4_V),
    .tree_scores_4_V_ap_vld(tree_scores_4_V_ap_vld),
    .tree_scores_5_V(tree_scores_5_V),
    .tree_scores_5_V_ap_vld(tree_scores_5_V_ap_vld),
    .tree_scores_6_V(tree_scores_6_V),
    .tree_scores_6_V_ap_vld(tree_scores_6_V_ap_vld),
    .tree_scores_7_V(tree_scores_7_V),
    .tree_scores_7_V_ap_vld(tree_scores_7_V_ap_vld),
    .tree_scores_8_V(tree_scores_8_V),
    .tree_scores_8_V_ap_vld(tree_scores_8_V_ap_vld),
    .tree_scores_9_V(tree_scores_9_V),
    .tree_scores_9_V_ap_vld(tree_scores_9_V_ap_vld),
    .tree_scores_10_V(tree_scores_10_V),
    .tree_scores_10_V_ap_vld(tree_scores_10_V_ap_vld),
    .tree_scores_11_V(tree_scores_11_V),
    .tree_scores_11_V_ap_vld(tree_scores_11_V_ap_vld),
    .tree_scores_12_V(tree_scores_12_V),
    .tree_scores_12_V_ap_vld(tree_scores_12_V_ap_vld),
    .tree_scores_13_V(tree_scores_13_V),
    .tree_scores_13_V_ap_vld(tree_scores_13_V_ap_vld),
    .tree_scores_14_V(tree_scores_14_V),
    .tree_scores_14_V_ap_vld(tree_scores_14_V_ap_vld),
    .tree_scores_15_V(tree_scores_15_V),
    .tree_scores_15_V_ap_vld(tree_scores_15_V_ap_vld),
    .tree_scores_16_V(tree_scores_16_V),
    .tree_scores_16_V_ap_vld(tree_scores_16_V_ap_vld),
    .tree_scores_17_V(tree_scores_17_V),
    .tree_scores_17_V_ap_vld(tree_scores_17_V_ap_vld),
    .tree_scores_18_V(tree_scores_18_V),
    .tree_scores_18_V_ap_vld(tree_scores_18_V_ap_vld),
    .tree_scores_19_V(tree_scores_19_V),
    .tree_scores_19_V_ap_vld(tree_scores_19_V_ap_vld),
    .tree_scores_20_V(tree_scores_20_V),
    .tree_scores_20_V_ap_vld(tree_scores_20_V_ap_vld),
    .tree_scores_21_V(tree_scores_21_V),
    .tree_scores_21_V_ap_vld(tree_scores_21_V_ap_vld),
    .tree_scores_22_V(tree_scores_22_V),
    .tree_scores_22_V_ap_vld(tree_scores_22_V_ap_vld),
    .tree_scores_23_V(tree_scores_23_V),
    .tree_scores_23_V_ap_vld(tree_scores_23_V_ap_vld),
    .tree_scores_24_V(tree_scores_24_V),
    .tree_scores_24_V_ap_vld(tree_scores_24_V_ap_vld),
    .tree_scores_25_V(tree_scores_25_V),
    .tree_scores_25_V_ap_vld(tree_scores_25_V_ap_vld),
    .tree_scores_26_V(tree_scores_26_V),
    .tree_scores_26_V_ap_vld(tree_scores_26_V_ap_vld),
    .tree_scores_27_V(tree_scores_27_V),
    .tree_scores_27_V_ap_vld(tree_scores_27_V_ap_vld),
    .tree_scores_28_V(tree_scores_28_V),
    .tree_scores_28_V_ap_vld(tree_scores_28_V_ap_vld),
    .tree_scores_29_V(tree_scores_29_V),
    .tree_scores_29_V_ap_vld(tree_scores_29_V_ap_vld),
    .tree_scores_30_V(tree_scores_30_V),
    .tree_scores_30_V_ap_vld(tree_scores_30_V_ap_vld),
    .tree_scores_31_V(tree_scores_31_V),
    .tree_scores_31_V_ap_vld(tree_scores_31_V_ap_vld),
    .tree_scores_32_V(tree_scores_32_V),
    .tree_scores_32_V_ap_vld(tree_scores_32_V_ap_vld),
    .tree_scores_33_V(tree_scores_33_V),
    .tree_scores_33_V_ap_vld(tree_scores_33_V_ap_vld),
    .tree_scores_34_V(tree_scores_34_V),
    .tree_scores_34_V_ap_vld(tree_scores_34_V_ap_vld),
    .tree_scores_35_V(tree_scores_35_V),
    .tree_scores_35_V_ap_vld(tree_scores_35_V_ap_vld),
    .tree_scores_36_V(tree_scores_36_V),
    .tree_scores_36_V_ap_vld(tree_scores_36_V_ap_vld),
    .tree_scores_37_V(tree_scores_37_V),
    .tree_scores_37_V_ap_vld(tree_scores_37_V_ap_vld),
    .tree_scores_38_V(tree_scores_38_V),
    .tree_scores_38_V_ap_vld(tree_scores_38_V_ap_vld),
    .tree_scores_39_V(tree_scores_39_V),
    .tree_scores_39_V_ap_vld(tree_scores_39_V_ap_vld),
    .tree_scores_40_V(tree_scores_40_V),
    .tree_scores_40_V_ap_vld(tree_scores_40_V_ap_vld),
    .tree_scores_41_V(tree_scores_41_V),
    .tree_scores_41_V_ap_vld(tree_scores_41_V_ap_vld),
    .tree_scores_42_V(tree_scores_42_V),
    .tree_scores_42_V_ap_vld(tree_scores_42_V_ap_vld),
    .tree_scores_43_V(tree_scores_43_V),
    .tree_scores_43_V_ap_vld(tree_scores_43_V_ap_vld),
    .tree_scores_44_V(tree_scores_44_V),
    .tree_scores_44_V_ap_vld(tree_scores_44_V_ap_vld),
    .tree_scores_45_V(tree_scores_45_V),
    .tree_scores_45_V_ap_vld(tree_scores_45_V_ap_vld),
    .tree_scores_46_V(tree_scores_46_V),
    .tree_scores_46_V_ap_vld(tree_scores_46_V_ap_vld),
    .tree_scores_47_V(tree_scores_47_V),
    .tree_scores_47_V_ap_vld(tree_scores_47_V_ap_vld),
    .tree_scores_48_V(tree_scores_48_V),
    .tree_scores_48_V_ap_vld(tree_scores_48_V_ap_vld),
    .tree_scores_49_V(tree_scores_49_V),
    .tree_scores_49_V_ap_vld(tree_scores_49_V_ap_vld),
    .tree_scores_50_V(tree_scores_50_V),
    .tree_scores_50_V_ap_vld(tree_scores_50_V_ap_vld),
    .tree_scores_51_V(tree_scores_51_V),
    .tree_scores_51_V_ap_vld(tree_scores_51_V_ap_vld),
    .tree_scores_52_V(tree_scores_52_V),
    .tree_scores_52_V_ap_vld(tree_scores_52_V_ap_vld),
    .tree_scores_53_V(tree_scores_53_V),
    .tree_scores_53_V_ap_vld(tree_scores_53_V_ap_vld),
    .tree_scores_54_V(tree_scores_54_V),
    .tree_scores_54_V_ap_vld(tree_scores_54_V_ap_vld),
    .tree_scores_55_V(tree_scores_55_V),
    .tree_scores_55_V_ap_vld(tree_scores_55_V_ap_vld),
    .tree_scores_56_V(tree_scores_56_V),
    .tree_scores_56_V_ap_vld(tree_scores_56_V_ap_vld),
    .tree_scores_57_V(tree_scores_57_V),
    .tree_scores_57_V_ap_vld(tree_scores_57_V_ap_vld),
    .tree_scores_58_V(tree_scores_58_V),
    .tree_scores_58_V_ap_vld(tree_scores_58_V_ap_vld),
    .tree_scores_59_V(tree_scores_59_V),
    .tree_scores_59_V_ap_vld(tree_scores_59_V_ap_vld),
    .tree_scores_60_V(tree_scores_60_V),
    .tree_scores_60_V_ap_vld(tree_scores_60_V_ap_vld),
    .tree_scores_61_V(tree_scores_61_V),
    .tree_scores_61_V_ap_vld(tree_scores_61_V_ap_vld),
    .tree_scores_62_V(tree_scores_62_V),
    .tree_scores_62_V_ap_vld(tree_scores_62_V_ap_vld),
    .tree_scores_63_V(tree_scores_63_V),
    .tree_scores_63_V_ap_vld(tree_scores_63_V_ap_vld),
    .tree_scores_64_V(tree_scores_64_V),
    .tree_scores_64_V_ap_vld(tree_scores_64_V_ap_vld),
    .tree_scores_65_V(tree_scores_65_V),
    .tree_scores_65_V_ap_vld(tree_scores_65_V_ap_vld),
    .tree_scores_66_V(tree_scores_66_V),
    .tree_scores_66_V_ap_vld(tree_scores_66_V_ap_vld),
    .tree_scores_67_V(tree_scores_67_V),
    .tree_scores_67_V_ap_vld(tree_scores_67_V_ap_vld),
    .tree_scores_68_V(tree_scores_68_V),
    .tree_scores_68_V_ap_vld(tree_scores_68_V_ap_vld),
    .tree_scores_69_V(tree_scores_69_V),
    .tree_scores_69_V_ap_vld(tree_scores_69_V_ap_vld),
    .tree_scores_70_V(tree_scores_70_V),
    .tree_scores_70_V_ap_vld(tree_scores_70_V_ap_vld),
    .tree_scores_71_V(tree_scores_71_V),
    .tree_scores_71_V_ap_vld(tree_scores_71_V_ap_vld),
    .tree_scores_72_V(tree_scores_72_V),
    .tree_scores_72_V_ap_vld(tree_scores_72_V_ap_vld),
    .tree_scores_73_V(tree_scores_73_V),
    .tree_scores_73_V_ap_vld(tree_scores_73_V_ap_vld),
    .tree_scores_74_V(tree_scores_74_V),
    .tree_scores_74_V_ap_vld(tree_scores_74_V_ap_vld),
    .tree_scores_75_V(tree_scores_75_V),
    .tree_scores_75_V_ap_vld(tree_scores_75_V_ap_vld),
    .tree_scores_76_V(tree_scores_76_V),
    .tree_scores_76_V_ap_vld(tree_scores_76_V_ap_vld),
    .tree_scores_77_V(tree_scores_77_V),
    .tree_scores_77_V_ap_vld(tree_scores_77_V_ap_vld),
    .tree_scores_78_V(tree_scores_78_V),
    .tree_scores_78_V_ap_vld(tree_scores_78_V_ap_vld),
    .tree_scores_79_V(tree_scores_79_V),
    .tree_scores_79_V_ap_vld(tree_scores_79_V_ap_vld),
    .tree_scores_80_V(tree_scores_80_V),
    .tree_scores_80_V_ap_vld(tree_scores_80_V_ap_vld),
    .tree_scores_81_V(tree_scores_81_V),
    .tree_scores_81_V_ap_vld(tree_scores_81_V_ap_vld),
    .tree_scores_82_V(tree_scores_82_V),
    .tree_scores_82_V_ap_vld(tree_scores_82_V_ap_vld),
    .tree_scores_83_V(tree_scores_83_V),
    .tree_scores_83_V_ap_vld(tree_scores_83_V_ap_vld),
    .tree_scores_84_V(tree_scores_84_V),
    .tree_scores_84_V_ap_vld(tree_scores_84_V_ap_vld),
    .tree_scores_85_V(tree_scores_85_V),
    .tree_scores_85_V_ap_vld(tree_scores_85_V_ap_vld),
    .tree_scores_86_V(tree_scores_86_V),
    .tree_scores_86_V_ap_vld(tree_scores_86_V_ap_vld),
    .tree_scores_87_V(tree_scores_87_V),
    .tree_scores_87_V_ap_vld(tree_scores_87_V_ap_vld),
    .tree_scores_88_V(tree_scores_88_V),
    .tree_scores_88_V_ap_vld(tree_scores_88_V_ap_vld),
    .tree_scores_89_V(tree_scores_89_V),
    .tree_scores_89_V_ap_vld(tree_scores_89_V_ap_vld),
    .tree_scores_90_V(tree_scores_90_V),
    .tree_scores_90_V_ap_vld(tree_scores_90_V_ap_vld),
    .tree_scores_91_V(tree_scores_91_V),
    .tree_scores_91_V_ap_vld(tree_scores_91_V_ap_vld),
    .tree_scores_92_V(tree_scores_92_V),
    .tree_scores_92_V_ap_vld(tree_scores_92_V_ap_vld),
    .tree_scores_93_V(tree_scores_93_V),
    .tree_scores_93_V_ap_vld(tree_scores_93_V_ap_vld),
    .tree_scores_94_V(tree_scores_94_V),
    .tree_scores_94_V_ap_vld(tree_scores_94_V_ap_vld),
    .tree_scores_95_V(tree_scores_95_V),
    .tree_scores_95_V_ap_vld(tree_scores_95_V_ap_vld),
    .tree_scores_96_V(tree_scores_96_V),
    .tree_scores_96_V_ap_vld(tree_scores_96_V_ap_vld),
    .tree_scores_97_V(tree_scores_97_V),
    .tree_scores_97_V_ap_vld(tree_scores_97_V_ap_vld),
    .tree_scores_98_V(tree_scores_98_V),
    .tree_scores_98_V_ap_vld(tree_scores_98_V_ap_vld),
    .tree_scores_99_V(tree_scores_99_V),
    .tree_scores_99_V_ap_vld(tree_scores_99_V_ap_vld));

// Assignment for control signal
assign ap_clk = AESL_clock;
assign ap_rst = AESL_reset;
assign ap_rst_n = ~AESL_reset;
assign AESL_reset = rst;
assign ap_start = AESL_start;
assign AESL_start = start;
assign AESL_done = ap_done;
assign AESL_idle = ap_idle;
assign AESL_ready = ap_ready;
assign AESL_ce = ce;
assign AESL_continue = tb_continue;
    always @(posedge AESL_clock) begin
        if (AESL_reset) begin
        end else begin
            if (AESL_done !== 1 && AESL_done !== 0) begin
                $display("ERROR: Control signal AESL_done is invalid!");
                $finish;
            end
        end
    end
    always @(posedge AESL_clock) begin
        if (AESL_reset) begin
        end else begin
            if (AESL_ready !== 1 && AESL_ready !== 0) begin
                $display("ERROR: Control signal AESL_ready is invalid!");
                $finish;
            end
        end
    end
// The signal of port x_0_V
reg [10: 0] AESL_REG_x_0_V = 0;
assign x_0_V = AESL_REG_x_0_V;
initial begin : read_file_process_x_0_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [207  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_x_0_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_x_0_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_x_0_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port x_1_V
reg [10: 0] AESL_REG_x_1_V = 0;
assign x_1_V = AESL_REG_x_1_V;
initial begin : read_file_process_x_1_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [207  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_x_1_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_x_1_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_x_1_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port x_2_V
reg [10: 0] AESL_REG_x_2_V = 0;
assign x_2_V = AESL_REG_x_2_V;
initial begin : read_file_process_x_2_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [207  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_x_2_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_x_2_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_x_2_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port x_3_V
reg [10: 0] AESL_REG_x_3_V = 0;
assign x_3_V = AESL_REG_x_3_V;
initial begin : read_file_process_x_3_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [207  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_x_3_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_x_3_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_x_3_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port x_4_V
reg [10: 0] AESL_REG_x_4_V = 0;
assign x_4_V = AESL_REG_x_4_V;
initial begin : read_file_process_x_4_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [207  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_x_4_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_x_4_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_x_4_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port x_5_V
reg [10: 0] AESL_REG_x_5_V = 0;
assign x_5_V = AESL_REG_x_5_V;
initial begin : read_file_process_x_5_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [207  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_x_5_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_x_5_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_x_5_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


// The signal of port x_6_V
reg [10: 0] AESL_REG_x_6_V = 0;
assign x_6_V = AESL_REG_x_6_V;
initial begin : read_file_process_x_6_V
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [207  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_x_6_V,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_x_6_V);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_x_6_V);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


reg AESL_REG_score_0_V_ap_vld = 0;
// The signal of port score_0_V
reg [10: 0] AESL_REG_score_0_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_score_0_V = 0; 
    else if(score_0_V_ap_vld) begin
        AESL_REG_score_0_V <= score_0_V;
        AESL_REG_score_0_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_score_0_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer score_0_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_score_0_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_score_0_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_score_0_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_score_0_V);
        AESL_REG_score_0_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


// The signal of port score_1_V
reg [10: 0] AESL_REG_score_1_V = 0;
assign score_1_V = AESL_REG_score_1_V;

reg AESL_REG_tree_scores_0_V_ap_vld = 0;
// The signal of port tree_scores_0_V
reg [10: 0] AESL_REG_tree_scores_0_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_0_V = 0; 
    else if(tree_scores_0_V_ap_vld) begin
        AESL_REG_tree_scores_0_V <= tree_scores_0_V;
        AESL_REG_tree_scores_0_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_0_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_0_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_0_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_0_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_0_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_0_V);
        AESL_REG_tree_scores_0_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_1_V_ap_vld = 0;
// The signal of port tree_scores_1_V
reg [10: 0] AESL_REG_tree_scores_1_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_1_V = 0; 
    else if(tree_scores_1_V_ap_vld) begin
        AESL_REG_tree_scores_1_V <= tree_scores_1_V;
        AESL_REG_tree_scores_1_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_1_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_1_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_1_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_1_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_1_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_1_V);
        AESL_REG_tree_scores_1_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_2_V_ap_vld = 0;
// The signal of port tree_scores_2_V
reg [10: 0] AESL_REG_tree_scores_2_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_2_V = 0; 
    else if(tree_scores_2_V_ap_vld) begin
        AESL_REG_tree_scores_2_V <= tree_scores_2_V;
        AESL_REG_tree_scores_2_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_2_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_2_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_2_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_2_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_2_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_2_V);
        AESL_REG_tree_scores_2_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_3_V_ap_vld = 0;
// The signal of port tree_scores_3_V
reg [10: 0] AESL_REG_tree_scores_3_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_3_V = 0; 
    else if(tree_scores_3_V_ap_vld) begin
        AESL_REG_tree_scores_3_V <= tree_scores_3_V;
        AESL_REG_tree_scores_3_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_3_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_3_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_3_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_3_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_3_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_3_V);
        AESL_REG_tree_scores_3_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_4_V_ap_vld = 0;
// The signal of port tree_scores_4_V
reg [10: 0] AESL_REG_tree_scores_4_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_4_V = 0; 
    else if(tree_scores_4_V_ap_vld) begin
        AESL_REG_tree_scores_4_V <= tree_scores_4_V;
        AESL_REG_tree_scores_4_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_4_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_4_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_4_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_4_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_4_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_4_V);
        AESL_REG_tree_scores_4_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_5_V_ap_vld = 0;
// The signal of port tree_scores_5_V
reg [10: 0] AESL_REG_tree_scores_5_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_5_V = 0; 
    else if(tree_scores_5_V_ap_vld) begin
        AESL_REG_tree_scores_5_V <= tree_scores_5_V;
        AESL_REG_tree_scores_5_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_5_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_5_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_5_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_5_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_5_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_5_V);
        AESL_REG_tree_scores_5_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_6_V_ap_vld = 0;
// The signal of port tree_scores_6_V
reg [10: 0] AESL_REG_tree_scores_6_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_6_V = 0; 
    else if(tree_scores_6_V_ap_vld) begin
        AESL_REG_tree_scores_6_V <= tree_scores_6_V;
        AESL_REG_tree_scores_6_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_6_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_6_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_6_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_6_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_6_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_6_V);
        AESL_REG_tree_scores_6_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_7_V_ap_vld = 0;
// The signal of port tree_scores_7_V
reg [10: 0] AESL_REG_tree_scores_7_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_7_V = 0; 
    else if(tree_scores_7_V_ap_vld) begin
        AESL_REG_tree_scores_7_V <= tree_scores_7_V;
        AESL_REG_tree_scores_7_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_7_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_7_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_7_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_7_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_7_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_7_V);
        AESL_REG_tree_scores_7_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_8_V_ap_vld = 0;
// The signal of port tree_scores_8_V
reg [10: 0] AESL_REG_tree_scores_8_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_8_V = 0; 
    else if(tree_scores_8_V_ap_vld) begin
        AESL_REG_tree_scores_8_V <= tree_scores_8_V;
        AESL_REG_tree_scores_8_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_8_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_8_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_8_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_8_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_8_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_8_V);
        AESL_REG_tree_scores_8_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_9_V_ap_vld = 0;
// The signal of port tree_scores_9_V
reg [10: 0] AESL_REG_tree_scores_9_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_9_V = 0; 
    else if(tree_scores_9_V_ap_vld) begin
        AESL_REG_tree_scores_9_V <= tree_scores_9_V;
        AESL_REG_tree_scores_9_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_9_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_9_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_9_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_9_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_9_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_9_V);
        AESL_REG_tree_scores_9_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_10_V_ap_vld = 0;
// The signal of port tree_scores_10_V
reg [10: 0] AESL_REG_tree_scores_10_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_10_V = 0; 
    else if(tree_scores_10_V_ap_vld) begin
        AESL_REG_tree_scores_10_V <= tree_scores_10_V;
        AESL_REG_tree_scores_10_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_10_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_10_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_10_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_10_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_10_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_10_V);
        AESL_REG_tree_scores_10_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_11_V_ap_vld = 0;
// The signal of port tree_scores_11_V
reg [10: 0] AESL_REG_tree_scores_11_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_11_V = 0; 
    else if(tree_scores_11_V_ap_vld) begin
        AESL_REG_tree_scores_11_V <= tree_scores_11_V;
        AESL_REG_tree_scores_11_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_11_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_11_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_11_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_11_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_11_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_11_V);
        AESL_REG_tree_scores_11_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_12_V_ap_vld = 0;
// The signal of port tree_scores_12_V
reg [10: 0] AESL_REG_tree_scores_12_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_12_V = 0; 
    else if(tree_scores_12_V_ap_vld) begin
        AESL_REG_tree_scores_12_V <= tree_scores_12_V;
        AESL_REG_tree_scores_12_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_12_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_12_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_12_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_12_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_12_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_12_V);
        AESL_REG_tree_scores_12_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_13_V_ap_vld = 0;
// The signal of port tree_scores_13_V
reg [10: 0] AESL_REG_tree_scores_13_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_13_V = 0; 
    else if(tree_scores_13_V_ap_vld) begin
        AESL_REG_tree_scores_13_V <= tree_scores_13_V;
        AESL_REG_tree_scores_13_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_13_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_13_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_13_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_13_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_13_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_13_V);
        AESL_REG_tree_scores_13_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_14_V_ap_vld = 0;
// The signal of port tree_scores_14_V
reg [10: 0] AESL_REG_tree_scores_14_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_14_V = 0; 
    else if(tree_scores_14_V_ap_vld) begin
        AESL_REG_tree_scores_14_V <= tree_scores_14_V;
        AESL_REG_tree_scores_14_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_14_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_14_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_14_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_14_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_14_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_14_V);
        AESL_REG_tree_scores_14_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_15_V_ap_vld = 0;
// The signal of port tree_scores_15_V
reg [10: 0] AESL_REG_tree_scores_15_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_15_V = 0; 
    else if(tree_scores_15_V_ap_vld) begin
        AESL_REG_tree_scores_15_V <= tree_scores_15_V;
        AESL_REG_tree_scores_15_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_15_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_15_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_15_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_15_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_15_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_15_V);
        AESL_REG_tree_scores_15_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_16_V_ap_vld = 0;
// The signal of port tree_scores_16_V
reg [10: 0] AESL_REG_tree_scores_16_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_16_V = 0; 
    else if(tree_scores_16_V_ap_vld) begin
        AESL_REG_tree_scores_16_V <= tree_scores_16_V;
        AESL_REG_tree_scores_16_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_16_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_16_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_16_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_16_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_16_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_16_V);
        AESL_REG_tree_scores_16_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_17_V_ap_vld = 0;
// The signal of port tree_scores_17_V
reg [10: 0] AESL_REG_tree_scores_17_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_17_V = 0; 
    else if(tree_scores_17_V_ap_vld) begin
        AESL_REG_tree_scores_17_V <= tree_scores_17_V;
        AESL_REG_tree_scores_17_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_17_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_17_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_17_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_17_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_17_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_17_V);
        AESL_REG_tree_scores_17_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_18_V_ap_vld = 0;
// The signal of port tree_scores_18_V
reg [10: 0] AESL_REG_tree_scores_18_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_18_V = 0; 
    else if(tree_scores_18_V_ap_vld) begin
        AESL_REG_tree_scores_18_V <= tree_scores_18_V;
        AESL_REG_tree_scores_18_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_18_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_18_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_18_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_18_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_18_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_18_V);
        AESL_REG_tree_scores_18_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_19_V_ap_vld = 0;
// The signal of port tree_scores_19_V
reg [10: 0] AESL_REG_tree_scores_19_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_19_V = 0; 
    else if(tree_scores_19_V_ap_vld) begin
        AESL_REG_tree_scores_19_V <= tree_scores_19_V;
        AESL_REG_tree_scores_19_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_19_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_19_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_19_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_19_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_19_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_19_V);
        AESL_REG_tree_scores_19_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_20_V_ap_vld = 0;
// The signal of port tree_scores_20_V
reg [10: 0] AESL_REG_tree_scores_20_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_20_V = 0; 
    else if(tree_scores_20_V_ap_vld) begin
        AESL_REG_tree_scores_20_V <= tree_scores_20_V;
        AESL_REG_tree_scores_20_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_20_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_20_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_20_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_20_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_20_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_20_V);
        AESL_REG_tree_scores_20_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_21_V_ap_vld = 0;
// The signal of port tree_scores_21_V
reg [10: 0] AESL_REG_tree_scores_21_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_21_V = 0; 
    else if(tree_scores_21_V_ap_vld) begin
        AESL_REG_tree_scores_21_V <= tree_scores_21_V;
        AESL_REG_tree_scores_21_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_21_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_21_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_21_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_21_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_21_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_21_V);
        AESL_REG_tree_scores_21_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_22_V_ap_vld = 0;
// The signal of port tree_scores_22_V
reg [10: 0] AESL_REG_tree_scores_22_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_22_V = 0; 
    else if(tree_scores_22_V_ap_vld) begin
        AESL_REG_tree_scores_22_V <= tree_scores_22_V;
        AESL_REG_tree_scores_22_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_22_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_22_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_22_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_22_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_22_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_22_V);
        AESL_REG_tree_scores_22_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_23_V_ap_vld = 0;
// The signal of port tree_scores_23_V
reg [10: 0] AESL_REG_tree_scores_23_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_23_V = 0; 
    else if(tree_scores_23_V_ap_vld) begin
        AESL_REG_tree_scores_23_V <= tree_scores_23_V;
        AESL_REG_tree_scores_23_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_23_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_23_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_23_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_23_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_23_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_23_V);
        AESL_REG_tree_scores_23_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_24_V_ap_vld = 0;
// The signal of port tree_scores_24_V
reg [10: 0] AESL_REG_tree_scores_24_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_24_V = 0; 
    else if(tree_scores_24_V_ap_vld) begin
        AESL_REG_tree_scores_24_V <= tree_scores_24_V;
        AESL_REG_tree_scores_24_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_24_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_24_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_24_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_24_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_24_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_24_V);
        AESL_REG_tree_scores_24_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_25_V_ap_vld = 0;
// The signal of port tree_scores_25_V
reg [10: 0] AESL_REG_tree_scores_25_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_25_V = 0; 
    else if(tree_scores_25_V_ap_vld) begin
        AESL_REG_tree_scores_25_V <= tree_scores_25_V;
        AESL_REG_tree_scores_25_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_25_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_25_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_25_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_25_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_25_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_25_V);
        AESL_REG_tree_scores_25_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_26_V_ap_vld = 0;
// The signal of port tree_scores_26_V
reg [10: 0] AESL_REG_tree_scores_26_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_26_V = 0; 
    else if(tree_scores_26_V_ap_vld) begin
        AESL_REG_tree_scores_26_V <= tree_scores_26_V;
        AESL_REG_tree_scores_26_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_26_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_26_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_26_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_26_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_26_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_26_V);
        AESL_REG_tree_scores_26_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_27_V_ap_vld = 0;
// The signal of port tree_scores_27_V
reg [10: 0] AESL_REG_tree_scores_27_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_27_V = 0; 
    else if(tree_scores_27_V_ap_vld) begin
        AESL_REG_tree_scores_27_V <= tree_scores_27_V;
        AESL_REG_tree_scores_27_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_27_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_27_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_27_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_27_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_27_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_27_V);
        AESL_REG_tree_scores_27_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_28_V_ap_vld = 0;
// The signal of port tree_scores_28_V
reg [10: 0] AESL_REG_tree_scores_28_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_28_V = 0; 
    else if(tree_scores_28_V_ap_vld) begin
        AESL_REG_tree_scores_28_V <= tree_scores_28_V;
        AESL_REG_tree_scores_28_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_28_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_28_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_28_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_28_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_28_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_28_V);
        AESL_REG_tree_scores_28_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_29_V_ap_vld = 0;
// The signal of port tree_scores_29_V
reg [10: 0] AESL_REG_tree_scores_29_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_29_V = 0; 
    else if(tree_scores_29_V_ap_vld) begin
        AESL_REG_tree_scores_29_V <= tree_scores_29_V;
        AESL_REG_tree_scores_29_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_29_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_29_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_29_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_29_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_29_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_29_V);
        AESL_REG_tree_scores_29_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_30_V_ap_vld = 0;
// The signal of port tree_scores_30_V
reg [10: 0] AESL_REG_tree_scores_30_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_30_V = 0; 
    else if(tree_scores_30_V_ap_vld) begin
        AESL_REG_tree_scores_30_V <= tree_scores_30_V;
        AESL_REG_tree_scores_30_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_30_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_30_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_30_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_30_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_30_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_30_V);
        AESL_REG_tree_scores_30_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_31_V_ap_vld = 0;
// The signal of port tree_scores_31_V
reg [10: 0] AESL_REG_tree_scores_31_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_31_V = 0; 
    else if(tree_scores_31_V_ap_vld) begin
        AESL_REG_tree_scores_31_V <= tree_scores_31_V;
        AESL_REG_tree_scores_31_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_31_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_31_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_31_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_31_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_31_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_31_V);
        AESL_REG_tree_scores_31_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_32_V_ap_vld = 0;
// The signal of port tree_scores_32_V
reg [10: 0] AESL_REG_tree_scores_32_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_32_V = 0; 
    else if(tree_scores_32_V_ap_vld) begin
        AESL_REG_tree_scores_32_V <= tree_scores_32_V;
        AESL_REG_tree_scores_32_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_32_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_32_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_32_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_32_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_32_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_32_V);
        AESL_REG_tree_scores_32_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_33_V_ap_vld = 0;
// The signal of port tree_scores_33_V
reg [10: 0] AESL_REG_tree_scores_33_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_33_V = 0; 
    else if(tree_scores_33_V_ap_vld) begin
        AESL_REG_tree_scores_33_V <= tree_scores_33_V;
        AESL_REG_tree_scores_33_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_33_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_33_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_33_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_33_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_33_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_33_V);
        AESL_REG_tree_scores_33_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_34_V_ap_vld = 0;
// The signal of port tree_scores_34_V
reg [10: 0] AESL_REG_tree_scores_34_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_34_V = 0; 
    else if(tree_scores_34_V_ap_vld) begin
        AESL_REG_tree_scores_34_V <= tree_scores_34_V;
        AESL_REG_tree_scores_34_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_34_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_34_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_34_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_34_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_34_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_34_V);
        AESL_REG_tree_scores_34_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_35_V_ap_vld = 0;
// The signal of port tree_scores_35_V
reg [10: 0] AESL_REG_tree_scores_35_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_35_V = 0; 
    else if(tree_scores_35_V_ap_vld) begin
        AESL_REG_tree_scores_35_V <= tree_scores_35_V;
        AESL_REG_tree_scores_35_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_35_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_35_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_35_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_35_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_35_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_35_V);
        AESL_REG_tree_scores_35_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_36_V_ap_vld = 0;
// The signal of port tree_scores_36_V
reg [10: 0] AESL_REG_tree_scores_36_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_36_V = 0; 
    else if(tree_scores_36_V_ap_vld) begin
        AESL_REG_tree_scores_36_V <= tree_scores_36_V;
        AESL_REG_tree_scores_36_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_36_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_36_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_36_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_36_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_36_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_36_V);
        AESL_REG_tree_scores_36_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_37_V_ap_vld = 0;
// The signal of port tree_scores_37_V
reg [10: 0] AESL_REG_tree_scores_37_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_37_V = 0; 
    else if(tree_scores_37_V_ap_vld) begin
        AESL_REG_tree_scores_37_V <= tree_scores_37_V;
        AESL_REG_tree_scores_37_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_37_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_37_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_37_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_37_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_37_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_37_V);
        AESL_REG_tree_scores_37_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_38_V_ap_vld = 0;
// The signal of port tree_scores_38_V
reg [10: 0] AESL_REG_tree_scores_38_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_38_V = 0; 
    else if(tree_scores_38_V_ap_vld) begin
        AESL_REG_tree_scores_38_V <= tree_scores_38_V;
        AESL_REG_tree_scores_38_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_38_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_38_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_38_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_38_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_38_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_38_V);
        AESL_REG_tree_scores_38_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_39_V_ap_vld = 0;
// The signal of port tree_scores_39_V
reg [10: 0] AESL_REG_tree_scores_39_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_39_V = 0; 
    else if(tree_scores_39_V_ap_vld) begin
        AESL_REG_tree_scores_39_V <= tree_scores_39_V;
        AESL_REG_tree_scores_39_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_39_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_39_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_39_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_39_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_39_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_39_V);
        AESL_REG_tree_scores_39_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_40_V_ap_vld = 0;
// The signal of port tree_scores_40_V
reg [10: 0] AESL_REG_tree_scores_40_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_40_V = 0; 
    else if(tree_scores_40_V_ap_vld) begin
        AESL_REG_tree_scores_40_V <= tree_scores_40_V;
        AESL_REG_tree_scores_40_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_40_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_40_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_40_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_40_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_40_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_40_V);
        AESL_REG_tree_scores_40_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_41_V_ap_vld = 0;
// The signal of port tree_scores_41_V
reg [10: 0] AESL_REG_tree_scores_41_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_41_V = 0; 
    else if(tree_scores_41_V_ap_vld) begin
        AESL_REG_tree_scores_41_V <= tree_scores_41_V;
        AESL_REG_tree_scores_41_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_41_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_41_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_41_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_41_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_41_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_41_V);
        AESL_REG_tree_scores_41_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_42_V_ap_vld = 0;
// The signal of port tree_scores_42_V
reg [10: 0] AESL_REG_tree_scores_42_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_42_V = 0; 
    else if(tree_scores_42_V_ap_vld) begin
        AESL_REG_tree_scores_42_V <= tree_scores_42_V;
        AESL_REG_tree_scores_42_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_42_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_42_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_42_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_42_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_42_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_42_V);
        AESL_REG_tree_scores_42_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_43_V_ap_vld = 0;
// The signal of port tree_scores_43_V
reg [10: 0] AESL_REG_tree_scores_43_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_43_V = 0; 
    else if(tree_scores_43_V_ap_vld) begin
        AESL_REG_tree_scores_43_V <= tree_scores_43_V;
        AESL_REG_tree_scores_43_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_43_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_43_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_43_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_43_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_43_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_43_V);
        AESL_REG_tree_scores_43_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_44_V_ap_vld = 0;
// The signal of port tree_scores_44_V
reg [10: 0] AESL_REG_tree_scores_44_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_44_V = 0; 
    else if(tree_scores_44_V_ap_vld) begin
        AESL_REG_tree_scores_44_V <= tree_scores_44_V;
        AESL_REG_tree_scores_44_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_44_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_44_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_44_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_44_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_44_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_44_V);
        AESL_REG_tree_scores_44_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_45_V_ap_vld = 0;
// The signal of port tree_scores_45_V
reg [10: 0] AESL_REG_tree_scores_45_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_45_V = 0; 
    else if(tree_scores_45_V_ap_vld) begin
        AESL_REG_tree_scores_45_V <= tree_scores_45_V;
        AESL_REG_tree_scores_45_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_45_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_45_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_45_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_45_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_45_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_45_V);
        AESL_REG_tree_scores_45_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_46_V_ap_vld = 0;
// The signal of port tree_scores_46_V
reg [10: 0] AESL_REG_tree_scores_46_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_46_V = 0; 
    else if(tree_scores_46_V_ap_vld) begin
        AESL_REG_tree_scores_46_V <= tree_scores_46_V;
        AESL_REG_tree_scores_46_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_46_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_46_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_46_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_46_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_46_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_46_V);
        AESL_REG_tree_scores_46_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_47_V_ap_vld = 0;
// The signal of port tree_scores_47_V
reg [10: 0] AESL_REG_tree_scores_47_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_47_V = 0; 
    else if(tree_scores_47_V_ap_vld) begin
        AESL_REG_tree_scores_47_V <= tree_scores_47_V;
        AESL_REG_tree_scores_47_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_47_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_47_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_47_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_47_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_47_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_47_V);
        AESL_REG_tree_scores_47_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_48_V_ap_vld = 0;
// The signal of port tree_scores_48_V
reg [10: 0] AESL_REG_tree_scores_48_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_48_V = 0; 
    else if(tree_scores_48_V_ap_vld) begin
        AESL_REG_tree_scores_48_V <= tree_scores_48_V;
        AESL_REG_tree_scores_48_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_48_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_48_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_48_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_48_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_48_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_48_V);
        AESL_REG_tree_scores_48_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_49_V_ap_vld = 0;
// The signal of port tree_scores_49_V
reg [10: 0] AESL_REG_tree_scores_49_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_49_V = 0; 
    else if(tree_scores_49_V_ap_vld) begin
        AESL_REG_tree_scores_49_V <= tree_scores_49_V;
        AESL_REG_tree_scores_49_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_49_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_49_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_49_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_49_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_49_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_49_V);
        AESL_REG_tree_scores_49_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_50_V_ap_vld = 0;
// The signal of port tree_scores_50_V
reg [10: 0] AESL_REG_tree_scores_50_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_50_V = 0; 
    else if(tree_scores_50_V_ap_vld) begin
        AESL_REG_tree_scores_50_V <= tree_scores_50_V;
        AESL_REG_tree_scores_50_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_50_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_50_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_50_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_50_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_50_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_50_V);
        AESL_REG_tree_scores_50_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_51_V_ap_vld = 0;
// The signal of port tree_scores_51_V
reg [10: 0] AESL_REG_tree_scores_51_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_51_V = 0; 
    else if(tree_scores_51_V_ap_vld) begin
        AESL_REG_tree_scores_51_V <= tree_scores_51_V;
        AESL_REG_tree_scores_51_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_51_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_51_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_51_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_51_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_51_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_51_V);
        AESL_REG_tree_scores_51_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_52_V_ap_vld = 0;
// The signal of port tree_scores_52_V
reg [10: 0] AESL_REG_tree_scores_52_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_52_V = 0; 
    else if(tree_scores_52_V_ap_vld) begin
        AESL_REG_tree_scores_52_V <= tree_scores_52_V;
        AESL_REG_tree_scores_52_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_52_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_52_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_52_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_52_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_52_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_52_V);
        AESL_REG_tree_scores_52_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_53_V_ap_vld = 0;
// The signal of port tree_scores_53_V
reg [10: 0] AESL_REG_tree_scores_53_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_53_V = 0; 
    else if(tree_scores_53_V_ap_vld) begin
        AESL_REG_tree_scores_53_V <= tree_scores_53_V;
        AESL_REG_tree_scores_53_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_53_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_53_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_53_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_53_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_53_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_53_V);
        AESL_REG_tree_scores_53_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_54_V_ap_vld = 0;
// The signal of port tree_scores_54_V
reg [10: 0] AESL_REG_tree_scores_54_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_54_V = 0; 
    else if(tree_scores_54_V_ap_vld) begin
        AESL_REG_tree_scores_54_V <= tree_scores_54_V;
        AESL_REG_tree_scores_54_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_54_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_54_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_54_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_54_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_54_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_54_V);
        AESL_REG_tree_scores_54_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_55_V_ap_vld = 0;
// The signal of port tree_scores_55_V
reg [10: 0] AESL_REG_tree_scores_55_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_55_V = 0; 
    else if(tree_scores_55_V_ap_vld) begin
        AESL_REG_tree_scores_55_V <= tree_scores_55_V;
        AESL_REG_tree_scores_55_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_55_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_55_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_55_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_55_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_55_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_55_V);
        AESL_REG_tree_scores_55_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_56_V_ap_vld = 0;
// The signal of port tree_scores_56_V
reg [10: 0] AESL_REG_tree_scores_56_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_56_V = 0; 
    else if(tree_scores_56_V_ap_vld) begin
        AESL_REG_tree_scores_56_V <= tree_scores_56_V;
        AESL_REG_tree_scores_56_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_56_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_56_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_56_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_56_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_56_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_56_V);
        AESL_REG_tree_scores_56_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_57_V_ap_vld = 0;
// The signal of port tree_scores_57_V
reg [10: 0] AESL_REG_tree_scores_57_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_57_V = 0; 
    else if(tree_scores_57_V_ap_vld) begin
        AESL_REG_tree_scores_57_V <= tree_scores_57_V;
        AESL_REG_tree_scores_57_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_57_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_57_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_57_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_57_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_57_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_57_V);
        AESL_REG_tree_scores_57_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_58_V_ap_vld = 0;
// The signal of port tree_scores_58_V
reg [10: 0] AESL_REG_tree_scores_58_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_58_V = 0; 
    else if(tree_scores_58_V_ap_vld) begin
        AESL_REG_tree_scores_58_V <= tree_scores_58_V;
        AESL_REG_tree_scores_58_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_58_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_58_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_58_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_58_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_58_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_58_V);
        AESL_REG_tree_scores_58_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_59_V_ap_vld = 0;
// The signal of port tree_scores_59_V
reg [10: 0] AESL_REG_tree_scores_59_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_59_V = 0; 
    else if(tree_scores_59_V_ap_vld) begin
        AESL_REG_tree_scores_59_V <= tree_scores_59_V;
        AESL_REG_tree_scores_59_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_59_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_59_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_59_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_59_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_59_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_59_V);
        AESL_REG_tree_scores_59_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_60_V_ap_vld = 0;
// The signal of port tree_scores_60_V
reg [10: 0] AESL_REG_tree_scores_60_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_60_V = 0; 
    else if(tree_scores_60_V_ap_vld) begin
        AESL_REG_tree_scores_60_V <= tree_scores_60_V;
        AESL_REG_tree_scores_60_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_60_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_60_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_60_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_60_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_60_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_60_V);
        AESL_REG_tree_scores_60_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_61_V_ap_vld = 0;
// The signal of port tree_scores_61_V
reg [10: 0] AESL_REG_tree_scores_61_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_61_V = 0; 
    else if(tree_scores_61_V_ap_vld) begin
        AESL_REG_tree_scores_61_V <= tree_scores_61_V;
        AESL_REG_tree_scores_61_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_61_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_61_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_61_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_61_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_61_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_61_V);
        AESL_REG_tree_scores_61_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_62_V_ap_vld = 0;
// The signal of port tree_scores_62_V
reg [10: 0] AESL_REG_tree_scores_62_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_62_V = 0; 
    else if(tree_scores_62_V_ap_vld) begin
        AESL_REG_tree_scores_62_V <= tree_scores_62_V;
        AESL_REG_tree_scores_62_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_62_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_62_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_62_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_62_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_62_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_62_V);
        AESL_REG_tree_scores_62_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_63_V_ap_vld = 0;
// The signal of port tree_scores_63_V
reg [10: 0] AESL_REG_tree_scores_63_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_63_V = 0; 
    else if(tree_scores_63_V_ap_vld) begin
        AESL_REG_tree_scores_63_V <= tree_scores_63_V;
        AESL_REG_tree_scores_63_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_63_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_63_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_63_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_63_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_63_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_63_V);
        AESL_REG_tree_scores_63_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_64_V_ap_vld = 0;
// The signal of port tree_scores_64_V
reg [10: 0] AESL_REG_tree_scores_64_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_64_V = 0; 
    else if(tree_scores_64_V_ap_vld) begin
        AESL_REG_tree_scores_64_V <= tree_scores_64_V;
        AESL_REG_tree_scores_64_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_64_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_64_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_64_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_64_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_64_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_64_V);
        AESL_REG_tree_scores_64_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_65_V_ap_vld = 0;
// The signal of port tree_scores_65_V
reg [10: 0] AESL_REG_tree_scores_65_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_65_V = 0; 
    else if(tree_scores_65_V_ap_vld) begin
        AESL_REG_tree_scores_65_V <= tree_scores_65_V;
        AESL_REG_tree_scores_65_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_65_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_65_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_65_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_65_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_65_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_65_V);
        AESL_REG_tree_scores_65_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_66_V_ap_vld = 0;
// The signal of port tree_scores_66_V
reg [10: 0] AESL_REG_tree_scores_66_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_66_V = 0; 
    else if(tree_scores_66_V_ap_vld) begin
        AESL_REG_tree_scores_66_V <= tree_scores_66_V;
        AESL_REG_tree_scores_66_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_66_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_66_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_66_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_66_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_66_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_66_V);
        AESL_REG_tree_scores_66_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_67_V_ap_vld = 0;
// The signal of port tree_scores_67_V
reg [10: 0] AESL_REG_tree_scores_67_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_67_V = 0; 
    else if(tree_scores_67_V_ap_vld) begin
        AESL_REG_tree_scores_67_V <= tree_scores_67_V;
        AESL_REG_tree_scores_67_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_67_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_67_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_67_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_67_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_67_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_67_V);
        AESL_REG_tree_scores_67_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_68_V_ap_vld = 0;
// The signal of port tree_scores_68_V
reg [10: 0] AESL_REG_tree_scores_68_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_68_V = 0; 
    else if(tree_scores_68_V_ap_vld) begin
        AESL_REG_tree_scores_68_V <= tree_scores_68_V;
        AESL_REG_tree_scores_68_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_68_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_68_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_68_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_68_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_68_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_68_V);
        AESL_REG_tree_scores_68_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_69_V_ap_vld = 0;
// The signal of port tree_scores_69_V
reg [10: 0] AESL_REG_tree_scores_69_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_69_V = 0; 
    else if(tree_scores_69_V_ap_vld) begin
        AESL_REG_tree_scores_69_V <= tree_scores_69_V;
        AESL_REG_tree_scores_69_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_69_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_69_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_69_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_69_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_69_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_69_V);
        AESL_REG_tree_scores_69_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_70_V_ap_vld = 0;
// The signal of port tree_scores_70_V
reg [10: 0] AESL_REG_tree_scores_70_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_70_V = 0; 
    else if(tree_scores_70_V_ap_vld) begin
        AESL_REG_tree_scores_70_V <= tree_scores_70_V;
        AESL_REG_tree_scores_70_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_70_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_70_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_70_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_70_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_70_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_70_V);
        AESL_REG_tree_scores_70_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_71_V_ap_vld = 0;
// The signal of port tree_scores_71_V
reg [10: 0] AESL_REG_tree_scores_71_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_71_V = 0; 
    else if(tree_scores_71_V_ap_vld) begin
        AESL_REG_tree_scores_71_V <= tree_scores_71_V;
        AESL_REG_tree_scores_71_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_71_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_71_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_71_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_71_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_71_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_71_V);
        AESL_REG_tree_scores_71_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_72_V_ap_vld = 0;
// The signal of port tree_scores_72_V
reg [10: 0] AESL_REG_tree_scores_72_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_72_V = 0; 
    else if(tree_scores_72_V_ap_vld) begin
        AESL_REG_tree_scores_72_V <= tree_scores_72_V;
        AESL_REG_tree_scores_72_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_72_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_72_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_72_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_72_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_72_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_72_V);
        AESL_REG_tree_scores_72_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_73_V_ap_vld = 0;
// The signal of port tree_scores_73_V
reg [10: 0] AESL_REG_tree_scores_73_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_73_V = 0; 
    else if(tree_scores_73_V_ap_vld) begin
        AESL_REG_tree_scores_73_V <= tree_scores_73_V;
        AESL_REG_tree_scores_73_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_73_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_73_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_73_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_73_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_73_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_73_V);
        AESL_REG_tree_scores_73_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_74_V_ap_vld = 0;
// The signal of port tree_scores_74_V
reg [10: 0] AESL_REG_tree_scores_74_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_74_V = 0; 
    else if(tree_scores_74_V_ap_vld) begin
        AESL_REG_tree_scores_74_V <= tree_scores_74_V;
        AESL_REG_tree_scores_74_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_74_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_74_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_74_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_74_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_74_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_74_V);
        AESL_REG_tree_scores_74_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_75_V_ap_vld = 0;
// The signal of port tree_scores_75_V
reg [10: 0] AESL_REG_tree_scores_75_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_75_V = 0; 
    else if(tree_scores_75_V_ap_vld) begin
        AESL_REG_tree_scores_75_V <= tree_scores_75_V;
        AESL_REG_tree_scores_75_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_75_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_75_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_75_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_75_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_75_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_75_V);
        AESL_REG_tree_scores_75_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_76_V_ap_vld = 0;
// The signal of port tree_scores_76_V
reg [10: 0] AESL_REG_tree_scores_76_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_76_V = 0; 
    else if(tree_scores_76_V_ap_vld) begin
        AESL_REG_tree_scores_76_V <= tree_scores_76_V;
        AESL_REG_tree_scores_76_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_76_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_76_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_76_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_76_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_76_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_76_V);
        AESL_REG_tree_scores_76_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_77_V_ap_vld = 0;
// The signal of port tree_scores_77_V
reg [10: 0] AESL_REG_tree_scores_77_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_77_V = 0; 
    else if(tree_scores_77_V_ap_vld) begin
        AESL_REG_tree_scores_77_V <= tree_scores_77_V;
        AESL_REG_tree_scores_77_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_77_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_77_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_77_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_77_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_77_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_77_V);
        AESL_REG_tree_scores_77_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_78_V_ap_vld = 0;
// The signal of port tree_scores_78_V
reg [10: 0] AESL_REG_tree_scores_78_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_78_V = 0; 
    else if(tree_scores_78_V_ap_vld) begin
        AESL_REG_tree_scores_78_V <= tree_scores_78_V;
        AESL_REG_tree_scores_78_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_78_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_78_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_78_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_78_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_78_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_78_V);
        AESL_REG_tree_scores_78_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_79_V_ap_vld = 0;
// The signal of port tree_scores_79_V
reg [10: 0] AESL_REG_tree_scores_79_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_79_V = 0; 
    else if(tree_scores_79_V_ap_vld) begin
        AESL_REG_tree_scores_79_V <= tree_scores_79_V;
        AESL_REG_tree_scores_79_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_79_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_79_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_79_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_79_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_79_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_79_V);
        AESL_REG_tree_scores_79_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_80_V_ap_vld = 0;
// The signal of port tree_scores_80_V
reg [10: 0] AESL_REG_tree_scores_80_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_80_V = 0; 
    else if(tree_scores_80_V_ap_vld) begin
        AESL_REG_tree_scores_80_V <= tree_scores_80_V;
        AESL_REG_tree_scores_80_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_80_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_80_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_80_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_80_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_80_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_80_V);
        AESL_REG_tree_scores_80_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_81_V_ap_vld = 0;
// The signal of port tree_scores_81_V
reg [10: 0] AESL_REG_tree_scores_81_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_81_V = 0; 
    else if(tree_scores_81_V_ap_vld) begin
        AESL_REG_tree_scores_81_V <= tree_scores_81_V;
        AESL_REG_tree_scores_81_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_81_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_81_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_81_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_81_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_81_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_81_V);
        AESL_REG_tree_scores_81_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_82_V_ap_vld = 0;
// The signal of port tree_scores_82_V
reg [10: 0] AESL_REG_tree_scores_82_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_82_V = 0; 
    else if(tree_scores_82_V_ap_vld) begin
        AESL_REG_tree_scores_82_V <= tree_scores_82_V;
        AESL_REG_tree_scores_82_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_82_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_82_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_82_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_82_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_82_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_82_V);
        AESL_REG_tree_scores_82_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_83_V_ap_vld = 0;
// The signal of port tree_scores_83_V
reg [10: 0] AESL_REG_tree_scores_83_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_83_V = 0; 
    else if(tree_scores_83_V_ap_vld) begin
        AESL_REG_tree_scores_83_V <= tree_scores_83_V;
        AESL_REG_tree_scores_83_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_83_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_83_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_83_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_83_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_83_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_83_V);
        AESL_REG_tree_scores_83_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_84_V_ap_vld = 0;
// The signal of port tree_scores_84_V
reg [10: 0] AESL_REG_tree_scores_84_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_84_V = 0; 
    else if(tree_scores_84_V_ap_vld) begin
        AESL_REG_tree_scores_84_V <= tree_scores_84_V;
        AESL_REG_tree_scores_84_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_84_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_84_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_84_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_84_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_84_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_84_V);
        AESL_REG_tree_scores_84_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_85_V_ap_vld = 0;
// The signal of port tree_scores_85_V
reg [10: 0] AESL_REG_tree_scores_85_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_85_V = 0; 
    else if(tree_scores_85_V_ap_vld) begin
        AESL_REG_tree_scores_85_V <= tree_scores_85_V;
        AESL_REG_tree_scores_85_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_85_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_85_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_85_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_85_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_85_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_85_V);
        AESL_REG_tree_scores_85_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_86_V_ap_vld = 0;
// The signal of port tree_scores_86_V
reg [10: 0] AESL_REG_tree_scores_86_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_86_V = 0; 
    else if(tree_scores_86_V_ap_vld) begin
        AESL_REG_tree_scores_86_V <= tree_scores_86_V;
        AESL_REG_tree_scores_86_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_86_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_86_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_86_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_86_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_86_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_86_V);
        AESL_REG_tree_scores_86_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_87_V_ap_vld = 0;
// The signal of port tree_scores_87_V
reg [10: 0] AESL_REG_tree_scores_87_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_87_V = 0; 
    else if(tree_scores_87_V_ap_vld) begin
        AESL_REG_tree_scores_87_V <= tree_scores_87_V;
        AESL_REG_tree_scores_87_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_87_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_87_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_87_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_87_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_87_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_87_V);
        AESL_REG_tree_scores_87_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_88_V_ap_vld = 0;
// The signal of port tree_scores_88_V
reg [10: 0] AESL_REG_tree_scores_88_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_88_V = 0; 
    else if(tree_scores_88_V_ap_vld) begin
        AESL_REG_tree_scores_88_V <= tree_scores_88_V;
        AESL_REG_tree_scores_88_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_88_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_88_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_88_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_88_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_88_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_88_V);
        AESL_REG_tree_scores_88_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_89_V_ap_vld = 0;
// The signal of port tree_scores_89_V
reg [10: 0] AESL_REG_tree_scores_89_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_89_V = 0; 
    else if(tree_scores_89_V_ap_vld) begin
        AESL_REG_tree_scores_89_V <= tree_scores_89_V;
        AESL_REG_tree_scores_89_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_89_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_89_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_89_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_89_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_89_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_89_V);
        AESL_REG_tree_scores_89_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_90_V_ap_vld = 0;
// The signal of port tree_scores_90_V
reg [10: 0] AESL_REG_tree_scores_90_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_90_V = 0; 
    else if(tree_scores_90_V_ap_vld) begin
        AESL_REG_tree_scores_90_V <= tree_scores_90_V;
        AESL_REG_tree_scores_90_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_90_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_90_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_90_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_90_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_90_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_90_V);
        AESL_REG_tree_scores_90_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_91_V_ap_vld = 0;
// The signal of port tree_scores_91_V
reg [10: 0] AESL_REG_tree_scores_91_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_91_V = 0; 
    else if(tree_scores_91_V_ap_vld) begin
        AESL_REG_tree_scores_91_V <= tree_scores_91_V;
        AESL_REG_tree_scores_91_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_91_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_91_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_91_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_91_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_91_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_91_V);
        AESL_REG_tree_scores_91_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_92_V_ap_vld = 0;
// The signal of port tree_scores_92_V
reg [10: 0] AESL_REG_tree_scores_92_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_92_V = 0; 
    else if(tree_scores_92_V_ap_vld) begin
        AESL_REG_tree_scores_92_V <= tree_scores_92_V;
        AESL_REG_tree_scores_92_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_92_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_92_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_92_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_92_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_92_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_92_V);
        AESL_REG_tree_scores_92_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_93_V_ap_vld = 0;
// The signal of port tree_scores_93_V
reg [10: 0] AESL_REG_tree_scores_93_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_93_V = 0; 
    else if(tree_scores_93_V_ap_vld) begin
        AESL_REG_tree_scores_93_V <= tree_scores_93_V;
        AESL_REG_tree_scores_93_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_93_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_93_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_93_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_93_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_93_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_93_V);
        AESL_REG_tree_scores_93_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_94_V_ap_vld = 0;
// The signal of port tree_scores_94_V
reg [10: 0] AESL_REG_tree_scores_94_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_94_V = 0; 
    else if(tree_scores_94_V_ap_vld) begin
        AESL_REG_tree_scores_94_V <= tree_scores_94_V;
        AESL_REG_tree_scores_94_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_94_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_94_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_94_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_94_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_94_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_94_V);
        AESL_REG_tree_scores_94_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_95_V_ap_vld = 0;
// The signal of port tree_scores_95_V
reg [10: 0] AESL_REG_tree_scores_95_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_95_V = 0; 
    else if(tree_scores_95_V_ap_vld) begin
        AESL_REG_tree_scores_95_V <= tree_scores_95_V;
        AESL_REG_tree_scores_95_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_95_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_95_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_95_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_95_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_95_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_95_V);
        AESL_REG_tree_scores_95_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_96_V_ap_vld = 0;
// The signal of port tree_scores_96_V
reg [10: 0] AESL_REG_tree_scores_96_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_96_V = 0; 
    else if(tree_scores_96_V_ap_vld) begin
        AESL_REG_tree_scores_96_V <= tree_scores_96_V;
        AESL_REG_tree_scores_96_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_96_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_96_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_96_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_96_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_96_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_96_V);
        AESL_REG_tree_scores_96_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_97_V_ap_vld = 0;
// The signal of port tree_scores_97_V
reg [10: 0] AESL_REG_tree_scores_97_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_97_V = 0; 
    else if(tree_scores_97_V_ap_vld) begin
        AESL_REG_tree_scores_97_V <= tree_scores_97_V;
        AESL_REG_tree_scores_97_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_97_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_97_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_97_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_97_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_97_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_97_V);
        AESL_REG_tree_scores_97_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_98_V_ap_vld = 0;
// The signal of port tree_scores_98_V
reg [10: 0] AESL_REG_tree_scores_98_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_98_V = 0; 
    else if(tree_scores_98_V_ap_vld) begin
        AESL_REG_tree_scores_98_V <= tree_scores_98_V;
        AESL_REG_tree_scores_98_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_98_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_98_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_98_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_98_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_98_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_98_V);
        AESL_REG_tree_scores_98_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


reg AESL_REG_tree_scores_99_V_ap_vld = 0;
// The signal of port tree_scores_99_V
reg [10: 0] AESL_REG_tree_scores_99_V = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_tree_scores_99_V = 0; 
    else if(tree_scores_99_V_ap_vld) begin
        AESL_REG_tree_scores_99_V <= tree_scores_99_V;
        AESL_REG_tree_scores_99_V_ap_vld <= 1;
    end
end 

initial begin : write_file_process_tree_scores_99_V
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer tree_scores_99_V_count;
    reg [207:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_tree_scores_99_V_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_tree_scores_99_V_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_tree_scores_99_V_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_tree_scores_99_V);
        AESL_REG_tree_scores_99_V_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


initial begin : generate_AESL_ready_cnt_proc
    AESL_ready_cnt = 0;
    wait(AESL_reset === 0);
    while(AESL_ready_cnt != AUTOTB_TRANSACTION_NUM) begin
        while(AESL_ready !== 1) begin
            @(posedge AESL_clock);
            # 0.4;
        end
        @(negedge AESL_clock);
        AESL_ready_cnt = AESL_ready_cnt + 1;
        @(posedge AESL_clock);
        # 0.4;
    end
end

    event next_trigger_ready_cnt;
    
    initial begin : gen_ready_cnt
        ready_cnt = 0;
        wait (AESL_reset === 0);
        forever begin
            @ (posedge AESL_clock);
            if (ready == 1) begin
                if (ready_cnt < AUTOTB_TRANSACTION_NUM) begin
                    ready_cnt = ready_cnt + 1;
                end
            end
            -> next_trigger_ready_cnt;
        end
    end
    
    wire all_finish = (done_cnt == AUTOTB_TRANSACTION_NUM);
    
    // done_cnt
    always @ (posedge AESL_clock) begin
        if (AESL_reset) begin
            done_cnt <= 0;
        end else begin
            if (AESL_done == 1) begin
                if (done_cnt < AUTOTB_TRANSACTION_NUM) begin
                    done_cnt <= done_cnt + 1;
                end
            end
        end
    end
    
    initial begin : finish_simulation
        wait (all_finish == 1);
        // last transaction is saved at negedge right after last done
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
        $finish;
    end
    
initial begin
    AESL_clock = 0;
    forever #`AUTOTB_CLOCK_PERIOD_DIV2 AESL_clock = ~AESL_clock;
end


reg end_x_0_V;
reg [31:0] size_x_0_V;
reg [31:0] size_x_0_V_backup;
reg end_x_1_V;
reg [31:0] size_x_1_V;
reg [31:0] size_x_1_V_backup;
reg end_x_2_V;
reg [31:0] size_x_2_V;
reg [31:0] size_x_2_V_backup;
reg end_x_3_V;
reg [31:0] size_x_3_V;
reg [31:0] size_x_3_V_backup;
reg end_x_4_V;
reg [31:0] size_x_4_V;
reg [31:0] size_x_4_V_backup;
reg end_x_5_V;
reg [31:0] size_x_5_V;
reg [31:0] size_x_5_V_backup;
reg end_x_6_V;
reg [31:0] size_x_6_V;
reg [31:0] size_x_6_V_backup;
reg end_score_0_V;
reg [31:0] size_score_0_V;
reg [31:0] size_score_0_V_backup;
reg end_tree_scores_0_V;
reg [31:0] size_tree_scores_0_V;
reg [31:0] size_tree_scores_0_V_backup;
reg end_tree_scores_1_V;
reg [31:0] size_tree_scores_1_V;
reg [31:0] size_tree_scores_1_V_backup;
reg end_tree_scores_2_V;
reg [31:0] size_tree_scores_2_V;
reg [31:0] size_tree_scores_2_V_backup;
reg end_tree_scores_3_V;
reg [31:0] size_tree_scores_3_V;
reg [31:0] size_tree_scores_3_V_backup;
reg end_tree_scores_4_V;
reg [31:0] size_tree_scores_4_V;
reg [31:0] size_tree_scores_4_V_backup;
reg end_tree_scores_5_V;
reg [31:0] size_tree_scores_5_V;
reg [31:0] size_tree_scores_5_V_backup;
reg end_tree_scores_6_V;
reg [31:0] size_tree_scores_6_V;
reg [31:0] size_tree_scores_6_V_backup;
reg end_tree_scores_7_V;
reg [31:0] size_tree_scores_7_V;
reg [31:0] size_tree_scores_7_V_backup;
reg end_tree_scores_8_V;
reg [31:0] size_tree_scores_8_V;
reg [31:0] size_tree_scores_8_V_backup;
reg end_tree_scores_9_V;
reg [31:0] size_tree_scores_9_V;
reg [31:0] size_tree_scores_9_V_backup;
reg end_tree_scores_10_V;
reg [31:0] size_tree_scores_10_V;
reg [31:0] size_tree_scores_10_V_backup;
reg end_tree_scores_11_V;
reg [31:0] size_tree_scores_11_V;
reg [31:0] size_tree_scores_11_V_backup;
reg end_tree_scores_12_V;
reg [31:0] size_tree_scores_12_V;
reg [31:0] size_tree_scores_12_V_backup;
reg end_tree_scores_13_V;
reg [31:0] size_tree_scores_13_V;
reg [31:0] size_tree_scores_13_V_backup;
reg end_tree_scores_14_V;
reg [31:0] size_tree_scores_14_V;
reg [31:0] size_tree_scores_14_V_backup;
reg end_tree_scores_15_V;
reg [31:0] size_tree_scores_15_V;
reg [31:0] size_tree_scores_15_V_backup;
reg end_tree_scores_16_V;
reg [31:0] size_tree_scores_16_V;
reg [31:0] size_tree_scores_16_V_backup;
reg end_tree_scores_17_V;
reg [31:0] size_tree_scores_17_V;
reg [31:0] size_tree_scores_17_V_backup;
reg end_tree_scores_18_V;
reg [31:0] size_tree_scores_18_V;
reg [31:0] size_tree_scores_18_V_backup;
reg end_tree_scores_19_V;
reg [31:0] size_tree_scores_19_V;
reg [31:0] size_tree_scores_19_V_backup;
reg end_tree_scores_20_V;
reg [31:0] size_tree_scores_20_V;
reg [31:0] size_tree_scores_20_V_backup;
reg end_tree_scores_21_V;
reg [31:0] size_tree_scores_21_V;
reg [31:0] size_tree_scores_21_V_backup;
reg end_tree_scores_22_V;
reg [31:0] size_tree_scores_22_V;
reg [31:0] size_tree_scores_22_V_backup;
reg end_tree_scores_23_V;
reg [31:0] size_tree_scores_23_V;
reg [31:0] size_tree_scores_23_V_backup;
reg end_tree_scores_24_V;
reg [31:0] size_tree_scores_24_V;
reg [31:0] size_tree_scores_24_V_backup;
reg end_tree_scores_25_V;
reg [31:0] size_tree_scores_25_V;
reg [31:0] size_tree_scores_25_V_backup;
reg end_tree_scores_26_V;
reg [31:0] size_tree_scores_26_V;
reg [31:0] size_tree_scores_26_V_backup;
reg end_tree_scores_27_V;
reg [31:0] size_tree_scores_27_V;
reg [31:0] size_tree_scores_27_V_backup;
reg end_tree_scores_28_V;
reg [31:0] size_tree_scores_28_V;
reg [31:0] size_tree_scores_28_V_backup;
reg end_tree_scores_29_V;
reg [31:0] size_tree_scores_29_V;
reg [31:0] size_tree_scores_29_V_backup;
reg end_tree_scores_30_V;
reg [31:0] size_tree_scores_30_V;
reg [31:0] size_tree_scores_30_V_backup;
reg end_tree_scores_31_V;
reg [31:0] size_tree_scores_31_V;
reg [31:0] size_tree_scores_31_V_backup;
reg end_tree_scores_32_V;
reg [31:0] size_tree_scores_32_V;
reg [31:0] size_tree_scores_32_V_backup;
reg end_tree_scores_33_V;
reg [31:0] size_tree_scores_33_V;
reg [31:0] size_tree_scores_33_V_backup;
reg end_tree_scores_34_V;
reg [31:0] size_tree_scores_34_V;
reg [31:0] size_tree_scores_34_V_backup;
reg end_tree_scores_35_V;
reg [31:0] size_tree_scores_35_V;
reg [31:0] size_tree_scores_35_V_backup;
reg end_tree_scores_36_V;
reg [31:0] size_tree_scores_36_V;
reg [31:0] size_tree_scores_36_V_backup;
reg end_tree_scores_37_V;
reg [31:0] size_tree_scores_37_V;
reg [31:0] size_tree_scores_37_V_backup;
reg end_tree_scores_38_V;
reg [31:0] size_tree_scores_38_V;
reg [31:0] size_tree_scores_38_V_backup;
reg end_tree_scores_39_V;
reg [31:0] size_tree_scores_39_V;
reg [31:0] size_tree_scores_39_V_backup;
reg end_tree_scores_40_V;
reg [31:0] size_tree_scores_40_V;
reg [31:0] size_tree_scores_40_V_backup;
reg end_tree_scores_41_V;
reg [31:0] size_tree_scores_41_V;
reg [31:0] size_tree_scores_41_V_backup;
reg end_tree_scores_42_V;
reg [31:0] size_tree_scores_42_V;
reg [31:0] size_tree_scores_42_V_backup;
reg end_tree_scores_43_V;
reg [31:0] size_tree_scores_43_V;
reg [31:0] size_tree_scores_43_V_backup;
reg end_tree_scores_44_V;
reg [31:0] size_tree_scores_44_V;
reg [31:0] size_tree_scores_44_V_backup;
reg end_tree_scores_45_V;
reg [31:0] size_tree_scores_45_V;
reg [31:0] size_tree_scores_45_V_backup;
reg end_tree_scores_46_V;
reg [31:0] size_tree_scores_46_V;
reg [31:0] size_tree_scores_46_V_backup;
reg end_tree_scores_47_V;
reg [31:0] size_tree_scores_47_V;
reg [31:0] size_tree_scores_47_V_backup;
reg end_tree_scores_48_V;
reg [31:0] size_tree_scores_48_V;
reg [31:0] size_tree_scores_48_V_backup;
reg end_tree_scores_49_V;
reg [31:0] size_tree_scores_49_V;
reg [31:0] size_tree_scores_49_V_backup;
reg end_tree_scores_50_V;
reg [31:0] size_tree_scores_50_V;
reg [31:0] size_tree_scores_50_V_backup;
reg end_tree_scores_51_V;
reg [31:0] size_tree_scores_51_V;
reg [31:0] size_tree_scores_51_V_backup;
reg end_tree_scores_52_V;
reg [31:0] size_tree_scores_52_V;
reg [31:0] size_tree_scores_52_V_backup;
reg end_tree_scores_53_V;
reg [31:0] size_tree_scores_53_V;
reg [31:0] size_tree_scores_53_V_backup;
reg end_tree_scores_54_V;
reg [31:0] size_tree_scores_54_V;
reg [31:0] size_tree_scores_54_V_backup;
reg end_tree_scores_55_V;
reg [31:0] size_tree_scores_55_V;
reg [31:0] size_tree_scores_55_V_backup;
reg end_tree_scores_56_V;
reg [31:0] size_tree_scores_56_V;
reg [31:0] size_tree_scores_56_V_backup;
reg end_tree_scores_57_V;
reg [31:0] size_tree_scores_57_V;
reg [31:0] size_tree_scores_57_V_backup;
reg end_tree_scores_58_V;
reg [31:0] size_tree_scores_58_V;
reg [31:0] size_tree_scores_58_V_backup;
reg end_tree_scores_59_V;
reg [31:0] size_tree_scores_59_V;
reg [31:0] size_tree_scores_59_V_backup;
reg end_tree_scores_60_V;
reg [31:0] size_tree_scores_60_V;
reg [31:0] size_tree_scores_60_V_backup;
reg end_tree_scores_61_V;
reg [31:0] size_tree_scores_61_V;
reg [31:0] size_tree_scores_61_V_backup;
reg end_tree_scores_62_V;
reg [31:0] size_tree_scores_62_V;
reg [31:0] size_tree_scores_62_V_backup;
reg end_tree_scores_63_V;
reg [31:0] size_tree_scores_63_V;
reg [31:0] size_tree_scores_63_V_backup;
reg end_tree_scores_64_V;
reg [31:0] size_tree_scores_64_V;
reg [31:0] size_tree_scores_64_V_backup;
reg end_tree_scores_65_V;
reg [31:0] size_tree_scores_65_V;
reg [31:0] size_tree_scores_65_V_backup;
reg end_tree_scores_66_V;
reg [31:0] size_tree_scores_66_V;
reg [31:0] size_tree_scores_66_V_backup;
reg end_tree_scores_67_V;
reg [31:0] size_tree_scores_67_V;
reg [31:0] size_tree_scores_67_V_backup;
reg end_tree_scores_68_V;
reg [31:0] size_tree_scores_68_V;
reg [31:0] size_tree_scores_68_V_backup;
reg end_tree_scores_69_V;
reg [31:0] size_tree_scores_69_V;
reg [31:0] size_tree_scores_69_V_backup;
reg end_tree_scores_70_V;
reg [31:0] size_tree_scores_70_V;
reg [31:0] size_tree_scores_70_V_backup;
reg end_tree_scores_71_V;
reg [31:0] size_tree_scores_71_V;
reg [31:0] size_tree_scores_71_V_backup;
reg end_tree_scores_72_V;
reg [31:0] size_tree_scores_72_V;
reg [31:0] size_tree_scores_72_V_backup;
reg end_tree_scores_73_V;
reg [31:0] size_tree_scores_73_V;
reg [31:0] size_tree_scores_73_V_backup;
reg end_tree_scores_74_V;
reg [31:0] size_tree_scores_74_V;
reg [31:0] size_tree_scores_74_V_backup;
reg end_tree_scores_75_V;
reg [31:0] size_tree_scores_75_V;
reg [31:0] size_tree_scores_75_V_backup;
reg end_tree_scores_76_V;
reg [31:0] size_tree_scores_76_V;
reg [31:0] size_tree_scores_76_V_backup;
reg end_tree_scores_77_V;
reg [31:0] size_tree_scores_77_V;
reg [31:0] size_tree_scores_77_V_backup;
reg end_tree_scores_78_V;
reg [31:0] size_tree_scores_78_V;
reg [31:0] size_tree_scores_78_V_backup;
reg end_tree_scores_79_V;
reg [31:0] size_tree_scores_79_V;
reg [31:0] size_tree_scores_79_V_backup;
reg end_tree_scores_80_V;
reg [31:0] size_tree_scores_80_V;
reg [31:0] size_tree_scores_80_V_backup;
reg end_tree_scores_81_V;
reg [31:0] size_tree_scores_81_V;
reg [31:0] size_tree_scores_81_V_backup;
reg end_tree_scores_82_V;
reg [31:0] size_tree_scores_82_V;
reg [31:0] size_tree_scores_82_V_backup;
reg end_tree_scores_83_V;
reg [31:0] size_tree_scores_83_V;
reg [31:0] size_tree_scores_83_V_backup;
reg end_tree_scores_84_V;
reg [31:0] size_tree_scores_84_V;
reg [31:0] size_tree_scores_84_V_backup;
reg end_tree_scores_85_V;
reg [31:0] size_tree_scores_85_V;
reg [31:0] size_tree_scores_85_V_backup;
reg end_tree_scores_86_V;
reg [31:0] size_tree_scores_86_V;
reg [31:0] size_tree_scores_86_V_backup;
reg end_tree_scores_87_V;
reg [31:0] size_tree_scores_87_V;
reg [31:0] size_tree_scores_87_V_backup;
reg end_tree_scores_88_V;
reg [31:0] size_tree_scores_88_V;
reg [31:0] size_tree_scores_88_V_backup;
reg end_tree_scores_89_V;
reg [31:0] size_tree_scores_89_V;
reg [31:0] size_tree_scores_89_V_backup;
reg end_tree_scores_90_V;
reg [31:0] size_tree_scores_90_V;
reg [31:0] size_tree_scores_90_V_backup;
reg end_tree_scores_91_V;
reg [31:0] size_tree_scores_91_V;
reg [31:0] size_tree_scores_91_V_backup;
reg end_tree_scores_92_V;
reg [31:0] size_tree_scores_92_V;
reg [31:0] size_tree_scores_92_V_backup;
reg end_tree_scores_93_V;
reg [31:0] size_tree_scores_93_V;
reg [31:0] size_tree_scores_93_V_backup;
reg end_tree_scores_94_V;
reg [31:0] size_tree_scores_94_V;
reg [31:0] size_tree_scores_94_V_backup;
reg end_tree_scores_95_V;
reg [31:0] size_tree_scores_95_V;
reg [31:0] size_tree_scores_95_V_backup;
reg end_tree_scores_96_V;
reg [31:0] size_tree_scores_96_V;
reg [31:0] size_tree_scores_96_V_backup;
reg end_tree_scores_97_V;
reg [31:0] size_tree_scores_97_V;
reg [31:0] size_tree_scores_97_V_backup;
reg end_tree_scores_98_V;
reg [31:0] size_tree_scores_98_V;
reg [31:0] size_tree_scores_98_V_backup;
reg end_tree_scores_99_V;
reg [31:0] size_tree_scores_99_V;
reg [31:0] size_tree_scores_99_V_backup;

initial begin : initial_process
    integer proc_rand;
    rst = 1;
    # 100;
    repeat(3) @ (posedge AESL_clock);
    rst = 0;
end
initial begin : start_process
    integer proc_rand;
    reg [31:0] start_cnt;
    ce = 1;
    start = 0;
    start_cnt = 0;
    wait (AESL_reset === 0);
    @ (posedge AESL_clock);
    #0 start = 1;
    start_cnt = start_cnt + 1;
    forever begin
        @ (posedge AESL_clock);
        if (start_cnt >= AUTOTB_TRANSACTION_NUM) begin
            // keep pushing garbage in
            #0 start = 1;
        end
        if (AESL_ready) begin
            start_cnt = start_cnt + 1;
        end
    end
end

always @(AESL_done)
begin
    tb_continue = AESL_done;
end

initial begin : ready_initial_process
    ready_initial = 0;
    wait (AESL_start === 1);
    ready_initial = 1;
    @(posedge AESL_clock);
    ready_initial = 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset)
      AESL_ready_delay = 0;
  else
      AESL_ready_delay = AESL_ready;
end
initial begin : ready_last_n_process
  ready_last_n = 1;
  wait(ready_cnt == AUTOTB_TRANSACTION_NUM)
  @(posedge AESL_clock);
  ready_last_n <= 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset)
      ready_delay_last_n = 0;
  else
      ready_delay_last_n <= ready_last_n;
end
assign ready = (ready_initial | AESL_ready_delay);
assign ready_wire = ready_initial | AESL_ready_delay;
initial begin : done_delay_last_n_process
  done_delay_last_n = 1;
  while(done_cnt < AUTOTB_TRANSACTION_NUM)
      @(posedge AESL_clock);
  # 0.1;
  done_delay_last_n = 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset)
  begin
      AESL_done_delay <= 0;
      AESL_done_delay2 <= 0;
  end
  else begin
      AESL_done_delay <= AESL_done & done_delay_last_n;
      AESL_done_delay2 <= AESL_done_delay;
  end
end
always @(posedge AESL_clock)
begin
    if(AESL_reset)
      interface_done = 0;
  else begin
      # 0.01;
      if(ready === 1 && ready_cnt > 0 && ready_cnt < AUTOTB_TRANSACTION_NUM)
          interface_done = 1;
      else if(AESL_done_delay === 1 && done_cnt == AUTOTB_TRANSACTION_NUM)
          interface_done = 1;
      else
          interface_done = 0;
  end
end

////////////////////////////////////////////
// progress and performance
////////////////////////////////////////////

task wait_start();
    while (~AESL_start) begin
        @ (posedge AESL_clock);
    end
endtask

reg [31:0] clk_cnt = 0;
reg AESL_ready_p1;
reg AESL_start_p1;

always @ (posedge AESL_clock) begin
    clk_cnt <= clk_cnt + 1;
    AESL_ready_p1 <= AESL_ready;
    AESL_start_p1 <= AESL_start;
end

reg [31:0] start_timestamp [0:AUTOTB_TRANSACTION_NUM - 1];
reg [31:0] start_cnt;
reg [31:0] ready_timestamp [0:AUTOTB_TRANSACTION_NUM - 1];
reg [31:0] ap_ready_cnt;
reg [31:0] finish_timestamp [0:AUTOTB_TRANSACTION_NUM - 1];
reg [31:0] finish_cnt;
event report_progress;

initial begin
    start_cnt = 0;
    finish_cnt = 0;
    ap_ready_cnt = 0;
    wait (AESL_reset == 0);
    wait_start();
    start_timestamp[start_cnt] = clk_cnt;
    start_cnt = start_cnt + 1;
    if (AESL_done) begin
        finish_timestamp[finish_cnt] = clk_cnt;
        finish_cnt = finish_cnt + 1;
    end
    -> report_progress;
    forever begin
        @ (posedge AESL_clock);
        if (start_cnt < AUTOTB_TRANSACTION_NUM) begin
            if ((AESL_start && AESL_ready_p1)||(AESL_start && ~AESL_start_p1)) begin
                start_timestamp[start_cnt] = clk_cnt;
                start_cnt = start_cnt + 1;
            end
        end
        if (ap_ready_cnt < AUTOTB_TRANSACTION_NUM) begin
            if (AESL_start_p1 && AESL_ready_p1) begin
                ready_timestamp[ap_ready_cnt] = clk_cnt;
                ap_ready_cnt = ap_ready_cnt + 1;
            end
        end
        if (finish_cnt < AUTOTB_TRANSACTION_NUM) begin
            if (AESL_done) begin
                finish_timestamp[finish_cnt] = clk_cnt;
                finish_cnt = finish_cnt + 1;
            end
        end
        -> report_progress;
    end
end

reg [31:0] progress_timeout;

initial begin : simulation_progress
    real intra_progress;
    wait (AESL_reset == 0);
    progress_timeout = PROGRESS_TIMEOUT;
    $display("////////////////////////////////////////////////////////////////////////////////////");
    $display("// Inter-Transaction Progress: Completed Transaction / Total Transaction");
    $display("// Intra-Transaction Progress: Measured Latency / Latency Estimation * 100%%");
    $display("//");
    $display("// RTL Simulation : \"Inter-Transaction Progress\" [\"Intra-Transaction Progress\"] @ \"Simulation Time\"");
    $display("////////////////////////////////////////////////////////////////////////////////////");
    print_progress();
    while (finish_cnt < AUTOTB_TRANSACTION_NUM) begin
        @ (report_progress);
        if (finish_cnt < AUTOTB_TRANSACTION_NUM) begin
            if (AESL_done) begin
                print_progress();
                progress_timeout = PROGRESS_TIMEOUT;
            end else begin
                if (progress_timeout == 0) begin
                    print_progress();
                    progress_timeout = PROGRESS_TIMEOUT;
                end else begin
                    progress_timeout = progress_timeout - 1;
                end
            end
        end
        // non-dataflow design && latency is predictable && no AXI master/slave interface
        get_intra_progress(intra_progress);
        if (intra_progress > 1000) begin
            $display("// RTL Simulation : transaction %0d run-time latency is greater than %0f time(s) of the prediction @ \"%0t\"", start_cnt, intra_progress, $time);
            $display("////////////////////////////////////////////////////////////////////////////////////");
            $finish;
        end
    end
    print_progress();
    $display("////////////////////////////////////////////////////////////////////////////////////");
    calculate_performance();
end

task get_intra_progress(output real intra_progress);
    begin
        if (start_cnt > finish_cnt) begin
            intra_progress = clk_cnt - start_timestamp[finish_cnt];
        end else if(finish_cnt > 0) begin
            intra_progress = LATENCY_ESTIMATION;
        end else begin
            intra_progress = 0;
        end
        intra_progress = intra_progress / LATENCY_ESTIMATION;
    end
endtask

task print_progress();
    real intra_progress;
    begin
        if (LATENCY_ESTIMATION > 0) begin
            get_intra_progress(intra_progress);
            $display("// RTL Simulation : %0d / %0d [%2.2f%%] @ \"%0t\"", finish_cnt, AUTOTB_TRANSACTION_NUM, intra_progress * 100, $time);
        end else begin
            $display("// RTL Simulation : %0d / %0d [n/a] @ \"%0t\"", finish_cnt, AUTOTB_TRANSACTION_NUM, $time);
        end
    end
endtask

task calculate_performance();
    integer i;
    integer fp;
    reg [31:0] latency [0:AUTOTB_TRANSACTION_NUM - 1];
    reg [31:0] latency_min;
    reg [31:0] latency_max;
    reg [31:0] latency_total;
    reg [31:0] latency_average;
    reg [31:0] interval [0:AUTOTB_TRANSACTION_NUM - 2];
    reg [31:0] interval_min;
    reg [31:0] interval_max;
    reg [31:0] interval_total;
    reg [31:0] interval_average;
    begin
        latency_min = -1;
        latency_max = 0;
        latency_total = 0;
        interval_min = -1;
        interval_max = 0;
        interval_total = 0;

        for (i = 0; i < AUTOTB_TRANSACTION_NUM; i = i + 1) begin
            // calculate latency
            latency[i] = finish_timestamp[i] - start_timestamp[i];
            if (latency[i] > latency_max) latency_max = latency[i];
            if (latency[i] < latency_min) latency_min = latency[i];
            latency_total = latency_total + latency[i];
            // calculate interval
            if (AUTOTB_TRANSACTION_NUM == 1) begin
                interval[i] = 0;
                interval_max = 0;
                interval_min = 0;
                interval_total = 0;
            end else if (i < AUTOTB_TRANSACTION_NUM - 1) begin
                interval[i] = start_timestamp[i + 1] - start_timestamp[i];
                if (interval[i] > interval_max) interval_max = interval[i];
                if (interval[i] < interval_min) interval_min = interval[i];
                interval_total = interval_total + interval[i];
            end
        end

        latency_average = latency_total / AUTOTB_TRANSACTION_NUM;
        if (AUTOTB_TRANSACTION_NUM == 1) begin
            interval_average = 0;
        end else begin
            interval_average = interval_total / (AUTOTB_TRANSACTION_NUM - 1);
        end

        fp = $fopen(`AUTOTB_LAT_RESULT_FILE, "w");

        $fdisplay(fp, "$MAX_LATENCY = \"%0d\"", latency_max);
        $fdisplay(fp, "$MIN_LATENCY = \"%0d\"", latency_min);
        $fdisplay(fp, "$AVER_LATENCY = \"%0d\"", latency_average);
        $fdisplay(fp, "$MAX_THROUGHPUT = \"%0d\"", interval_max);
        $fdisplay(fp, "$MIN_THROUGHPUT = \"%0d\"", interval_min);
        $fdisplay(fp, "$AVER_THROUGHPUT = \"%0d\"", interval_average);

        $fclose(fp);

        fp = $fopen(`AUTOTB_PER_RESULT_TRANS_FILE, "w");

        $fdisplay(fp, "%20s%16s%16s", "", "latency", "interval");
        if (AUTOTB_TRANSACTION_NUM == 1) begin
            i = 0;
            $fdisplay(fp, "transaction%8d:%16d%16d", i, latency[i], interval[i]);
        end else begin
            for (i = 0; i < AUTOTB_TRANSACTION_NUM; i = i + 1) begin
                if (i < AUTOTB_TRANSACTION_NUM - 1) begin
                    $fdisplay(fp, "transaction%8d:%16d%16d", i, latency[i], interval[i]);
                end else begin
                    $fdisplay(fp, "transaction%8d:%16d               x", i, latency[i]);
                end
            end
        end

        $fclose(fp);
    end
endtask


////////////////////////////////////////////
// Dependence Check
////////////////////////////////////////////

`ifndef POST_SYN

`endif

endmodule
