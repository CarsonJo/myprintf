/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:18:22 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/08 10:21:49 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *s, int a)
{
	char	*r;
	int		i;
	char	c;

	c = (char) a;
	i = 0;
	r = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			r = s + i;
		}
		i++;
	}
	if (s[i] == c)
		return (s + i);
	return (r);
}
