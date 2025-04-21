#include "tests.h"
#include "ft_isprint/helpers.c"

void	test_printable(void)
{
	// Test checks that the function returns an one
	// when an input is printable

	int	result = test_case_between(32, 126, 1);

	print_test_name(1);
	print_test_result(result);
}

void	test_not_printable(void)
{
	// Test checks that a function returns a zero
	// when an input is not printable

	int	result = 1;
	result &= test_case_between(0, 31, 0);
	result &= test_case_between(127, 127, 0);

	print_test_name(1);
	print_test_result(result);
}
