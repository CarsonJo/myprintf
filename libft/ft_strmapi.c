/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:17:46 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/08 15:18:52 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*res;
	unsigned int		size;

	size = 0;
	while (s[size])
		size++;
	res = malloc((size + 1) * sizeof(char));
	if (res == 0)
		return (0);
	size = 0;
	while (s[size])
	{
		res[size] = f(size, s[size]);
		size++;
	}
	res[size] = 0;
	return (res);
}
