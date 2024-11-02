/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhossni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:37:50 by yhossni           #+#    #+#             */
/*   Updated: 2024/11/01 17:18:05 by yhossni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *m, int c, size_t len)
{
	unsigned char	*filler;
	unsigned char	x;

	filler = (unsigned char *)m;
	x = (unsigned char)c;
	while (len)
	{
		*filler = x;
		filler++;
		len--;
	}
	return (m);
}
