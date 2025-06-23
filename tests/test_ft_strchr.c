#include "tests.h"

void test_ft_strchr()
{
	printf("\n--------------------------\n");
	char src[] = "hello";
    char src1[] = "hello";
	printf("testing the normal behaviour\n");
	char *p = ft_strchr(src, 'l');
	char *og = strchr(src1, 'l');
	printf("expected output : \n index : %ld  ------ character : %c\n", (og - src1), *og);
	printf("output : \n index : %ld ------ character : %c\n", (p - src), *p);
	assert((p - src) == (og - src1) && *og == *p);

	printf("testing non existant character\n");
	p = ft_strchr(src, 'a');
	og = strchr(src1, 'a');
	printf("expected output : \n index : %ld  ------ character : %s\n", (og - src1), og);
	printf("output : \n index : %ld ------ character : %s\n", (p - src), p);
	assert(og == NULL && p == NULL);
	
	printf("testing \\0\n");
	p = ft_strchr(src, '\0');
	og = strchr(src1, '\0');
	printf("expected output : \n index : %ld  ------ character : %s\n", (og - src1), og);
	printf("output : \n index : %ld ------ character : %s\n", (p - src), p);
	assert((og - src1) == (p - src) && *og == *p);
		
	printf("All tests for ft_strchr passed!\n");
}
