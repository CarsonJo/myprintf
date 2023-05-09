/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:16:11 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/05 16:59:38 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*begin;
	t_list	*prev;

	begin = ft_lstnew(f(lst->content));
	prev = begin;
	lst = lst->next;
	while (lst)
	{
		prev->next = ft_lstnew(f(lst->content));
		if (prev->next->content)
			prev = prev->next;
		else
			ft_lstdelone(prev->next, *del);
		lst = lst->next;
	}
	return (begin);
}
