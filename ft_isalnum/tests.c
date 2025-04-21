#include "tests.h"
#include "helpers.c"

void	test_alphanumeric(void)
{
	// Test checks that function returns a 1 when input is alphanumeric

	int	result = 1;
	result &= test_case_between('a', 'z', 1);
	result &= test_case_between('A', 'Z', 1);
	result &= test_case_between('0', '9', 1);

	print_test_name(2);
	print_test_result(result);
}

void	test_not_alphanumeric(void)
{
	// Test checks that a result of the function is 0 when input is not alphanumeric

	int	result = 1;
	result &= test_case_between(0, 47, 0);
	result &= test_case_between(58, 64, 0);
	result &= test_case_between(91, 96, 0);
	result &= test_case_between(123, 126, 0);

	print_test_name(1);
	print_test_result(result);
}
