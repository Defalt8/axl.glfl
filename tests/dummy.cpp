#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <axl.glfl/lib.hpp>
#include <axl.glfl/Dummy.hpp>
#include "Assert.hpp"

int main(int argc, char *argv[])
{
	bool verbose = argc > 1 && (0 == strcmp(argv[1], "-v") || 0 == strcmp(argv[1], "--verbose"));
	using namespace axl::glfl;
	using namespace axl::glfl::lib;
	printf(">> axl.glfl %s library %u.%u.%u - Dummy test\n", (BUILD == Build::SHARED ? "SHARED" : "STATIC"), VERSION.major, VERSION.minor, VERSION.patch);
	puts("----------------------------------------");
	{
		Assertve(GLOBAL_DUMMY.isInitialized(), verbose);
		Assertve(GLOBAL_DUMMY.makeCurrent(), verbose);
		Assertve(Dummy::clearCurrent(), verbose);
		Assertve(!GLOBAL_DUMMY.isCurrent(), verbose);
	}
	{
		Dummy::InitError error;
		Dummy dummy;
		Assertve(!dummy.isInitialized(), verbose);
		Assertv(!dummy.isCurrent(), verbose);
		Assertv(!dummy.makeCurrent(), verbose);
		error = dummy.init();
		Assertv(error == Dummy::InitError::NONE, verbose);
		Assertv(dummy.isInitialized(), verbose);
		Assertv(!dummy.isCurrent(), verbose);
		Assertv(dummy.makeCurrent(), verbose);
		Assertv(dummy.isCurrent(), verbose);
		dummy.destroy();
		Assertv(!dummy.isInitialized(), verbose);
		Assertv(!dummy.isCurrent(), verbose);
		Assertv(!dummy.makeCurrent(), verbose);
		Assertv(dummy.init() == Dummy::InitError::NONE, verbose);
		Assertv(dummy.isInitialized(), verbose);
		Assertv(!dummy.isCurrent(), verbose);
		Assertv(dummy.makeCurrent(), verbose);
		Assertv(dummy.isCurrent(), verbose);
		dummy.destroy();
		Assertv(!dummy.isInitialized(), verbose);
		Assertv(!dummy.isCurrent(), verbose);
		Assertv(!dummy.makeCurrent(), verbose);
	}
	if(axl::Assert::_num_failed_tests) puts("----------------------------------------");
	printf("%c> %d/%d Passed!\n", (axl::Assert::_num_failed_tests ? '*' : '\r'), (axl::Assert::_num_total_tests - axl::Assert::_num_failed_tests), axl::Assert::_num_total_tests);
	return axl::Assert::_num_failed_tests;
}