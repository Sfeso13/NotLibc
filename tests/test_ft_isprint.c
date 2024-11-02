#include "../libft.h"
#include "tests.h"

void test_ft_isprint()
{
	assert(ft_isprint('A') == isprint('A'));  // Uppercase letter
    assert(ft_isprint('Z') == isprint('Z'));  // Uppercase letter
    assert(ft_isprint('~') == isprint('~'));  // Lowercase letter
    assert(ft_isprint('\t') == isprint('\t'));  // Lowercase letter
    assert(ft_isprint('\0') == isprint('\0'));  // Digit
    assert(ft_isprint('\177') == isprint('\177'));  // Special character
    assert(ft_isprint(' ') == isprint(' '));  // Space
    assert(ft_isprint('\n') == isprint('\n')); // Newline character
    assert(ft_isprint(-150) == isprint(-150));  
    printf("input : 255\n expected output : %d ---- output : %d\n", isprint(255), ft_isprint(255));
	assert(ft_isprint(40000) == isprint(40000));
	printf("All tests for ft_isprint passed!\n");
}
