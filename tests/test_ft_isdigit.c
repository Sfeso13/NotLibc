#include "tests.h"

void test_ft_isdigit()
{
	assert(ft_isdigit('A') == isdigit('A'));  // Uppercase letter
    assert(ft_isdigit('5') == isdigit('5'));  // Uppercase letter
    assert(ft_isdigit(-205) == isdigit(-205));  // Lowercase letter
    assert(ft_isdigit('9') == isdigit('9'));  // Lowercase letter
    assert(ft_isdigit('0') == isdigit('0'));  // Digit
    assert(ft_isdigit(' ') == isdigit(' '));  // Special character
    assert(ft_isdigit('\0') == isdigit('\0'));  // Space
    assert(ft_isdigit('\n') == isdigit('\n')); // Newline character
    assert(ft_isdigit('\177') == isdigit('\177'));  
    assert(ft_isdigit('\200') == isdigit('\200'));
	printf("All tests for ft_isdigit passed!\n");
}

