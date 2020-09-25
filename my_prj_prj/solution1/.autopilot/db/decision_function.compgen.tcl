# This script segment is generated automatically by AutoPilot

set id 1
set name my_prj_mux_73_11_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 11
set din0_signed 0
set din1_width 11
set din1_signed 0
set din2_width 11
set din2_signed 0
set din3_width 11
set din3_signed 0
set din4_width 11
set din4_signed 0
set din5_width 11
set din5_signed 0
set din6_width 11
set din6_signed 0
set din7_width 3
set din7_signed 0
set dout_width 11
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


set id 9
set name my_prj_mux_154_32_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 32
set din0_signed 0
set din1_width 32
set din1_signed 0
set din2_width 32
set din2_signed 0
set din3_width 32
set din3_signed 1
set din4_width 32
set din4_signed 1
set din5_width 32
set din5_signed 0
set din6_width 32
set din6_signed 1
set din7_width 32
set din7_signed 1
set din8_width 32
set din8_signed 0
set din9_width 32
set din9_signed 0
set din10_width 32
set din10_signed 1
set din11_width 32
set din11_signed 1
set din12_width 32
set din12_signed 1
set din13_width 32
set din13_signed 1
set din14_width 32
set din14_signed 1
set din15_width 4
set din15_signed 0
set dout_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


set id 10
set name my_prj_mux_154_1_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 1
set din0_signed 0
set din1_width 1
set din1_signed 0
set din2_width 1
set din2_signed 0
set din3_width 1
set din3_signed 1
set din4_width 1
set din4_signed 1
set din5_width 1
set din5_signed 0
set din6_width 1
set din6_signed 1
set din7_width 1
set din7_signed 1
set din8_width 1
set din8_signed 0
set din9_width 1
set din9_signed 0
set din10_width 1
set din10_signed 0
set din11_width 1
set din11_signed 1
set din12_width 1
set din12_signed 0
set din13_width 1
set din13_signed 1
set din14_width 1
set din14_signed 1
set din15_width 4
set din15_signed 0
set dout_width 1
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


set id 11
set name my_prj_mux_154_1_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 1
set din0_signed 0
set din1_width 1
set din1_signed 0
set din2_width 1
set din2_signed 0
set din3_width 1
set din3_signed 1
set din4_width 1
set din4_signed 1
set din5_width 1
set din5_signed 0
set din6_width 1
set din6_signed 1
set din7_width 1
set din7_signed 1
set din8_width 1
set din8_signed 0
set din9_width 1
set din9_signed 0
set din10_width 1
set din10_signed 0
set din11_width 1
set din11_signed 1
set din12_width 1
set din12_signed 0
set din13_width 1
set din13_signed 1
set din14_width 1
set din14_signed 1
set din15_width 4
set din15_signed 0
set dout_width 1
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


set id 24
set name my_prj_mux_83_11_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 11
set din0_signed 1
set din1_width 11
set din1_signed 1
set din2_width 11
set din2_signed 1
set din3_width 11
set din3_signed 1
set din4_width 11
set din4_signed 1
set din5_width 11
set din5_signed 1
set din6_width 11
set din6_signed 1
set din7_width 11
set din7_signed 1
set din8_width 3
set din8_signed 0
set dout_width 11
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 30 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_0_feature_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_0_feature_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_0_feature_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 31 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_1_feature_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_1_feature_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_1_feature_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 32 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_2_feature_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_2_feature_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_2_feature_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 33 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_5_feature_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_5_feature_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_5_feature_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 34 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_8_feature_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_8_feature_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_8_feature_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 35 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_9_feature_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_9_feature_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_9_feature_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 36 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_10_feature_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_10_feature_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_10_feature_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 37 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_12_feature_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_12_feature_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_12_feature_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 38 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_0_threshold_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_0_threshold_V_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_0_threshold_V_read { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 39 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_1_threshold_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_1_threshold_V_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_1_threshold_V_read { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 40 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_2_threshold_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_2_threshold_V_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_2_threshold_V_read { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 41 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_5_threshold_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_5_threshold_V_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_5_threshold_V_read { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 42 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_8_threshold_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_8_threshold_V_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_8_threshold_V_read { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 43 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_9_threshold_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_9_threshold_V_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_9_threshold_V_read { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 44 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_10_threshold_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_10_threshold_V_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_10_threshold_V_read { I 9 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 45 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_12_threshold_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_12_threshold_V_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_12_threshold_V_read { I 10 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 46 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_3_value_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_3_value_V_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_3_value_V_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 47 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_4_value_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_4_value_V_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_4_value_V_read { I 5 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 48 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_5_value_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_5_value_V_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_5_value_V_read { I 3 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 49 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_6_value_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_6_value_V_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_6_value_V_read { I 5 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 50 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_7_value_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_7_value_V_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_7_value_V_read { I 5 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 51 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_10_value_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_10_value_V_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_10_value_V_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 52 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_11_value_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_11_value_V_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_11_value_V_read { I 5 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 53 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_12_value_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_12_value_V_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_12_value_V_read { I 4 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 54 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_13_value_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_13_value_V_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_13_value_V_read { I 8 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 55 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_14_value_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_14_value_V_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_14_value_V_read { I 5 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 56 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_9_children_left_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_9_children_left_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_9_children_left_read { I 5 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 57 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_10_children_left_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_10_children_left_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_10_children_left_read { I 5 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 58 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_12_children_left_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_12_children_left_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_12_children_left_read { I 5 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 59 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_10_parent_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_10_parent_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_10_parent_read { I 5 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 60 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_11_parent_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_11_parent_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_11_parent_read { I 5 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 61 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_12_parent_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_12_parent_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_12_parent_read { I 5 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 62 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_13_parent_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_13_parent_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_13_parent_read { I 5 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 63 \
    name Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_14_parent_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_14_parent_read \
    op interface \
    ports { Tree_3_ap_fixed_11_6_5_3_0_7_ap_fixed_11_6_5_3_0_ap_fixed_11_6_5_3_0_14_parent_read { I 5 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 64 \
    name x_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_0_V_read \
    op interface \
    ports { x_0_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 65 \
    name x_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_1_V_read \
    op interface \
    ports { x_1_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 66 \
    name x_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_2_V_read \
    op interface \
    ports { x_2_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 67 \
    name x_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_3_V_read \
    op interface \
    ports { x_3_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 68 \
    name x_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_4_V_read \
    op interface \
    ports { x_4_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 69 \
    name x_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_5_V_read \
    op interface \
    ports { x_5_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 70 \
    name x_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_x_6_V_read \
    op interface \
    ports { x_6_V_read { I 11 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_return \
    type ap_return \
    reset_level 1 \
    sync_rst true \
    corename ap_return \
    op interface \
    ports { ap_return { O 11 vector } } \
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


# Adapter definition:
set PortName ap_ce
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_ce] == "cg_default_interface_gen_ce"} {
eval "cg_default_interface_gen_ce { \
    id -4 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_ce \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


