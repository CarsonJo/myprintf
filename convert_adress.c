/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_adress.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:13:52 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/16 12:02:03 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_adress(unsigned long int a, int *ret)
{
	static char	hex[16] = "0123456789abcdef";
	static int	i = 0;

	if (a > 15)
	{
		print_adress(a / 16, ret);
		i++;
	}
	ft_putchar_fd(hex[a % 16], 1);
	(*ret)++;
}

void	convert_adress(va_list *list, int *ret)
{
	long int	a;

	a = va_arg(*list, unsigned long int);
	if (a == 0)
	{
		write(1, "(nil)", 5);
		*ret += 5;
		return ;
	}
	ft_putchar_fd('0', 1);
	ft_putchar_fd('x', 1);
	*ret += 2 ;
	print_adress(a, ret);
}
