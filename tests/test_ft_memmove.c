#include "../libft.h"
#include "tests.h"

void test_ft_memmove()
{
	int arr[] = {1, 205, 4056, 5};
	int s[4];
	int d[4];
	printf("testing the normal behaviour with an array of ints\n");
	ft_memmove(s, arr, 4 * 4);
	memmove(d, arr, 4 * 4);
	assert(memcmp(s, d, 16) == 0);
	
	char str[] = "test test te";
	char s1[12] = "hh";
	char d1[12] = "hh";
	printf("testing the normal behaviour with a string\n");
	ft_memmove(d1, str, 11);
	printf("ft result : %s\n", d1);
	memmove(s1, str, 11);
	printf("og result : %s\n", s1);
	assert(memcmp(s1, d1, 11) == 0);

	char arr1[] = "test test te";
	printf("testing the overlap\n");
	ft_memmove(str + 2, str, 5);
	printf("ft result : %s\n", str);
	memmove(arr1 + 2, arr1, 5);
	printf("og result : %s\n", arr1);
	assert(memcmp(str, arr1, 5) == 0);
	printf("All tests for ft_memmove passed!\n");
}

