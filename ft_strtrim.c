/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntokita <ntokita@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:50:56 by ntokita           #+#    #+#             */
/*   Updated: 2024/06/15 18:00:06 by ntokita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(const char c, const char *set)
{
	int	cur;

	cur = -1;
	while (set[++cur])
		if (set[cur] == c)
			return (1);
	return (0);
}

int	get_start(const char *s1, const char *set)
{
	int	i;
	int	res;

	i = -1;
	res = 0;
	while (s1[++i])
	{
		if (!is_in_set(s1[i], set))
			break ;
		res++;
	}
	return (res);
}

int	get_end(const char *s1, const char *set)
{
	int	i;
	int	res;

	i = ft_strlen(s1);
	if (i == 0)
		return (i);
	res = 0;
	while (s1[--i])
	{
		if (!is_in_set(s1[i], set))
			break ;
		res++;
	}
	return (res);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = get_start(s1, set);
	end = get_end(s1, set);
	if (ft_strlen(s1) == (long unsigned int)start)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) - start - end + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, ft_strlen(s1) - start - end + 1);
	return (str);
}
