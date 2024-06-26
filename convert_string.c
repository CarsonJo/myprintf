/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:29:17 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/15 15:56:45 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	convert_string(va_list *list, int *ret)
{
	char	*a;

	a = va_arg(*list, char *);
	if (a == 0)
	{
		write(1, "(null)", 6);
		(*ret) += 6;
		return ;
	}
	while (*a)
	{
		ft_putchar_fd(*a, 1);
		(*ret)++;
		a++;
	}
}
