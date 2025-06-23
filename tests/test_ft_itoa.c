#include "tests.h"

void test_ft_itoa()
{
	printf("attempting to convert 1337 : %s\n", ft_itoa(1337));
	printf("attempting to convert -1337 : %s\n", ft_itoa(-1337));
	printf("attempting to convert 0 : %s\n", ft_itoa(0));
	printf("attempting to convert -2147483648 : %s\n", ft_itoa(-2147483648));
	printf("attempting to convert 2147483647: %s\n", ft_itoa(2147483647));
	printf("attempting to convert -2147483649: %s\n", ft_itoa(-2147483649));
}
