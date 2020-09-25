# ==============================================================
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.1 (64-bit)
# Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
# ==============================================================
proc sc_sim_check {ret err logfile} {
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] start...";
	}
    set errfile "err.log"
    if {[file exists $errfile] && [file size $errfile] != 0} {
        set fl [open $errfile r]
        while {[gets $fl line] >= 0} {
            if {[string first "AESL_mErrNo = " $line] == 0} {
                set mismatch_num [string range $line [string length "AESL_mErrNo = "] end]
                if {$mismatch_num != 0} {
                    ::AP::printMsg ERR COSIM 403 COSIM_403_986 ${mismatch_num}
                    break
                }
            }
        }
    }
    if {$ret || $err != ""} {
        if { [lindex $::errorCode 0] eq "CHILDSTATUS"} {
            set status [lindex $::errorCode 2]
            if {$status != ""} {
                ::AP::printMsg ERR COSIM 404 COSIM_404_987 $status
            } else {
                ::AP::printMsg ERR COSIM 405 COSIM_405_988
            }
        } else {
            ::AP::printMsg ERR COSIM 405 COSIM_405_989
        }
    }
    if {[file exists $logfile]} {
        set cmdret [catch {eval exec "grep \"Error:\" $logfile"} err]
        file delete -force $logfile
        if {$cmdret == 0} {
            ::AP::printMsg ERR COSIM 405 COSIM_405_990
        }
    }
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] finish...";
	}
}

proc rtl_sim_check {} {
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] start...";
	}
    set errfile "err.log"
    if {[file exists $errfile] && [file size $errfile] != 0} {
        set fl [open $errfile r]
        set unmatch_num 0
        while {[gets $fl line] >= 0} {
            if {[string first "unmatched" $line] != -1} {
                set unmatch_num [expr $unmatch_num + 1]
            }
        }
        if {$unmatch_num != 0} {
            ::AP::printMsg ERR COSIM 406 COSIM_406_991 ${unmatch_num}
        }
    }
    if {[file exists ".aesl_error"]} {
        set errfl [open ".aesl_error" r]
        gets $errfl line
        if {$line != 0} {
            ::AP::printMsg ERR COSIM 407 COSIM_407_992 $line
        }
    }
    if {[file exists ".exit.err"]} {
        ::AP::printMsg ERR COSIM 405 COSIM_405_993
    }
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] finish...";
	}
}

proc check_tvin_file {} {
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] start...";
	}
    set rtlfilelist {
         "c.my_prj.autotvin_x_0_V.dat"
         "c.my_prj.autotvin_x_1_V.dat"
         "c.my_prj.autotvin_x_2_V.dat"
         "c.my_prj.autotvin_x_3_V.dat"
         "c.my_prj.autotvin_x_4_V.dat"
         "c.my_prj.autotvin_x_5_V.dat"
         "c.my_prj.autotvin_x_6_V.dat"
         "c.my_prj.autotvout_score_0_V.dat"
         "c.my_prj.autotvout_tree_scores_0_V.dat"
         "c.my_prj.autotvout_tree_scores_1_V.dat"
         "c.my_prj.autotvout_tree_scores_2_V.dat"
         "c.my_prj.autotvout_tree_scores_3_V.dat"
         "c.my_prj.autotvout_tree_scores_4_V.dat"
         "c.my_prj.autotvout_tree_scores_5_V.dat"
         "c.my_prj.autotvout_tree_scores_6_V.dat"
         "c.my_prj.autotvout_tree_scores_7_V.dat"
         "c.my_prj.autotvout_tree_scores_8_V.dat"
         "c.my_prj.autotvout_tree_scores_9_V.dat"
         "c.my_prj.autotvout_tree_scores_10_V.dat"
         "c.my_prj.autotvout_tree_scores_11_V.dat"
         "c.my_prj.autotvout_tree_scores_12_V.dat"
         "c.my_prj.autotvout_tree_scores_13_V.dat"
         "c.my_prj.autotvout_tree_scores_14_V.dat"
         "c.my_prj.autotvout_tree_scores_15_V.dat"
         "c.my_prj.autotvout_tree_scores_16_V.dat"
         "c.my_prj.autotvout_tree_scores_17_V.dat"
         "c.my_prj.autotvout_tree_scores_18_V.dat"
         "c.my_prj.autotvout_tree_scores_19_V.dat"
         "c.my_prj.autotvout_tree_scores_20_V.dat"
         "c.my_prj.autotvout_tree_scores_21_V.dat"
         "c.my_prj.autotvout_tree_scores_22_V.dat"
         "c.my_prj.autotvout_tree_scores_23_V.dat"
         "c.my_prj.autotvout_tree_scores_24_V.dat"
         "c.my_prj.autotvout_tree_scores_25_V.dat"
         "c.my_prj.autotvout_tree_scores_26_V.dat"
         "c.my_prj.autotvout_tree_scores_27_V.dat"
         "c.my_prj.autotvout_tree_scores_28_V.dat"
         "c.my_prj.autotvout_tree_scores_29_V.dat"
         "c.my_prj.autotvout_tree_scores_30_V.dat"
         "c.my_prj.autotvout_tree_scores_31_V.dat"
         "c.my_prj.autotvout_tree_scores_32_V.dat"
         "c.my_prj.autotvout_tree_scores_33_V.dat"
         "c.my_prj.autotvout_tree_scores_34_V.dat"
         "c.my_prj.autotvout_tree_scores_35_V.dat"
         "c.my_prj.autotvout_tree_scores_36_V.dat"
         "c.my_prj.autotvout_tree_scores_37_V.dat"
         "c.my_prj.autotvout_tree_scores_38_V.dat"
         "c.my_prj.autotvout_tree_scores_39_V.dat"
         "c.my_prj.autotvout_tree_scores_40_V.dat"
         "c.my_prj.autotvout_tree_scores_41_V.dat"
         "c.my_prj.autotvout_tree_scores_42_V.dat"
         "c.my_prj.autotvout_tree_scores_43_V.dat"
         "c.my_prj.autotvout_tree_scores_44_V.dat"
         "c.my_prj.autotvout_tree_scores_45_V.dat"
         "c.my_prj.autotvout_tree_scores_46_V.dat"
         "c.my_prj.autotvout_tree_scores_47_V.dat"
         "c.my_prj.autotvout_tree_scores_48_V.dat"
         "c.my_prj.autotvout_tree_scores_49_V.dat"
         "c.my_prj.autotvout_tree_scores_50_V.dat"
         "c.my_prj.autotvout_tree_scores_51_V.dat"
         "c.my_prj.autotvout_tree_scores_52_V.dat"
         "c.my_prj.autotvout_tree_scores_53_V.dat"
         "c.my_prj.autotvout_tree_scores_54_V.dat"
         "c.my_prj.autotvout_tree_scores_55_V.dat"
         "c.my_prj.autotvout_tree_scores_56_V.dat"
         "c.my_prj.autotvout_tree_scores_57_V.dat"
         "c.my_prj.autotvout_tree_scores_58_V.dat"
         "c.my_prj.autotvout_tree_scores_59_V.dat"
         "c.my_prj.autotvout_tree_scores_60_V.dat"
         "c.my_prj.autotvout_tree_scores_61_V.dat"
         "c.my_prj.autotvout_tree_scores_62_V.dat"
         "c.my_prj.autotvout_tree_scores_63_V.dat"
         "c.my_prj.autotvout_tree_scores_64_V.dat"
         "c.my_prj.autotvout_tree_scores_65_V.dat"
         "c.my_prj.autotvout_tree_scores_66_V.dat"
         "c.my_prj.autotvout_tree_scores_67_V.dat"
         "c.my_prj.autotvout_tree_scores_68_V.dat"
         "c.my_prj.autotvout_tree_scores_69_V.dat"
         "c.my_prj.autotvout_tree_scores_70_V.dat"
         "c.my_prj.autotvout_tree_scores_71_V.dat"
         "c.my_prj.autotvout_tree_scores_72_V.dat"
         "c.my_prj.autotvout_tree_scores_73_V.dat"
         "c.my_prj.autotvout_tree_scores_74_V.dat"
         "c.my_prj.autotvout_tree_scores_75_V.dat"
         "c.my_prj.autotvout_tree_scores_76_V.dat"
         "c.my_prj.autotvout_tree_scores_77_V.dat"
         "c.my_prj.autotvout_tree_scores_78_V.dat"
         "c.my_prj.autotvout_tree_scores_79_V.dat"
         "c.my_prj.autotvout_tree_scores_80_V.dat"
         "c.my_prj.autotvout_tree_scores_81_V.dat"
         "c.my_prj.autotvout_tree_scores_82_V.dat"
         "c.my_prj.autotvout_tree_scores_83_V.dat"
         "c.my_prj.autotvout_tree_scores_84_V.dat"
         "c.my_prj.autotvout_tree_scores_85_V.dat"
         "c.my_prj.autotvout_tree_scores_86_V.dat"
         "c.my_prj.autotvout_tree_scores_87_V.dat"
         "c.my_prj.autotvout_tree_scores_88_V.dat"
         "c.my_prj.autotvout_tree_scores_89_V.dat"
         "c.my_prj.autotvout_tree_scores_90_V.dat"
         "c.my_prj.autotvout_tree_scores_91_V.dat"
         "c.my_prj.autotvout_tree_scores_92_V.dat"
         "c.my_prj.autotvout_tree_scores_93_V.dat"
         "c.my_prj.autotvout_tree_scores_94_V.dat"
         "c.my_prj.autotvout_tree_scores_95_V.dat"
         "c.my_prj.autotvout_tree_scores_96_V.dat"
         "c.my_prj.autotvout_tree_scores_97_V.dat"
         "c.my_prj.autotvout_tree_scores_98_V.dat"
         "c.my_prj.autotvout_tree_scores_99_V.dat"
    }
    foreach rtlfile $rtlfilelist {
        if {[file isfile $rtlfile]} {
        } else {
            ::AP::printMsg ERR COSIM 320 COSIM_320_994
            return 1
        }
        set ret [catch {eval exec "grep /runtime $rtlfile"} err]
        if { $ret } {
            ::AP::printMsg ERR COSIM 320 COSIM_320_995
            return 1
        }
    }
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] finish...";
	}
    return 0
}

proc check_tvout_file {} {
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] start...";
	}
    set rtlfilelist {
         "rtl.my_prj.autotvout_score_0_V.dat"
         "rtl.my_prj.autotvout_tree_scores_0_V.dat"
         "rtl.my_prj.autotvout_tree_scores_1_V.dat"
         "rtl.my_prj.autotvout_tree_scores_2_V.dat"
         "rtl.my_prj.autotvout_tree_scores_3_V.dat"
         "rtl.my_prj.autotvout_tree_scores_4_V.dat"
         "rtl.my_prj.autotvout_tree_scores_5_V.dat"
         "rtl.my_prj.autotvout_tree_scores_6_V.dat"
         "rtl.my_prj.autotvout_tree_scores_7_V.dat"
         "rtl.my_prj.autotvout_tree_scores_8_V.dat"
         "rtl.my_prj.autotvout_tree_scores_9_V.dat"
         "rtl.my_prj.autotvout_tree_scores_10_V.dat"
         "rtl.my_prj.autotvout_tree_scores_11_V.dat"
         "rtl.my_prj.autotvout_tree_scores_12_V.dat"
         "rtl.my_prj.autotvout_tree_scores_13_V.dat"
         "rtl.my_prj.autotvout_tree_scores_14_V.dat"
         "rtl.my_prj.autotvout_tree_scores_15_V.dat"
         "rtl.my_prj.autotvout_tree_scores_16_V.dat"
         "rtl.my_prj.autotvout_tree_scores_17_V.dat"
         "rtl.my_prj.autotvout_tree_scores_18_V.dat"
         "rtl.my_prj.autotvout_tree_scores_19_V.dat"
         "rtl.my_prj.autotvout_tree_scores_20_V.dat"
         "rtl.my_prj.autotvout_tree_scores_21_V.dat"
         "rtl.my_prj.autotvout_tree_scores_22_V.dat"
         "rtl.my_prj.autotvout_tree_scores_23_V.dat"
         "rtl.my_prj.autotvout_tree_scores_24_V.dat"
         "rtl.my_prj.autotvout_tree_scores_25_V.dat"
         "rtl.my_prj.autotvout_tree_scores_26_V.dat"
         "rtl.my_prj.autotvout_tree_scores_27_V.dat"
         "rtl.my_prj.autotvout_tree_scores_28_V.dat"
         "rtl.my_prj.autotvout_tree_scores_29_V.dat"
         "rtl.my_prj.autotvout_tree_scores_30_V.dat"
         "rtl.my_prj.autotvout_tree_scores_31_V.dat"
         "rtl.my_prj.autotvout_tree_scores_32_V.dat"
         "rtl.my_prj.autotvout_tree_scores_33_V.dat"
         "rtl.my_prj.autotvout_tree_scores_34_V.dat"
         "rtl.my_prj.autotvout_tree_scores_35_V.dat"
         "rtl.my_prj.autotvout_tree_scores_36_V.dat"
         "rtl.my_prj.autotvout_tree_scores_37_V.dat"
         "rtl.my_prj.autotvout_tree_scores_38_V.dat"
         "rtl.my_prj.autotvout_tree_scores_39_V.dat"
         "rtl.my_prj.autotvout_tree_scores_40_V.dat"
         "rtl.my_prj.autotvout_tree_scores_41_V.dat"
         "rtl.my_prj.autotvout_tree_scores_42_V.dat"
         "rtl.my_prj.autotvout_tree_scores_43_V.dat"
         "rtl.my_prj.autotvout_tree_scores_44_V.dat"
         "rtl.my_prj.autotvout_tree_scores_45_V.dat"
         "rtl.my_prj.autotvout_tree_scores_46_V.dat"
         "rtl.my_prj.autotvout_tree_scores_47_V.dat"
         "rtl.my_prj.autotvout_tree_scores_48_V.dat"
         "rtl.my_prj.autotvout_tree_scores_49_V.dat"
         "rtl.my_prj.autotvout_tree_scores_50_V.dat"
         "rtl.my_prj.autotvout_tree_scores_51_V.dat"
         "rtl.my_prj.autotvout_tree_scores_52_V.dat"
         "rtl.my_prj.autotvout_tree_scores_53_V.dat"
         "rtl.my_prj.autotvout_tree_scores_54_V.dat"
         "rtl.my_prj.autotvout_tree_scores_55_V.dat"
         "rtl.my_prj.autotvout_tree_scores_56_V.dat"
         "rtl.my_prj.autotvout_tree_scores_57_V.dat"
         "rtl.my_prj.autotvout_tree_scores_58_V.dat"
         "rtl.my_prj.autotvout_tree_scores_59_V.dat"
         "rtl.my_prj.autotvout_tree_scores_60_V.dat"
         "rtl.my_prj.autotvout_tree_scores_61_V.dat"
         "rtl.my_prj.autotvout_tree_scores_62_V.dat"
         "rtl.my_prj.autotvout_tree_scores_63_V.dat"
         "rtl.my_prj.autotvout_tree_scores_64_V.dat"
         "rtl.my_prj.autotvout_tree_scores_65_V.dat"
         "rtl.my_prj.autotvout_tree_scores_66_V.dat"
         "rtl.my_prj.autotvout_tree_scores_67_V.dat"
         "rtl.my_prj.autotvout_tree_scores_68_V.dat"
         "rtl.my_prj.autotvout_tree_scores_69_V.dat"
         "rtl.my_prj.autotvout_tree_scores_70_V.dat"
         "rtl.my_prj.autotvout_tree_scores_71_V.dat"
         "rtl.my_prj.autotvout_tree_scores_72_V.dat"
         "rtl.my_prj.autotvout_tree_scores_73_V.dat"
         "rtl.my_prj.autotvout_tree_scores_74_V.dat"
         "rtl.my_prj.autotvout_tree_scores_75_V.dat"
         "rtl.my_prj.autotvout_tree_scores_76_V.dat"
         "rtl.my_prj.autotvout_tree_scores_77_V.dat"
         "rtl.my_prj.autotvout_tree_scores_78_V.dat"
         "rtl.my_prj.autotvout_tree_scores_79_V.dat"
         "rtl.my_prj.autotvout_tree_scores_80_V.dat"
         "rtl.my_prj.autotvout_tree_scores_81_V.dat"
         "rtl.my_prj.autotvout_tree_scores_82_V.dat"
         "rtl.my_prj.autotvout_tree_scores_83_V.dat"
         "rtl.my_prj.autotvout_tree_scores_84_V.dat"
         "rtl.my_prj.autotvout_tree_scores_85_V.dat"
         "rtl.my_prj.autotvout_tree_scores_86_V.dat"
         "rtl.my_prj.autotvout_tree_scores_87_V.dat"
         "rtl.my_prj.autotvout_tree_scores_88_V.dat"
         "rtl.my_prj.autotvout_tree_scores_89_V.dat"
         "rtl.my_prj.autotvout_tree_scores_90_V.dat"
         "rtl.my_prj.autotvout_tree_scores_91_V.dat"
         "rtl.my_prj.autotvout_tree_scores_92_V.dat"
         "rtl.my_prj.autotvout_tree_scores_93_V.dat"
         "rtl.my_prj.autotvout_tree_scores_94_V.dat"
         "rtl.my_prj.autotvout_tree_scores_95_V.dat"
         "rtl.my_prj.autotvout_tree_scores_96_V.dat"
         "rtl.my_prj.autotvout_tree_scores_97_V.dat"
         "rtl.my_prj.autotvout_tree_scores_98_V.dat"
         "rtl.my_prj.autotvout_tree_scores_99_V.dat"
    }
    foreach rtlfile $rtlfilelist {
        if {[file isfile $rtlfile]} {
        } else {
            ::AP::printMsg ERR COSIM 303 COSIM_303_996
            return 1
        }
        set ret [catch {eval exec "grep /runtime $rtlfile"} err]
        if { $ret } {
            ::AP::printMsg ERR COSIM 303 COSIM_303_997
            return 1
        }
    }
	if {$::AESL_AUTOSIM::gDebug == 1} {
		puts stdout "[debug_prompt arg check_sim.tcl] finish...";
	}
    return 0
}
