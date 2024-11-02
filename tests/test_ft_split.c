#include "tests.h"

void test_ft_split()
{
	char	**arr = ft_split("hello world test", ' ');
	int i = 0;

	printf("normal behaviour : \n string : hello world test ------- split : \n");
	while (arr[i])
	{
		printf("word %d : %s\n", i+1, arr[i]);
		i++;
	}
	printf("------------------------\n");

	arr = ft_split("", ' ');
	i = 0;
	printf("empty string : \n string : (empty) ------- split : %s\n", arr[i]);
	
	printf("------------------------\n");
	
	arr = ft_split("hello world test", '\0');
	i = 0;
	printf("NULL delimeter : \n string : hello world test ------- split : \n");
	while (arr[i])
	{
		printf("word %d : %s\n", i+1, arr[i]);
		i++;
	}
	printf("------------------------\n");
	
	assert (ft_split(NULL, ' ') == NULL);
	printf("NULL string returned NULL\n");

	printf("------------------------\n");	

	arr = ft_split("hello world test", -5);
	i = 0;
	printf("negative set : \n string : hello world test ------- split : \n");
	while (arr[i])
	{
		printf("word %d : %s\n", i+1, arr[i]);
		i++;
	}
	printf("------------------------\n");
}

int main()
{
	test_ft_split();
}
