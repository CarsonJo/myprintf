/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_variable.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:45:05 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/09 10:27:54 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

int	handle_variable(const char *str, va_list *list, int *a)
{
	if(inset(str[*a],"cspdiuxX%") == 'c')
		convert_char(list);
	else if(inset(str[*a],"cspdiuxX%") == 's')
		convert_string(list);
	else if(inset(str[*a],"cspdiuxX%") == 'p')
		convert_address(list);
	else if(inset(str[*a],"cspdiuxX%") == 'd' || inset(str[*a],"cspdiuxX%") == 'i')
		convert_int(list);
	else if(inset(str[*a],"cspdiuxX%") == 'u')
		convert_unsigned(list);
	else if(inset(str[*a],"cspdiuxX%") == 'x')
		convert_hex_unsigned(list);
	else if(inset(str[*a],"cspdiuxX%") == 'X')
		convert_maj_hex_unsigned(list);
	else if(inset(str[*a],"cspdiuxX%") == '%')
		ft_putchar_fd('%', 1);
}
