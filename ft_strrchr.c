#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*oc;
	char	p;

	p = (char)c;
	oc = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == p)
			oc = (char *)(s + i);
		i++;
	}
	if (s[i] == p)
		oc = (char *)(s + i);
	return ((char *)oc);
}
