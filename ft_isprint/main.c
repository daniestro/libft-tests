#include "ft_isprint/tests.c"

int	main(void)
{
	print_test_start_line("ft_isprint.c", 33);
	test_printable();
	test_not_printable();
	print_line(33);
	return (0);
}
