/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:22:05 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/10 14:57:52 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	convert_char(va_list *list, int *ret)
{
	int	a;

	a = (char)va_arg(*list, int);
	ft_putchar_fd(a, 1);
	(*ret)++;
}
