#include "../tests.h"
#include "helpers.c"

void	test_numeric(void)
{
	// Test checks that the function returns
	// an one when an input is numeric

	int	result = test_case_between('0', '9', 1);

	print_test_name(1);
	print_test_result(result);
}

void	test_not_numeric(void)
{
	// Test checks that the function returns
	// an zero when an input is not numeric

	int	result = 1;
	result &= test_case_between(0, 47, 0);
	result &= test_case_between(58, 127, 0);

	print_test_name(1);
	print_test_result(result);
}
