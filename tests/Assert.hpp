#pragma once
#include <cstdio>

#define Assert(e) ++axl::Assert::_num_total_tests; ((e) ? (void)0 : axl::Assert::_assertionFailed(false, #e, __FILE__, __LINE__))
#define Asserte(e) ++axl::Assert::_num_total_tests; ((e) ? (void)0 : axl::Assert::_assertionFailed(true, #e, __FILE__, __LINE__))
#define Assertv(e, verbose) ++axl::Assert::_num_total_tests; ((e) ? (verbose ? axl::Assert::_assertionSucceeded(#e) : (void)0) : axl::Assert::_assertionFailed(false, #e, __FILE__, __LINE__))
#define Assertve(e, verbose) ++axl::Assert::_num_total_tests; ((e) ? (verbose ? axl::Assert::_assertionSucceeded(#e) : (void)0) : axl::Assert::_assertionFailed(true, #e, __FILE__, __LINE__))

namespace axl {
namespace Assert {

static int _num_failed_tests = 0, _num_total_tests = 0;

void _assertionFailed(bool exit_after, const char* e, const char* file, int line)
{
	fprintf(stderr, "* Fail - %s | %s:%d\n", e, file, line);
	++_num_failed_tests;
	if(exit_after) exit(1);
}

void _assertionSucceeded(const char* e)
{
	printf("  Pass + %s\n", e);
}

} // namespace axl.Assert
} // namespace axl