#include "tests.c"

int	main(void)
{
	print_test_start_line("ft_memset", 41);
	test_basic_set();
	test_doesnt_set_extra();
	test_unsigned_convertion();
	print_line(41);
	return (0);
}
