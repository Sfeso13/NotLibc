#include "tests.h"
#include <stdio.h>

void	test_ft_strjoin()
{
	printf("normal behaviour : \n joined string : %s\n", ft_strjoin("hello ", "world"));
	printf("empty string : \n joined string : %s\n", ft_strjoin("", "world"));
	printf("normal behaviour : \n joined string : %s\n", ft_strjoin("\0", "world"));
	printf("null : \n joined string : %s\n", ft_strjoin(NULL, "world"));
}
