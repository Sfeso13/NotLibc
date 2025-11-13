#include "utils.h"

int	ft_putunsign(int n, int fd)
{
	unsigned int	x;
	char			c;
	static int		i;

	i = 0;
	x = (unsigned int)n;
	if (x / 10 > 0)
		ft_putunsign(x / 10, fd);
	i++;
	c = x % 10 + '0';
	write(fd, &c, 1);
	return (i);
}
