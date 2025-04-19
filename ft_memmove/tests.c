#include "../tests.h"

void	test_basic_copy(void)
{
	// Test checks that the function copies specified size correcly

	void			*s = malloc(20);
	unsigned char	exp_res[] = "Hello World";
	ft_memmove(s, exp_res, 12);
	int	result = !memcmp(s, exp_res, 12);
	free(s);

	print_test_name(3);
	print_test_result(result);
}

void	test_doesnt_copy_exta(void)
{
	// Test checks that the function doesnt copy extra data

	void			*s = malloc(20);
	unsigned char	to_copy[] = "Hello\0World\0";
	ft_memmove(s, to_copy, 5);
	int	result = !memcmp(s, to_copy, 5);
	free(s);

	print_test_name(2);
	print_test_result(result);
}

void	test_ignores_eof(void)
{
	// Test checks that the function ignores eof in the string

	void			*s = malloc(20);
	unsigned char	to_copy[] = "Hello\0World";
	ft_memmove(s, to_copy, 12);
	int	result = !memcmp(s, to_copy, 12);
	free(s);

	print_test_name(3);
	print_test_result(result);
}

void	test_converts_to_unsgined_char(void)
{
	// Test checks that the function converts to unsigned char

	void			*s = malloc(20);
	int	to_copy[] = {321, 0x00};
	ft_memmove(s, to_copy, 1);
	int	result = !memcmp(s, "A", 1);
	free(s);

	print_test_name(1);
	print_test_result(result);
}

void	test_overlap(void)
{
	// Test checks that the function does´t overlap data

	unsigned char	str[] = "Hello World";
	ft_memmove(&(str[2]), str, 10);
	int	result = !memcmp(str, "HeHello Wor", 11);

	print_test_name(3);
	print_test_result(result);
}
