#include "tests.c"
#include "../../libft/ft_tolower.c"

int	main(void)
{
	printf("--- ft_lower ----------------------------\n");
	test_basic_positive();
	test_basic_negative();
	printf("-----------------------------------------\n");
	return (0);
}
