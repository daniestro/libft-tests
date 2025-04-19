#include "../tests.h"

size_t	res_hw_ft_strlcat(size_t n)
{
	char	s1[20] = "Hello";
	char	s2[] = " World";
	return (ft_strlcat(s1, s2, n));
}

size_t	res_hw_strlcat(size_t n)
{
	char	s1[20] = "Hello";
	char	s2[] = " World";
	return (strlcat(s1, s2, n));
}

void	test_enough_space_with_origin(void)
{
	char	str1[20] = "Hello";
	char	str2[] = " World";
	char	str3[20] = "Hello";
	char	str4[] = " World";

	printf("|   test_enough_space_with_origin:\t");
	if (ft_strlcat(str1, str2, 12) == strlcat(str3, str4, 12) && !strcmp(str1, str3))
		printf("Success\t|\n");
	else
		printf("Error\t|\n");
}

void	test_not_enough_space_with_origin(void)
{
	printf("|   test_not_enough_space_with_origin:\t");
	if (res_hw_ft_strlcat(10) == res_hw_ft_strlcat(10))
		printf("Success\t|\n");
	else
		printf("Error\t|\n");
}
