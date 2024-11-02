#include "tests.h"

void test_ft_lstlast()
{
    t_list  *hh ;
    char    *ch;

    ch = ft_strdup("hello");
    hh = ft_lstnew(ch);
    ft_lstadd_back(&hh, ft_lstnew(ch));
    ft_lstadd_back(&hh, ft_lstnew(ch));
    ft_lstadd_back(&hh, ft_lstnew(ch));
    ft_lstadd_back(&hh, ft_lstnew(ch));
    megahh(hh);
}
