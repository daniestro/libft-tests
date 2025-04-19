#include "tests.c"
#include "../../libft/ft_strlcat.c"

int	main(void)
{
	printf("--- ft_strlcat ----------------------------------\n");
	test_enough_space_with_origin();
	test_not_enough_space_with_origin();
	printf("-------------------------------------------------\n");
	return (0);
}
