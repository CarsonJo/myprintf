/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:27:57 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/15 11:11:29 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *all, ...)
{
	int		i;
	va_list	list;
	int		ret;

	va_start(list, all);
	i = 0;
	ret = 0;
	while (all[i])
	{
		if (all[i] == '%')
		{
			if (handle_variable(all, &list, ++i, &ret))
				break ;
		}
		else
		{
			ft_putchar_fd(all[i], 1);
			ret++;
		}
		i++;
	}
	va_end(list);
	return (ret);
}
