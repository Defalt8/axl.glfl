#include <axl.glfl/lib.hpp>

namespace axl {
namespace glfl {
namespace lib {

const Version VERSION = { AXLGLFL_VERSION_MAJOR, AXLGLFL_VERSION_MINOR, AXLGLFL_VERSION_PATCH };

#ifdef AXLGLFL_SHARED
const Build BUILD = Build::SHARED;
#else
const Build BUILD = Build::STATIC;
#endif

} // axl::glfl::lib
} // axl::glfl
} // axl
