/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:44:05 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/08 15:21:41 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	l;

	l = ft_strlen(s);
	i = 0;
	if (l < len)
		len = l;
	sub = malloc ((len + 1) * sizeof(char));
	if (sub == 0)
		return (0);
	if (start > l)
	{
		sub[0] = '\0';
		return (sub);
	}
	while (s[start + i] != 0 && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = 0;
	return (sub);
}
