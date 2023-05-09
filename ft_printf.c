/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:27:57 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/09 16:22:40 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "printf.h"
#include "libft.h"

int	ft_printf(const char *all, ...)
{
	int		i;
	va_list	list;
	va_start(list, all);

	i = 0;
	while (all[i])
	{
		if (all[i] == '%')
		{
			i++;
			if(handle_variable(all, &list, &i))
				return (1);
		}
		else
		{
			ft_putchar_fd(all[i], 1);
			i++;
		}
	}
	return (0);
}
/*int main()
{
	int a = 2;
	char b = 'a';
	unsigned int c = 4000000000;
	char *d = "blabla";
	unsigned int e = 27;
	ft_printf("bkoui\n");
	ft_printf("%d,%c,%u,%s,%x,%X,%%\n",a,b,c,d,e,e);
	ft_printf("%c\n",b);
	ft_printf("%u\n",c);
	ft_printf("%s\n",d);
	ft_printf("%x\n",e);
	ft_printf("%X\n",e);
	ft_printf("%p\n",d);
	ft_printf("%%");
}*/
