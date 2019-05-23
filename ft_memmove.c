/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:11:37 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/23 20:29:53 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*buf_dst;
	unsigned char	*buf_src;
	size_t			i;

	i = 0;
	buf_dst = (unsigned char *)dst;
	buf_src = (unsigned char *)src;
	while (i < len)
	{
		buf_dst[i] = buf_src[i];
		i++;
	}
	return (buf_dst);
}
