/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:13:04 by matsokoe          #+#    #+#             */
/*   Updated: 2019/06/17 16:29:01 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l;
	size_t	k;

	i = 0;
	l = 0;
	if (find[i] == '\0')
		return ((char *)s);
	while (s[i] && l <= len)
	{
		j = 0;
		k = i;
		while (s[i] && find[j] && s[i] == find[j] && i < len)
		{
			i++;
			j++;
		}
		if (find[j] == '\0')
			return ((char *)&s[k]);
		i = k;
		i++;
		l++;
	}
	return (NULL);
}
