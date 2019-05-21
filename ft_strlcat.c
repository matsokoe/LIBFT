/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:12:48 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/21 14:11:09 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*buf_src;
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
	buf_src = (char *)src;
	i = ft_strlen(dst);
	j = 0;
	temp = i;
	while (buf_src[j] != '\0')
	{
		dst[i + j] = buf_src[j];
		j++;
	}
	count = 0;
	while (count < size)
	{
		if (size > temp)
			return (temp + j);
		dst[i] = '\0';
		i++;
		count++;
	}
	return (count + j);
}
