cmake_minimum_required( VERSION 3.8 )

project( AXL_GLFL VERSION 1.4.8 DESCRIPTION "OpenGL function loader library." )

if( "${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_CURRENT_SOURCE_DIR}" )
	set( AXLGLFL_STANDALONE TRUE )
else()
	set( AXLGLFL_STANDALONE FALSE )
endif()

set( CMAKE_CXX_STANDARD 11 )
set( CMAKE_CXX_STANDARD_REQUIRED true )
set( CMAKE_BUILD_TYPE Debug CACHE STRING "Build configuration type: ${CMAKE_CONFIGURATION_TYPES}." )
set( BUILD_TESTS OFF CACHE BOOL "General build tests flag." )
set( AXLGLFL_BUILD_TESTS ${AXLGLFL_STANDALONE} CACHE BOOL "Library specific build tests flag." )
set( AXLGLFL_ARCHIVE_DIR "${CMAKE_BINARY_DIR}/lib" CACHE PATH "Path to build library archives." )
set( AXLGLFL_RUNTIME_DIR "${CMAKE_BINARY_DIR}/bin" CACHE PATH "Path to build runtime files like shared library binaries and executables to." )
set( AXLGLFL_INSTALL_HEADERS ${AXLGLFL_STANDALONE} CACHE BOOL "" )
set( AXLGLFL_INSTALL_ARCHIVES ${AXLGLFL_STANDALONE} CACHE BOOL "" )
set( AXLGLFL_INSTALL_RUNTIMES ${AXLGLFL_STANDALONE} CACHE BOOL "" )

add_subdirectory( "src" "axl_glfl" )
if( AXLGLFL_BUILD_TESTS )
	add_subdirectory( "tests" "${AXLGLFL_RUNTIME_DIR}" )
endif()

# install headers
if( AXLGLFL_INSTALL_HEADERS )
	install( FILES
		"include/axl.glfl/platform.h"
		"include/axl.glfl/Dummy.hpp"
		"include/axl.glfl/gl.hpp"
		"include/axl.glfl/lib.hpp"
		"include/axl.glfl/glCoreARB.hpp"
		DESTINATION "${AXLGLFL_HEADER_INSTALL_DIR}/axl.glfl"
	)
	install( FILES
		"include/axl.glfl/win/wglext.hpp"
		DESTINATION "${AXLGLFL_HEADER_INSTALL_DIR}/axl.glfl/win"
	)
endif()
