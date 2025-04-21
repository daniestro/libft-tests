#include "ft_strchr/tests.c"

int	main(void)
{
	print_test_start_line("ft_strchr.c", 49);
	test_basic_find();
	test_doesnt_find();
	test_stops_at_eof();
	test_convers_to_unsigned();
	test_returns_pointer_to_eof();
	test_convers_to_unsigned_and_eof();
	print_line(49);
	return (0);
}
