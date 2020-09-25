# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

set axilite_register_dict [dict create]
# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 78 \
    name x_0_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_0_V \
    op interface \
    ports { x_0_V { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 79 \
    name x_1_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_1_V \
    op interface \
    ports { x_1_V { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 80 \
    name x_2_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_2_V \
    op interface \
    ports { x_2_V { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 81 \
    name x_3_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_3_V \
    op interface \
    ports { x_3_V { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 82 \
    name x_4_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_4_V \
    op interface \
    ports { x_4_V { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 83 \
    name x_5_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_5_V \
    op interface \
    ports { x_5_V { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 84 \
    name x_6_V \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_6_V \
    op interface \
    ports { x_6_V { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 85 \
    name score_0_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_score_0_V \
    op interface \
    ports { score_0_V { O 11 vector } score_0_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 86 \
    name tree_scores_0_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_0_V \
    op interface \
    ports { tree_scores_0_V { O 11 vector } tree_scores_0_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 87 \
    name tree_scores_1_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_1_V \
    op interface \
    ports { tree_scores_1_V { O 11 vector } tree_scores_1_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 88 \
    name tree_scores_2_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_2_V \
    op interface \
    ports { tree_scores_2_V { O 11 vector } tree_scores_2_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 89 \
    name tree_scores_3_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_3_V \
    op interface \
    ports { tree_scores_3_V { O 11 vector } tree_scores_3_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 90 \
    name tree_scores_4_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_4_V \
    op interface \
    ports { tree_scores_4_V { O 11 vector } tree_scores_4_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 91 \
    name tree_scores_5_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_5_V \
    op interface \
    ports { tree_scores_5_V { O 11 vector } tree_scores_5_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 92 \
    name tree_scores_6_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_6_V \
    op interface \
    ports { tree_scores_6_V { O 11 vector } tree_scores_6_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 93 \
    name tree_scores_7_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_7_V \
    op interface \
    ports { tree_scores_7_V { O 11 vector } tree_scores_7_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 94 \
    name tree_scores_8_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_8_V \
    op interface \
    ports { tree_scores_8_V { O 11 vector } tree_scores_8_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 95 \
    name tree_scores_9_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_9_V \
    op interface \
    ports { tree_scores_9_V { O 11 vector } tree_scores_9_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 96 \
    name tree_scores_10_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_10_V \
    op interface \
    ports { tree_scores_10_V { O 11 vector } tree_scores_10_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 97 \
    name tree_scores_11_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_11_V \
    op interface \
    ports { tree_scores_11_V { O 11 vector } tree_scores_11_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 98 \
    name tree_scores_12_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_12_V \
    op interface \
    ports { tree_scores_12_V { O 11 vector } tree_scores_12_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 99 \
    name tree_scores_13_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_13_V \
    op interface \
    ports { tree_scores_13_V { O 11 vector } tree_scores_13_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 100 \
    name tree_scores_14_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_14_V \
    op interface \
    ports { tree_scores_14_V { O 11 vector } tree_scores_14_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 101 \
    name tree_scores_15_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_15_V \
    op interface \
    ports { tree_scores_15_V { O 11 vector } tree_scores_15_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 102 \
    name tree_scores_16_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_16_V \
    op interface \
    ports { tree_scores_16_V { O 11 vector } tree_scores_16_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 103 \
    name tree_scores_17_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_17_V \
    op interface \
    ports { tree_scores_17_V { O 11 vector } tree_scores_17_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 104 \
    name tree_scores_18_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_18_V \
    op interface \
    ports { tree_scores_18_V { O 11 vector } tree_scores_18_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 105 \
    name tree_scores_19_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_19_V \
    op interface \
    ports { tree_scores_19_V { O 11 vector } tree_scores_19_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 106 \
    name tree_scores_20_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_20_V \
    op interface \
    ports { tree_scores_20_V { O 11 vector } tree_scores_20_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 107 \
    name tree_scores_21_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_21_V \
    op interface \
    ports { tree_scores_21_V { O 11 vector } tree_scores_21_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 108 \
    name tree_scores_22_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_22_V \
    op interface \
    ports { tree_scores_22_V { O 11 vector } tree_scores_22_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 109 \
    name tree_scores_23_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_23_V \
    op interface \
    ports { tree_scores_23_V { O 11 vector } tree_scores_23_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 110 \
    name tree_scores_24_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_24_V \
    op interface \
    ports { tree_scores_24_V { O 11 vector } tree_scores_24_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 111 \
    name tree_scores_25_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_25_V \
    op interface \
    ports { tree_scores_25_V { O 11 vector } tree_scores_25_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 112 \
    name tree_scores_26_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_26_V \
    op interface \
    ports { tree_scores_26_V { O 11 vector } tree_scores_26_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 113 \
    name tree_scores_27_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_27_V \
    op interface \
    ports { tree_scores_27_V { O 11 vector } tree_scores_27_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 114 \
    name tree_scores_28_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_28_V \
    op interface \
    ports { tree_scores_28_V { O 11 vector } tree_scores_28_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 115 \
    name tree_scores_29_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_29_V \
    op interface \
    ports { tree_scores_29_V { O 11 vector } tree_scores_29_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 116 \
    name tree_scores_30_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_30_V \
    op interface \
    ports { tree_scores_30_V { O 11 vector } tree_scores_30_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 117 \
    name tree_scores_31_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_31_V \
    op interface \
    ports { tree_scores_31_V { O 11 vector } tree_scores_31_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 118 \
    name tree_scores_32_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_32_V \
    op interface \
    ports { tree_scores_32_V { O 11 vector } tree_scores_32_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 119 \
    name tree_scores_33_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_33_V \
    op interface \
    ports { tree_scores_33_V { O 11 vector } tree_scores_33_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 120 \
    name tree_scores_34_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_34_V \
    op interface \
    ports { tree_scores_34_V { O 11 vector } tree_scores_34_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 121 \
    name tree_scores_35_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_35_V \
    op interface \
    ports { tree_scores_35_V { O 11 vector } tree_scores_35_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 122 \
    name tree_scores_36_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_36_V \
    op interface \
    ports { tree_scores_36_V { O 11 vector } tree_scores_36_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 123 \
    name tree_scores_37_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_37_V \
    op interface \
    ports { tree_scores_37_V { O 11 vector } tree_scores_37_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 124 \
    name tree_scores_38_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_38_V \
    op interface \
    ports { tree_scores_38_V { O 11 vector } tree_scores_38_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 125 \
    name tree_scores_39_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_39_V \
    op interface \
    ports { tree_scores_39_V { O 11 vector } tree_scores_39_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 126 \
    name tree_scores_40_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_40_V \
    op interface \
    ports { tree_scores_40_V { O 11 vector } tree_scores_40_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 127 \
    name tree_scores_41_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_41_V \
    op interface \
    ports { tree_scores_41_V { O 11 vector } tree_scores_41_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 128 \
    name tree_scores_42_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_42_V \
    op interface \
    ports { tree_scores_42_V { O 11 vector } tree_scores_42_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 129 \
    name tree_scores_43_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_43_V \
    op interface \
    ports { tree_scores_43_V { O 11 vector } tree_scores_43_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 130 \
    name tree_scores_44_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_44_V \
    op interface \
    ports { tree_scores_44_V { O 11 vector } tree_scores_44_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 131 \
    name tree_scores_45_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_45_V \
    op interface \
    ports { tree_scores_45_V { O 11 vector } tree_scores_45_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 132 \
    name tree_scores_46_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_46_V \
    op interface \
    ports { tree_scores_46_V { O 11 vector } tree_scores_46_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 133 \
    name tree_scores_47_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_47_V \
    op interface \
    ports { tree_scores_47_V { O 11 vector } tree_scores_47_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 134 \
    name tree_scores_48_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_48_V \
    op interface \
    ports { tree_scores_48_V { O 11 vector } tree_scores_48_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 135 \
    name tree_scores_49_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_49_V \
    op interface \
    ports { tree_scores_49_V { O 11 vector } tree_scores_49_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 136 \
    name tree_scores_50_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_50_V \
    op interface \
    ports { tree_scores_50_V { O 11 vector } tree_scores_50_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 137 \
    name tree_scores_51_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_51_V \
    op interface \
    ports { tree_scores_51_V { O 11 vector } tree_scores_51_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 138 \
    name tree_scores_52_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_52_V \
    op interface \
    ports { tree_scores_52_V { O 11 vector } tree_scores_52_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 139 \
    name tree_scores_53_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_53_V \
    op interface \
    ports { tree_scores_53_V { O 11 vector } tree_scores_53_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 140 \
    name tree_scores_54_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_54_V \
    op interface \
    ports { tree_scores_54_V { O 11 vector } tree_scores_54_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 141 \
    name tree_scores_55_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_55_V \
    op interface \
    ports { tree_scores_55_V { O 11 vector } tree_scores_55_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 142 \
    name tree_scores_56_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_56_V \
    op interface \
    ports { tree_scores_56_V { O 11 vector } tree_scores_56_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 143 \
    name tree_scores_57_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_57_V \
    op interface \
    ports { tree_scores_57_V { O 11 vector } tree_scores_57_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 144 \
    name tree_scores_58_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_58_V \
    op interface \
    ports { tree_scores_58_V { O 11 vector } tree_scores_58_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 145 \
    name tree_scores_59_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_59_V \
    op interface \
    ports { tree_scores_59_V { O 11 vector } tree_scores_59_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 146 \
    name tree_scores_60_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_60_V \
    op interface \
    ports { tree_scores_60_V { O 11 vector } tree_scores_60_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 147 \
    name tree_scores_61_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_61_V \
    op interface \
    ports { tree_scores_61_V { O 11 vector } tree_scores_61_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 148 \
    name tree_scores_62_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_62_V \
    op interface \
    ports { tree_scores_62_V { O 11 vector } tree_scores_62_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 149 \
    name tree_scores_63_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_63_V \
    op interface \
    ports { tree_scores_63_V { O 11 vector } tree_scores_63_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 150 \
    name tree_scores_64_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_64_V \
    op interface \
    ports { tree_scores_64_V { O 11 vector } tree_scores_64_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 151 \
    name tree_scores_65_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_65_V \
    op interface \
    ports { tree_scores_65_V { O 11 vector } tree_scores_65_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 152 \
    name tree_scores_66_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_66_V \
    op interface \
    ports { tree_scores_66_V { O 11 vector } tree_scores_66_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 153 \
    name tree_scores_67_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_67_V \
    op interface \
    ports { tree_scores_67_V { O 11 vector } tree_scores_67_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 154 \
    name tree_scores_68_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_68_V \
    op interface \
    ports { tree_scores_68_V { O 11 vector } tree_scores_68_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 155 \
    name tree_scores_69_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_69_V \
    op interface \
    ports { tree_scores_69_V { O 11 vector } tree_scores_69_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 156 \
    name tree_scores_70_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_70_V \
    op interface \
    ports { tree_scores_70_V { O 11 vector } tree_scores_70_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 157 \
    name tree_scores_71_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_71_V \
    op interface \
    ports { tree_scores_71_V { O 11 vector } tree_scores_71_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 158 \
    name tree_scores_72_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_72_V \
    op interface \
    ports { tree_scores_72_V { O 11 vector } tree_scores_72_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 159 \
    name tree_scores_73_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_73_V \
    op interface \
    ports { tree_scores_73_V { O 11 vector } tree_scores_73_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 160 \
    name tree_scores_74_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_74_V \
    op interface \
    ports { tree_scores_74_V { O 11 vector } tree_scores_74_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 161 \
    name tree_scores_75_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_75_V \
    op interface \
    ports { tree_scores_75_V { O 11 vector } tree_scores_75_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 162 \
    name tree_scores_76_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_76_V \
    op interface \
    ports { tree_scores_76_V { O 11 vector } tree_scores_76_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 163 \
    name tree_scores_77_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_77_V \
    op interface \
    ports { tree_scores_77_V { O 11 vector } tree_scores_77_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 164 \
    name tree_scores_78_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_78_V \
    op interface \
    ports { tree_scores_78_V { O 11 vector } tree_scores_78_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 165 \
    name tree_scores_79_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_79_V \
    op interface \
    ports { tree_scores_79_V { O 11 vector } tree_scores_79_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 166 \
    name tree_scores_80_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_80_V \
    op interface \
    ports { tree_scores_80_V { O 11 vector } tree_scores_80_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 167 \
    name tree_scores_81_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_81_V \
    op interface \
    ports { tree_scores_81_V { O 11 vector } tree_scores_81_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 168 \
    name tree_scores_82_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_82_V \
    op interface \
    ports { tree_scores_82_V { O 11 vector } tree_scores_82_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 169 \
    name tree_scores_83_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_83_V \
    op interface \
    ports { tree_scores_83_V { O 11 vector } tree_scores_83_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 170 \
    name tree_scores_84_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_84_V \
    op interface \
    ports { tree_scores_84_V { O 11 vector } tree_scores_84_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 171 \
    name tree_scores_85_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_85_V \
    op interface \
    ports { tree_scores_85_V { O 11 vector } tree_scores_85_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 172 \
    name tree_scores_86_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_86_V \
    op interface \
    ports { tree_scores_86_V { O 11 vector } tree_scores_86_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 173 \
    name tree_scores_87_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_87_V \
    op interface \
    ports { tree_scores_87_V { O 11 vector } tree_scores_87_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 174 \
    name tree_scores_88_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_88_V \
    op interface \
    ports { tree_scores_88_V { O 11 vector } tree_scores_88_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 175 \
    name tree_scores_89_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_89_V \
    op interface \
    ports { tree_scores_89_V { O 11 vector } tree_scores_89_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 176 \
    name tree_scores_90_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_90_V \
    op interface \
    ports { tree_scores_90_V { O 11 vector } tree_scores_90_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 177 \
    name tree_scores_91_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_91_V \
    op interface \
    ports { tree_scores_91_V { O 11 vector } tree_scores_91_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 178 \
    name tree_scores_92_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_92_V \
    op interface \
    ports { tree_scores_92_V { O 11 vector } tree_scores_92_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 179 \
    name tree_scores_93_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_93_V \
    op interface \
    ports { tree_scores_93_V { O 11 vector } tree_scores_93_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 180 \
    name tree_scores_94_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_94_V \
    op interface \
    ports { tree_scores_94_V { O 11 vector } tree_scores_94_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 181 \
    name tree_scores_95_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_95_V \
    op interface \
    ports { tree_scores_95_V { O 11 vector } tree_scores_95_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 182 \
    name tree_scores_96_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_96_V \
    op interface \
    ports { tree_scores_96_V { O 11 vector } tree_scores_96_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 183 \
    name tree_scores_97_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_97_V \
    op interface \
    ports { tree_scores_97_V { O 11 vector } tree_scores_97_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 184 \
    name tree_scores_98_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_98_V \
    op interface \
    ports { tree_scores_98_V { O 11 vector } tree_scores_98_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 185 \
    name tree_scores_99_V \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_tree_scores_99_V \
    op interface \
    ports { tree_scores_99_V { O 11 vector } tree_scores_99_V_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


