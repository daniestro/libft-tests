#include "tests.h"

int		ft_atoi(const char *nptr);

void	test_basic_positive(void)
{
	// Test checks that the function returns positive number correctly

	int	result = ft_atoi("123") == 123;

	print_test_name(1);
	print_test_result(result);
}

void	test_basic_negative(void)
{
	// Test checks that the function returns negative number correctly

	int	result = ft_atoi("-123") == -123;

	print_test_name(1);
	print_test_result(result);
}

void	test_basic_zero(void)
{
	// Test checks that the function returns zero correctly

	int	result = ft_atoi("0") == 0;

	print_test_name(1);
	print_test_result(result);
}

void	test_positive(void)
{
	// Test checks that the function returns positive number correctly

	int	result = ft_atoi("+123") == 123;

	print_test_name(1);
	print_test_result(result);
}

void	test_isspace(void)
{
	// Test checks that the function returns a correct result
	// when start of the string-number filled by isspace

	int	result = ft_atoi("     \t  \n    123") == 123;

	print_test_name(1);
	print_test_result(result);
}

void	test_to_much_sings(void)
{
	// Test checks that the function returns zero
	// when in the string more than one sign

	int	result = ft_atoi("--123") == 0;

	print_test_name(1);
	print_test_result(result);
}

void	test_min_int(void)
{
	// Test checks that the function handles min int correctly

	int	result = ft_atoi("-2147483647") == -2147483647;

	print_test_name(1);
	print_test_result(result);
}
