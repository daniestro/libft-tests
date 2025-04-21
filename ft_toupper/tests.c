#include "tests.h"

int	ft_toupper(int c);

int	small_letters(void)
{
	char	small;
	char	big;

	small = 'a';
	big = 'A';
	while (small <= 'z')
	{
		if (ft_toupper(small) != big)
			return (0);
		small++;
		big++;
	}
	return (1);
}

int	non_alpha(void)
{
	char	ch;

	ch = 0;
	while (ch < 'A')
	{
		if (ft_toupper(ch) != ch)
			return (0);
		ch++;
	}
	return (1);
}

void	test_basic_positive(void)
{
	printf("|   test_basic_positive:\t");
	if (small_letters())
		printf("Success\t|\n");
	else
		printf("Error\t|\n");
}

void	test_basic_negative(void)
{
	printf("|   test_basic_negative:\t");
	if (non_alpha())
		printf("Success\t|\n");
	else
		printf("Error\t|\n");
}
