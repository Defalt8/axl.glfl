#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <axl.glfl/platform.h>
#include <axl.glfl/lib.hpp>
#include "Assert.hpp"

int main(int argc, char *argv[])
{
	bool verbose = argc > 1 && (0 == strcmp(argv[1], "-v") || 0 == strcmp(argv[1], "--verbose"));
	using namespace axl::glfl;
	using namespace axl::glfl::lib;
	printf(">> axl.glfl %s library %u.%u.%u - library test\n", (BUILD == Build::SHARED ? "SHARED" : "STATIC"), VERSION.major, VERSION.minor, VERSION.patch);
	puts("----------------------------------------");
	{
#ifdef AXLGLFL_SHARED
		Assertv((BUILD == Build::SHARED), verbose);
#else
		Assertv((BUILD == Build::STATIC), verbose);
#endif
	}
	if(axl::assert::_num_failed_tests) puts("----------------------------------------");
	printf("%c> %d/%d Passed!\n", (axl::assert::_num_failed_tests ? '*' : '\r'), (axl::assert::_num_total_tests - axl::assert::_num_failed_tests), axl::assert::_num_total_tests);
	return axl::assert::_num_failed_tests;
}