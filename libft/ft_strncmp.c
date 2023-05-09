/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 20:18:02 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/08 10:56:05 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	index;
	unsigned char	*a1;
	unsigned char	*a2;

	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	index = 0;
	if (n <= 0)
		return (0);
	while (a1[index] != '\0' && a2[index] != '\0' && index < n - 1)
	{
		if (a1[index] < a2[index])
			return (a1[index] - a2[index]);
		else if (a1[index] > a2[index])
			return (a1[index] - a2[index]);
		index++;
	}
	if (a1[index] < a2[index])
		return (a1[index] - a2[index]);
	if (a1[index] > a2[index])
		return (a1[index] - a2[index]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main ()
{

	printf("%d,",strncmp("test\377", "test\0", 6));
    printf("%d",ft_strncmp("\377", "\0", 6));
	return (0);
}*/
