/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhossni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:23:10 by yhossni           #+#    #+#             */
/*   Updated: 2024/11/02 19:08:45 by yhossni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nl;
	t_list	*tmp;

	if (lst && del)
	{
		nl = ft_lstnew(f(lst->content));
		if (nl == NULL)
			return (NULL);
		lst = lst->next;
		while (lst)
		{
			tmp = ft_lstnew(f(lst->content));
			if (!tmp)
			{
				ft_lstclear(&tmp, del);
				return (NULL);
			}
			ft_lstadd_back(&nl, tmp);
			lst = lst->next;
		}
		return (nl);
	}
	return (NULL);
}
