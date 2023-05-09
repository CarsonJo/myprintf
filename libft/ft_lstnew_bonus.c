/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:26:37 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/08 15:16:20 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nod;

	nod = malloc(sizeof(t_list));
	if (nod == 0)
		return (0);
	nod->content = content;
	nod->next = 0;
	return (nod);
}
