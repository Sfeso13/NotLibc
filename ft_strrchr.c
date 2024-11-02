/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhossni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:44:09 by yhossni           #+#    #+#             */
/*   Updated: 2024/11/01 22:52:42 by yhossni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*oc;
	char	p;

	p = (char)c;
	oc = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == p)
			oc = (char *)(s + i);
		i++;
	}
	if (s[i] == p)
		oc = (char *)(s + i);
	return ((char *)oc);
}
