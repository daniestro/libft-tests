#include "tests.c"
#include "../../libft/ft_memchr.c"

int	main(void)
{
	print_test_start_line("ft_memchr", 57);
	test_basic_occurence();
	test_no_occure();
	test_no_occure_in_specified_size();
	test_empty_str_input();
	test_eof_char_input();
	test_eof_char_no_occure_in_specified_size();
	test_empty_str_and_eof_char_input();
	test_hex_input_occure();
	test_bytes_input_occure_origin();
	test_char_more_than_one_byte();
	print_line(57);
	return (0);
}
