#include "tests.h"

void test_ft_tolower()
{
	assert(ft_tolower('A') == tolower('A'));  // Uppercase letter
    assert(ft_tolower(',') == tolower(','));  // Uppercase letter
    assert(ft_tolower('a') == tolower('a'));  // Lowercase letter
    assert(ft_tolower('Z') == tolower('Z'));  // Lowercase letter
    assert(ft_tolower('0') == tolower('0'));  // Digit
    assert(ft_tolower('@') == tolower('@'));  // Special character
    assert(ft_tolower(' ') == tolower(' '));  // Space
    assert(ft_tolower('\n') == tolower('\n')); // Newline character
    assert(ft_tolower(-1) == tolower(-1));  
    assert(ft_tolower(256) == tolower(256));
	printf("All tests for ft_tolower passed!\n");
}
