#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n);

int	main(void)
{
	char str[] = "Hello World";
	ft_memset(str, '!', 5);
	printf("res %s\n", str);
	char str1[] = "Hello World";
	memset(str1, '!', 5);
	printf("res %s\n", str1);
	return (0);
}
