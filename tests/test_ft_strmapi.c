#include "tests.h"

char f(unsigned int x, char c)
{
	x = 0;
	return (ft_toupper(c));
}

void test_ft_strmapi()
{
	printf("original string : hello worlds ------- string mo3adala : %s\n", ft_strmapi("hello worlds", f));
	printf("original string : (null) ------- string mo3adala : %s\n", ft_strmapi(NULL, f));
	printf("original string : hello world with a null function ------- string mo3adala : %s\n", ft_strmapi("hello world", NULL));
	printf("original string : (empty) ------- string mo3adala : %s\n", ft_strmapi("", f));
}
