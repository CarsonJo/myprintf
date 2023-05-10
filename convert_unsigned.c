/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:57:58 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/10 11:51:37 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	convert_unsigned(va_list *list, int *ret)
{
	unsigned int	a;
	char			*first;
	int				i;

	i = 0;
	a = va_arg(*list, unsigned int);
	if (a > 9)
	{
		first = ft_itoa(a / 10);
		if (first == 0)
			return (1);
		while(first[i])
		{
			ft_putchar_fd(first[i], 1);
			(*ret)++;
			i++;
		}
		free(first);
	}
	ft_putchar_fd((a % 10) + 48, 1);
	(*ret)++;
	return (0);
}
