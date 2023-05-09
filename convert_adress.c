/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_adress.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:13:52 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/09 16:19:46 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

void	print_adress(long int a)
{
	static char	hex[16] = "0123456789abcdef";
	static int i = 0;

	if (a > 15)
	{
		print_adress(a / 16);
		i++;
	}
	ft_putchar_fd(hex[a % 16], 1);
}
void	convert_adress(va_list *list)
{
	long int	a;

	a = va_arg(*list, long int);
	ft_putchar_fd('0',1);
	ft_putchar_fd('x',1);
	print_adress(a);
}
