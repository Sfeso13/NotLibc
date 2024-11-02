#include "../libft.h"
#include "tests.h"

void test_ft_isascii()
{
	assert(ft_isascii('A') == isascii('A'));  // Uppercase letter
    assert(ft_isascii('\177') == isascii('\177'));  // Uppercase letter
    assert(ft_isascii('a') == isascii('a'));  // Lowercase letter
    assert(ft_isascii('\200') == isascii('\200'));  // Lowercase letter
    assert(ft_isascii('0') == isascii('0'));  // Digit
    assert(ft_isascii('\255') == isascii('\255'));  // Special character
    assert(ft_isascii(' ') == isascii(' '));  // Space
    assert(ft_isascii('\n') == isascii('\n')); // Newline character
    assert(ft_isascii(-1) == isascii(-1));  
    assert(ft_isascii(256) == isascii(256));
	printf("All tests for ft_isascii passed!\n");
}
