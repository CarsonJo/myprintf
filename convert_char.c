/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:22:05 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/09 13:52:50 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

void	convert_char(va_list *list)
{
	int	a;

	a = (char)va_arg(*list, int);
	ft_putchar_fd(a, 1);
}
