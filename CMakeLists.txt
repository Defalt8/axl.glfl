cmake_minimum_required( VERSION 3.8 )

project( AXL_GLFL VERSION 0.1.0 DESCRIPTION "OpenGL function loader library." )

set( CMAKE_CXX_STANDARD 11 )
set( CMAKE_CXX_STANDARD_REQUIRED true )
set( CMAKE_BUILD_TYPE Debug CACHE STRING "" )

add_subdirectory( "src" "axl_glfl" )
add_subdirectory( "tests" "${CMAKE_BINARY_DIR}/bin" )
