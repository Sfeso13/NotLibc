#include "../libft.h"
#include "tests.h"

void test_ft_strlcat()
{
	char dst[] = "test";
    char dst1[] = "test";
	size_t og_dlen, ft_dlen;
	printf("testing no space in dst buffer \n");
	ft_dlen = ft_strlcat(dst, "0000000000", sizeof(dst));
	og_dlen = strlcat(dst1, "0000000000", sizeof(dst1));
	assert(memcmp(dst1, dst, sizeof(dst)) == 0 && ft_dlen == og_dlen);
	printf("expected output:\n size: %zu ----- string : %s\noutput :\n size : %zu ------ string : %s\n", og_dlen, dst1, ft_dlen, dst);

	char dest2[] = "test";
    char dest12[] = "test";
	printf("testing dstsize 0 \n");
	ft_dlen = ft_strlcat(dest2, "0000000000", 0);
	og_dlen = strlcat(dest12, "0000000000", 0);
	assert(memcmp(dest2, dest12, sizeof(dest2)) == 0 && ft_dlen == og_dlen);
	printf("expected output:\n size: %zu ----- string : %s\noutput :\n size : %zu ------ string : %s\n", og_dlen, dest12, ft_dlen, dest2);

	char dest10[] = "1337 42";
    char dest11[] = "1337 42";
	printf("testing dstsize 0 \n");
	ft_dlen = ft_strlcat(dest10, "Born to code", 7);
	og_dlen = strlcat(dest11, "Born to code", 7);
	assert(memcmp(dest11, dest10, sizeof(dest10)) == 0 && ft_dlen == og_dlen);
	printf("expected output:\n size: %zu ----- string : %s\noutput :\n size : %zu ------ string : %s\n", og_dlen, dest11, ft_dlen, dest10);

	
	printf("All tests for ft_strlcat passed!\n");
}
