/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:27:57 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/08 18:59:00 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "printf.h"
#include "libft.h"

int	ft_printf(const char *all, ...)
{
	int		i;
	va_list	list;
	va_start(list, all);

	i = 0;
	while (all[i])
	{
		if (all[i] == '%')
		{
			i++;
			if(handle_variable(all, &list, &i))
				return (1);
		}
		else
		{
			ft_putchar_fd(all[i], 1);
			i++;
		}
	}
	return (0);
}
