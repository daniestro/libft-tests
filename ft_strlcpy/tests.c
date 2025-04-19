#include "../tests.h"

void	test_simple_copy(void)
{
	char str1[] = "Hello World";
	char str2[] = "Hola  Mundo";

	ft_strlcpy(str1, str2, 5);
	printf("|   test_simple_copy:\t");
	if (!strcmp(str1, "Hola"))
		printf("Success\t|\n");
	else
		printf("Error\t|\n");
}

void	test_origin(void)
{
	char str1[] = "Hello World";
	char str2[] = "Hello World";

	printf("|   test_origin:\t");
	if (ft_strlcpy(str1, "Hola", 5) == strlcpy(str2, "Hola", 5))
		printf("Success\t|\n");
	else
		printf("Error\t|\n");
}
