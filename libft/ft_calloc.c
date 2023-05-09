/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:12:19 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/08 11:10:23 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nb, size_t size)
{
	unsigned int	i;
	char			*arr;

	i = 0;
	if (nb == 0 || size == 0)
		return (0);
	arr = malloc(nb * size);
	if (arr == 0)
		return (0);
	while (i < nb * size)
	{
		arr[i] = 0;
		i++;
	}
	return ((void *)arr);
}
/*
#include <stdio.h>
int main ()
{
	char *a;

	a = ft_calloc(30,1);
	int i = 0;
	while (i<30)
	{
		printf("%c", a[i]);
		i++;
	}
}*/
