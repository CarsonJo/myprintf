/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:28:47 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/15 12:04:34 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		handle_variable(const char *str, va_list *list, int a, int *ret);
void	convert_adress(va_list *list, int *ret);
void	convert_char(va_list *list, int *ret);
void	convert_hex_unsigned(va_list *list, int *ret);
int		convert_int(va_list *list, int *ret);
void	convert_maj_hex_unsigned(va_list *list, int *ret);
void	convert_string(va_list *list, int *ret);
int		convert_unsigned(va_list *list, int *ret);
int		ft_printf(const char *all, ...);

#endif
