#include "tests.h"

void	test_ft_substr()
{
	char str[] = "hello world";
	printf("testing normal behaviour : \n string : hello world ------ substring : %s\n",ft_substr("hello world", 3, 5));
	printf("testing len 0 : \n string : hello world ------ substring : %s\n",ft_substr("hello world", 3, 0));
	printf("testing index > buffer : \n string : hello world ------ substring : %s\n",ft_substr("hello world", 50, 5));
	printf("testing index > buffer with allocated string :\n string : hello world ------ substring : %s\n",ft_substr(str, 50, 5));
	printf("testing len > buffer : \n string : hello world ------ substring : %s\n",ft_substr("hello world", 5, 50));
	printf("testing null : \n string : NULL ------ substring : %s\n",ft_substr(NULL, 5, 50));
	printf("testing negative len : \n string : hello world ------ substring : %s\n",ft_substr("hello world", 5, -50));
	printf("testing negative start : \n string : hello world ------ substring : %s\n",ft_substr("hello world", -5, 2));
}

int main()
{
	test_ft_substr();
}
