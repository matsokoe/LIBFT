/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:10:13 by matsokoe          #+#    #+#             */
/*   Updated: 2019/06/19 09:49:37 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*buf;

	buf = (unsigned char *)b;
	if (len == 0)
		return (b);
	i = -1;
	while (++i < len)
		buf[i] = (unsigned char)c;
	return (buf);
}
