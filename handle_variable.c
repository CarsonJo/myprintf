/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_variable.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:45:05 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/15 17:04:10 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_variable(const char *str, va_list *list, int a, int *ret)
{
	int	err;

	err = 0;
	if (str[a] == 'c')
		convert_char(list, ret);
	else if (str[a] == 's')
		convert_string(list, ret);
	else if (str[a] == 'p')
		convert_adress(list, ret);
	else if (str[a] == 'd' || str[a] == 'i')
		err = convert_int(list, ret);
	else if (str[a] == 'u')
		err = convert_unsigned(list, ret);
	else if (str[a] == 'x')
		convert_hex_unsigned(list, ret);
	else if (str[a] == 'X')
		convert_maj_hex_unsigned(list, ret);
	else if (str[a] == '%')
	{
		ft_putchar_fd('%', 1);
		(*ret)++;
	}
	else
	{
		ft_putchar_fd('%', 1);
		ft_putchar_fd(str[a], 1);
		(*ret) += 2;
	}
	return (err);
}
