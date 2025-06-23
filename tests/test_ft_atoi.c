#include "tests.h"

void test_ft_atoi()
{
	char *conv[] = {
		"0123456", 
		"  	\0 50", 
		"	 --2", 
		" 	 -54s68f",
		"-2147483648",
		"-2147483649",
		"-15648798746585",
		"214748364754688794",
		"9223372036854775807",
		"-9223372036854775808",
		"9223372036854775807165464",
		"-922337203685477580754886",
		"99999999999999999223372036854775807165464223372036854775807165464223372036854775807165464223372036854775807165464223372036854775807165464223372036854775807165464223372036854775807165464223372036854775807165464223372036854775807165464223372036854775807165464223372036854775807165464223372036854775807165464223372036854775807165464223372036854775807165464223372036854775807165464223372036854775807165464223372036854775807165464"};

	printf("input : (0123456) \n");
	int p = ft_atoi(conv[0]);
	int og = atoi(conv[0]);
	printf("	expected output : %d\n", og);
	printf("	output : %d\n", p);
	assert(og == p);

	printf("-----------------------------------\n");
			
	printf("input : \\0 50 \n");
	p = ft_atoi(conv[1]);
	og = atoi(conv[1]);
	printf("	expected output : %d\n", og);
	printf("	output : %d\n", p);
	assert(og == p);
	
	printf("-----------------------------------\n");
	
	printf("input : --2 \n");
	p = ft_atoi(conv[2]);
	og = atoi(conv[2]);
	printf("	expected output : %d\n", og);
	printf("	output : %d\n", p);
	assert(og == p);
	
	printf("-----------------------------------\n");
	
	printf("input : -2147483648 \n");
	p = ft_atoi(conv[4]);
	og = atoi(conv[4]);
	printf("	expected output : %d\n", og);
	printf("	output : %d\n", p);
	assert(og == p);
	
	printf("-----------------------------------\n");
	
	printf("input : -2147483649 \n");
	p = ft_atoi(conv[5]);
	og = atoi(conv[5]);
	printf("	expected output : %d\n", og);
	printf("	output : %d\n", p);
	assert(og == p);
	
	printf("-----------------------------------\n");
	
	printf("input : <min int \n");
	p = ft_atoi(conv[6]);
	og = atoi(conv[6]);
	printf("	expected output : %d\n", og);
	printf("	output : %d\n", p);
	assert(og == p);
	
	printf("-----------------------------------\n");
	
	printf("input : >max int \n");
	p = ft_atoi(conv[7]);
	og = atoi(conv[7]);
	printf("	expected output : %d\n", og);
	printf("	output : %d\n", p);
	assert(og == p);
	
	printf("-----------------------------------\n");
	
	printf("input : max long long \n");
	p = ft_atoi(conv[8]);
	og = atoi(conv[8]);
	printf("	expected output : %d\n", og);
	printf("	output : %d\n", p);
	assert(og == p);
	
	printf("-----------------------------------\n");
	
	printf("input : min long long \n");
	p = ft_atoi(conv[9]);
	og = atoi(conv[9]);
	printf("	expected output : %d\n", og);
	printf("	output : %d\n", p);
	assert(og == p);
		
	printf("-----------------------------------\n");
	
	printf("input : >max long long \n");
	p = ft_atoi(conv[12]);
	og = atoi(conv[12]);
	printf("	expected output : %d\n", og);
	printf("	output : %d\n", p);
	assert(og == p);
	
	printf("-----------------------------------\n");
	
	printf("input : <min long long \n");
	p = ft_atoi(conv[11]);
	og = atoi(conv[11]);
	printf("	expected output : %d\n", og);
	printf("	output : %d\n", p);
	assert(og == p);
	
	printf("-----------------------------------\n");
	
	printf("input : <min long long \n");
	p = ft_atoi(conv[11]);
	og = atoi(conv[11]);
	printf("	expected output : %d\n", og);
	printf("	output : %d\n", p);
	assert(og == p);
	
	printf("All tests for ft_atoi passed!\n");
}
