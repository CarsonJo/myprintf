/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:33:12 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/09 11:01:46 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"
#include "../libft.h"

int	convert_int(va_list *list)
{
	int		a;
	char	*b;

	a = va_arg(*list, int);
	b = ft_itoa(a);
	if (b == 0)
		return (1);
	a = 0;
	while (b[a])
	{
		ft_putchar_fd(b[a], 1);
		a++;
	}
	free(b);
	return (0);
}
