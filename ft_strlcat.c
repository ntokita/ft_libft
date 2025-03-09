/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntokita <ntokita@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 15:30:58 by ntokita           #+#    #+#             */
/*   Updated: 2024/05/11 16:03:03 by ntokita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < size && dst[i])
	{
		i++;
	}
	while ((i + j + 1) < size && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != size)
	{
		dst[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}
