#include <axl.glfl/platform.h>

#if PLATFORM==PLATFORM_WINDOWS
#	include "pfm/win/wglext.cxx"
#elif PLATFORM==PLATFORM_LINUX
#	include "pfm/linux/glxext.cxx"
#else
#	error("Unsupported platform!")
#endif
