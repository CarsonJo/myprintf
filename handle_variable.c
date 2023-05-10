/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_variable.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:45:05 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/10 15:00:47 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static int	inset(char c, char *set)
{
	int	i;

	i = 0;
	while(set[i])
	{
		if (c == set[i] )
			return (1);
		i++;
	}
}
/*rule for array ret :
value 0 = false , 1 = true .
index 0 = '-', 1 = '0', 2 = '.', 5 = (int)minimal_length
*/
static int	*check_opt(const char *str, va_list *list, int *a, int *ret)
{
	int	min;

	min = 0;
	while (inset(str[*a], "-0."))
	{
		if(str[*a] == '-')
			ret[0] = 1;
		else if(str[*a] == '0')
			ret[1] = 1;
		else if(str[*a] == '.')
			ret[2] = 1;
		else if(str[*a] >= '1' && str[*a] <= '9')
			ret[5] += str[*a] - '0';
	}
	return (ret);
}

int			handle_variable(const char *str, va_list *list, int *a, int *ret)
{
	int	err;

	err = 0;
	if (str[*a] == 'c')
		convert_char(list, ret);
	else if(str[*a] == 's')
		convert_string(list, ret);
	else if(str[*a] == 'p')
		convert_adress(list, ret);
	else if(str[*a] == 'd' || str[*a] == 'i')
		err = convert_int(list, ret);
	else if(str[*a] == 'u')
		err = convert_unsigned(list, ret);
	else if(str[*a] == 'x')
		convert_hex_unsigned(list, ret);
	else if(str[*a] == 'X')
		convert_maj_hex_unsigned(list, ret);
	else if(str[*a] == '%')
	{
		ft_putchar_fd('%', 1);
		(*ret)++;
	}
	(*a)++;
	return (err);
}
