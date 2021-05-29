set( CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE )
set( DEBUG_SUFFIX "" )
set( TYPE_SUFFIX "" )

if( "${AXLGLFL_TYPE}" MATCHES "^[Ss][Hh][Aa][Rr][Ee][Dd]$" OR BUILD_SHARED_LIBS )
	set( AXLGLFL_TYPE SHARED )
else()
	set( AXLGLFL_TYPE STATIC )
	set( TYPE_SUFFIX s )
endif()

if( "${CMAKE_BUILD_TYPE}" MATCHES "^[Dd][Ee][Bb][Uu][Gg]$" )
	set( DEBUG_SUFFIX d )
endif()

add_library( axl.glfl ${AXLGLFL_TYPE}
	"glfl.cpp"
	"Dummy.cpp"
	"glCoreARB.cpp"
	"pfm.cpp"
)
target_include_directories( axl.glfl PUBLIC "${AXLGLFL_INCLUDE_DIR}" )
target_compile_definitions( axl.glfl
	PRIVATE AXLGLFL_BUILD
	PRIVATE AXLGLFL_VERSION_MAJOR=${PROJECT_VERSION_MAJOR}
	PRIVATE AXLGLFL_VERSION_MINOR=${PROJECT_VERSION_MINOR}
	PRIVATE AXLGLFL_VERSION_PATCH=${PROJECT_VERSION_PATCH}
)

if( "${AXLGLFL_TYPE}" STREQUAL "SHARED" )
	target_compile_definitions( axl.glfl PUBLIC AXLGLFL_SHARED )
else()
	target_compile_definitions( axl.glfl PUBLIC AXLGLFL_STATIC )
endif()

if( "${CMAKE_BUILD_TYPE}" MATCHES "[Dd][Ee][Bb][Uu][Gg]" )
	target_compile_definitions( axl.glfl PRIVATE DEBUG )
elseif( "${CMAKE_BUILD_TYPE}" MATCHES "[Rr][Ee][Ll]" )
	target_compile_definitions( axl.glfl PRIVATE NDEBUG )
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

set_target_properties( axl.glfl PROPERTIES
	ARCHIVE_OUTPUT_NAME "axl.glfl${TYPE_SUFFIX}${DEBUG_SUFFIX}"
	RUNTIME_OUTPUT_NAME "axl.glfl${TYPE_SUFFIX}${DEBUG_SUFFIX}"
	ARCHIVE_OUTPUT_DIRECTORY "${AXLGLFL_ARCHIVE_DIR}"
	RUNTIME_OUTPUT_DIRECTORY "${AXLGLFL_RUNTIME_DIR}"
)

install( TARGETS axl.glfl
	ARCHIVE DESTINATION "lib"
	RUNTIME DESTINATION "bin"
)
