#include "tests.c"
#include "../../libft/ft_strlcpy.c"

int	main(void)
{
	printf("--- ft_strlcpy ------------------\n");
	test_simple_copy();
	test_origin();
	printf("---------------------------------\n");
	return (0);
}
