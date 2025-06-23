#include "tests.h"

void test_ft_memcpy()
{
	int arr[] = {1, 205, 4056, 5};
	int s[4];
	int d[4];
	printf("testing the normal behaviour with an array of ints\n");
	ft_memcpy(s, arr, 4 * 4);
	memcpy(d, arr, 4 * 4);
	assert(memcmp(s, d, 16) == 0);

	char str[] = "hello alo";
	char str1[] = "hello alo";
	printf("testing the overlapping\n");
	ft_memcpy(str + 2, str, 4);
	memcpy(str1 + 2, str, 4);
	assert(memcmp(str, str1, 9) == 0);
	
	char s1[1] = "\0";
	char s2[1];
	printf("testing the null\n");
	ft_memcpy(s1, s2, 1);
	//memcpy(str1 + 2, str, 4);
	assert(memcmp(s1, s2, 1) == 0);

	printf("All tests for ft_memcpy passed!\n");
}
