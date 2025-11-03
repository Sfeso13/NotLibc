#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	l;

	if (s == NULL)
		return (NULL);
	l = ft_strlen(s);
	if (l < start)
		return (ft_strdup(""));
	i = 0;
	if (len >= (l - start))
		len = l - start;
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	while (s[start] && len--)
	{
		p[i] = s[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}
