#include "tests.c"
#include "../../libft/ft_isalnum.c"
#include "../../libft/ft_isalpha.c"
#include "../../libft/ft_isdigit.c"

int	main(void)
{
	print_test_start_line("ft_isalnum", 41);
	test_alphanumeric();
	test_not_alphanumeric();
	print_line(41);
	return (0);
}
