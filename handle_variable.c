/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_variable.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:45:05 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/09 16:19:20 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

int	handle_variable(const char *str, va_list *list, int *a)
{
	if (str[*a] == 'c')
		convert_char(list);
	else if(str[*a] == 's')
		convert_string(list);
	else if(str[*a] == 'p')
		convert_adress(list);
	else if(str[*a] == 'd' || str[*a] == 'i')
		convert_int(list);
	else if(str[*a] == 'u')
		convert_unsigned(list);
	else if(str[*a] == 'x')
		convert_hex_unsigned(list);
	else if(str[*a] == 'X')
		convert_maj_hex_unsigned(list);
	else if(str[*a] == '%')
		ft_putchar_fd('%', 1);
	(*a)++;
	return (0);
}
