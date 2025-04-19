#include <stdio.h>
#include <string.h>

void ft_bzero(void *s, size_t n);

int	main(void)
{
	char str[] = "Hello World";
	printf("input %s\n", str);
	ft_bzero(str, 5);
	printf("output %s\n", str);
	char str1[] = "Hello World";
	printf("input 2 %s\n", str1);
	bzero(str1, 5);
	printf("output 2 %s\n", str1);
	return (0);
}
