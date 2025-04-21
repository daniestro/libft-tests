#include "tests.h"

char	*ft_strdup(const char *s);

void	test_basic_copy(void)
{
	// Tests checks that the function copies string

	const char	*str = "Hello World";
	char	*copy = ft_strdup(str);
	int	result = !strcmp(str, copy);
	free(copy);

	print_test_name(1);
	print_test_result(result);
}

void	test_empty_string(void)
{
	// Tests checks that the function copies
	// empty string without error

	const char	*str = "";
	char	*copy = ft_strdup(str);
	int	result = !strcmp(str, copy);
	free(copy);

	print_test_name(1);
	print_test_result(result);
}

void	test_stops_at_eof(void)
{
	// Tests checks that the function stops at eof

	const char	*str = "abc\0def";
	char	*copy = ft_strdup(str);
	int	result = !strcmp(str, copy);
	free(copy);

	print_test_name(1);
	print_test_result(result);
}
