/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:27:57 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/16 15:54:54 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print(const char *all, int i, int *ret)
{
	ft_putchar_fd(all[i], 1);
	(*ret)++;
}

int	ft_printf(const char *all, ...)
{
	int		i;
	va_list	list;
	int		ret;

	if (all == 0)
		return (-1);
	va_start(list, all);
	i = 0;
	ret = 0;
	while (all[i])
	{
		if (all[i] == '%')
		{
			if (handle_variable(all, &list, ++i, &ret) == -1)
				return (-1);
			if (!(all[i]))
				break ;
		}
		else
			print(all, i, &ret);
		i++;
	}
	va_end(list);
	return (ret);
}
