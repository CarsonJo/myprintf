/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:13:39 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/18 11:57:16 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	printf("%%d :\n");
	printf("%d\n",ft_printf("sortie1 :%d retour :",2147483647));
	printf("%d\n",printf("sortie1 :%d retour :",2147483647));
	printf("%d\n",ft_printf("sortie2 :%d retour :",-2147483648));
	printf("%d\n",printf("sortie2 :%d retour :",-2147483648));
	printf("%d\n",ft_printf("sortie3 :%d retour :",0));
	printf("%d\n",printf("sortie3 :%d retour :",0));
	printf("%d\n",ft_printf("sortie4 :%d retour :",25637));
	printf("%d\n\n",printf("sortie4 :%d retour :",25637));

	printf("%%c :\n");
	printf("%d\n",ft_printf("sortie1 :%c retour :",127));
	printf("%d\n",printf("sortie1 :%c retour :",127));
	printf("%d\n",ft_printf("sortie2 :%c retour :",-128));
	printf("%d\n",printf("sortie2 :%c retour :",-128));
	printf("%d\n",ft_printf("sortie3 :%c retour :",0));
	printf("%d\n",printf("sortie3 :%c retour :",0));
	printf("%d\n",ft_printf("sortie4 :%c retour :",'a'));
	printf("%d\n\n",printf("sortie4 :%c retour :",'a'));

	printf("%%i :\n");
	printf("%i\n",ft_printf("sortie1 :%i retour :",2147483647));
	printf("%i\n",printf("sortie1 :%i retour :",2147483647));
	printf("%i\n",ft_printf("sortie2 :%i retour :",-2147483648));
	printf("%i\n",printf("sortie2 :%i retour :",-2147483648));
	printf("%i\n",ft_printf("sortie3 :%i retour :",0));
	printf("%i\n",printf("sortie3 :%i retour :",0));
	printf("%i\n",ft_printf("sortie4 :%i retour :",25637));
	printf("%i\n\n",printf("sortie4 :%i retour :",25637));

	printf("%%s :\n");
	printf("%d\n",ft_printf("sortie1 :%s retour :",""));
	printf("%d\n",printf("sortie1 :%s retour :",""));
	printf("%d\n",ft_printf("sortie2 :%s retour :","abcdef"));
	printf("%d\n",printf("sortie2 :%s retour :","abcdef"));
	printf("%d\n",ft_printf("sortie3 :%s retour :",(char *)0));
	printf("%d\n",printf("sortie3 :%s retour :",(char *)0));
	printf("retour4: %d\n",ft_printf((char *) 0));
	printf("retour4: %d\n\n",printf((char *)0));

	int a=0;
	printf("%%p :\n");
	printf("%d\n",ft_printf("sortie1 :%p retour :",(char *) 0));
	printf("%d\n",printf("sortie1 :%p retour :",(char *) 0));
	printf("%d\n",ft_printf("sortie2 :%p retour :",&a));
	printf("%d\n",printf("sortie2 :%p retour :",&a));
	printf("%d\n",ft_printf("sortie3 :%p retour :",0xFFFFFFFFFFFF));
	printf("%d\n",printf("sortie3 :%p retour :",0xFFFFFFFFFFFF));

	printf("%%u :\n");
	printf("%d\n",ft_printf("sortie1 :%u retour :",0));
	printf("%d\n",printf("sortie1 :%u retour :",0));
	printf("%d\n",ft_printf("sortie2 :%u retour :",4294967295));
	printf("%d\n",printf("sortie2 :%u retour :",4294967295));
	printf("%d\n",ft_printf("sortie3 :%u retour :",32));
	printf("%d\n",printf("sortie3 :%u retour :",32));
	printf("%d\n",ft_printf("sortie4 :%u retour :",-1));
	printf("%d\n\n",printf("sortie4 :%u retour :",-1));

	printf("%%x :\n");
	printf("%d\n",ft_printf("sortie1 :%x retour :",0));
	printf("%d\n",printf("sortie1 :%x retour :",0));
	printf("%d\n",ft_printf("sortie2 :%x retour :",4294967295));
	printf("%d\n",printf("sortie2 :%x retour :",4294967295));
	printf("%d\n",ft_printf("sortie3 :%x retour :",32));
	printf("%d\n",printf("sortie3 :%x retour :",32));
	printf("%d\n",ft_printf("sortie4 :%x retour :",-1));
	printf("%d\n\n",printf("sortie4 :%x retour :",-1));

	printf("%%X :\n");
	printf("%d\n",ft_printf("sortie1 :%X retour :",0));
	printf("%d\n",printf("sortie1 :%X retour :",0));
	printf("%d\n",ft_printf("sortie2 :%X retour :",4294967295));
	printf("%d\n",printf("sortie2 :%X retour :",4294967295));
	printf("%d\n",ft_printf("sortie3 :%X retour :",32));
	printf("%d\n",printf("sortie3 :%X retour :",32));
	printf("%d\n",ft_printf("sortie4 :%X retour :",-1));
	printf("%d\n\n",printf("sortie4 :%X retour :",-1));

	printf("%%% :\n");
	printf("%d\n",ft_printf("sortie1 :%% retour :"));
	printf("%d\n",printf("sortie1 :%% retour :"));
	printf(": %d\n",ft_printf("%"));
	printf(": %d\n",printf("%"));
	printf(": %d\n",ft_printf("%/vf"));
	printf(": %d\n",printf("%/vf"));
	printf(": %d\n",ft_printf("%%%"));
	printf(": %d\n\n",printf("%%%"));

	printf("csduixX%% :\n");
	printf("%d\n",ft_printf("sortie1 :%c:%d:%s:%u:%i:%x:%X: retour :",100,100,"lache ta main",4294967295,-2147483648,175,175));
	printf("%d\n",printf("sortie1 :%c:%d:%s:%u:%i:%x:%X: retour :",100,100,"lache ta main",4294967295,-2147483648,175,175));
}
