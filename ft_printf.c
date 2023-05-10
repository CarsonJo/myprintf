/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:27:57 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/10 13:51:31 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
#include "libft/libft.h"

int	ft_printf(const char *all, ...)
{
	int		i;
	va_list	list;
	va_start(list, all);
	int		ret;

	i = 0;
	ret = 0;
	while (all[i])
	{
		if (all[i] == '%')
		{
			i++;
			if(handle_variable(all, &list, &i, &ret))
			{
				va_end(list);
				return (ret);
			}
		}
		else
		{
			ft_putchar_fd(all[i], 1);
			ret++;
			i++;
		}
	}
	va_end(list);
	return (ret);
}
