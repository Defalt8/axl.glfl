cmake_minimum_required( VERSION 3.8 )

set( AXLGLFL_TYPE "STATIC" CACHE STRING "{STATIC|SHARED}" )
if( BUILD_SHARED_LIBS )
	set( AXLGLFL_TYPE "SHARED" )
endif()
set( AXLGLFL_LIB_SUFFIX "" )

add_library( axl.glfl ${AXLGLFL_TYPE}
	"glfl.cpp"
	"Dummy.cpp"
	"glCoreARB.cpp"
)
target_include_directories( axl.glfl PUBLIC "${CMAKE_SOURCE_DIR}/include" )
target_compile_definitions( axl.glfl
	PRIVATE AXLGLFL_BUILD=1
	PRIVATE AXLGLFL_VERSION_MAJOR=${PROJECT_VERSION_MAJOR}
	PRIVATE AXLGLFL_VERSION_MINOR=${PROJECT_VERSION_MINOR}
	PRIVATE AXLGLFL_VERSION_PATCH=${PROJECT_VERSION_PATCH}
)
if( "${AXLGLFL_TYPE}" MATCHES "^[Ss][Hh][Aa][Rr][Ee][Dd]$" )
	target_compile_definitions( axl.glfl PUBLIC AXLGLFL_SHARED=1 )
else()
	target_compile_definitions( axl.glfl PUBLIC AXLGLFL_STATIC=1 )
	set( AXLGLFL_LIB_SUFFIX s )
endif()
if( WIN32 )
	if(MSVC)
		target_link_libraries( axl.glfl PUBLIC gdi32.lib opengl32.lib )
	else()
		target_link_libraries( axl.glfl PUBLIC -lgdi32 -lopengl32 )
	endif()
elseif( UNIX AND NOT APPLE )
	target_link_libraries( axl.glfl PUBLIC -lGL -lX11 )
endif()
if( "${CMAKE_BUILD_TYPE}" MATCHES "^[Dd][Ee][Bb][Uu][Gg]$" )
	set( AXLGLFL_LIB_SUFFIX "${AXLGLFL_LIB_SUFFIX}d" )
endif()
set_target_properties( axl.glfl PROPERTIES
	ARCHIVE_OUTPUT_NAME "axl.glfl${AXLGLFL_LIB_SUFFIX}"
	RUNTIME_OUTPUT_NAME "axl.glfl${AXLGLFL_LIB_SUFFIX}"
	ARCHIVE_OUTPUT_DIRECTORY "${AXLGLFL_ARCHIVE_DIR}"
	RUNTIME_OUTPUT_DIRECTORY "${AXLGLFL_RUNTIME_DIR}"
)

# install libraries
if( AXLGLFL_INSTALL_ARCHIVES )
	install( TARGETS axl.glfl ARCHIVE DESTINATION "${AXLGLFL_ARCHIVE_INSTALL_DIR}" )
endif()

if( AXLGLFL_INSTALL_RUNTIMES )
	install( TARGETS axl.glfl RUNTIME DESTINATION "${AXLGLFL_RUNTIME_INSTALL_DIR}" )
endif()
