#include "../libft.h"

int	ft_putnbr_fd(int n, int fd, int bytes)
{
	long	x;
	char	c;

	x = n;
	if (x < 0)
	{
		bytes += write(fd, "-", 1);
		x *= -1;
	}
	if (x / 10 > 0)
		bytes = ft_putnbr_fd(x / 10, fd, bytes);
	c = x % 10 + '0';
	bytes += write(fd, &c, 1);
  return bytes;
}
