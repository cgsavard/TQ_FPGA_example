
################################################################
# This is a generated script based on design: bd_0
#
# Though there are limitations about the generated script,
# the main purpose of this utility is to make learning
# IP Integrator Tcl commands easier.
################################################################

namespace eval _tcl {
proc get_script_folder {} {
   set script_path [file normalize [info script]]
   set script_folder [file dirname $script_path]
   return $script_folder
}
}
variable script_folder
set script_folder [_tcl::get_script_folder]

################################################################
# Check if script is running in correct Vivado version.
################################################################
set scripts_vivado_version 2019.1
set current_vivado_version [version -short]

if { [string first $scripts_vivado_version $current_vivado_version] == -1 } {
   puts ""
   catch {common::send_msg_id "BD_TCL-109" "ERROR" "This script was generated using Vivado <$scripts_vivado_version> and is being run in <$current_vivado_version> of Vivado. Please run the script in Vivado <$scripts_vivado_version> then open the design in Vivado <$current_vivado_version>. Upgrade the design by running \"Tools => Report => Report IP Status...\", then run write_bd_tcl to create an updated script."}

   return 1
}

################################################################
# START
################################################################

# To test this script, run the following commands from Vivado Tcl console:
# source bd_0_script.tcl

# If there is no project opened, this script will create a
# project, but make sure you do not have an existing project
# <./myproj/project_1.xpr> in the current working folder.

set list_projs [get_projects -quiet]
if { $list_projs eq "" } {
   create_project project_1 myproj -part xcvu9p-flgc2104-1-e
}


# CHANGE DESIGN NAME HERE
variable design_name
set design_name bd_0

# If you do not already have an existing IP Integrator design open,
# you can create a design using the following command:
#    create_bd_design $design_name

# Creating design if needed
set errMsg ""
set nRet 0

set cur_design [current_bd_design -quiet]
set list_cells [get_bd_cells -quiet]

if { ${design_name} eq "" } {
   # USE CASES:
   #    1) Design_name not set

   set errMsg "Please set the variable <design_name> to a non-empty value."
   set nRet 1

} elseif { ${cur_design} ne "" && ${list_cells} eq "" } {
   # USE CASES:
   #    2): Current design opened AND is empty AND names same.
   #    3): Current design opened AND is empty AND names diff; design_name NOT in project.
   #    4): Current design opened AND is empty AND names diff; design_name exists in project.

   if { $cur_design ne $design_name } {
      common::send_msg_id "BD_TCL-001" "INFO" "Changing value of <design_name> from <$design_name> to <$cur_design> since current design is empty."
      set design_name [get_property NAME $cur_design]
   }
   common::send_msg_id "BD_TCL-002" "INFO" "Constructing design in IPI design <$cur_design>..."

} elseif { ${cur_design} ne "" && $list_cells ne "" && $cur_design eq $design_name } {
   # USE CASES:
   #    5) Current design opened AND has components AND same names.

   set errMsg "Design <$design_name> already exists in your project, please set the variable <design_name> to another value."
   set nRet 1
} elseif { [get_files -quiet ${design_name}.bd] ne "" } {
   # USE CASES: 
   #    6) Current opened design, has components, but diff names, design_name exists in project.
   #    7) No opened design, design_name exists in project.

   set errMsg "Design <$design_name> already exists in your project, please set the variable <design_name> to another value."
   set nRet 2

} else {
   # USE CASES:
   #    8) No opened design, design_name not in project.
   #    9) Current opened design, has components, but diff names, design_name not in project.

   common::send_msg_id "BD_TCL-003" "INFO" "Currently there is no design <$design_name> in project, so creating one..."

   create_bd_design $design_name

   common::send_msg_id "BD_TCL-004" "INFO" "Making design <$design_name> as current_bd_design."
   current_bd_design $design_name

}

common::send_msg_id "BD_TCL-005" "INFO" "Currently the variable <design_name> is equal to \"$design_name\"."

if { $nRet != 0 } {
   catch {common::send_msg_id "BD_TCL-114" "ERROR" $errMsg}
   return $nRet
}

##################################################################
# DESIGN PROCs
##################################################################



# Procedure to create entire design; Provide argument to make
# procedure reusable. If parentCell is "", will use root.
proc create_root_design { parentCell } {

  variable script_folder
  variable design_name

  if { $parentCell eq "" } {
     set parentCell [get_bd_cells /]
  }

  # Get object for parentCell
  set parentObj [get_bd_cells $parentCell]
  if { $parentObj == "" } {
     catch {common::send_msg_id "BD_TCL-100" "ERROR" "Unable to find parent cell <$parentCell>!"}
     return
  }

  # Make sure parentObj is hier blk
  set parentType [get_property TYPE $parentObj]
  if { $parentType ne "hier" } {
     catch {common::send_msg_id "BD_TCL-101" "ERROR" "Parent <$parentObj> has TYPE = <$parentType>. Expected to be <hier>."}
     return
  }

  # Save current instance; Restore later
  set oldCurInst [current_bd_instance .]

  # Set parent object as current
  current_bd_instance $parentObj


  # Create interface ports
  set ap_ctrl [ create_bd_intf_port -mode Slave -vlnv xilinx.com:interface:acc_handshake_rtl:1.0 ap_ctrl ]


  # Create ports
  set ap_clk [ create_bd_port -dir I -type clk ap_clk ]
  set_property -dict [ list \
   CONFIG.FREQ_HZ {239000000.0} \
 ] $ap_clk
  set ap_rst [ create_bd_port -dir I -type rst ap_rst ]
  set_property -dict [ list \
   CONFIG.POLARITY {ACTIVE_HIGH} \
 ] $ap_rst
  set score_0_V [ create_bd_port -dir O -from 10 -to 0 -type data score_0_V ]
  set score_0_V_ap_vld [ create_bd_port -dir O score_0_V_ap_vld ]
  set score_1_V [ create_bd_port -dir I -from 10 -to 0 -type data score_1_V ]
  set tree_scores_0_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_0_V ]
  set tree_scores_0_V_ap_vld [ create_bd_port -dir O tree_scores_0_V_ap_vld ]
  set tree_scores_10_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_10_V ]
  set tree_scores_10_V_ap_vld [ create_bd_port -dir O tree_scores_10_V_ap_vld ]
  set tree_scores_11_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_11_V ]
  set tree_scores_11_V_ap_vld [ create_bd_port -dir O tree_scores_11_V_ap_vld ]
  set tree_scores_12_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_12_V ]
  set tree_scores_12_V_ap_vld [ create_bd_port -dir O tree_scores_12_V_ap_vld ]
  set tree_scores_13_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_13_V ]
  set tree_scores_13_V_ap_vld [ create_bd_port -dir O tree_scores_13_V_ap_vld ]
  set tree_scores_14_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_14_V ]
  set tree_scores_14_V_ap_vld [ create_bd_port -dir O tree_scores_14_V_ap_vld ]
  set tree_scores_15_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_15_V ]
  set tree_scores_15_V_ap_vld [ create_bd_port -dir O tree_scores_15_V_ap_vld ]
  set tree_scores_16_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_16_V ]
  set tree_scores_16_V_ap_vld [ create_bd_port -dir O tree_scores_16_V_ap_vld ]
  set tree_scores_17_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_17_V ]
  set tree_scores_17_V_ap_vld [ create_bd_port -dir O tree_scores_17_V_ap_vld ]
  set tree_scores_18_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_18_V ]
  set tree_scores_18_V_ap_vld [ create_bd_port -dir O tree_scores_18_V_ap_vld ]
  set tree_scores_19_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_19_V ]
  set tree_scores_19_V_ap_vld [ create_bd_port -dir O tree_scores_19_V_ap_vld ]
  set tree_scores_1_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_1_V ]
  set tree_scores_1_V_ap_vld [ create_bd_port -dir O tree_scores_1_V_ap_vld ]
  set tree_scores_20_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_20_V ]
  set tree_scores_20_V_ap_vld [ create_bd_port -dir O tree_scores_20_V_ap_vld ]
  set tree_scores_21_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_21_V ]
  set tree_scores_21_V_ap_vld [ create_bd_port -dir O tree_scores_21_V_ap_vld ]
  set tree_scores_22_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_22_V ]
  set tree_scores_22_V_ap_vld [ create_bd_port -dir O tree_scores_22_V_ap_vld ]
  set tree_scores_23_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_23_V ]
  set tree_scores_23_V_ap_vld [ create_bd_port -dir O tree_scores_23_V_ap_vld ]
  set tree_scores_24_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_24_V ]
  set tree_scores_24_V_ap_vld [ create_bd_port -dir O tree_scores_24_V_ap_vld ]
  set tree_scores_25_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_25_V ]
  set tree_scores_25_V_ap_vld [ create_bd_port -dir O tree_scores_25_V_ap_vld ]
  set tree_scores_26_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_26_V ]
  set tree_scores_26_V_ap_vld [ create_bd_port -dir O tree_scores_26_V_ap_vld ]
  set tree_scores_27_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_27_V ]
  set tree_scores_27_V_ap_vld [ create_bd_port -dir O tree_scores_27_V_ap_vld ]
  set tree_scores_28_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_28_V ]
  set tree_scores_28_V_ap_vld [ create_bd_port -dir O tree_scores_28_V_ap_vld ]
  set tree_scores_29_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_29_V ]
  set tree_scores_29_V_ap_vld [ create_bd_port -dir O tree_scores_29_V_ap_vld ]
  set tree_scores_2_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_2_V ]
  set tree_scores_2_V_ap_vld [ create_bd_port -dir O tree_scores_2_V_ap_vld ]
  set tree_scores_30_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_30_V ]
  set tree_scores_30_V_ap_vld [ create_bd_port -dir O tree_scores_30_V_ap_vld ]
  set tree_scores_31_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_31_V ]
  set tree_scores_31_V_ap_vld [ create_bd_port -dir O tree_scores_31_V_ap_vld ]
  set tree_scores_32_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_32_V ]
  set tree_scores_32_V_ap_vld [ create_bd_port -dir O tree_scores_32_V_ap_vld ]
  set tree_scores_33_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_33_V ]
  set tree_scores_33_V_ap_vld [ create_bd_port -dir O tree_scores_33_V_ap_vld ]
  set tree_scores_34_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_34_V ]
  set tree_scores_34_V_ap_vld [ create_bd_port -dir O tree_scores_34_V_ap_vld ]
  set tree_scores_35_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_35_V ]
  set tree_scores_35_V_ap_vld [ create_bd_port -dir O tree_scores_35_V_ap_vld ]
  set tree_scores_36_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_36_V ]
  set tree_scores_36_V_ap_vld [ create_bd_port -dir O tree_scores_36_V_ap_vld ]
  set tree_scores_37_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_37_V ]
  set tree_scores_37_V_ap_vld [ create_bd_port -dir O tree_scores_37_V_ap_vld ]
  set tree_scores_38_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_38_V ]
  set tree_scores_38_V_ap_vld [ create_bd_port -dir O tree_scores_38_V_ap_vld ]
  set tree_scores_39_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_39_V ]
  set tree_scores_39_V_ap_vld [ create_bd_port -dir O tree_scores_39_V_ap_vld ]
  set tree_scores_3_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_3_V ]
  set tree_scores_3_V_ap_vld [ create_bd_port -dir O tree_scores_3_V_ap_vld ]
  set tree_scores_40_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_40_V ]
  set tree_scores_40_V_ap_vld [ create_bd_port -dir O tree_scores_40_V_ap_vld ]
  set tree_scores_41_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_41_V ]
  set tree_scores_41_V_ap_vld [ create_bd_port -dir O tree_scores_41_V_ap_vld ]
  set tree_scores_42_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_42_V ]
  set tree_scores_42_V_ap_vld [ create_bd_port -dir O tree_scores_42_V_ap_vld ]
  set tree_scores_43_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_43_V ]
  set tree_scores_43_V_ap_vld [ create_bd_port -dir O tree_scores_43_V_ap_vld ]
  set tree_scores_44_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_44_V ]
  set tree_scores_44_V_ap_vld [ create_bd_port -dir O tree_scores_44_V_ap_vld ]
  set tree_scores_45_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_45_V ]
  set tree_scores_45_V_ap_vld [ create_bd_port -dir O tree_scores_45_V_ap_vld ]
  set tree_scores_46_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_46_V ]
  set tree_scores_46_V_ap_vld [ create_bd_port -dir O tree_scores_46_V_ap_vld ]
  set tree_scores_47_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_47_V ]
  set tree_scores_47_V_ap_vld [ create_bd_port -dir O tree_scores_47_V_ap_vld ]
  set tree_scores_48_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_48_V ]
  set tree_scores_48_V_ap_vld [ create_bd_port -dir O tree_scores_48_V_ap_vld ]
  set tree_scores_49_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_49_V ]
  set tree_scores_49_V_ap_vld [ create_bd_port -dir O tree_scores_49_V_ap_vld ]
  set tree_scores_4_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_4_V ]
  set tree_scores_4_V_ap_vld [ create_bd_port -dir O tree_scores_4_V_ap_vld ]
  set tree_scores_50_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_50_V ]
  set tree_scores_50_V_ap_vld [ create_bd_port -dir O tree_scores_50_V_ap_vld ]
  set tree_scores_51_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_51_V ]
  set tree_scores_51_V_ap_vld [ create_bd_port -dir O tree_scores_51_V_ap_vld ]
  set tree_scores_52_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_52_V ]
  set tree_scores_52_V_ap_vld [ create_bd_port -dir O tree_scores_52_V_ap_vld ]
  set tree_scores_53_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_53_V ]
  set tree_scores_53_V_ap_vld [ create_bd_port -dir O tree_scores_53_V_ap_vld ]
  set tree_scores_54_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_54_V ]
  set tree_scores_54_V_ap_vld [ create_bd_port -dir O tree_scores_54_V_ap_vld ]
  set tree_scores_55_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_55_V ]
  set tree_scores_55_V_ap_vld [ create_bd_port -dir O tree_scores_55_V_ap_vld ]
  set tree_scores_56_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_56_V ]
  set tree_scores_56_V_ap_vld [ create_bd_port -dir O tree_scores_56_V_ap_vld ]
  set tree_scores_57_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_57_V ]
  set tree_scores_57_V_ap_vld [ create_bd_port -dir O tree_scores_57_V_ap_vld ]
  set tree_scores_58_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_58_V ]
  set tree_scores_58_V_ap_vld [ create_bd_port -dir O tree_scores_58_V_ap_vld ]
  set tree_scores_59_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_59_V ]
  set tree_scores_59_V_ap_vld [ create_bd_port -dir O tree_scores_59_V_ap_vld ]
  set tree_scores_5_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_5_V ]
  set tree_scores_5_V_ap_vld [ create_bd_port -dir O tree_scores_5_V_ap_vld ]
  set tree_scores_60_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_60_V ]
  set tree_scores_60_V_ap_vld [ create_bd_port -dir O tree_scores_60_V_ap_vld ]
  set tree_scores_61_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_61_V ]
  set tree_scores_61_V_ap_vld [ create_bd_port -dir O tree_scores_61_V_ap_vld ]
  set tree_scores_62_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_62_V ]
  set tree_scores_62_V_ap_vld [ create_bd_port -dir O tree_scores_62_V_ap_vld ]
  set tree_scores_63_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_63_V ]
  set tree_scores_63_V_ap_vld [ create_bd_port -dir O tree_scores_63_V_ap_vld ]
  set tree_scores_64_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_64_V ]
  set tree_scores_64_V_ap_vld [ create_bd_port -dir O tree_scores_64_V_ap_vld ]
  set tree_scores_65_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_65_V ]
  set tree_scores_65_V_ap_vld [ create_bd_port -dir O tree_scores_65_V_ap_vld ]
  set tree_scores_66_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_66_V ]
  set tree_scores_66_V_ap_vld [ create_bd_port -dir O tree_scores_66_V_ap_vld ]
  set tree_scores_67_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_67_V ]
  set tree_scores_67_V_ap_vld [ create_bd_port -dir O tree_scores_67_V_ap_vld ]
  set tree_scores_68_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_68_V ]
  set tree_scores_68_V_ap_vld [ create_bd_port -dir O tree_scores_68_V_ap_vld ]
  set tree_scores_69_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_69_V ]
  set tree_scores_69_V_ap_vld [ create_bd_port -dir O tree_scores_69_V_ap_vld ]
  set tree_scores_6_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_6_V ]
  set tree_scores_6_V_ap_vld [ create_bd_port -dir O tree_scores_6_V_ap_vld ]
  set tree_scores_70_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_70_V ]
  set tree_scores_70_V_ap_vld [ create_bd_port -dir O tree_scores_70_V_ap_vld ]
  set tree_scores_71_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_71_V ]
  set tree_scores_71_V_ap_vld [ create_bd_port -dir O tree_scores_71_V_ap_vld ]
  set tree_scores_72_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_72_V ]
  set tree_scores_72_V_ap_vld [ create_bd_port -dir O tree_scores_72_V_ap_vld ]
  set tree_scores_73_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_73_V ]
  set tree_scores_73_V_ap_vld [ create_bd_port -dir O tree_scores_73_V_ap_vld ]
  set tree_scores_74_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_74_V ]
  set tree_scores_74_V_ap_vld [ create_bd_port -dir O tree_scores_74_V_ap_vld ]
  set tree_scores_75_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_75_V ]
  set tree_scores_75_V_ap_vld [ create_bd_port -dir O tree_scores_75_V_ap_vld ]
  set tree_scores_76_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_76_V ]
  set tree_scores_76_V_ap_vld [ create_bd_port -dir O tree_scores_76_V_ap_vld ]
  set tree_scores_77_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_77_V ]
  set tree_scores_77_V_ap_vld [ create_bd_port -dir O tree_scores_77_V_ap_vld ]
  set tree_scores_78_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_78_V ]
  set tree_scores_78_V_ap_vld [ create_bd_port -dir O tree_scores_78_V_ap_vld ]
  set tree_scores_79_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_79_V ]
  set tree_scores_79_V_ap_vld [ create_bd_port -dir O tree_scores_79_V_ap_vld ]
  set tree_scores_7_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_7_V ]
  set tree_scores_7_V_ap_vld [ create_bd_port -dir O tree_scores_7_V_ap_vld ]
  set tree_scores_80_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_80_V ]
  set tree_scores_80_V_ap_vld [ create_bd_port -dir O tree_scores_80_V_ap_vld ]
  set tree_scores_81_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_81_V ]
  set tree_scores_81_V_ap_vld [ create_bd_port -dir O tree_scores_81_V_ap_vld ]
  set tree_scores_82_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_82_V ]
  set tree_scores_82_V_ap_vld [ create_bd_port -dir O tree_scores_82_V_ap_vld ]
  set tree_scores_83_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_83_V ]
  set tree_scores_83_V_ap_vld [ create_bd_port -dir O tree_scores_83_V_ap_vld ]
  set tree_scores_84_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_84_V ]
  set tree_scores_84_V_ap_vld [ create_bd_port -dir O tree_scores_84_V_ap_vld ]
  set tree_scores_85_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_85_V ]
  set tree_scores_85_V_ap_vld [ create_bd_port -dir O tree_scores_85_V_ap_vld ]
  set tree_scores_86_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_86_V ]
  set tree_scores_86_V_ap_vld [ create_bd_port -dir O tree_scores_86_V_ap_vld ]
  set tree_scores_87_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_87_V ]
  set tree_scores_87_V_ap_vld [ create_bd_port -dir O tree_scores_87_V_ap_vld ]
  set tree_scores_88_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_88_V ]
  set tree_scores_88_V_ap_vld [ create_bd_port -dir O tree_scores_88_V_ap_vld ]
  set tree_scores_89_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_89_V ]
  set tree_scores_89_V_ap_vld [ create_bd_port -dir O tree_scores_89_V_ap_vld ]
  set tree_scores_8_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_8_V ]
  set tree_scores_8_V_ap_vld [ create_bd_port -dir O tree_scores_8_V_ap_vld ]
  set tree_scores_90_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_90_V ]
  set tree_scores_90_V_ap_vld [ create_bd_port -dir O tree_scores_90_V_ap_vld ]
  set tree_scores_91_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_91_V ]
  set tree_scores_91_V_ap_vld [ create_bd_port -dir O tree_scores_91_V_ap_vld ]
  set tree_scores_92_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_92_V ]
  set tree_scores_92_V_ap_vld [ create_bd_port -dir O tree_scores_92_V_ap_vld ]
  set tree_scores_93_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_93_V ]
  set tree_scores_93_V_ap_vld [ create_bd_port -dir O tree_scores_93_V_ap_vld ]
  set tree_scores_94_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_94_V ]
  set tree_scores_94_V_ap_vld [ create_bd_port -dir O tree_scores_94_V_ap_vld ]
  set tree_scores_95_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_95_V ]
  set tree_scores_95_V_ap_vld [ create_bd_port -dir O tree_scores_95_V_ap_vld ]
  set tree_scores_96_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_96_V ]
  set tree_scores_96_V_ap_vld [ create_bd_port -dir O tree_scores_96_V_ap_vld ]
  set tree_scores_97_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_97_V ]
  set tree_scores_97_V_ap_vld [ create_bd_port -dir O tree_scores_97_V_ap_vld ]
  set tree_scores_98_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_98_V ]
  set tree_scores_98_V_ap_vld [ create_bd_port -dir O tree_scores_98_V_ap_vld ]
  set tree_scores_99_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_99_V ]
  set tree_scores_99_V_ap_vld [ create_bd_port -dir O tree_scores_99_V_ap_vld ]
  set tree_scores_9_V [ create_bd_port -dir O -from 10 -to 0 -type data tree_scores_9_V ]
  set tree_scores_9_V_ap_vld [ create_bd_port -dir O tree_scores_9_V_ap_vld ]
  set x_0_V [ create_bd_port -dir I -from 10 -to 0 -type data x_0_V ]
  set x_1_V [ create_bd_port -dir I -from 10 -to 0 -type data x_1_V ]
  set x_2_V [ create_bd_port -dir I -from 10 -to 0 -type data x_2_V ]
  set x_3_V [ create_bd_port -dir I -from 10 -to 0 -type data x_3_V ]
  set x_4_V [ create_bd_port -dir I -from 10 -to 0 -type data x_4_V ]
  set x_5_V [ create_bd_port -dir I -from 10 -to 0 -type data x_5_V ]
  set x_6_V [ create_bd_port -dir I -from 10 -to 0 -type data x_6_V ]

  # Create instance: hls_inst, and set properties
  set hls_inst [ create_bd_cell -type ip -vlnv xilinx.com:hls:my_prj:1.0 hls_inst ]

  # Create interface connections
  connect_bd_intf_net -intf_net ap_ctrl_0_1 [get_bd_intf_ports ap_ctrl] [get_bd_intf_pins hls_inst/ap_ctrl]

  # Create port connections
  connect_bd_net -net ap_clk_0_1 [get_bd_ports ap_clk] [get_bd_pins hls_inst/ap_clk]
  connect_bd_net -net ap_rst_0_1 [get_bd_ports ap_rst] [get_bd_pins hls_inst/ap_rst]
  connect_bd_net -net hls_inst_score_0_V [get_bd_ports score_0_V] [get_bd_pins hls_inst/score_0_V]
  connect_bd_net -net hls_inst_score_0_V_ap_vld [get_bd_ports score_0_V_ap_vld] [get_bd_pins hls_inst/score_0_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_0_V [get_bd_ports tree_scores_0_V] [get_bd_pins hls_inst/tree_scores_0_V]
  connect_bd_net -net hls_inst_tree_scores_0_V_ap_vld [get_bd_ports tree_scores_0_V_ap_vld] [get_bd_pins hls_inst/tree_scores_0_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_10_V [get_bd_ports tree_scores_10_V] [get_bd_pins hls_inst/tree_scores_10_V]
  connect_bd_net -net hls_inst_tree_scores_10_V_ap_vld [get_bd_ports tree_scores_10_V_ap_vld] [get_bd_pins hls_inst/tree_scores_10_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_11_V [get_bd_ports tree_scores_11_V] [get_bd_pins hls_inst/tree_scores_11_V]
  connect_bd_net -net hls_inst_tree_scores_11_V_ap_vld [get_bd_ports tree_scores_11_V_ap_vld] [get_bd_pins hls_inst/tree_scores_11_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_12_V [get_bd_ports tree_scores_12_V] [get_bd_pins hls_inst/tree_scores_12_V]
  connect_bd_net -net hls_inst_tree_scores_12_V_ap_vld [get_bd_ports tree_scores_12_V_ap_vld] [get_bd_pins hls_inst/tree_scores_12_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_13_V [get_bd_ports tree_scores_13_V] [get_bd_pins hls_inst/tree_scores_13_V]
  connect_bd_net -net hls_inst_tree_scores_13_V_ap_vld [get_bd_ports tree_scores_13_V_ap_vld] [get_bd_pins hls_inst/tree_scores_13_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_14_V [get_bd_ports tree_scores_14_V] [get_bd_pins hls_inst/tree_scores_14_V]
  connect_bd_net -net hls_inst_tree_scores_14_V_ap_vld [get_bd_ports tree_scores_14_V_ap_vld] [get_bd_pins hls_inst/tree_scores_14_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_15_V [get_bd_ports tree_scores_15_V] [get_bd_pins hls_inst/tree_scores_15_V]
  connect_bd_net -net hls_inst_tree_scores_15_V_ap_vld [get_bd_ports tree_scores_15_V_ap_vld] [get_bd_pins hls_inst/tree_scores_15_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_16_V [get_bd_ports tree_scores_16_V] [get_bd_pins hls_inst/tree_scores_16_V]
  connect_bd_net -net hls_inst_tree_scores_16_V_ap_vld [get_bd_ports tree_scores_16_V_ap_vld] [get_bd_pins hls_inst/tree_scores_16_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_17_V [get_bd_ports tree_scores_17_V] [get_bd_pins hls_inst/tree_scores_17_V]
  connect_bd_net -net hls_inst_tree_scores_17_V_ap_vld [get_bd_ports tree_scores_17_V_ap_vld] [get_bd_pins hls_inst/tree_scores_17_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_18_V [get_bd_ports tree_scores_18_V] [get_bd_pins hls_inst/tree_scores_18_V]
  connect_bd_net -net hls_inst_tree_scores_18_V_ap_vld [get_bd_ports tree_scores_18_V_ap_vld] [get_bd_pins hls_inst/tree_scores_18_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_19_V [get_bd_ports tree_scores_19_V] [get_bd_pins hls_inst/tree_scores_19_V]
  connect_bd_net -net hls_inst_tree_scores_19_V_ap_vld [get_bd_ports tree_scores_19_V_ap_vld] [get_bd_pins hls_inst/tree_scores_19_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_1_V [get_bd_ports tree_scores_1_V] [get_bd_pins hls_inst/tree_scores_1_V]
  connect_bd_net -net hls_inst_tree_scores_1_V_ap_vld [get_bd_ports tree_scores_1_V_ap_vld] [get_bd_pins hls_inst/tree_scores_1_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_20_V [get_bd_ports tree_scores_20_V] [get_bd_pins hls_inst/tree_scores_20_V]
  connect_bd_net -net hls_inst_tree_scores_20_V_ap_vld [get_bd_ports tree_scores_20_V_ap_vld] [get_bd_pins hls_inst/tree_scores_20_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_21_V [get_bd_ports tree_scores_21_V] [get_bd_pins hls_inst/tree_scores_21_V]
  connect_bd_net -net hls_inst_tree_scores_21_V_ap_vld [get_bd_ports tree_scores_21_V_ap_vld] [get_bd_pins hls_inst/tree_scores_21_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_22_V [get_bd_ports tree_scores_22_V] [get_bd_pins hls_inst/tree_scores_22_V]
  connect_bd_net -net hls_inst_tree_scores_22_V_ap_vld [get_bd_ports tree_scores_22_V_ap_vld] [get_bd_pins hls_inst/tree_scores_22_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_23_V [get_bd_ports tree_scores_23_V] [get_bd_pins hls_inst/tree_scores_23_V]
  connect_bd_net -net hls_inst_tree_scores_23_V_ap_vld [get_bd_ports tree_scores_23_V_ap_vld] [get_bd_pins hls_inst/tree_scores_23_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_24_V [get_bd_ports tree_scores_24_V] [get_bd_pins hls_inst/tree_scores_24_V]
  connect_bd_net -net hls_inst_tree_scores_24_V_ap_vld [get_bd_ports tree_scores_24_V_ap_vld] [get_bd_pins hls_inst/tree_scores_24_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_25_V [get_bd_ports tree_scores_25_V] [get_bd_pins hls_inst/tree_scores_25_V]
  connect_bd_net -net hls_inst_tree_scores_25_V_ap_vld [get_bd_ports tree_scores_25_V_ap_vld] [get_bd_pins hls_inst/tree_scores_25_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_26_V [get_bd_ports tree_scores_26_V] [get_bd_pins hls_inst/tree_scores_26_V]
  connect_bd_net -net hls_inst_tree_scores_26_V_ap_vld [get_bd_ports tree_scores_26_V_ap_vld] [get_bd_pins hls_inst/tree_scores_26_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_27_V [get_bd_ports tree_scores_27_V] [get_bd_pins hls_inst/tree_scores_27_V]
  connect_bd_net -net hls_inst_tree_scores_27_V_ap_vld [get_bd_ports tree_scores_27_V_ap_vld] [get_bd_pins hls_inst/tree_scores_27_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_28_V [get_bd_ports tree_scores_28_V] [get_bd_pins hls_inst/tree_scores_28_V]
  connect_bd_net -net hls_inst_tree_scores_28_V_ap_vld [get_bd_ports tree_scores_28_V_ap_vld] [get_bd_pins hls_inst/tree_scores_28_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_29_V [get_bd_ports tree_scores_29_V] [get_bd_pins hls_inst/tree_scores_29_V]
  connect_bd_net -net hls_inst_tree_scores_29_V_ap_vld [get_bd_ports tree_scores_29_V_ap_vld] [get_bd_pins hls_inst/tree_scores_29_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_2_V [get_bd_ports tree_scores_2_V] [get_bd_pins hls_inst/tree_scores_2_V]
  connect_bd_net -net hls_inst_tree_scores_2_V_ap_vld [get_bd_ports tree_scores_2_V_ap_vld] [get_bd_pins hls_inst/tree_scores_2_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_30_V [get_bd_ports tree_scores_30_V] [get_bd_pins hls_inst/tree_scores_30_V]
  connect_bd_net -net hls_inst_tree_scores_30_V_ap_vld [get_bd_ports tree_scores_30_V_ap_vld] [get_bd_pins hls_inst/tree_scores_30_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_31_V [get_bd_ports tree_scores_31_V] [get_bd_pins hls_inst/tree_scores_31_V]
  connect_bd_net -net hls_inst_tree_scores_31_V_ap_vld [get_bd_ports tree_scores_31_V_ap_vld] [get_bd_pins hls_inst/tree_scores_31_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_32_V [get_bd_ports tree_scores_32_V] [get_bd_pins hls_inst/tree_scores_32_V]
  connect_bd_net -net hls_inst_tree_scores_32_V_ap_vld [get_bd_ports tree_scores_32_V_ap_vld] [get_bd_pins hls_inst/tree_scores_32_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_33_V [get_bd_ports tree_scores_33_V] [get_bd_pins hls_inst/tree_scores_33_V]
  connect_bd_net -net hls_inst_tree_scores_33_V_ap_vld [get_bd_ports tree_scores_33_V_ap_vld] [get_bd_pins hls_inst/tree_scores_33_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_34_V [get_bd_ports tree_scores_34_V] [get_bd_pins hls_inst/tree_scores_34_V]
  connect_bd_net -net hls_inst_tree_scores_34_V_ap_vld [get_bd_ports tree_scores_34_V_ap_vld] [get_bd_pins hls_inst/tree_scores_34_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_35_V [get_bd_ports tree_scores_35_V] [get_bd_pins hls_inst/tree_scores_35_V]
  connect_bd_net -net hls_inst_tree_scores_35_V_ap_vld [get_bd_ports tree_scores_35_V_ap_vld] [get_bd_pins hls_inst/tree_scores_35_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_36_V [get_bd_ports tree_scores_36_V] [get_bd_pins hls_inst/tree_scores_36_V]
  connect_bd_net -net hls_inst_tree_scores_36_V_ap_vld [get_bd_ports tree_scores_36_V_ap_vld] [get_bd_pins hls_inst/tree_scores_36_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_37_V [get_bd_ports tree_scores_37_V] [get_bd_pins hls_inst/tree_scores_37_V]
  connect_bd_net -net hls_inst_tree_scores_37_V_ap_vld [get_bd_ports tree_scores_37_V_ap_vld] [get_bd_pins hls_inst/tree_scores_37_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_38_V [get_bd_ports tree_scores_38_V] [get_bd_pins hls_inst/tree_scores_38_V]
  connect_bd_net -net hls_inst_tree_scores_38_V_ap_vld [get_bd_ports tree_scores_38_V_ap_vld] [get_bd_pins hls_inst/tree_scores_38_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_39_V [get_bd_ports tree_scores_39_V] [get_bd_pins hls_inst/tree_scores_39_V]
  connect_bd_net -net hls_inst_tree_scores_39_V_ap_vld [get_bd_ports tree_scores_39_V_ap_vld] [get_bd_pins hls_inst/tree_scores_39_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_3_V [get_bd_ports tree_scores_3_V] [get_bd_pins hls_inst/tree_scores_3_V]
  connect_bd_net -net hls_inst_tree_scores_3_V_ap_vld [get_bd_ports tree_scores_3_V_ap_vld] [get_bd_pins hls_inst/tree_scores_3_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_40_V [get_bd_ports tree_scores_40_V] [get_bd_pins hls_inst/tree_scores_40_V]
  connect_bd_net -net hls_inst_tree_scores_40_V_ap_vld [get_bd_ports tree_scores_40_V_ap_vld] [get_bd_pins hls_inst/tree_scores_40_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_41_V [get_bd_ports tree_scores_41_V] [get_bd_pins hls_inst/tree_scores_41_V]
  connect_bd_net -net hls_inst_tree_scores_41_V_ap_vld [get_bd_ports tree_scores_41_V_ap_vld] [get_bd_pins hls_inst/tree_scores_41_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_42_V [get_bd_ports tree_scores_42_V] [get_bd_pins hls_inst/tree_scores_42_V]
  connect_bd_net -net hls_inst_tree_scores_42_V_ap_vld [get_bd_ports tree_scores_42_V_ap_vld] [get_bd_pins hls_inst/tree_scores_42_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_43_V [get_bd_ports tree_scores_43_V] [get_bd_pins hls_inst/tree_scores_43_V]
  connect_bd_net -net hls_inst_tree_scores_43_V_ap_vld [get_bd_ports tree_scores_43_V_ap_vld] [get_bd_pins hls_inst/tree_scores_43_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_44_V [get_bd_ports tree_scores_44_V] [get_bd_pins hls_inst/tree_scores_44_V]
  connect_bd_net -net hls_inst_tree_scores_44_V_ap_vld [get_bd_ports tree_scores_44_V_ap_vld] [get_bd_pins hls_inst/tree_scores_44_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_45_V [get_bd_ports tree_scores_45_V] [get_bd_pins hls_inst/tree_scores_45_V]
  connect_bd_net -net hls_inst_tree_scores_45_V_ap_vld [get_bd_ports tree_scores_45_V_ap_vld] [get_bd_pins hls_inst/tree_scores_45_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_46_V [get_bd_ports tree_scores_46_V] [get_bd_pins hls_inst/tree_scores_46_V]
  connect_bd_net -net hls_inst_tree_scores_46_V_ap_vld [get_bd_ports tree_scores_46_V_ap_vld] [get_bd_pins hls_inst/tree_scores_46_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_47_V [get_bd_ports tree_scores_47_V] [get_bd_pins hls_inst/tree_scores_47_V]
  connect_bd_net -net hls_inst_tree_scores_47_V_ap_vld [get_bd_ports tree_scores_47_V_ap_vld] [get_bd_pins hls_inst/tree_scores_47_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_48_V [get_bd_ports tree_scores_48_V] [get_bd_pins hls_inst/tree_scores_48_V]
  connect_bd_net -net hls_inst_tree_scores_48_V_ap_vld [get_bd_ports tree_scores_48_V_ap_vld] [get_bd_pins hls_inst/tree_scores_48_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_49_V [get_bd_ports tree_scores_49_V] [get_bd_pins hls_inst/tree_scores_49_V]
  connect_bd_net -net hls_inst_tree_scores_49_V_ap_vld [get_bd_ports tree_scores_49_V_ap_vld] [get_bd_pins hls_inst/tree_scores_49_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_4_V [get_bd_ports tree_scores_4_V] [get_bd_pins hls_inst/tree_scores_4_V]
  connect_bd_net -net hls_inst_tree_scores_4_V_ap_vld [get_bd_ports tree_scores_4_V_ap_vld] [get_bd_pins hls_inst/tree_scores_4_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_50_V [get_bd_ports tree_scores_50_V] [get_bd_pins hls_inst/tree_scores_50_V]
  connect_bd_net -net hls_inst_tree_scores_50_V_ap_vld [get_bd_ports tree_scores_50_V_ap_vld] [get_bd_pins hls_inst/tree_scores_50_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_51_V [get_bd_ports tree_scores_51_V] [get_bd_pins hls_inst/tree_scores_51_V]
  connect_bd_net -net hls_inst_tree_scores_51_V_ap_vld [get_bd_ports tree_scores_51_V_ap_vld] [get_bd_pins hls_inst/tree_scores_51_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_52_V [get_bd_ports tree_scores_52_V] [get_bd_pins hls_inst/tree_scores_52_V]
  connect_bd_net -net hls_inst_tree_scores_52_V_ap_vld [get_bd_ports tree_scores_52_V_ap_vld] [get_bd_pins hls_inst/tree_scores_52_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_53_V [get_bd_ports tree_scores_53_V] [get_bd_pins hls_inst/tree_scores_53_V]
  connect_bd_net -net hls_inst_tree_scores_53_V_ap_vld [get_bd_ports tree_scores_53_V_ap_vld] [get_bd_pins hls_inst/tree_scores_53_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_54_V [get_bd_ports tree_scores_54_V] [get_bd_pins hls_inst/tree_scores_54_V]
  connect_bd_net -net hls_inst_tree_scores_54_V_ap_vld [get_bd_ports tree_scores_54_V_ap_vld] [get_bd_pins hls_inst/tree_scores_54_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_55_V [get_bd_ports tree_scores_55_V] [get_bd_pins hls_inst/tree_scores_55_V]
  connect_bd_net -net hls_inst_tree_scores_55_V_ap_vld [get_bd_ports tree_scores_55_V_ap_vld] [get_bd_pins hls_inst/tree_scores_55_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_56_V [get_bd_ports tree_scores_56_V] [get_bd_pins hls_inst/tree_scores_56_V]
  connect_bd_net -net hls_inst_tree_scores_56_V_ap_vld [get_bd_ports tree_scores_56_V_ap_vld] [get_bd_pins hls_inst/tree_scores_56_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_57_V [get_bd_ports tree_scores_57_V] [get_bd_pins hls_inst/tree_scores_57_V]
  connect_bd_net -net hls_inst_tree_scores_57_V_ap_vld [get_bd_ports tree_scores_57_V_ap_vld] [get_bd_pins hls_inst/tree_scores_57_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_58_V [get_bd_ports tree_scores_58_V] [get_bd_pins hls_inst/tree_scores_58_V]
  connect_bd_net -net hls_inst_tree_scores_58_V_ap_vld [get_bd_ports tree_scores_58_V_ap_vld] [get_bd_pins hls_inst/tree_scores_58_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_59_V [get_bd_ports tree_scores_59_V] [get_bd_pins hls_inst/tree_scores_59_V]
  connect_bd_net -net hls_inst_tree_scores_59_V_ap_vld [get_bd_ports tree_scores_59_V_ap_vld] [get_bd_pins hls_inst/tree_scores_59_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_5_V [get_bd_ports tree_scores_5_V] [get_bd_pins hls_inst/tree_scores_5_V]
  connect_bd_net -net hls_inst_tree_scores_5_V_ap_vld [get_bd_ports tree_scores_5_V_ap_vld] [get_bd_pins hls_inst/tree_scores_5_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_60_V [get_bd_ports tree_scores_60_V] [get_bd_pins hls_inst/tree_scores_60_V]
  connect_bd_net -net hls_inst_tree_scores_60_V_ap_vld [get_bd_ports tree_scores_60_V_ap_vld] [get_bd_pins hls_inst/tree_scores_60_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_61_V [get_bd_ports tree_scores_61_V] [get_bd_pins hls_inst/tree_scores_61_V]
  connect_bd_net -net hls_inst_tree_scores_61_V_ap_vld [get_bd_ports tree_scores_61_V_ap_vld] [get_bd_pins hls_inst/tree_scores_61_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_62_V [get_bd_ports tree_scores_62_V] [get_bd_pins hls_inst/tree_scores_62_V]
  connect_bd_net -net hls_inst_tree_scores_62_V_ap_vld [get_bd_ports tree_scores_62_V_ap_vld] [get_bd_pins hls_inst/tree_scores_62_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_63_V [get_bd_ports tree_scores_63_V] [get_bd_pins hls_inst/tree_scores_63_V]
  connect_bd_net -net hls_inst_tree_scores_63_V_ap_vld [get_bd_ports tree_scores_63_V_ap_vld] [get_bd_pins hls_inst/tree_scores_63_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_64_V [get_bd_ports tree_scores_64_V] [get_bd_pins hls_inst/tree_scores_64_V]
  connect_bd_net -net hls_inst_tree_scores_64_V_ap_vld [get_bd_ports tree_scores_64_V_ap_vld] [get_bd_pins hls_inst/tree_scores_64_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_65_V [get_bd_ports tree_scores_65_V] [get_bd_pins hls_inst/tree_scores_65_V]
  connect_bd_net -net hls_inst_tree_scores_65_V_ap_vld [get_bd_ports tree_scores_65_V_ap_vld] [get_bd_pins hls_inst/tree_scores_65_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_66_V [get_bd_ports tree_scores_66_V] [get_bd_pins hls_inst/tree_scores_66_V]
  connect_bd_net -net hls_inst_tree_scores_66_V_ap_vld [get_bd_ports tree_scores_66_V_ap_vld] [get_bd_pins hls_inst/tree_scores_66_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_67_V [get_bd_ports tree_scores_67_V] [get_bd_pins hls_inst/tree_scores_67_V]
  connect_bd_net -net hls_inst_tree_scores_67_V_ap_vld [get_bd_ports tree_scores_67_V_ap_vld] [get_bd_pins hls_inst/tree_scores_67_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_68_V [get_bd_ports tree_scores_68_V] [get_bd_pins hls_inst/tree_scores_68_V]
  connect_bd_net -net hls_inst_tree_scores_68_V_ap_vld [get_bd_ports tree_scores_68_V_ap_vld] [get_bd_pins hls_inst/tree_scores_68_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_69_V [get_bd_ports tree_scores_69_V] [get_bd_pins hls_inst/tree_scores_69_V]
  connect_bd_net -net hls_inst_tree_scores_69_V_ap_vld [get_bd_ports tree_scores_69_V_ap_vld] [get_bd_pins hls_inst/tree_scores_69_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_6_V [get_bd_ports tree_scores_6_V] [get_bd_pins hls_inst/tree_scores_6_V]
  connect_bd_net -net hls_inst_tree_scores_6_V_ap_vld [get_bd_ports tree_scores_6_V_ap_vld] [get_bd_pins hls_inst/tree_scores_6_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_70_V [get_bd_ports tree_scores_70_V] [get_bd_pins hls_inst/tree_scores_70_V]
  connect_bd_net -net hls_inst_tree_scores_70_V_ap_vld [get_bd_ports tree_scores_70_V_ap_vld] [get_bd_pins hls_inst/tree_scores_70_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_71_V [get_bd_ports tree_scores_71_V] [get_bd_pins hls_inst/tree_scores_71_V]
  connect_bd_net -net hls_inst_tree_scores_71_V_ap_vld [get_bd_ports tree_scores_71_V_ap_vld] [get_bd_pins hls_inst/tree_scores_71_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_72_V [get_bd_ports tree_scores_72_V] [get_bd_pins hls_inst/tree_scores_72_V]
  connect_bd_net -net hls_inst_tree_scores_72_V_ap_vld [get_bd_ports tree_scores_72_V_ap_vld] [get_bd_pins hls_inst/tree_scores_72_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_73_V [get_bd_ports tree_scores_73_V] [get_bd_pins hls_inst/tree_scores_73_V]
  connect_bd_net -net hls_inst_tree_scores_73_V_ap_vld [get_bd_ports tree_scores_73_V_ap_vld] [get_bd_pins hls_inst/tree_scores_73_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_74_V [get_bd_ports tree_scores_74_V] [get_bd_pins hls_inst/tree_scores_74_V]
  connect_bd_net -net hls_inst_tree_scores_74_V_ap_vld [get_bd_ports tree_scores_74_V_ap_vld] [get_bd_pins hls_inst/tree_scores_74_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_75_V [get_bd_ports tree_scores_75_V] [get_bd_pins hls_inst/tree_scores_75_V]
  connect_bd_net -net hls_inst_tree_scores_75_V_ap_vld [get_bd_ports tree_scores_75_V_ap_vld] [get_bd_pins hls_inst/tree_scores_75_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_76_V [get_bd_ports tree_scores_76_V] [get_bd_pins hls_inst/tree_scores_76_V]
  connect_bd_net -net hls_inst_tree_scores_76_V_ap_vld [get_bd_ports tree_scores_76_V_ap_vld] [get_bd_pins hls_inst/tree_scores_76_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_77_V [get_bd_ports tree_scores_77_V] [get_bd_pins hls_inst/tree_scores_77_V]
  connect_bd_net -net hls_inst_tree_scores_77_V_ap_vld [get_bd_ports tree_scores_77_V_ap_vld] [get_bd_pins hls_inst/tree_scores_77_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_78_V [get_bd_ports tree_scores_78_V] [get_bd_pins hls_inst/tree_scores_78_V]
  connect_bd_net -net hls_inst_tree_scores_78_V_ap_vld [get_bd_ports tree_scores_78_V_ap_vld] [get_bd_pins hls_inst/tree_scores_78_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_79_V [get_bd_ports tree_scores_79_V] [get_bd_pins hls_inst/tree_scores_79_V]
  connect_bd_net -net hls_inst_tree_scores_79_V_ap_vld [get_bd_ports tree_scores_79_V_ap_vld] [get_bd_pins hls_inst/tree_scores_79_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_7_V [get_bd_ports tree_scores_7_V] [get_bd_pins hls_inst/tree_scores_7_V]
  connect_bd_net -net hls_inst_tree_scores_7_V_ap_vld [get_bd_ports tree_scores_7_V_ap_vld] [get_bd_pins hls_inst/tree_scores_7_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_80_V [get_bd_ports tree_scores_80_V] [get_bd_pins hls_inst/tree_scores_80_V]
  connect_bd_net -net hls_inst_tree_scores_80_V_ap_vld [get_bd_ports tree_scores_80_V_ap_vld] [get_bd_pins hls_inst/tree_scores_80_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_81_V [get_bd_ports tree_scores_81_V] [get_bd_pins hls_inst/tree_scores_81_V]
  connect_bd_net -net hls_inst_tree_scores_81_V_ap_vld [get_bd_ports tree_scores_81_V_ap_vld] [get_bd_pins hls_inst/tree_scores_81_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_82_V [get_bd_ports tree_scores_82_V] [get_bd_pins hls_inst/tree_scores_82_V]
  connect_bd_net -net hls_inst_tree_scores_82_V_ap_vld [get_bd_ports tree_scores_82_V_ap_vld] [get_bd_pins hls_inst/tree_scores_82_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_83_V [get_bd_ports tree_scores_83_V] [get_bd_pins hls_inst/tree_scores_83_V]
  connect_bd_net -net hls_inst_tree_scores_83_V_ap_vld [get_bd_ports tree_scores_83_V_ap_vld] [get_bd_pins hls_inst/tree_scores_83_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_84_V [get_bd_ports tree_scores_84_V] [get_bd_pins hls_inst/tree_scores_84_V]
  connect_bd_net -net hls_inst_tree_scores_84_V_ap_vld [get_bd_ports tree_scores_84_V_ap_vld] [get_bd_pins hls_inst/tree_scores_84_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_85_V [get_bd_ports tree_scores_85_V] [get_bd_pins hls_inst/tree_scores_85_V]
  connect_bd_net -net hls_inst_tree_scores_85_V_ap_vld [get_bd_ports tree_scores_85_V_ap_vld] [get_bd_pins hls_inst/tree_scores_85_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_86_V [get_bd_ports tree_scores_86_V] [get_bd_pins hls_inst/tree_scores_86_V]
  connect_bd_net -net hls_inst_tree_scores_86_V_ap_vld [get_bd_ports tree_scores_86_V_ap_vld] [get_bd_pins hls_inst/tree_scores_86_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_87_V [get_bd_ports tree_scores_87_V] [get_bd_pins hls_inst/tree_scores_87_V]
  connect_bd_net -net hls_inst_tree_scores_87_V_ap_vld [get_bd_ports tree_scores_87_V_ap_vld] [get_bd_pins hls_inst/tree_scores_87_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_88_V [get_bd_ports tree_scores_88_V] [get_bd_pins hls_inst/tree_scores_88_V]
  connect_bd_net -net hls_inst_tree_scores_88_V_ap_vld [get_bd_ports tree_scores_88_V_ap_vld] [get_bd_pins hls_inst/tree_scores_88_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_89_V [get_bd_ports tree_scores_89_V] [get_bd_pins hls_inst/tree_scores_89_V]
  connect_bd_net -net hls_inst_tree_scores_89_V_ap_vld [get_bd_ports tree_scores_89_V_ap_vld] [get_bd_pins hls_inst/tree_scores_89_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_8_V [get_bd_ports tree_scores_8_V] [get_bd_pins hls_inst/tree_scores_8_V]
  connect_bd_net -net hls_inst_tree_scores_8_V_ap_vld [get_bd_ports tree_scores_8_V_ap_vld] [get_bd_pins hls_inst/tree_scores_8_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_90_V [get_bd_ports tree_scores_90_V] [get_bd_pins hls_inst/tree_scores_90_V]
  connect_bd_net -net hls_inst_tree_scores_90_V_ap_vld [get_bd_ports tree_scores_90_V_ap_vld] [get_bd_pins hls_inst/tree_scores_90_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_91_V [get_bd_ports tree_scores_91_V] [get_bd_pins hls_inst/tree_scores_91_V]
  connect_bd_net -net hls_inst_tree_scores_91_V_ap_vld [get_bd_ports tree_scores_91_V_ap_vld] [get_bd_pins hls_inst/tree_scores_91_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_92_V [get_bd_ports tree_scores_92_V] [get_bd_pins hls_inst/tree_scores_92_V]
  connect_bd_net -net hls_inst_tree_scores_92_V_ap_vld [get_bd_ports tree_scores_92_V_ap_vld] [get_bd_pins hls_inst/tree_scores_92_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_93_V [get_bd_ports tree_scores_93_V] [get_bd_pins hls_inst/tree_scores_93_V]
  connect_bd_net -net hls_inst_tree_scores_93_V_ap_vld [get_bd_ports tree_scores_93_V_ap_vld] [get_bd_pins hls_inst/tree_scores_93_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_94_V [get_bd_ports tree_scores_94_V] [get_bd_pins hls_inst/tree_scores_94_V]
  connect_bd_net -net hls_inst_tree_scores_94_V_ap_vld [get_bd_ports tree_scores_94_V_ap_vld] [get_bd_pins hls_inst/tree_scores_94_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_95_V [get_bd_ports tree_scores_95_V] [get_bd_pins hls_inst/tree_scores_95_V]
  connect_bd_net -net hls_inst_tree_scores_95_V_ap_vld [get_bd_ports tree_scores_95_V_ap_vld] [get_bd_pins hls_inst/tree_scores_95_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_96_V [get_bd_ports tree_scores_96_V] [get_bd_pins hls_inst/tree_scores_96_V]
  connect_bd_net -net hls_inst_tree_scores_96_V_ap_vld [get_bd_ports tree_scores_96_V_ap_vld] [get_bd_pins hls_inst/tree_scores_96_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_97_V [get_bd_ports tree_scores_97_V] [get_bd_pins hls_inst/tree_scores_97_V]
  connect_bd_net -net hls_inst_tree_scores_97_V_ap_vld [get_bd_ports tree_scores_97_V_ap_vld] [get_bd_pins hls_inst/tree_scores_97_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_98_V [get_bd_ports tree_scores_98_V] [get_bd_pins hls_inst/tree_scores_98_V]
  connect_bd_net -net hls_inst_tree_scores_98_V_ap_vld [get_bd_ports tree_scores_98_V_ap_vld] [get_bd_pins hls_inst/tree_scores_98_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_99_V [get_bd_ports tree_scores_99_V] [get_bd_pins hls_inst/tree_scores_99_V]
  connect_bd_net -net hls_inst_tree_scores_99_V_ap_vld [get_bd_ports tree_scores_99_V_ap_vld] [get_bd_pins hls_inst/tree_scores_99_V_ap_vld]
  connect_bd_net -net hls_inst_tree_scores_9_V [get_bd_ports tree_scores_9_V] [get_bd_pins hls_inst/tree_scores_9_V]
  connect_bd_net -net hls_inst_tree_scores_9_V_ap_vld [get_bd_ports tree_scores_9_V_ap_vld] [get_bd_pins hls_inst/tree_scores_9_V_ap_vld]
  connect_bd_net -net score_1_V_0_1 [get_bd_ports score_1_V] [get_bd_pins hls_inst/score_1_V]
  connect_bd_net -net x_0_V_0_1 [get_bd_ports x_0_V] [get_bd_pins hls_inst/x_0_V]
  connect_bd_net -net x_1_V_0_1 [get_bd_ports x_1_V] [get_bd_pins hls_inst/x_1_V]
  connect_bd_net -net x_2_V_0_1 [get_bd_ports x_2_V] [get_bd_pins hls_inst/x_2_V]
  connect_bd_net -net x_3_V_0_1 [get_bd_ports x_3_V] [get_bd_pins hls_inst/x_3_V]
  connect_bd_net -net x_4_V_0_1 [get_bd_ports x_4_V] [get_bd_pins hls_inst/x_4_V]
  connect_bd_net -net x_5_V_0_1 [get_bd_ports x_5_V] [get_bd_pins hls_inst/x_5_V]
  connect_bd_net -net x_6_V_0_1 [get_bd_ports x_6_V] [get_bd_pins hls_inst/x_6_V]

  # Create address segments


  # Restore current instance
  current_bd_instance $oldCurInst

  validate_bd_design
  save_bd_design
}
# End of create_root_design()


##################################################################
# MAIN FLOW
##################################################################

create_root_design ""


