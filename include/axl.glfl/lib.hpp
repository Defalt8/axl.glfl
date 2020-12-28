#pragma once

#ifdef AXLGLFL_SHARED
#	if defined(WIN32)
#		if defined(AXLGLFL_BUILD)
#			define AXLGLFLAPI extern __declspec(dllexport)
#			define AXLGLFLCXXAPI __declspec(dllexport)
#		else
#			define AXLGLFLAPI extern __declspec(dllimport)
#			define AXLGLFLCXXAPI __declspec(dllexport)
#		endif
#	elif defined(__GNUC__) && __GNUC__ > 4
#		define AXLGLFLAPI __attribute__((visibility("default")))
#		define AXLGLFLCXXAPI __attribute__((visibility("default")))
#	else
#   	error("Don't know how to export shared object libraries")
#		define AXLGLFLAPI extern
#		define AXLGLFLCXXAPI
#	endif
#elif defined(AXLGLFL_STATIC)
#	define AXLGLFLAPI extern
#	define AXLGLFLCXXAPI
#else // defaults to AXLGLFL_STATIC
#	define AXLGLFLAPI extern
#	define AXLGLFLCXXAPI
#endif

#if __cplusplus >= 201103L
#	define AXLGLFLCONSTMODIFIER constexpr
#	define ENUM_CLASS enum class
#else
#	define AXLGLFLCONSTMODIFIER const static
#	define ENUM_CLASS enum
#endif

namespace axl {
namespace glfl {
namespace lib {

struct _Version {
	unsigned int major;
	unsigned int minor;
	unsigned int patch;
};
typedef _Version Version;

ENUM_CLASS _Build { STATIC,	SHARED };
typedef _Build Build;

AXLGLFLAPI const Version VERSION;
AXLGLFLAPI const Build BUILD;

} // axl::glfl::lib
} // axl::glfl
} // axl
