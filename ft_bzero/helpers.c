#include "../tests.h"

int	test_case_erase(char *str, size_t n)
{
	while (n--)
	{
		if (*str != '\0')
			return (0);
		str++;
	}
	return (1);
}

int	test_case_no_erase(char *str, size_t len, size_t n)
{
	while (n < len)
	{
		if (str[n] == '\0')
			return (0);
		n++;
	}
	return (1);
}

int	custom_strcmp(char *s1, char *s2, size_t len)
{
	while (len--)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (1);
}
