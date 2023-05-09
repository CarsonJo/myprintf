/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:54:25 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/08 15:18:34 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size1;
	int		size2;
	char	*str;
	int		i;

	i = 0;
	size1 = 0;
	size2 = 0;
	while (s1[size1] != 0)
		size1++;
	while (s2[size2] != 0)
		size2++;
	str = malloc((size1 + size2 + 1) * sizeof(char));
	if (str == 0)
		return (0);
	while (i < size1 + size2)
	{
		if (i < size1)
			str[i] = s1[i];
		else
			str[i] = s2[i - size1];
		i++;
	}
	str[i] = 0;
	return (str);
}
