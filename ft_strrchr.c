/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntokita <ntokita@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 18:36:34 by ntokita           #+#    #+#             */
/*   Updated: 2024/05/11 18:48:57 by ntokita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int		i;
	char	target;
	char	*last;

	target = (char)c;
	i = 0;
	last = NULL;
	while (s[i] != 0)
	{
		if (s[i] == target)
			last = (&(s[i]));
		i++;
	}
	if (s[i] == target)
		last = (&(s[i]));
	if (last)
		return (last);
	return (NULL);
}
