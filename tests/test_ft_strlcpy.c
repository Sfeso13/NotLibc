#include "../libft.h"
#include "tests.h"

void test_ft_strlcpy()
{
	char dst[10];
    char dst1[10];
    char src[] = "hello, worlds!";
	printf("testing src len > dstsize\n");
	ft_strlcpy(dst, src, sizeof(dst));
	printf("ft : %s\n", dst);
	strlcpy(dst1, src, sizeof(dst1));
	printf("og : %s\n", dst1);
	assert(memcmp(dst1, dst, sizeof(dst)) == 0);

	char str1[20];
	char str[20];
	printf("testing dstsize > lensrc\n");
	ft_strlcpy(str, "alo", 10);
	printf("ft : %s\n", dst);
	strlcpy(str1, "alo", 10);
	printf("og : %s\n", dst1);
	assert(memcmp(dst1, dst, 5) == 0);
		
	printf("All tests for ft_strlcpy passed!\n");
}

int main()
{
	test_ft_strlcpy();
}
