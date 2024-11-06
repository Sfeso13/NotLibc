#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	slen1;
	size_t	slen2;
	char	*new;
	size_t	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	slen1 = ft_strlen(s1);
	slen2 = ft_strlen(s2);
	new = (char *)malloc(slen1 + slen2 + 1);
	if (new == NULL)
		return (NULL);
	while (*s1)
	{
		new[i++] = *s1;
		s1++;
	}
	while (*s2)
	{
		new[i++] = *s2;
		s2++;
	}
	new[i] = '\0';
	return (new);
}
