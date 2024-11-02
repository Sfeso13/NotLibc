/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhossni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:39:37 by yhossni           #+#    #+#             */
/*   Updated: 2024/11/01 23:30:22 by yhossni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	tofind;
	unsigned char	*string;
	size_t			i;

	i = 0;
	tofind = (unsigned char)c;
	string = (unsigned char *)s;
	while (i < n)
	{
		if (string[i] == tofind)
			break ;
		i++;
	}
	if (i != n && string[i] == tofind)
		return (&string[i]);
	return (NULL);
}
