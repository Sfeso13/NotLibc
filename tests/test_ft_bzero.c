#include "tests.h"

void test_ft_bzero()
{
	int arr[] = {1, 205, 4056, 5};
	int x[] = {1, 205, 4056, 5};
	printf("testing the normal behaviour with an array of ints\n");
	ft_bzero(arr, 4 * 4);
	bzero(x, 4 * 4);
	assert(memcmp(arr, x, 16) == 0);


	printf("All tests for ft_bzero passed!\n");
}
