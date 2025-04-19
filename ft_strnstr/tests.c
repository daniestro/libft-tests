#include "../tests.h"

void	test_basic_origin(void)
{
	char s[] = "Hello World";
	char to_find[] = "rl";

	printf("|   test_basic_origin:\t\t\t");
	if (ft_strnstr(s, to_find, 8) == strnstr(s, to_find, 8))
		printf("Success\t|\n");
	else
		printf("Error\t|\n");
}

void	test_zero_origin(void)
{
	char s[] = "Hello World";
	char to_find[] = "rl";

	printf("|   test_zero_origin:\t\t\t");
	if (ft_strnstr(s, to_find, 0) == strnstr(s, to_find, 0))
		printf("Success\t|\n");
	else
		printf("Error\t|\n");
}

void	test_basic_out_of_range_origin(void)
{
	char s[] = "Hello World";
	char to_find[] = "rld";

	printf("|   test_basic_out_of_range_origin:\t");
	if (ft_strnstr(s, to_find, 9) == strnstr(s, to_find, 9))
		printf("Success\t|\n");
	else
		printf("Error\t|\n");
}

void	test_null_origin(void)
{
	char s[] = "Hello World";
	char to_find[] = "rl";

	printf("|   test_null_origin:\t\t\t");
	if (ft_strnstr(s, to_find, 6) == strnstr(s, to_find, 6))
		printf("Success\t|\n");
	else
		printf("Error\t|\n");
}

void	test_eof_origin(void)
{
	char s[] = "Hello World";
	char to_find[] = "\0";

	printf("|   test_eof_origin:\t\t\t");
	if (ft_strnstr(s, to_find, 11) == strnstr(s, to_find, 11))
		printf("Success\t|\n");
	else
		printf("Error\t|\n");
}

void	test_eof_all_origin(void)
{
	char s[] = "";
	char to_find[] = "";

	printf("|   test_eof_all_origin:\t\t");
	if (ft_strnstr(s, to_find, 3) == strnstr(s, to_find, 3))
		printf("Success\t|\n");
	else
		printf("Error\t|\n");
}

