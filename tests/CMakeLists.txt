cmake_minimum_required( VERSION 3.8 )

link_libraries( axl.glfl )

add_executable( "axl.glfl.lib" "lib.cpp" )
add_executable( "axl.glfl.dummy" "dummy.cpp" )
add_executable( "axl.glfl.glcorearb" "glCoreARB.cpp" )
add_executable( "axl.glfl.platform" "platform.cpp" )
