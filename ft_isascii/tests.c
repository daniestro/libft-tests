#include "tests.h"
#include "ft_isascii/helpers.c"

void	test_ascii(void)
{
	// Test checks that the function returns a one
	// when an input is in asccii diapasone

	int result = test_case_between(0, 127, 1);

	print_test_name(2);
	print_test_result(result);
}

void	test_not_ascii(void)
{
	// Test checks that the function returns a zero
	// when an input out of ascii diapasone

	int	result = 1;
	result &= test_case_between(128, 255, 0);
	result &= test_case_between(-128, -1, 0);

	print_test_name(1);
	print_test_result(result);
}
