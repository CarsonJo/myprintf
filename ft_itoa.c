/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 08:56:15 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/08 15:15:54 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	initialise(int *size, long int *nb, long int n, int *i)
{
	*i = 1;
	*nb = n;
	*size = 0;
	if (n == 0)
		(*size)++;
	if (*nb < 0)
	{
		*nb *= -1;
		n *= -1;
		(*size)++;
	}
	while (n > 0)
	{
		n /= 10;
		(*size)++;
	}
}

char	*ft_itoa(int n)
{
	char		*res;
	int			size;
	long int	nb;
	int			i;

	initialise(&size, &nb, n, &i);
	res = malloc((size + 1) * sizeof(char));
	if (res == 0)
		return (0);
	while ((i <= size))
	{
		if (i == size && n < 0)
		{
			res[size - i] = '-';
			break ;
		}
		res[size - i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	res[size] = 0;
	return (res);
}
