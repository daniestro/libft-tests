#include "tests.c"
#include "../../libft/ft_strncmp.c"

int	main(void)
{
	printf("--- ft_strncmp ------------------\n");
	test_negative();
	test_positive();
	test_zero();
	printf("---------------------------------\n");
	return (0);
}
