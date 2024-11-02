#include "../libft.h"
#include "tests.h"

void test_ft_strdup()
{
	printf("input : hello master \n");
	char *p = ft_strdup("hello master");
	char *og = strdup("hello master");
	printf("	expected output : %s\n", og);
	printf("	output : %s\n", p);
	assert(memcmp(og, p, 12) == 0);

	printf("-----------------------------------\n");
	
	printf("input : (empty) \n");
	p = ft_strdup("");
	og = strdup("");
	printf("	expected output : %s\n", og);
	printf("	output : %s\n", p);
	assert(memcmp(og, p, 12) == 0);

	printf("-----------------------------------\n");
	
	printf("input : こんにちは \n");
	p = ft_strdup("こんにちは");
	og = strdup("こんにちは");
	printf("	expected output : %s\n", og);
	printf("	output : %s\n", p);
	assert(memcmp(og, p, 12) == 0);
	
	printf("All tests for ft_strdup passed!\n");
}
