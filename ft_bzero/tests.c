#include "../tests.h"
#include "helpers.c"

void	test_erase_data(void)
{
	// Test tries to set to zeros the first 5 elements of the string
	// and then verify that the first 5 elements was set to zeros

	char str[] = "Hello World";
	ft_bzero(str, 5);
	int	result = test_case_erase(str, 5);

	print_test_name(2);
	print_test_result(result);
}

void	test_no_erase_extra_data(void)
{
	// Test checks that function doesn´t set to
	// zeros the bytes after specified number

	char	str[] = "Hello World";
	ft_bzero(str, 5);
	int	result = test_case_no_erase(str, 11, 5);

	print_test_name(1);
	print_test_result(result);
}

void	test_origin(void)
{
	// Test checks that a result of the function equals to original

	char str1[] = "Hello World";
	char str2[] = "Hello World";
	ft_bzero(str1, 5);
	bzero(str2, 5);
	int result = custom_strcmp(str1, str2, 11);

	print_test_name(3);
	print_test_result(result);
}
