/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:45:36 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/04 14:27:00 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(void *s1, void *s2, unsigned int n)
{
	unsigned char	*d1;
	unsigned char	*d2;
	unsigned int	i;

	d1 = (unsigned char *)s1;
	d2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (d1[i] < d2[i])
			return (-1);
		else if (d1[i] > d2[i])
			return (1);
		i++;
	}
	return (0);
}
/*
int main()
{
	int a = 255;
	int b = 100;
	printf("%d", ft_memcmp(&a, &b,2));
	printf("\n%d", memcmp(&a, &b,2));
}*/
