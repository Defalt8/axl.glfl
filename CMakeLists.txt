cmake_minimum_required( VERSION 3.8 )

project( AXL_GLFL VERSION 1.34.69 DESCRIPTION "A multiplatform C++ OpenGL function loader library." )

if( "${CMAKE_SOURCE_DIR}" STREQUAL "${PROJECT_SOURCE_DIR}" )
	set( AXLGLFL_STANDALONE TRUE )
else()
	set( AXLGLFL_STANDALONE FALSE )
endif()

set( CMAKE_CXX_STANDARD 11 )
set( CMAKE_CXX_STANDARD_REQUIRED true )
set( CMAKE_BUILD_TYPE Debug CACHE STRING "Build configuration type: ${CMAKE_CONFIGURATION_TYPES}." )
set( AXLGLFL_BUILD_TESTS ${AXLGLFL_STANDALONE} CACHE BOOL "Library specific build tests flag." )
set( AXLGLFL_ARCHIVE_DIR "${CMAKE_BINARY_DIR}/lib" CACHE PATH "Path to build library archives." )
set( AXLGLFL_RUNTIME_DIR "${CMAKE_BINARY_DIR}/bin" CACHE PATH "Path to build runtime files like shared library binaries and executables to." )
set( AXLGLFL_INSTALL_HEADERS ${AXLGLFL_STANDALONE} CACHE BOOL "" )
set( AXLGLFL_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/include" )

add_subdirectory( src axl.glfl )
if( ${AXLGLFL_BUILD_TESTS} )
	add_subdirectory( tests axl.glfl.tests )
endif()

if( AXLGLFL_INSTALL_HEADERS )
	install( FILES
		"${AXLGLFL_INCLUDE_DIR}/axl.glfl/platform.h"
		"${AXLGLFL_INCLUDE_DIR}/axl.glfl/Dummy.hpp"
		"${AXLGLFL_INCLUDE_DIR}/axl.glfl/gl.hpp"
		"${AXLGLFL_INCLUDE_DIR}/axl.glfl/lib.hpp"
		"${AXLGLFL_INCLUDE_DIR}/axl.glfl/glCoreARB.hpp"
		DESTINATION "include/axl.glfl"
	)
	install( FILES
		"include/axl.glfl/win/wglext.hpp"
		DESTINATION "include/axl.glfl/win"
	)
endif()
