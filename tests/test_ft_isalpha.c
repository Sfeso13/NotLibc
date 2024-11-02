#include "../libft.h"
#include "tests.h"

void test_ft_isalpha()
{
	assert(ft_isalpha('A') == isalpha('A'));  // Uppercase letter
    assert(ft_isalpha('Z') == isalpha('Z'));  // Uppercase letter
    assert(ft_isalpha('a') == isalpha('a'));  // Lowercase letter
    assert(ft_isalpha('z') == isalpha('z'));  // Lowercase letter
    assert(ft_isalpha('0') == isalpha('0'));  // Digit
    assert(ft_isalpha('@') == isalpha('@'));  // Special character
    assert(ft_isalpha(' ') == isalpha(' '));  // Space
    assert(ft_isalpha('\n') == isalpha('\n')); // Newline character
	assert(ft_isalpha(-150) == isalpha(-150));  
    assert(ft_isalpha(256) == isalpha(256));
	assert(ft_isalpha(346) == isalpha(346));  
	printf("All tests for ft_isalpha passed!\n");
}
