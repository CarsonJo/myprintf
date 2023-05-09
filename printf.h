/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:28:47 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/09 14:02:42 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		handle_variable(const char *str, va_list *list, int *a);
void	convert_adress(va_list *list);
void	convert_char(va_list *list);
void	convert_hex_unsigned(va_list *list);
int		convert_int(va_list *list);
void	convert_maj_hex_unsigned(va_list *list);
void	convert_string(va_list *list);
int		convert_unsigned(va_list *list);
int		ft_printf(const char *all, ...);

#endif
