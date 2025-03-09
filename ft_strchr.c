/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntokita <ntokita@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 18:16:14 by ntokita           #+#    #+#             */
/*   Updated: 2024/05/11 18:36:02 by ntokita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	target;

	target = (char)c;
	str = (char *)s;
	while (*str != target)
	{
		if (!(*str))
			return (NULL);
		str++;
	}
	return (str);
}
