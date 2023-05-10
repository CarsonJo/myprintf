/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:29:17 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/10 11:09:07 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	convert_string(va_list *list, int *ret)
{
	char	*a;

	a = va_arg(*list , char *);
	while (*a)
	{
		ft_putchar_fd(*a, 1);
		(*ret)++;
		a++;
	}
}
