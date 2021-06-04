cmake_minimum_required( VERSION 3.8 )

link_libraries( axl.glfl )

add_executable( axl.glfl.lib "lib.cpp" )
add_executable( axl.glfl.dummy "dummy.cpp" )
add_executable( axl.glfl.glcorearb "glCoreARB.cpp" )
add_executable( axl.glfl.platform "platform.cpp" )

set_target_properties( axl.glfl.lib axl.glfl.dummy axl.glfl.glcorearb axl.glfl.platform
	PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)
