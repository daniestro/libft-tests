#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c);

int	main(void)
{
	printf("input: %s %c, result: %s, original: %s\n", "hello world", 'o', ft_strchr("hello world", 'o'), strchr("hello world", 'o'));
	printf("input: %s %c, result: %s, original: %s\n", "abc", 0, ft_strchr("abc", 0), strchr("abc", 0));
	if (strchr("hello world", 'z') == NULL && ft_strchr("hello world", 'z') == NULL)
		printf("input: %s %c, result: Null, original: Null\n", "hello world", 'z');
	return (0);
}
