#include "../libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	l;
	char	*ptr;
	size_t	i;

	l = ft_strlen(s1);
	ptr = ft_calloc(l + 1, sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
