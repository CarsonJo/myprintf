/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:33:41 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/08 15:18:10 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int		size;

	size = 0;
	while (s[size])
		size++;
	write(fd, s, size);
}
/*
int main()
{
	int fd = 1;
	char *s = "bla bla bla ";
	ft_putstr_fd(s, fd);
}*/
