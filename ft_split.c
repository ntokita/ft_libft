/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntokita <ntokita@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 18:40:53 by ntokita           #+#    #+#             */
/*   Updated: 2024/05/25 18:42:15 by ntokita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	word_count(const char *s, char splitter)
{
	int		count;
	int		i;
	char	tmp;

	count = 0;
	i = 0;
	tmp = splitter;
	while (s[i])
	{
		if (s[i] == splitter && splitter != tmp)
			count++;
		tmp = s[i];
		i++;
	}
	if (tmp != splitter)
		count++;
	return (count);
}

int	len_to_delimiter(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**free_to_zero(char **res, int i)
{
	while (--i >= 0)
	{
		free(res[i]);
		res[i] = NULL;
	}
	free(res);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = -1;
	j = 0;
	res = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!res)
		return (NULL);
	while (s[++i])
	{
		if (s[i] == c)
			continue ;
		res[j] = ft_substr(s, i, len_to_delimiter(s + i, c));
		if (!res[j])
			return (free_to_zero(res, j));
		i += len_to_delimiter(s + i, c) - 1;
		j++;
	}
	res[j] = NULL;
	return (res);
}
