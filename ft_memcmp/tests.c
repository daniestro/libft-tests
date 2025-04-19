#include "../tests.h"

void	test_identical(void)
{
	// Test checks that a result of the function
	// with identical strings is zero

	int	result = ft_memcmp("abc", "abc", 3) == 0;

	print_test_name(4);
	print_test_result(result);
}

void	test_first_bigger(void)
{
	// Test checks that a result of the function with strings
	// where the first is bigger than a second is bigger than 0

	int	result = ft_memcmp("abcd", "abc", 4) > 0;

	print_test_name(4);
	print_test_result(result);
}

void	test_first_lower(void)
{
	// Test checks that a result of the function with strings
	// where the first is less than a second is less than 0

	int	result = ft_memcmp("abc", "abcd", 4) < 0;

	print_test_name(4);
	print_test_result(result);
}

void	test_doesnt_check_after_specified_size(void)
{
	// Test checks that a function does not
	// check bytes after the specified size

	int	result = ft_memcmp("abc", "abcd", 3) == 0;

	print_test_name(1);
	print_test_result(result);
}

void	test_doesnt_stop_on_eof(void)
{
	// Test checks that a function does
	// not stop after the end of file

	int	result = ft_memcmp("abc\0a", "abc\0b", 5) < 0;

	print_test_name(3);
	print_test_result(result);
}

void	test_zero_size(void)
{
	// Test checks that a result of function with size zero is zero

	int	result = ft_memcmp("abc", "abc", 0) == 0;

	print_test_name(4);
	print_test_result(result);
}

void	test_empty_strings(void)
{
	// Test checks that a result of function with size zero is zero

	int	result = ft_memcmp("", "", 1) == 0;

	print_test_name(4);
	print_test_result(result);
}

void	test_out_of_ascii(void)
{
	// Test checks that a function makes converions to unsigned char

	int	a = 321;
	unsigned char b = 'A';
	int	result = ft_memcmp(&a, &b, 1) == 0;

	print_test_name(4);
	print_test_result(result);
}
