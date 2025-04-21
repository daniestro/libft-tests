#include "tests.h"

void	*ft_memchr(const void *s, int c, size_t n);

void	test_basic_occurence(void)
{
	// Test checks that the function finds correctly
	// the first occurence in the input string

	int result = !strcmp(ft_memchr("Hello World", 'W', 11), "World");

	print_test_name(3);
	print_test_result(result);
}

void	test_no_occure(void)
{
	// Test checks that the function doesn´t find
	// the occurence in the input string

	int result = ft_memchr("Hello World", '&', 11) == NULL;

	print_test_name(4);
	print_test_result(result);
}

void	test_no_occure_in_specified_size(void)
{
	// Test checks that the function finds correctly
	// the first occurence in the input string

	int result = ft_memchr("Hello World", 'r', 6) == NULL;

	print_test_name(2);
	print_test_result(result);
}

void	test_empty_str_input(void)
{
	// Test chekcs that function doesn´t receive error
	// when the string is empty and that returns a null

	int result = ft_memchr("", 'H', 1) == NULL;

	print_test_name(3);
	print_test_result(result);
}

void	test_eof_char_input(void)
{
	// Test checks that function finds the end of the string

	int	result = !strcmp(ft_memchr("Hello World", '\0', 12), "");

	print_test_name(4);
	print_test_result(result);
}

void	test_eof_char_no_occure_in_specified_size(void)
{
	// Test checks that function finds the end of the string

	int	result = ft_memchr("Hello World", '\0', 11) == NULL;

	print_test_name(1);
	print_test_result(result);
}

void	test_empty_str_and_eof_char_input(void)
{
	// Test checks that with to edge cases of the input the
	// returned result is steel correct - empty string

	int result = !strcmp(ft_memchr("", '\0', 1), "");

	print_test_name(2);
	print_test_result(result);
}

void	test_hex_input_occure(void)
{
	// Test checks basic occurence in hex-input

	int	result = !strcmp(ft_memchr("\61\62\63", '\63', 3), "\63");

	print_test_name(3);
	print_test_result(result);
}

void	test_bytes_input_occure_origin(void)
{
	// Test checks basic occurence in bytes-input
	// and compares with the original function

	unsigned char	bytes[] = {128, 129, 130, 0x00};
	int	result = !memcmp(ft_memchr(bytes, 130, 4), memchr(bytes, 130, 4), 2);

	print_test_name(2);
	print_test_result(result);
}

void	test_char_more_than_one_byte(void)
{
	// Test checks that when function receives an input as int
	// that out of converts to the one byte - to unsigned char

	unsigned char	bytes[] = {9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 0x00};
	int	result = ft_memchr(bytes, 527, 12) == &(bytes[6]);

	print_test_name(2);
	print_test_result(result);
}

