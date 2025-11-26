#include "../../../libft.h"

int	plus_flag(const char **s, int pt, int *x, int *is_pls)
{
	int	p;

	p = 0;
	while (**s == '+')
	{
		(*s)++;
		if (**s == ' ')
			p = space_flag(s, pt, x, is_pls);
		if (**s == '#')
			p = hash_flag(s, (unsigned int)pt, x, is_pls);
	}
	if ((**s == 'd' || **s == 'i') && pt >= 0 && p == 0 && *is_pls)
	{
		*x += ft_putchar_fd('+', 1);
		*x += ft_putnbr_fd(pt, 1, 0);
		return (1);
	}
	else if ((**s == 'd' || **s == 'i') && pt < 0 && p == 0 && *is_pls)
	{
		*x += ft_putnbr_fd(pt, 1, 0);
		return (1);
	}
	return (p);
}

int	space_flag(const char **s, int pt, int *x, int *is_pls)
{
	int	p;

	p = 0;
	while (**s == ' ')
	{
		(*s)++;
		if (**s == '+')
		{
			*is_pls = 1;
			p = plus_flag(s, pt, x, is_pls);
		}
		if (**s == '#')
			p = hash_flag(s, (unsigned int)pt, x, is_pls);
	}
	if ((**s == 'd' || **s == 'i') && pt >= 0 && p == 0 && !(*is_pls))
	{
		*x += ft_putchar_fd(' ', 1);
		*x += ft_putnbr_fd(pt, 1, 0);
		return (1);
	}
	if ((**s == 'd' || **s == 'i') && pt < 0 && p == 0 && !(*is_pls))
		return (*x += ft_putnbr_fd(pt, 1, 0), 1);
	return (p);
}

int	hash_flag(const char **s, unsigned int pt, int *x, int *is_pls)
{
	int	p;

	p = 0;
	while (**s == '#')
	{
		(*s)++;
		if (**s == '+')
		{
			*is_pls = 1;
			p = plus_flag(s, (int)pt, x, is_pls);
		}
		if (**s == ' ')
			p = space_flag(s, (int)pt, x, is_pls);
	}
	if (**s == 'x' && pt != 0)
		return (*x += ft_putstr_fd("0x", 1), *x += ft_puthexcase(pt, 1, 0), 1);
	else if (**s == 'X' && pt != 0)
	{
		*x += ft_putstr_fd("0X", 1);
		*x += ft_puthexcase(pt, 1, 1);
		return (1);
	}
	else if (**s == 'x' || **s == 'X')
		return (*x += ft_puthexcase(pt, 1, 1), 1);
	return (p);
}

int	flags(const char **str, va_list ptr, int *x)
{
	int	p;
	int	is_pls;

	p = va_arg(ptr, int);
	if (**str == '+')
	{
		is_pls = 1;
		return (plus_flag(str, p, x, &is_pls));
	}
	else if (**str == '#')
	{
		is_pls = 0;
		return (hash_flag(str, (unsigned int)p, x, &is_pls));
	}
	else if (**str == ' ')
	{
		is_pls = 0;
		return (space_flag(str, p, x, &is_pls));
	}
	return (0);
}
