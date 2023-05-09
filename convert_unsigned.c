/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:57:58 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/09 13:52:28 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

int	convert_unsigned(va_list *list)
{
	unsigned int	a;
	char			*first;
	int				i;

	i = 0;
	a = va_arg(*list, unsigned int);
	first = ft_itoa(a / 10);
	if (first == 0)
		return (1);
	while(first[i])
	{
		ft_putchar_fd(first[i], 1);
		i++;
	}
	ft_putchar_fd((a % 10) + 48, 1);
	free(first);
	return (0);
}
