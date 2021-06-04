#pragma once
#include <cstdio>

#define Assert(e) ++axl::assert::_num_total_tests; ((e) ? (void)0 : axl::assert::assertionFailed(false, #e, __FILE__, __LINE__))
#define Asserte(e) ++axl::assert::_num_total_tests; ((e) ? (void)0 : axl::assert::assertionFailed(true, #e, __FILE__, __LINE__))
#define Assertv(e, verbose) ++axl::assert::_num_total_tests; ((e) ? (verbose ? axl::assert::assertionSucceeded(#e) : (void)0) : axl::assert::assertionFailed(false, #e, __FILE__, __LINE__))
#define Assertve(e, verbose) ++axl::assert::_num_total_tests; ((e) ? (verbose ? axl::assert::assertionSucceeded(#e) : (void)0) : axl::assert::assertionFailed(true, #e, __FILE__, __LINE__))

namespace axl {
namespace assert {

static int _num_failed_tests = 0, _num_total_tests = 0;

void assertionFailed(bool exit_after, const char* e, const char* file, int line)
{
	fprintf(stderr, "* Fail - %s | %s:%d\n", e, file, line);
	++_num_failed_tests;
	if(exit_after) exit(1);
}

void assertionSucceeded(const char* e)
{
	printf("  Pass + %s\n", e);
}

} // namespace axl.Assert
} // namespace axl