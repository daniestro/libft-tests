#include "../tests.h"

void	test_basic_set(void)
{
	// Test checks that a function sets used symbols to the specified area

	void	*s = malloc(20);
	memset(s, '*', 10);
	int	result = !memcmp(s, "**********", 10);
	free(s);

	print_test_name(2);
	print_test_result(result);
}

void	test_doesnt_set_extra(void)
{
	// Test checks that a function doesnt set symbols after the specified area

	void	*s = malloc(20);
	void	*res = malloc(10);
	bzero(res, 10);
	memset(s, '*', 10);
	int	result = !memcmp(&(((unsigned char *)s)[10]), res, 10);
	free(s);
	free(res);

	print_test_name(1);
	print_test_result(result);
}

void	test_unsigned_convertion(void)
{
	// Test checks that a function converts to unsigned char

	void	*s = malloc(20);
	memset(s, 321, 10);
	int	result = !memcmp(s, "AAAAAAAAAA", 10);
	free(s);

	print_test_name(1);
	print_test_result(result);
}
