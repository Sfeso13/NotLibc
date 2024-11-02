#include "tests.h"

void test_ft_lstnew()
{
	t_list	*node = ft_lstnew("hello");
	if (node)
		printf("success\n %s\n", node->content);
	else
		printf("failed\n");
}
int main()
{
	test_ft_lstnew();
}
