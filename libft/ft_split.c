/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjozefzo <cjozefzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:39:33 by cjozefzo          #+#    #+#             */
/*   Updated: 2023/05/09 10:16:31 by cjozefzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	initialise(int *size, char const *s, char c, int *j)
{
	int		i;

	i = 0;
	*size = 1;
	while (s != 0 && s[i] == c)
		i++;
	*j = i;
	if (s == 0 || !s[i])
		*size = 0;
	while (*size != 0 && s[i])
	{
		if (s[i] == c)
		{
			i++;
			while (s[i] == c && s[i])
				i++;
			if (!s[i])
				break ;
			(*size)++;
		}
		else
			i++;
	}
}

static void	*clean(char **arr, int i)
{
	while (i > 0)
	{
		i--;
		free(arr[i]);
	}
	free(arr);
	return (0);
}

static void	fill(char *dest, char const *src, int start, int end)
{
	int	i;

	i = 0;
	while (start < end)
	{
		dest[i] = src[start];
		start++;
		i++;
	}
	dest[i] = 0;
}

void	ite(int *i, char const *s, char c, int *step)
{
	while (s[*i] == c)
		(*i)++;
	*step = *i;
}

char	**ft_split(char const *s, char c)
{
	int		size;
	int		i;
	char	**arr;
	int		boucle;
	int		step;

	boucle = 0;
	initialise(&size, s, c, &i);
	step = i;
	arr = malloc((size + 1) * sizeof(char *));
	if (arr == 0)
		return (0);
	while (boucle < size)
	{
		while (s[i] != c && s[i])
			i++;
		arr[boucle] = malloc(sizeof(char) * (i - step +1));
		if (arr[boucle] == 0)
			return (clean(arr, boucle));
		fill(arr[boucle], s, step, i);
		ite(&i, s, c, &step);
		boucle++;
	}
	arr[boucle] = 0;
	return (arr);
}
