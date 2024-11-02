#include "../libft.h"
#include "tests.h"

void test_ft_memcmp()
{
	char *str[] = {"hello world", "", "helto world", "\0"};
	char *tocmp[] = {"hello world", "helto world", "", "hello", "xello world", "hello worlx"};

	printf("input : (hello world, hello world, 10) \n");
	int p = ft_memcmp(str[0], tocmp[0], 10);
	int og = memcmp(str[0], tocmp[0], 10);
	printf("	expected output : %d\n", og);
	printf("	output : %d\n", p);
	assert((og * p) >= 0);

	printf("-----------------------------------\n");

	printf("input : (hello world, helto world, 10) \n");
	p = ft_memcmp(str[0], tocmp[1], 10);
	og = memcmp(str[0], tocmp[1], 10);
	printf("	expected output : %d\n", og);
	printf("	output : %d\n", p);
	assert((og * p) >= 0);

	printf("-----------------------------------\n");

	printf("input : ("", helto world, 10) \n");
	p = ft_memcmp(str[2], tocmp[1], 10);
	og = memcmp(str[2], tocmp[1], 10);
	printf("	expected output : %d\n", og);
	printf("	output : %d\n", p);
	assert((og * p) >= 0);

	printf("-----------------------------------\n");

	printf("input : (\\0, helto world, 10) \n");
	p = ft_memcmp(str[3], tocmp[1], 10);
	og = memcmp(str[3], tocmp[1], 10);
	printf("	expected output : %d\n", og);
	printf("	output : %d\n", p);
	assert((og * p) >= 0);

	printf("-----------------------------------\n");

	char bigs[10000];
	char bigf[10000];
	memset(bigs, 'a', sizeof(bigs));
	memset(bigf, 'a', sizeof(bigs)-1);
	bigf[9999] = 'b';
	printf("input : (large input, large input with b at the end, 10000) \n");
	p = ft_memcmp(bigs, bigf, 10000);
	og = memcmp(bigs, bigf, 10000);
	printf("    expected output : %d\n", og);
	printf("    output : %d\n", p);
	assert((p * og) >= 0);

	printf("-----------------------------------\n");

	printf("input : (hello world, hello, 50) \n");
	p = ft_memcmp(str[0], tocmp[3], 50);
	og = memcmp(str[0], tocmp[3], 50);
	printf("	expected output : %d\n", og);
	printf("	output : %d\n", p);
	assert((og * p) >= 0);

	printf("-----------------------------------\n");

	printf("input : (xello world, hello world, 50) \n");
	p = ft_memcmp(str[0], tocmp[4], 50);
	og = memcmp(str[0], tocmp[4], 50);
	printf("	expected output : %d\n", og);
	printf("	output : %d\n", p);
	assert((og * p) >= 0);

	printf("-----------------------------------\n");

	printf("input : (hello worlx, hello world, 50) \n");
	p = ft_memcmp(str[0], tocmp[5], 50);
	og = memcmp(str[0], tocmp[5], 50);
	printf("	expected output : %d\n", og);
	printf("	output : %d\n", p);
	assert((og * p) >= 0);
	
	printf("-----------------------------------\n");
	
	printf("input : (non-ASCII, non-ASCII, 5) \n");
	char non_ascii1[] = {0xFF, 0xFE, 0xFD, 0xFC, 0xFB};
	char non_ascii2[] = {0xFF, 0xFE, 0xFD, 0xFC, 0xFA};
	p = ft_memcmp(non_ascii1, non_ascii2, 5);
	og = memcmp(non_ascii1, non_ascii2, 5);
	printf("	expected output : %d\n", og);
	printf("	output : %d\n", p);
	assert((og * p) >= 0);
	
	printf("-----------------------------------\n");
	
	printf("input : (same pointer, same pointer, 10) \n");
	p = ft_memcmp(str[0], str[0], 10);
	og = memcmp(str[0], str[0], 10);
	assert((og * p) >= 0);
	printf("	expected output : %d\n", og);
	printf("	output : %d\n", p);
	printf("All tests for ft_memcmp passed!\n");
}
