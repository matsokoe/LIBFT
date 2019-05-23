/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:11:52 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/23 14:48:09 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*buf_s;
	size_t			i;

	i = 0;
	buf_s = (unsigned char *)s;
	while (i <= n && buf_s[i] != c)
	{
		if (buf_s[i] == '\0')
			return (0);
		i++;
	}
	if (buf_s[n - 1] != c)
		return (0);
	return (&buf_s[i]);
}
