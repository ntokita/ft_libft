/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntokita <ntokita@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 14:42:12 by ntokita           #+#    #+#             */
/*   Updated: 2024/05/11 15:19:35 by ntokita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	int				i;
	unsigned char	*ptr;

	i = 0;
	ptr = b;
	while (i < (int)len)
	{
		ptr[i] = 0;
		i++;
	}
}
