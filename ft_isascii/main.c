#include "tests.c"
#include "../../libft/ft_isascii.c"

int	main(void)
{
	print_test_start_line("ft_isascii", 33);
	test_ascii();
	test_not_ascii();
	print_line(33);
	return (0);
}
