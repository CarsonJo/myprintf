/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:25:43 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/08 15:17:10 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(void *s, int c, unsigned int n)
{
	unsigned char	*sol;
	unsigned int	i;
	unsigned char	find;

	find = (unsigned char)c;
	i = 0;
	sol = (unsigned char *)s;
	while (i < n)
	{
		if (sol[i] == find)
		{
			return ((void *)(sol + i));
		}
		i++;
	}
	return (0);
}
/*
int main()
{
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

	printf("%s", (char *)ft_memchr(tab, -1, 7));
}*/
