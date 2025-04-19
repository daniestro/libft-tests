#include "../tests.h"

void	test_positive(void)
{
	printf("|   test_positive:\t");
	if (ft_strncmp("abcd", "abc", 4) > 0)
		printf("Success\t|\n");
	else
		printf("Error\t|\n");
}

void	test_negative(void)
{
	printf("|   test_negative:\t");
	if (ft_strncmp("abc", "abcd", 4) < 0)
		printf("Success\t|\n");
	else
		printf("Error\t|\n");
}

void	test_zero(void)
{
	printf("|   test_zero:\t\t");
	if (ft_strncmp("abc", "abc", 3) == 0)
		printf("Success\t|\n");
	else
		printf("Error\t|\n");
}

