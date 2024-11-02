#include "../libft.h"
#include "tests.h"

void test_ft_strnstr()
{
	char *haystack[] = {
		"hello world, test, akleb", 
		"  	\0 test", 
		"helto world", 
		"\0",
		"",
		"hello"};

	printf("input : (hello world, test, akleb | test, 20) \n");
	char *p = ft_strnstr(haystack[0], "test", 20);
	char *og = strnstr(haystack[0], "test", 20);
	printf("	expected output : \n 	index : %ld ------ needle : %s\n", (og - haystack[0]), og);
	printf("	output : \n 	index : %ld -------needle : %s\n", (p - haystack[0]), p);
	assert((og - haystack[0]) == (p - haystack[0]));

	printf("-----------------------------------\n");
		
	printf("input : ( 	\\0 test | test, 20) \n");
	p = ft_strnstr(haystack[1], "test", 20);
	og = strnstr(haystack[1], "test", 20);
	printf("	expected output : \n 	index : %ld ------ needle : %s\n", (og - haystack[1]), og);
	printf("	output : \n 	index : %ld -------needle : %s\n", (p - haystack[1]), p);
	assert((og - haystack[1]) == (p - haystack[1]));
	
	printf("-----------------------------------\n");
		
	printf("input : (helto world | hello, 20) \n");
	p = ft_strnstr(haystack[2], "hello", 20);
	og = strnstr(haystack[2], "test", 20);
	printf("	expected output : \n 	index : %ld ------ needle : %s\n", (og - haystack[2]), og);
	printf("	output : \n 	index : %ld -------needle : %s\n", (p - haystack[2]), p);
	assert((og - haystack[2]) == (p - haystack[2]));
	
	printf("-----------------------------------\n");
		
	printf("input : (helto world | | 20) \n");
	p = ft_strnstr(haystack[2], "", 20);
	og = strnstr(haystack[2], "", 20);
	printf("	expected output : \n 	index : %ld ------ needle : %s\n", (og - haystack[2]), og);
	printf("	output : \n 	index : %ld -------needle : %s\n", (p - haystack[2]), p);
	assert((og - haystack[2]) == (p - haystack[2]));
	
	printf("-----------------------------------\n");
		
	printf("input : ( | test | 20) \n");
	p = ft_strnstr(haystack[4], "test", 20);
	og = strnstr(haystack[4], "test", 20);
	printf("	expected output : \n 	index : %ld ------ needle : %s\n", (og - haystack[4]), og);
	printf("	output : \n 	index : %ld -------needle : %s\n", (p - haystack[4]), p);
	assert((og - haystack[4]) == (p - haystack[4]));
	
	printf("-----------------------------------\n");
		
	printf("input : (hello world | hello | 3) \n");
	p = ft_strnstr(haystack[0], "hello", 3);
	og = strnstr(haystack[0], "hello", 3);
	printf("	expected output : \n 	index : %ld ------ needle : %s\n", (og - haystack[0]), og);
	printf("	output : \n 	index : %ld -------needle : %s\n", (p - haystack[0]), p);
	assert((og - haystack[0]) == (p - haystack[0]));
	
	printf("-----------------------------------\n");
		
	printf("input : (hello | world hello | 20) \n");
	p = ft_strnstr(haystack[5], "world hello", 20);
	og = strnstr(haystack[5], "world hello", 20);
	printf("	expected output : \n 	index : %ld ------ needle : %s\n", (og - haystack[5]), og);
	printf("	output : \n 	index : %ld -------needle : %s\n", (p - haystack[5]), p);
	assert((og - haystack[5]) == (p - haystack[5]));
	printf("All tests for ft_strnstr passed!\n");
}
