#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c);

int	main(void)
{
	printf("input; %c, result: %c, original: %c\n", 'A', ft_tolower('A'), tolower('A'));
	printf("input; %c, result: %c, original: %c\n", 'a', ft_tolower('a'), tolower('a'));
	printf("input; %c, result: %c, original: %c\n", '*', ft_tolower('*'), tolower('*'));
	return (0);
}
