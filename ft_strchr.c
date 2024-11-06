#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	p;

	p = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == p)
			break ;
		i++;
	}
	if (s[i] == p)
		return ((char *)(s + i));
	return (NULL);
}
