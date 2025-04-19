#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main(void)
{
	// char str_1[] = "Hello Mundo";
	char str_2[] = "Hello Mundo";
	const char str[] = "World";
	// printf("result: %s\n", (char *)ft_memcpy(str_1, str, 20));
	printf("original: %s\n", (char *)memcpy(str_2, str, 20));
	return (0);
}
