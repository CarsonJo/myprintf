/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:54:13 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/05 16:31:24 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cpy;
	t_list	*next;

	cpy = *lst;
	while (cpy)
	{
		next = cpy->next;
		ft_lstdelone(cpy, *del);
		cpy = next;
	}
	*lst = 0;
}
