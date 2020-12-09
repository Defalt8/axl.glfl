cmake_minimum_required( VERSION 3.8 )

link_libraries( axl.glfl )
include_directories( "${CMAKE_SOURCE_DIR}/include" )

add_executable( "axl.glfl.Dummy" "Dummy.cpp" )