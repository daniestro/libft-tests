#include "tests.h"

void	_print_caller(const char *caller, int tab)
{
	printf("|   %s", caller);
	for (int i = 0; i < tab; i++) {
		printf("\t");
	}
}

void	print_test_start_line(const char *func_name, int line)
{
	size_t	n;

	n = 5 + strlen(func_name);
	printf("--- %s ", func_name);
	print_line(line - n);
}

void	print_line(int line)
{
	for (int i = 0; i < line; i++) {
		printf("-");
	}
	printf("\n");
}

void	print_test_result(int	result)
{
	if (result)
		printf("Success\t|\n");
	else
		printf("Error\t|\n");
}
