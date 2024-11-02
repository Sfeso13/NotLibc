#include "../libft.h"
#include "tests.h"

void test_ft_memset()
{
	int arr[10] = {0};
	int x[10] = {0};
	printf("testing the normal behaviour with an array of ints\n");
	ft_memset(arr, 1, 10);
	memset(x, 1, 10);
	assert(memcmp(arr, x, 10) == 0);

	int v = 0;
	int y = 0;
	char *p = (char *)&v;
	printf("trying to set 425040\n");
	ft_memset(p++, 80, 1);
	ft_memset(p++, 124, 1);
	ft_memset(p++, 6, 1);
	ft_memset(p++, 0, 1);
	p = (char *)&y;
	memset(p++, 80, 1);
	memset(p++, 124, 1);
	memset(p++, 6, 1);
	memset(p++, 0, 1);
	assert(memcmp(&v, &y, 4) == 0 && v == 425040);  // Uppercase letter
    
	v = 0;
	y = 0;
	p = (char *)&v;
	printf("trying to set -789\n");
	ft_memset(p, 255, 4);
	ft_memset(p++, 0xeb, 1);
	ft_memset(p++, 0xfc, 1);
	p = (char *)&y;
	memset(p, 255, 4);
	memset(p++, 0xeb, 1);
	memset(p++, 0xfc, 1);
	assert(memcmp(&v, &y, 4) == 0 && v == -789);  // Uppercase letter
	
	v = 0;
	y = 0;
	p = (char *)&v;
	printf("trying to set -300\n");
	ft_memset(p, 255, 4);
	ft_memset(p++, 0xd4, 1);
	ft_memset(p++, 0xfe, 1);
	p = (char *)&y;
	memset(p, 255, 4);
	memset(p++, 0xd4, 1);
	memset(p++, 0xFE, 1);
	assert(memcmp(&v, &y, 4) == 0 && v == -300);  // Uppercase letter
	
	printf("All tests for ft_memset passed!\n");
}
