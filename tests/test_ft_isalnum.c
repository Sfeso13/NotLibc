#include "../libft.h"
#include "tests.h"

void test_ft_isalnum()
{
	assert(ft_isalnum('A') == isalnum('A'));  // Uppercase letter
    assert(ft_isalnum('9') == isalnum('9'));  // Uppercase letter
    assert(ft_isalnum('_') == isalnum('_'));  // Lowercase letter
    assert(ft_isalnum(-158) == isalnum(-158));  // Lowercase letter
    assert(ft_isalnum('0') == isalnum('0'));  // Digit
    assert(ft_isalnum('@') == isalnum('@'));  // Special character
    assert(ft_isalnum(' ') == isalnum(' '));  // Space
    assert(ft_isalnum('\n') == isalnum('\n')); // Newline character
    assert(ft_isalnum('\0') == isalnum('\0'));  
    assert(ft_isalnum(256) == isalnum(256));
	printf("All tests for ft_isalnum passed!\n");
}
