#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*sorc;
	int				i;

	if (!src && !dst)
		return (NULL);
	dest = (unsigned char *)dst;
	sorc = (unsigned char *)src;
	i = 0;
	while (n)
	{
		dest[i] = sorc[i];
		n--;
		i++;
	}
	return (dst);
}
