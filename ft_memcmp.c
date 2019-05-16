/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:12:16 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/15 16:14:22 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*buf_s1;
	unsigned char	*buf_s2;
	size_t			i;

	i = 0;
	buf_s1 = (unsigned char *)s1;
	buf_s2 = (unsigned char *)s2;
	if (n <= 0)
		return (0);
	while (buf_s1[i] && buf_s2[i] && buf_s1[i] == buf_s2[i] && i <= n)
		i++;
	return (buf_s1[i] - buf_s2[i]);
}
