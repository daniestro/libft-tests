#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c);

int	main(void)
{
	printf("Should return a non-zero value\n");
	printf("char: %c, result: %d, original: %d\n", 'a', ft_isprint('a'), isprint('a'));
	printf("char: %c, result: %d, original: %d\n", '&', ft_isprint('&'), isprint('&'));
	printf("char: %c, result: %d, original: %d\n", ':', ft_isprint(':'), isprint(':'));
	printf("char: %c, result: %d, original: %d\n", 'Z', ft_isprint('Z'), isprint('Z'));
	printf("Shoulld return 0\n");
	printf("char: %c, result: %d, original: %d\n", '\t', ft_isprint('\t'), isprint('\t'));
	printf("char: %c, result: %d, original: %d\n", '\0', ft_isprint('\0'), isprint('\0'));
	return (0);
}
