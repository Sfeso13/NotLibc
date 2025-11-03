#include "../libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	l;
	char	*ptr;

	l = ft_strlen(s1);
	ptr = ft_calloc(l + 1, sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1, l + 1);
	return (ptr);
}
