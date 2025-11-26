#include "../../libft.h"

int	ft_printf(const char *str, ...)
{
	int		x;
	va_list	ptr;

	if (write(1, 0, 0) == -1)
		return (-1);
	x = 0;
	va_start(ptr, str);
	while (*str)
	{
		if (*str == '%')
		{
			conv_time_bonus(&str, ptr, &x);
			str++;
		}
		if (*str && *str != '%')
		{
			x += ft_putchar_fd(*str, 1);
			str++;
		}
	}
	va_end(ptr);
	return (x);
}
