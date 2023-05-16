/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_variable.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:45:05 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/16 15:55:58 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	choice(const char *str, va_list *list, int a, int *ret)
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
		err = 1;
	return (err);
}

int	handle_variable(const char *str, va_list *list, int a, int *ret)
{
	int	err;

	err = choice(str, list, a, ret);
	if (err == -1)
		return (err);
	else if (str[a] && err == 1)
	{
		ft_putchar_fd('%', 1);
		ft_putchar_fd(str[a], 1);
		(*ret) += 2;
	}
	return (err);
}
