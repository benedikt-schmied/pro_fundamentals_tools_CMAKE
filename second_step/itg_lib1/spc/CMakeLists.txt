 
# add the binary tree directory to the search path for 
# include files
include_directories( ${CMAKE_CURRENT_BINARY_DIR} "." )
 
# add the main library
add_library(itg_lib1spc itg_lib1_spc.c )
