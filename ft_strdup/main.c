#include "tests.c"
#include "../../libft/ft_strdup.c"
#include "../../libft/ft_strlen.c"
#include "../../libft/ft_strlcpy.c"

int	main(void)
{
	print_test_start_line("ft_strdup.c", 33);
	test_basic_copy();
	test_empty_string();
	test_stops_at_eof();
	print_line(33);
	return (0);
}
