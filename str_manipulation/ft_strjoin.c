#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	slen1;
	size_t	slen2;
	char	*new;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	slen1 = ft_strlen(s1);
	slen2 = ft_strlen(s2);
	new = (char *)malloc((slen1 + slen2 + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	ft_strlcpy(new, s1, slen1 + 1);
	ft_strlcpy(new + slen1, s2, slen2 + 1);
	return (new);
}
