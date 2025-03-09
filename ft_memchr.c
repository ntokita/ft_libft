/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntokita <ntokita@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 19:05:05 by ntokita           #+#    #+#             */
/*   Updated: 2024/05/11 19:15:20 by ntokita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	size_t			i;
	unsigned char	*b;
	unsigned char	target;

	target = (unsigned char)ch;
	b = (unsigned char *)buf;
	i = 0;
	while (i < n)
	{
		if (b[i] == target)
			break ;
		i++;
	}
	if (i == n)
		return (NULL);
	return (&b[i]);
}
