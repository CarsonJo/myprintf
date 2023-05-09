/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_adress.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:13:52 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/09 12:32:15 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"
#include "../libft.h"

void	print_adress(void *a)
{
	return ;
}
void	convert_adress(va_list *list)
{
	void	*a;

	a = va_arg(*list, void *);
	print_adress(a);
}
