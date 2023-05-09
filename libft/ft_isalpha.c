/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:15:06 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/04 17:02:18 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int a)
{
	if ((a <= 'Z' && a >= 'A') || (a >= 'a' && a <= 'z'))
		return (1024);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int main(int a, char **b)
{
	int i =0;
	while (i < 128)
	{
		printf("%d: %d\n",i,isprint(i));
		i++;
	}
    printf("%d",isprint(245));
}*/
