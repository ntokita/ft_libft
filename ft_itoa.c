/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntokita <ntokita@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 20:34:19 by ntokita           #+#    #+#             */
/*   Updated: 2024/05/25 20:35:47 by ntokita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(int n)
{
	size_t	i;

	i = 1;
	n = n / 10;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			digits;
	char		*res;
	long int	num;

	num = n;
	digits = get_len(num);
	if (n < 0)
	{
		digits++;
		num *= -1;
	}
	res = (char *)malloc(sizeof(char) * (digits + 1));
	if (!res)
		return (NULL);
	res[digits] = 0;
	while (digits--)
	{
		res[digits] = (num % 10) + '0';
		num = num / 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
