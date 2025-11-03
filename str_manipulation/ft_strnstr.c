#include "../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	l;

	l = ft_strlen(needle);
	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && len)
		{
			if (j == l - 1)
				return ((char *)(haystack + i));
			j++;
			len--;
		}
		len += j - 1;
		i++;
	}
	return (NULL);
}
