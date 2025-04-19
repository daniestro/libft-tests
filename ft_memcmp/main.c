#include "tests.c"
#include "../../libft/ft_memcmp.c"

int	main(void)
{
	print_test_start_line("ft_memcmp", 57);
	test_identical();
	test_first_bigger();
	test_first_lower();
	test_doesnt_check_after_specified_size();
	test_doesnt_stop_on_eof();
	test_zero_size();
	test_empty_strings();
	test_out_of_ascii();
	print_line(57);
	return (0);
}
