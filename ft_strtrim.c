/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhossni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:25:38 by yhossni           #+#    #+#             */
/*   Updated: 2024/11/01 19:58:44 by yhossni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*alluc(size_t slen, char *start, char *end)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)malloc(slen + 1);
	if (p == NULL)
		return (NULL);
	while (start <= end)
	{
		p[i] = *start;
		start++;
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	slen;
	char	*start;
	char	*end;
	char	*p;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((char *)s1);
	slen = ft_strlen(s1);
	end = (char *)(s1 + slen -1);
	start = (char *)s1;
	while (in_set(*start, set))
	{
		slen--;
		start++;
	}
	while (in_set(*end, set) && slen)
	{
		slen--;
		end--;
	}
	p = alluc(slen, start, end);
	return (p);
}
