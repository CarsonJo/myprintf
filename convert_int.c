/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:33:12 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/15 10:09:29 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_int(va_list *list, int *ret)
{
	int		a;
	char	*b;

	a = va_arg(*list, int);
	b = ft_itoa(a);
	if (b == 0)
		return (1);
	a = 0;
	while (b[a])
	{
		ft_putchar_fd(b[a], 1);
		(*ret)++;
		a++;
	}
	free(b);
	return (0);
}
