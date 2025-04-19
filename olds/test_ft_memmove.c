#include <string.h>

int	main(void)
{
	char str[] = "hello world";
	memmove(str + 2, str, 5);
	return (0);
}
