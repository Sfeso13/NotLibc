#include "tests.h"
#include <stdio.h>

void test_ft_strtrim()
{
	printf("normal behaviour : \n original string : \" 	hello 	world 	\" ------ trimmed string: %s\n", ft_strtrim(" 	hello 	world 	", " 	"));
	printf("NULL : \n original string : NULL ------ trimmed string: %s\n", ft_strtrim(NULL , " 	"));
	printf("NULL : \n original string : hello world----set : NULL ------ trimmed string: %s\n", ft_strtrim("	hello  world  " ,NULL));
	printf("empty string : \n original string : (empty) ------ trimmed string: %s\n", ft_strtrim("" , " 	"));
	printf("empty set : \n original string : hello world ------ trimmed string: %s\n", ft_strtrim(" hello world " , ""));
}