/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:29:17 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/09 15:14:12 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

void	convert_string(va_list *list)
{
	char	*a;

	a = va_arg(*list , char *);
	while (*a)
	{
		ft_putchar_fd(*a, 1);
		a++;
	}
}
