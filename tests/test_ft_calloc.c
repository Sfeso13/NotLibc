#include "../libft.h"
#include "tests.h"

void test_ft_calloc()
{
	printf("input : normal allocation \n");
	int *p = ft_calloc(4, sizeof(int));	
	assert(p != NULL);

	printf("All tests for ft_calloc passed!\n");
}
