#include "../tests.h"

static int	test_case(const char *s, size_t r)
{
	return (ft_strlen(s) == r);
}

static int	test_case_origin(const char *s)
{
	return (ft_strlen(s) == strlen(s));
}

void	test_hello_world(void)
{
	printf("|   test_hello_world:\t\t");
	if (test_case("Hello World", 11))
		printf("Success\t|\n");
	else
		printf("Error\t|\n");
}

void	test_hello_world_origin(void)
{
	printf("|   test_hello_world_origin:\t");
	if (test_case_origin("Hello World"))
		printf("Success\t|\n");
	else
		printf("Error\t|\n");
}

void	test_empty(void)
{
	printf("|   test_empty:\t\t\t");
	if (test_case("", 0))
		printf("Success\t|\n");
	else
		printf("Error\t|\n");
}

void	test_empty_origin(void)
{
	printf("|   test_empty_origin:\t\t");
	if (test_case_origin(""))
		printf("Success\t|\n");
	else
		printf("Error\t|\n");
}

void	test_non_printable(void)
{
	printf("|   test_non_printable:\t\t");
	if (test_case("\t\n\t", 3))
		printf("Success\t|\n");
	else
		printf("Error\t|\n");
}

void	test_non_printable_origin(void)
{
	printf("|   test_non_printable_origin:\t");
	if (test_case_origin("\t\n\t"))
		printf("Success\t|\n");
	else
		printf("Error\t|\n");
}

void	test_extended_ascii(void)
{
	printf("|   test_extended_ascii:\t");
	if (test_case("€€€", 9))
		printf("Success\t|\n");
	else
		printf("Error\t|\n");
}

void	test_extended_ascii_origin(void)
{
	printf("|   test_extended_ascii_origin:\t");
	if (test_case_origin("€€€"))
		printf("Success\t|\n");
	else
		printf("Error\t|\n");
}

