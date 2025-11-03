#include "../libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	x;
	char	c;

	x = n;
	if (x < 0)
	{
		write(fd, "-", 1);
		x *= -1;
	}
	if (x / 10 > 0)
		ft_putnbr_fd(x / 10, fd);
	c = x % 10 + '0';
	write(fd, &c, 1);
}
