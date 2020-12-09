#include <axl.glfl/platform.h>

#if PLATFORM==PLATFORM_WINDOWS
#	include "pfm/win/Dummy.cxx" 
#elif PLATFORM==PLATFORM_LINUX
#	include "pfm/linux/Dummy.cxx" 
#else
#	error("Unsupported platform!")
#endif
