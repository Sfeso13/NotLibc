#include "tests.h"

void test_ft_strrchr()
{
	char src[] = "hello, world";
    char src1[] = "hello, world";
	printf("testing the normal behaviour\n");
	char *p = ft_strrchr(src, 'l');
	char *og = strrchr(src1, 'l');
	printf("expected output : \n index : %ld  ------ character : %c\n", (og - src1), *og);
	printf("output : \n index : %ld ------ character : %c\n", (p - src), *p);
	assert((p - src) == (og - src1) && *og == *p);

	printf("testing non existant character\n");
	p = ft_strrchr(src, 'a');
	og = strrchr(src1, 'a');
	printf("expected output : \n index : %ld  ------ character : %s\n", (og - src1), og);
	printf("output : \n index : %ld ------ character : %s\n", (p - src), p);
	assert(p == NULL && og == NULL);
		
	printf("testing \\0\n");
	p = ft_strrchr(src, '\0');
	og = strrchr(src1, '\0');
	printf("expected output : \n index : %ld  ------ character : %s\n", (og - src1), og);
	printf("output : \n index : %ld ------ character : %s\n", (p - src), p);
	assert((p - src) == (og - src1) && *og == *p);
	
	printf("All tests for ft_strrchr passed!\n");
}
