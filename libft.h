/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:53:45 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/08 15:30:53 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;
int				ft_atoi(const char *str);
void			ft_bzero(void *src, unsigned int n);
void			*ft_calloc(size_t nb, size_t size);
int				ft_isalnum(int a);
int				ft_isalpha(int a);
int				ft_isascii(int a);
int				ft_isprint(int c);
int				ft_isdigit(unsigned char a);
char			*ft_itoa(int n);
void			*ft_memchr(void *s, int c, unsigned int n);
int				ft_memcmp(void *s1, void *s2, unsigned int n);
void			*ft_memcpy(void *dest, const void *src, unsigned int n);
void			*ft_memmove(void *dest, void *src, unsigned int n);
void			*ft_memset(void *s, int c, unsigned int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);
char			**ft_split(char const *s, char c);
char			*ft_strchr(char *s, int a);
char			*ft_strdup(char *s);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strjoin(char const *s1, char const *s2);
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
int				ft_strlen(const char *a);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
char			*ft_strnstr(const char *s1, const char *s2, unsigned int len);
char			*ft_strrchr(char *s, int a);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_tolower(int c);
int				ft_toupper(int c);
t_list			*ft_lstnew(void *content);
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstadd_back(t_list **lst, t_list *ne);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstadd_front(t_list **lst, t_list *ne);
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));
int				ft_lstsize(t_list *lst);

#endif
