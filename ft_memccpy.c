/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:11:24 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/24 13:55:07 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*buf_dst;
	unsigned char	*buf_src;

	i = -1;
	buf_dst = (unsigned char *)dst;
	buf_src = (unsigned char *)src;
	while (buf_src[++i] != c)
		if (buf_src[i] == '\0')
			return (0);
	if (i < n)
		return (&dst[i + 1]);
	return (0);
}
