#include "tests.c"
#include "../../libft/ft_strlen.c"

int	main(void)
{
	printf("--- ft_strlen ---------------------------\n");
	test_hello_world();
	test_empty();
	test_non_printable();
	test_extended_ascii();
	test_hello_world_origin();
	test_empty_origin();
	test_non_printable_origin();
	test_extended_ascii_origin();
	printf("-----------------------------------------\n");
	return (0);
}
