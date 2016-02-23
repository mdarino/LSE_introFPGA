
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name arwz_pace -dir "C:/Cursos/IntroFpga/Practica02/planAhead_run_3" -part xc3s500efg320-4
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "uart_clock.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {kcuart_tx.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {kcuart_rx.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {bbfifo_16x8.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
add_files [list {UCLOCK.VHD}]
set hdlfile [add_files [list {uart_tx.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {uart_rx.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {kcpsm3.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {my_dcm.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {uart_clock.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set_property top uart_clock $srcset
add_files [list {uart_clock.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s500efg320-4
