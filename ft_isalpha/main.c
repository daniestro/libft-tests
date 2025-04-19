#include "tests.c"
#include "../../libft/ft_isalpha.c"

int	main(void)
{
	print_test_start_line("ft_isalpha", 33);
	test_alphabetic();
	test_not_alphabetic();
	print_line(33);
	return (0);
}
