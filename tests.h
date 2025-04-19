#ifndef TESTS_H
# define TESTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <bsd/string.h>

#define	print_test_name(tab) _print_caller(__func__, tab);
void	_print_caller(const char *caller, int tab);
void	print_test_start_line(const char *name, int line);
void	print_line(int line);
void	print_test_result(int	result);

#endif
