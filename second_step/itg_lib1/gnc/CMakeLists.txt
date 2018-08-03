 
# add the binary tree directory to the search path for 
# include files
include_directories( ${CMAKE_CURRENT_BINARY_DIR} "." )
 
# add the main library
add_library(itg_lib1gnc itg_lib1_gnc.c )
