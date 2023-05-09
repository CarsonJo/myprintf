/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:31:33 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/08 15:17:59 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s)
{
	char	*r;
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (s[size] != 0)
		size++;
	r = malloc((size + 1) * sizeof(char));
	while (s[i])
	{
		r[i] = s[i];
		i++;
	}
	r[i] = 0;
	return (r);
}
