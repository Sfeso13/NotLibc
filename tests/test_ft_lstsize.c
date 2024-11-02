#include "tests.h"

void test_ft_lstsize()
{
	t_list	*hh ;
	char	*ch = "hello";

	hh = ft_lstnew(ch);
	ft_lstadd_back(&hh, ft_lstnew(ch));
	ft_lstadd_back(&hh, ft_lstnew(ch));
	ft_lstadd_back(&hh, ft_lstnew(ch));
	ft_lstadd_back(&hh, ft_lstnew(ch));
	printf("%d\n",ft_lstsize(NULL));
}

int main()
{
	test_ft_lstsize();
}
