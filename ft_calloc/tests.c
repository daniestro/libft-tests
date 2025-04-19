#include "tests.h"

void	*ft_calloc(size_t nmemb, size_t size);

void	test_basic_string(void)
{
	// Test checks that the function creates a massive with correct size

	char	*str = ft_calloc(12, 1);
	strcpy(str, "Hello World");
	int	result = !strcmp(str, "Hello World");
	free(str);

	print_test_name(1);
	print_test_result(result);
}

void	test_nmemb_zero(void)
{
	// Test checks that the function creates a NULL-pointer with nmemb zero

	char	*str = ft_calloc(0, 1);
	int	result = str != NULL;
	free(str);

	print_test_name(1);
	print_test_result(result);
}

void	test_size_zero(void)
{
	// Test checks that the function creates a NULL-pointer with size zero

	char	*str = ft_calloc(12, 0);
	int	result = str != NULL;
	free(str);

	print_test_name(1);
	print_test_result(result);
}

void	test_overflow(void)
{
	// Test checks that the function handles an overflow

	char	*str = ft_calloc(123456789123456789, 123456789123456789);
	int	result = str == NULL;
	free(str);

	print_test_name(1);
	print_test_result(result);
}
