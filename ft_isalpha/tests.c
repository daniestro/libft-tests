#include "../tests.h"
#include "helpers.c"

void	test_alphabetic(void)
{
	// Test checks that a result of the function
	// is 1 when an input is alphabetic

	int	result = 1;
	result &= test_case_between('a', 'z', 1);
	result &= test_case_between('A', 'Z', 1);

	print_test_name(1);
	print_test_result(result);
}

void	test_not_alphabetic(void)
{
	// Test checks that a result of the function
	// is 0 when an input is´t alphabetic

	int	result = 1;
	result &= test_case_between(0, 64, 0);
	result &= test_case_between(91, 96, 0);
	result &= test_case_between(123, 126, 0);

	print_test_name(1);
	print_test_result(result);
}
