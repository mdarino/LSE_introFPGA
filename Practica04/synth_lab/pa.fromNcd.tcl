
# PlanAhead Launch Script for Post PAR Floorplanning, created by Project Navigator

create_project -name synth_lab -dir "C:/Cursos/IntroFpga/Practica04/synth_lab/planAhead_run_2" -part xc3s500efg320-4
set srcset [get_property srcset [current_run -impl]]
set_property design_mode GateLvl $srcset
set_property edif_top_file "C:/Cursos/IntroFpga/Practica04/synth_lab/loopback.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Cursos/IntroFpga/Practica04/synth_lab} }
set_property target_constrs_file "loopback.ucf" [current_fileset -constrset]
add_files [list {loopback.ucf}] -fileset [get_property constrset [current_run]]
link_design
read_xdl -file "C:/Cursos/IntroFpga/Practica04/synth_lab/loopback.ncd"
if {[catch {read_twx -name results_1 -file "C:/Cursos/IntroFpga/Practica04/synth_lab/loopback.twx"} eInfo]} {
   puts "WARNING: there was a problem importing \"C:/Cursos/IntroFpga/Practica04/synth_lab/loopback.twx\": $eInfo"
}
