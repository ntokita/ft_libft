/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntokita <ntokita@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 19:34:08 by ntokita           #+#    #+#             */
/*   Updated: 2024/05/18 19:35:00 by ntokita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_whitespace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t' || c == '\v' || c == '\f'
		|| c == '\r');
}

int	ft_atoi(const char *str)
{
	long long int	res;
	long long int	check;
	int				minus;

	res = 0;
	minus = 1;
	while (*str && is_whitespace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		check = res;
		res = res * 10 + minus * (*str - '0');
		if (res > check && minus < 0)
			return (0);
		if (res < check && minus > 0)
			return (-1);
		str++;
	}
	return (res);
}
