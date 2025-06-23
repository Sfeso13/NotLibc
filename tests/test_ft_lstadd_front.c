#include "tests.h"

void test_ft_lstadd_front()
{
	t_list	*lst = NULL;
	t_list	*new = ft_lstnew("a");
	ft_lstadd_front(NULL, new);
	//printf("normal behaviour: attempting to print the content of the second node in the list : %s\n", lst);
}
