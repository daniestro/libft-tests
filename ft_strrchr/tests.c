#include "tests.h"

char	*ft_strrchr(const char *s, int c);

void	test_basic_find(void)
{
	// Test checks that the function

	int	result = !strcmp(ft_strrchr("Wello World", 'W'), "World");

	print_test_name(3);
	print_test_result(result);
}

void	test_doesnt_find(void)
{
	// Test checks that the function doesnt find anything

	int	result = ft_strrchr("Hello World", 'a') == NULL;

	print_test_name(3);
	print_test_result(result);
}

void	test_stops_at_eof(void)
{
	// Test checks that the function doesnt stop at eof

	int	result = ft_strrchr("Hello\0World", 'W') == NULL;

	print_test_name(3);
	print_test_result(result);
}

void	test_convers_to_unsigned(void)
{
	// Test checks that the function converts to the unsigned

	int	result = !strcmp(ft_strrchr("Abroad", 321), "Abroad");

	print_test_name(2);
	print_test_result(result);
}

void	test_returns_pointer_to_eof(void)
{
	// Test checks that the function returns the pointer to eof

	int	result = !strcmp(ft_strrchr("Abroad", '\0'), "");

	print_test_name(2);
	print_test_result(result);
}

void	test_convers_to_unsigned_and_eof(void)
{
	// Test checks that the function converts a c to the
	// unsigned and it works correctly when it is an eof

	int	result = !strcmp(ft_strrchr("Abroad", 1024), "");

	print_test_name(1);
	print_test_result(result);
}
