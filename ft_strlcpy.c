/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhossni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:27:06 by yhossni           #+#    #+#             */
/*   Updated: 2024/11/01 19:43:43 by yhossni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	l;
	size_t	i;

	i = 0;
	if (src == dst)
		return (0);
	l = ft_strlen(src);
	if (dstsize == 0)
		return (l);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	*(dst + i) = '\0';
	return (l);
}
