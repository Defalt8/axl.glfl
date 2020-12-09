#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN 1
#endif
#include <windows.h>
#include <axl.glfl/glfl.hpp>

namespace axl {
namespace glfl {

const Version VERSION = { AXLGLFL_VERSION_MAJOR, AXLGLFL_VERSION_MINOR, AXLGLFL_VERSION_PATCH };

#ifdef AXLGLFL_SHARED
const Build BUILD = Build::SHARED;
#else
const Build BUILD = Build::STATIC;
#endif

} // axl::glfl
} // axl
