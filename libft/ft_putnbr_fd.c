/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:39:44 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/08 15:18:05 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	i;

	i = n;
	if (i < 0)
	{
		write(fd, "-", 1);
		i *= -1;
	}
	if (i > 9)
		ft_putnbr_fd(i / 10, fd);
	i = i % 10 + '0';
	write (fd, &i, 1);
}
/*
int main()
{
	ft_putnbr_fd(2147483647, 1);
}*/
