#include "ft_isdigit/tests.c"

int	main(void)
{
	print_test_start_line("ft_isdigit.c", 33);
	test_numeric();
	test_not_numeric();
	print_line(33);
	return (0);
}
