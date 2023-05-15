/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_hex_unsigned.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:44:15 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/15 10:09:24 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	tohex(unsigned int a, int *ret)
{
	static char	hex[16] = "0123456789abcdef";

	if (a > 15)
		tohex(a / 16, ret);
	ft_putchar_fd(hex[a % 16], 1);
	(*ret)++;
}

void	convert_hex_unsigned(va_list *list, int *ret)
{
	unsigned int	a;

	a = va_arg(*list, unsigned int);
	tohex(a, ret);
}
