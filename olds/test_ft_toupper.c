#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c);

int	main(void)
{
	printf("input; %c, result: %c, original: %c\n", 'a', ft_toupper('a'), toupper('a'));
	printf("input; %c, result: %c, original: %c\n", 'z', ft_toupper('z'), toupper('z'));
	printf("input; %c, result: %c, original: %c\n", 'A', ft_toupper('A'), toupper('A'));
	printf("input; %c, result: %c, original: %c\n", 'Z', ft_toupper('Z'), toupper('Z'));
	printf("input; %c, result: %c, original: %c\n", '+', ft_toupper('+'), toupper('+'));
	return (0);
}
