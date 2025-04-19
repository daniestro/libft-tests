#include <stdio.h>
#include <ctype.h>

int ft_isalnum(char c);

int main(void)
{
    printf("Should return a non-zero value\n");
    printf("char %c, result: %d, original: %d\n", 'a', ft_isalnum('a'), isalnum('a'));
    printf("char %c, result: %d, original: %d\n", 'j', ft_isalnum('j'), isalnum('j'));
    printf("char %c, result: %d, original: %d\n", 'z', ft_isalnum('z'), isalnum('z'));
    printf("char %c, result: %d, original: %d\n", 'A', ft_isalnum('A'), isalnum('A'));
    printf("char %c, result: %d, original: %d\n", 'J', ft_isalnum('J'), isalnum('J'));
    printf("char %c, result: %d, original: %d\n", 'Z', ft_isalnum('Z'), isalnum('Z'));
    printf("char %c, result: %d, original: %d\n", '0', ft_isalnum('0'), isalnum('0'));
    printf("char %c, result: %d, original: %d\n", '5', ft_isalnum('5'), isalnum('5'));
    printf("char %c, result: %d, original: %d\n", '9', ft_isalnum('9'), isalnum('9'));
    printf("Should return 0\n");
    printf("char %c, result: %d, original: %d\n", '\t', ft_isalnum('\t'), isalnum('\t'));
    printf("char %c, result: %d, original: %d\n", '*', ft_isalnum('*'), isalnum('*'));
    printf("char %c, result: %d, original: %d\n", '^', ft_isalnum('^'), isalnum('^'));
    return (0);
}