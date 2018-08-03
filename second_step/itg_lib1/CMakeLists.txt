#add_subdirectory ( gnc )
#add_subdirectory ( spc )

include_directories(${CMAKE_CURRENT_LIST_DIR}/gnc)
add_library(itg_lib1 ${CMAKE_CURRENT_LIST_DIR}/gnc/itg_lib1_gnc.c)
target_include_directories(itg_lib1 PUBLIC ${CMAKE_CURRENT_LIST_DIR}/gnc)
