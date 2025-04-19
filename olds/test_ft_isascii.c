#include <stdio.h>
#include <ctype.h>

int ft_isascii(int c);

int main(void)
{
	printf("Should be 1\n");
	printf("num: %d, result: %d, original: %d\n", 0, ft_isascii(0), isascii(0));
	printf("num: %d, result: %d, original: %d\n", 32, ft_isascii(32), isascii(32));
	printf("num: %d, result: %d, original: %d\n", 64, ft_isascii(64), isascii(64));
	printf("num: %d, result: %d, original: %d\n", 127, ft_isascii(127), isascii(127));
	printf("Should be 0\n");
	printf("num: %d, result: %d, original: %d\n", -1, ft_isascii(-1), isascii(-1));
	printf("num: %d, result: %d, original: %d\n", 128, ft_isascii(128), isascii(128));
	return (0);
}
