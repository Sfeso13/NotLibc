#include "tests.h"

void test_ft_toupper()
{
	assert(ft_toupper('A') == toupper('A'));  // Uppercase letter
    assert(ft_toupper(',') == toupper(','));  // Uppercase letter
    assert(ft_toupper('a') == toupper('a'));  // Lowercase letter
    assert(ft_toupper('z') == toupper('z'));  // Lowercase letter
    assert(ft_toupper('0') == toupper('0'));  // Digit
    assert(ft_toupper('@') == toupper('@'));  // Special character
    assert(ft_toupper(' ') == toupper(' '));  // Space
    assert(ft_toupper('\n') == toupper('\n')); // Newline character
    assert(ft_toupper(-1) == toupper(-1));  
    assert(ft_toupper(256) == toupper(256));
	printf("All tests for ft_toupper passed!\n");
}
