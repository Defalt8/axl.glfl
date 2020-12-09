#pragma once

#define AXLGLFLAPI extern
#define AXLGLFLCXXAPI

#if __cplusplus >= 201103L
#	define AXLGLFLCONSTMODIFIER constexpr
#	define ENUM_CLASS enum class
#else
#	define AXLGLFLCONSTMODIFIER const static
#	define ENUM_CLASS enum
#endif

namespace axl {
namespace glfl {

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

} // axl::glfl
} // axl
