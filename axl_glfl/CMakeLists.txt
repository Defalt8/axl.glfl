cmake_minimum_required( VERSION 3.8 )

set( AXLGLFL_TYPE "STATIC" CACHE STRING "{STATIC|SHARED}" )
if( BUILD_SHARED_LIBS )
	set( AXLGLFL_TYPE "SHARED" )
endif()

add_library( axl.glfl ${AXLGLFL_TYPE}
	"glfl.cpp"
	"Dummy.cpp"
)
target_include_directories( axl.glfl PUBLIC "${CMAKE_SOURCE_DIR}/include" )
target_compile_definitions( axl.glfl
	PRIVATE AXLGLFL_BUILD=1
	PRIVATE AXLGLFL_VERSION_MAJOR=${PROJECT_VERSION_MAJOR}
	PRIVATE AXLGLFL_VERSION_MINOR=${PROJECT_VERSION_MINOR}
	PRIVATE AXLGLFL_VERSION_PATCH=${PROJECT_VERSION_PATCH}
)
if( "AXLGLFL_TYPE" MATCHES "^[Ss][Hh][Aa][Rr][Ee][Dd]$" )
	target_compile_definitions( axl.glfl PRIVATE AXLGLFL_SHARED )
else()
	target_compile_definitions( axl.glfl PRIVATE AXLGLFL_STATIC )
endif()
if( WIN32 )
	if(MSVC)
		target_link_libraries( axl.glfl PUBLIC gdi32.lib opengl32.lib )
	else()
		target_link_libraries( axl.glfl PUBLIC -lgdi32 -lopengl32 )
	endif()
endif()