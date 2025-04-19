#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);

int	main(void)
{
	char str1[12] = "hello";
	char str2[] = "world";
	char str3[12] = "hello";
	char str4[] = "world";
	printf("result: %ld, original: %ld\n", ft_strlcat(str1, str2, 12), strlcat(str3, str4, 12));
	printf("result: %s, original %s\n", str1, str3);
	return (0);
}
