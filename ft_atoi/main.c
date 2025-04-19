#include "ft_atoi/tests.c"

int	main(void)
{
	print_test_start_line("ft_atoi", 33);
	test_basic_positive();
	test_basic_negative();
	test_basic_zero();
	test_positive();
	test_isspace();
	test_to_much_sings();
	test_min_int();
	print_line(33);
	return (0);
}
