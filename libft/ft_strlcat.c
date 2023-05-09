/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:19:28 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/08 10:54:31 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = 0;
	while (len < size && dest[len])
		len++;
	while (src[i] && len + i + 1 < size + 1 - 1)
	{
		if (len + i < size - 1)
			dest[len + i] = src[i];
		i++;
	}
	if (len < size)
		dest[len + i] = 0 ;
	while (src[i])
		i++;
	if (len > size)
		return (size + i);
	return (len + i);
}
/*
#include <bsd/stdio.h>
#include <bsd/string.h>

int main()
{
	char e[15] = "rrrrrrrrrrrrrrr";
	char a[15] = "rrrrrrrrrrrrrrr";

	unsigned int d = ft_strlcat(a, "lorem ipsum dolor sit amet", 5);
	printf("strlcat :%lu %s\n ft_strlcat : %d %s\n",
	strlcat(e,"lorem ipsum dolor sit amet", 5),a,d,e);
}
*/
