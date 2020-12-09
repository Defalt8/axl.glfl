cmake_minimum_required( VERSION 3.8 )

project( AXL_GLFL VERSION 1.3.7 DESCRIPTION "OpenGL function loader library." )

set( CMAKE_CXX_STANDARD 11 )
set( CMAKE_CXX_STANDARD_REQUIRED true )
set( CMAKE_BUILD_TYPE Debug CACHE STRING "Build configuration type: ${CMAKE_CONFIGURATION_TYPES}." )
set( BUILD_TESTS OFF CACHE BOOL "General build tests flag." )
set( AXLGLFL_BUILD_TESTS ON CACHE BOOL "Library specific build tests flag." )
set( AXLGLFL_ARCHIVE_DIR "${CMAKE_BINARY_DIR}/lib" CACHE PATH "Path to build library archives." )
set( AXLGLFL_RUNTIME_DIR "${CMAKE_BINARY_DIR}/bin" CACHE PATH "Path to build runtime files like shared library binaries and executables to." )
set( AXLGLFL_HEADER_INSTALL_DIR "include" CACHE PATH "Path to install header files, relative to CMAKE_INSTALL_PREFIX." )
set( AXLGLFL_ARCHIVE_INSTALL_DIR "lib" CACHE PATH "Path to install library archives, relative to CMAKE_INSTALL_PREFIX." )
set( AXLGLFL_RUNTIME_INSTALL_DIR "bin" CACHE PATH "Path to install runtime files like shared library binaries and executables, relative to CMAKE_INSTALL_PREFIX." )
set( AXLGLFL_INSTALL_HEADERS ON CACHE BOOL "" )
set( AXLGLFL_INSTALL_ARCHIVES ON CACHE BOOL "" )
set( AXLGLFL_INSTALL_RUNTIMES ON CACHE BOOL "" )

add_subdirectory( "src" "axl_glfl" )
if( BUILD_TESTS AND AXLGLFL_BUILD_TESTS )
	add_subdirectory( "tests" "${AXLGLFL_RUNTIME_DIR}" )
endif()

# install headers
if( AXLGLFL_INSTALL_HEADERS )
	install( FILES
		"include/axl.glfl/platform.h"
		"include/axl.glfl/Dummy.hpp"
		"include/axl.glfl/gl.hpp"
		"include/axl.glfl/glfl.hpp"
		"include/axl.glfl/glCoreARB.hpp"
		DESTINATION "${AXLGLFL_HEADER_INSTALL_DIR}/axl.glfl"
	)
endif()
