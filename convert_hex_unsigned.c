/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_hex_unsigned.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:44:15 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/09 15:20:56 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

static void	tohex(unsigned int a)
{
	static char	hex[16] = "0123456789abcdef";

	if (a > 15)
		tohex(a / 16);
	ft_putchar_fd(hex[a % 16], 1);
}

void	convert_hex_unsigned(va_list *list)
{
	unsigned int	a;

	a = va_arg(*list, unsigned int);
	tohex(a);
}