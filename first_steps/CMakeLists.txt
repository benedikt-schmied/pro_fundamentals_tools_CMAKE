cmake_minimum_required (VERSION 2.6)
project (Tutorial)
include (CTest)
include (CheckFunctionExists)

# The Version Number
set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)

# configure a header fiel to pass some of the CMake settings
# to the source code
configure_file (
	"${PROJECT_SOURCE_DIR}/TutorialConfig.h.in"
	"${PROJECT_BINARY_DIR}/TutorialConfig.h"
	)

# add the binary tree to the seach path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")

# should we use our own math functions?
option (USE_MYMATH "use tutorial provided math implementation" ON)

if (USE_MYMATH)
	include_directories ("${PROJECT_SOURCE_DIR}/MathFunctions")
	add_subdirectory (MathFunctions)
	set (EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)
endif (USE_MYMATH)

#check_function_exists (log HAVE_LOG)
#check_function_exists (exp HAVE_EXP)

# add the executable 
add_executable(Tutorial tutorial.cxx)
target_link_libraries (Tutorial ${EXTRA_LIBS})

install (TARGETS Tutorial DESTINATION bin)
install (FILES "${PROJECT_BINARY_DIR}/TutorialConfig.h" DESTINATION include)

# does the application run
add_test (TutorialRuns Tutorial 25)

# does the the usage work
add_test (TutorialUsage Tutorial)
set_tests_properties (TutorialUsage 
	PROPERTIES
	PASS_REGULAR_EXPRESSION "Usage:.*number"
)

#define a macro to simplify adding tests
macro (do_test arg result)
	add_test (TutorialComp${arg} Tutorial ${arg})
	set_tests_properties (TutorialComp${arg}
		PROPERTIES
		PASS_REGULAR_EXPRESSION ${result}
	)
endmacro (do_test)

# do a bunch of result based tests
do_test (4 "The square root of 4 is 2")
do_test (9 "The square root of 9 is 3")

#build a CPack driven installer package
include (InstallRequiredSystemLibraries)
set (CPACK_RESOURCE_FILE_LICENSE
	"${CMAKE_CURRENT_SOURCE_DIR}/License.txt")
set (CPACK_PACKAGE_VERSION_MAJOR "${Tutorial_VERSION_MAJOR}")
set (CPACK_PACKAGE_VERSION_MINOR "${Tutorial_VERSION_MINOR}")
include (CPack)
