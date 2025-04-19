#include "tests.c"
#include "../../libft/ft_strnstr.c"
#include "../../libft/ft_strlen.c"

int	main(void)
{
	printf("--- ft_strnstr.c --------------------------------\n");
	test_basic_origin();
	test_zero_origin();
	test_basic_out_of_range_origin();
	test_null_origin();
	test_eof_origin();
	test_eof_all_origin();
	printf("-------------------------------------------------\n");
	return (0);
}
