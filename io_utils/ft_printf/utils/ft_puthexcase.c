#include "../../../libft.h"

int	ft_puthexcase(unsigned int x, int fd, int size)
{
	char		c;
	static int	i;
	char		*s;

	if (size == 0)
		s = "0123456789abcdef";
	else
		s = "0123456789ABCDEF";
	i = 0;
	if (x / 16 > 0)
		ft_puthexcase(x / 16, fd, size);
	i++;
	c = s[x % 16];
	write(fd, &c, 1);
	return (i);
}
