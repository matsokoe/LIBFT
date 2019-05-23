/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:21:18 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/23 20:51:47 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s || !(str = ft_strnew(len)))
		return (0);
	i = 0;
	while (i < len)
		str[i++] = s[start++];
	return (str);
}
