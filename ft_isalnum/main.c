#include "ft_isalnum/tests.c"

int	main(void)
{
	print_test_start_line("ft_isalnum", 41);
	test_alphanumeric();
	test_not_alphanumeric();
	print_line(41);
	return (0);
}
