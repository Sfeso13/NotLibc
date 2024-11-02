#include "../libft.h"
#include "tests.h"

void test_ft_strncmp()
{
	printf("input : (hello, hellt) \n");
	int p = ft_strncmp("hellt", "hello", 5);
	int og = strncmp("hellt", "hello", 5);
	printf("expected output : %d\n", og);
	printf("output : %d\n", p);
	assert(p > 0 && og > 0);

	printf("input : (aghf, zgfello) \n");
	p = ft_strncmp("aghf", "zgfello", 5);
	og = strncmp("aghf", "zgfello", 5);
	printf("expected output : %d\n", og);
	printf("output : %d\n", p);
	assert(p < 0 && og < 0);
	printf("All tests for ft_strncmp passed!\n");
}
