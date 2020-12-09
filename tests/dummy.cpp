#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <axl.glfl/glfl.hpp>
#include <axl.glfl/Dummy.hpp>
#include "Assert.hpp"

int main(int argc, char *argv[])
{
	bool verbose = argc > 1 && (0 == strcmp(argv[1], "-v") || 0 == strcmp(argv[1], "--verbose"));
	using namespace axl::glfl;
	printf(">> axl.glfl %u.%u.%u %s - Dummy test\n", VERSION.major, VERSION.minor, VERSION.patch, (BUILD == Build::SHARED ? "SHARED" : "STATIC"));
	puts("----------------------------------------");
	{
		Assertve(GlobalDummy.isInitialized(), verbose);
		Assertve(GlobalDummy.makeCurrent(), verbose);
		Assertve(Dummy::clearCurrent(), verbose);
		Assertve(!GlobalDummy.isCurrent(), verbose);
	}
	{
		Dummy::InitError error;
		Dummy dummy;
		Assertv(!dummy.isInitialized(), verbose);
		Assertv(!dummy.isCurrent(), verbose);
		Assertv(!dummy.makeCurrent(), verbose);
		error = dummy.init();
		Assertv(error == Dummy::IERR_NONE, verbose);
		Assertv(dummy.isInitialized(), verbose);
		Assertv(!dummy.isCurrent(), verbose);
		Assertv(dummy.makeCurrent(), verbose);
		Assertv(dummy.isCurrent(), verbose);
		dummy.destroy();
		Assertv(!dummy.isInitialized(), verbose);
		Assertv(!dummy.isCurrent(), verbose);
		Assertv(!dummy.makeCurrent(), verbose);
		Assertv(dummy.init() == Dummy::IERR_NONE, verbose);
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