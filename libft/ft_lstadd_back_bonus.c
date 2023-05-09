/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:46:22 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/08 15:31:20 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *ne)
{
	t_list	*cpy;

	cpy = *lst;
	if (cpy == 0)
		*lst = ne;
	else
	{
		while (cpy->next)
			cpy = cpy->next;
		cpy->next = ne;
	}
}
