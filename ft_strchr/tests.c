#include "tests.h"

char	*ft_strchr(const char *s, int c);

void	test_basic_find(void)
{
	// Test checks that the function

	int	result = !strcmp(ft_strchr("Hello World", 'W'), "World");

	print_test_name(3);
	print_test_result(result);
}

void	test_doesnt_find(void)
{
	// Test checks that the function doesnt find anything

	int	result = ft_strchr("Hello World", 'a') == NULL;

	print_test_name(3);
	print_test_result(result);
}

void	test_stops_at_eof(void)
{
	// Test checks that the function stops at eof

	int	result = ft_strchr("Hello\0World", 'W') == NULL;

	print_test_name(3);
	print_test_result(result);
}

void	test_convers_to_unsigned(void)
{
	// Test checks that the function converts c to usnigned char

	int	result = !strcmp(ft_strchr("Abroad", 321), "Abroad");

	print_test_name(2);
	print_test_result(result);
}

void	test_returns_pointer_to_eof(void)
{
	// Test checks that the function returns the pointer to eof

	int	result = !strcmp(ft_strchr("Abroad", '\0'), "");

	print_test_name(2);
	print_test_result(result);
}

void	test_convers_to_unsigned_and_eof(void)
{
	// Test checks that the function converts a c to the
	// unsigned and it works correctly when it is an eof

	int	result = !strcmp(ft_strchr("Abroad", 1024), "");

	print_test_name(1);
	print_test_result(result);
}
