
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name oscilloscope -dir "C:/Users/Microsoft/Documents/ise projekter-filer/oscilloscope/planAhead_run_2" -part xc3s100ecp132-4
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/Microsoft/Documents/ise projekter-filer/oscilloscope/SigGenTop.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/Microsoft/Documents/ise projekter-filer/oscilloscope} {ipcore_dir} }
add_files [list {ipcore_dir/SinusLUT.ncf}] -fileset [get_property constrset [current_run]]
set_property target_constrs_file "siggentop.ucf" [current_fileset -constrset]
add_files [list {siggentop.ucf}] -fileset [get_property constrset [current_run]]
link_design
