/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 14:30:16 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/08 12:05:05 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *s1, const char *s2, unsigned int len)
{
	unsigned int	i;
	int				j;

	j = 0;
	i = 0;
	if (s2[i] == 0)
		return ((char *)s1);
	while (i < len && s1[i] != 0)
	{
		while (i + j < len && s1[i + j] != 0 && s1[i + j] == s2[j])
		{
			j++;
			if (s2[j] == 0)
				return ((char *)s1 + i);
		}
		j = 0;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main ()
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";

	printf("%s", ft_strnstr(haystack,"cd",8))
}
*/
