#include "../../../libft.h"

int	ft_puthex(size_t x, int fd)
{
	char		c;
	static int	i;
	char		*s;

	s = "0123456789abcdef";
	i = 0;
	if (x / 16 > 0)
		ft_puthex(x / 16, fd);
	i++;
	c = s[x % 16];
	write(fd, &c, 1);
	return (i);
}
