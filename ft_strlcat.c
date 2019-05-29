/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:12:48 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/28 10:27:59 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	count;
	size_t	temp;

	if (src[0] == '\0' && dst[0] == '\0')
		return (0);
	if (dst[0] == '\0')
		return (ft_strlen(src));
	if (src[0] == '\0')
		return (size);
	i = ft_strlen(dst);
	j = -1;
	temp = i;
	while (src[++j] != '\0')
		dst[i + j] = src[j];
	count = -1;
	while (++count < size)
	{
		if (size > temp)
			return (temp + j);
		dst[i] = '\0';
		i++;
	}
	return (count + j);
}
