/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:10:13 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/10 11:52:52 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*buf;

	i = 0;
	buf = b;
	if (len == 0)
		return (b);
	while (i < len)
	{
		buf[i] = c;
		i++;
	}
	return (buf);
}