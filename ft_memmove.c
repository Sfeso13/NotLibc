#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p;
	unsigned char	*ptr;	

	if (src < dst)
	{
		p = (unsigned char *)dst;
		ptr = (unsigned char *)src;
		while (len)
		{
			p[len - 1] = ptr[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
