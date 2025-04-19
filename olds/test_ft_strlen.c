#include <stdio.h>

size_t	ft_strlen(const char *s);

int	main(void)
{
	printf("input: %s, output: %ld\n", "Hello World", ft_strlen("Hello World"));
	printf("input: %s, output: %ld\n", "\0", ft_strlen("\0"));
	return (0);
}
