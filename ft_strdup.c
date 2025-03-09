/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntokita <ntokita@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 21:08:19 by ntokita           #+#    #+#             */
/*   Updated: 2024/05/18 21:23:12 by ntokita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(string) + 1));
	if (!ptr)
		return (ptr);
	while (string[i])
	{
		ptr[i] = string[i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
