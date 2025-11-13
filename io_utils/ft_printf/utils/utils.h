#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include <stdarg.h>
# include "../../../libft.h"

int		ft_putchar(char c, int fd);
int		ft_putstr(char *s, int fd);
int		ft_putnbr(int n, int fd, int bytes);
size_t	ft_strlen(const char *s);
int		ft_putunsign(int n, int fd);
int		ft_puthex(size_t x, int fd);
int		ft_puthexcase(unsigned int x, int fd, int size);
int		flags(const char **str, va_list ptr, int *x);
void	conv_time_bonus(const char **str, va_list ptr, int *x);
int		conversion_bonus(const char *str, va_list pt);
int		hash_flag(const char **s, unsigned int pt, int *x, int *is_pls);
int		plus_flag(const char **s, int pt, int *x, int *is_pls);
int		space_flag(const char **s, int pt, int *x, int *is_pls);

#endif
