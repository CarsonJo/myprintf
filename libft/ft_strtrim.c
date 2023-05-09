/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:12:44 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/08 15:14:11 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	inset(char a, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != 0)
	{
		if (a == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		size;
	int		i;
	int		start;

	i = 0;
	size = 0;
	while (s1[size])
		size++;
	while (inset(s1[i], set))
		i++;
	while (size > i && inset(s1[size - 1], set))
		size--;
	start = i;
	str = malloc((size - i + 1) * sizeof(char));
	if (str == 0)
		return (0);
	while (i < size)
	{
		str[i - start] = s1[i];
		i++;
	}
	str[i - start] = 0;
	return (str);
}
