#include "tests.h"

void test_ft_strlen()
{
	assert(ft_strlen("aloaloaloalo") == strlen("aloaloaloalo"));
    assert(ft_strlen("\'\0\'") == strlen("\'\0\'"));
    assert(ft_strlen("") == strlen(""));
    assert(ft_strlen(" ") == strlen(" "));
    assert(ft_strlen("\'\177\'") == strlen("\'\177\'"));
	printf("All tests for ft_strlen passed!\n");
}
