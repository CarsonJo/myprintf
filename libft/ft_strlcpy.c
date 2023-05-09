/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 07:48:26 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/08 10:54:37 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	index;

	index = 0;
	if (src[index] == '\0')
	{
		dest[index] = '\0';
		return (index);
	}
	while (src[index] != '\0')
	{
		if (index < size)
			dest[index] = src[index];
		index++;
	}
	if (index >= size && size != 0)
		dest[size - 1] = 0;
	else if (index < size)
		dest[index] = 0;
	return (index);
}
/*
#include <bsd/string.h>
#include <stdio.h>
int main ()
{
	char phrase[15] = {0};
	char a[15] = {0};
	char phrase_deux[] = "";
	printf("%u,%s\n",ft_strlcpy(a,phrase_deux,sizeof(phrase)),a);
	printf("%lu,%s",strlcpy(phrase,phrase_deux,sizeof(phrase)),phrase);
	return (0);
}*/
