#include <axl.glfl/platform.h>

#if PLATFORM==PLATFORM_WINDOWS
#	include "pfm/win/wglext.cxx"
#else
#	error("Unsupported platform!")
#endif
