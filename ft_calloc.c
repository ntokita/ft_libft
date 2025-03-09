/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntokita <ntokita@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 20:48:48 by ntokita           #+#    #+#             */
/*   Updated: 2024/05/25 15:29:26 by ntokita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (size && SIZE_MAX / size < n)
		return (NULL);
	ptr = (void *)malloc(sizeof(char) * (n * size));
	if (!ptr)
		return (ptr);
	ft_bzero(ptr, n * size);
	return (ptr);
}
