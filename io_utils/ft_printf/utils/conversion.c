#include "../../../libft.h"

int	conversion_bonus(const char *str, va_list pt)
{
	if (*str == 'c')
		return (ft_putchar_fd(va_arg(pt, int), 1));
	if (*str == 's')
		return (ft_putstr_fd(va_arg(pt, char *), 1));
	if (*str == 'i' || *str == 'd')
		return (ft_putnbr_fd(va_arg(pt, int), 1, 0));
	if (*str == 'u')
		return (ft_putunsign(va_arg(pt, int), 1));
	if (*str == '%')
		return (ft_putchar_fd(*str, 1));
	if (*str == 'p')
	{
		ft_putstr_fd("0x", 1);
		return (2 + ft_puthex((size_t)va_arg(pt, void *), 1));
	}
	if (*str == 'x')
		return (ft_puthexcase(va_arg(pt, unsigned int), 1, 0));
	if (*str == 'X')
		return (ft_puthexcase(va_arg(pt, unsigned int), 1, 1));
	return (-2);
}

void	conv_time_bonus(const char **str, va_list ptr, int *x)
{
	int		p;
	va_list	pt2;

	va_copy(pt2, ptr);
	p = 0;
	(*str)++;
	if (**str == '+' || **str == ' ' || **str == '#')
		p = flags(str, pt2, x);
	if (p == 0)
	{
		p = conversion_bonus(*str, ptr);
		if (p == -2)
			*x += ft_putchar_fd(**str, 1);
		else
			*x += p;
	}
	else
		va_copy(ptr, pt2);
	va_end(pt2);
}
