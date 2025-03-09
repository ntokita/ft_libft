/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntokita <ntokita@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 21:42:09 by ntokita           #+#    #+#             */
/*   Updated: 2024/07/06 15:22:32 by ntokita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
char	*ft_substr(char const *s, unsigned int start, size_t size)
{
	char	*ret;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_calloc(1, sizeof(char)));
	else if (ft_strlen(s + start) < size)
		size = ft_strlen(s + start);
	ret = malloc(sizeof(char) * (size + 1));
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, s + start, size + 1);
	return (ret);
}
/*int main()
{
	char* a;

	a = ft_substr("", 1, 1);
	printf("%s",a);
}*/
