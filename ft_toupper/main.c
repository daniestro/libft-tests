#include "tests.c"
#include "../../libft/ft_toupper.c"

int	main(void)
{
	printf("--- ft_toupper --------------------------\n");
	test_basic_positive();
	test_basic_negative();
	printf("-----------------------------------------\n");
	return (0);
}
