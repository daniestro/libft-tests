#include "ft_bzero/tests.c"

int	main(void)
{
	print_test_start_line("ft_bzero", 41);
	test_erase_data();
	test_no_erase_extra_data();
	test_origin();
	print_line(41);
	return (0);
}
