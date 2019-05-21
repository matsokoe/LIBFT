/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 16:46:59 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/20 10:22:22 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*buf;

	i = 0;
	buf = (char *)s;
	while (buf[i])
		i++;
	i--;
	while (buf[i] != c)
	{
		if (buf[i] == buf[0])
			return (0);
		i--;
	}
	return (&buf[i]);
}
