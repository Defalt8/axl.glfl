#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <axl.glfl/platform.h>
#include <axl.glfl/lib.hpp>
#include "Assert.hpp"

#if PLATFORM==PLATFORM_WINDOWS
#	include "pfm/win/wglext.cxx"
#else
#	error("Unsupported platform!")
#endif

int main(int argc, char *argv[])
{
	bool verbose = argc > 1 && (0 == strcmp(argv[1], "-v") || 0 == strcmp(argv[1], "--verbose"));
	using namespace axl::glfl;
	using namespace axl::glfl::lib;
	printf(">> axl.glfl %s library %u.%u.%u - platform extensions test\n", (BUILD == Build::SHARED ? "SHARED" : "STATIC"), VERSION.major, VERSION.minor, VERSION.patch);
	puts("----------------------------------------");
	{
		Assertve(WGL::load(), verbose);
		Assertv(WGL::test(verbose), verbose);
	}
	if(axl::Assert::_num_failed_tests) puts("----------------------------------------");
	printf("%c> %d/%d Passed!\n", (axl::Assert::_num_failed_tests ? '*' : '\r'), (axl::Assert::_num_total_tests - axl::Assert::_num_failed_tests), axl::Assert::_num_total_tests);
	return axl::Assert::_num_failed_tests;
}