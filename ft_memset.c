#include "libft.h"

void	*ft_memset(void *m, int c, size_t len)
{
	unsigned char	*filler;
	unsigned char	x;

	filler = (unsigned char *)m;
	x = (unsigned char)c;
	while (len)
	{
		*filler = x;
		filler++;
		len--;
	}
	return (m);
}
