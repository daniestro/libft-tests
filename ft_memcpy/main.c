#include "ft_memcpy/tests.c"

int	main(void)
{
	print_test_start_line("ft_memcpy.c", 49);
	test_basic_copy();
	test_doesnt_copy_exta();
	test_ignores_eof();
	test_converts_to_unsgined_char();
	print_line(49);
	return (0);
}
