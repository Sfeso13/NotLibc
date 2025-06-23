#include "tests.h"

void test_ft_memchr()
{
	char *str[] = {"hello world", "", ""};
	char hh[] = "";
	
	printf("input : (hello world, o, 10) \n");
	char *p = ft_memchr(str[0], 'o', 10);
	char *og = memchr(str[0], 'o', 10);
	printf("	expected output : \n 	index : %ld ------ character : %c\n", (og - str[0]), *og);
	printf("	output : \n 	index : %ld ------- character : %c\n", (p - str[0]), *p);
	assert((og - str[0]) == (p - str[0]) && *og == *p);

	printf("-----------------------------------\n");

	printf("input : (hello world, a, 10) \n");
	p = ft_memchr(str[0], 'a', 10);
	og = memchr(str[0], 'a', 10);
	printf("	expected output : \n 	index : %ld ------ character : %s\n", (og - str[0]), og);
	printf("	output : \n 	index : %ld ------- character : %s\n", (p - str[0]), p);
	assert(p == NULL && og == NULL);

	printf("-----------------------------------\n");

	printf("input : (hello world, o, 0) \n");
	p = ft_memchr(str[0], 'o', 0);
	og = memchr(str[0], 'o', 0);
	printf("	expected output : \n 	index : %ld ------ character : %s\n", (og - str[0]), og);
	printf("	output : \n 	index : %ld ------- character : %s\n", (p - str[0]), p);
	assert(p == NULL && og == NULL);

	printf("-----------------------------------\n");

	printf("input : (\"\", o, 10) \n");
	p = ft_memchr(str[1], 'o', 10);
	og = memchr(str[1], 'o', 10);
	printf("	expected output : \n 	index : %ld ------ character : %s\n", (og - str[0]), og);
	printf("	output : \n 	index : %ld ------- character : %s\n", (p - str[0]), p);
	assert(p == NULL && og == NULL);

	printf("-----------------------------------\n");

	printf("input : (hello world, \\0, 20) \n");
	p = ft_memchr(str[0], '\0', 20);
	og = memchr(str[0], '\0', 20);
	printf("	expected output : \n 	index : %ld ------ character : %c\n", (og - str[0]), *og);
	printf("	output : \n 	index : %ld ------- character : %c\n", (p - str[0]), *p);
	assert((og - str[0]) == (p - str[0]) && *p == *og);

	printf("-----------------------------------\n");

	printf("input : (hello world, h, 20) \n");
	p = ft_memchr(str[0], 'h', 20);
	og = memchr(str[0], 'h', 20);
	printf("	expected output : \n 	index : %ld ------ character : %c\n", (og - str[0]), *og);
	printf("	output : \n 	index : %ld ------- character : %c\n", (p - str[0]), *p);
	assert((og - str[0]) == (p - str[0]) && *p == *og);

	printf("-----------------------------------\n");

	char bigs[10000];
	memset(bigs, 'a', sizeof(bigs));
	bigs[9999] = 'b';
	printf("input : (large input, b, 10000) \n");
	p = ft_memchr(bigs, 'b', 10000);
	og = memchr(bigs, 'b', 10000);
	printf("	expected output : \n 	index : %ld ------ character : %c\n", (og - bigs), *og);
	printf("	output : \n 	index : %ld ------- character : %c\n", (p - bigs), *p);
	assert((og - bigs) == (p - bigs) && *p == *og);

	printf("-----------------------------------\n");

	printf("input : (binary data, '\\x01', 5) \n");
	unsigned char binary_data[] = {0x00, 0x01, 0x02, 0x03, 0x04};
	unsigned char *p1 = ft_memchr(binary_data, 0x01, sizeof(binary_data));
	unsigned char *og1 = memchr(binary_data, 0x01, sizeof(binary_data));
	printf("	expected output : \n 	index : %ld ------ character : %c\n", (og1 - binary_data), *og1);
	printf("	output : \n 	index : %ld ------- character : %s\n", (p1 - binary_data), p1);
	assert((og1 - binary_data) == (p1 - binary_data) && *og1 == *p1);

	printf("-----------------------------------\n");

	printf("input : (hello world, a, 50) \n");
	p = ft_memchr(str[0], 'a', 50);
	og = memchr(str[0], 'a', 50);
	printf("	expected output : \n 	index : %ld ------ character : %s\n", (og - str[0]), og);
	printf("	output : \n 	index : %ld ------- character : %s\n", (p - str[0]), p);
	assert((og - str[0]) == (p - str[0]) && og == p);

	printf("-----------------------------------\n");

	printf("TESTING WUTEVER JADDAD CAME UP WITH\ninput : (\"\", h, 10) \n");
	p = ft_memchr("", 'h', 10);
	og = memchr("", 'h', 10);
	printf("	expected output : \n 	index : %ld ------ character : %s\n", (og - ""), og);
	printf("	output : \n 	index : %ld ------- character : %s\n", (p - ""), p);
	assert((og - hh) == (p - hh) && og == p);


	printf("All tests for ft_memchr passed!\n");
}
