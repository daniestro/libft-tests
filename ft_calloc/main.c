#include "ft_calloc/tests.c"

int	main(void)
{
	print_test_start_line("ft_calloc", 33);
	test_basic_string();
	test_nmemb_zero();
	test_size_zero();
	test_overflow();
	print_line(33);
	return (0);
}
