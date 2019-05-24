/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 15:08:02 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/24 10:37:25 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s, const char *find)
{
	size_t	i;
	size_t	j;
	size_t	buf;

	i = 0;
	if (find[0] == '\0')
		return ((char *)s);
	while (s[i] && s[i] != find[0])
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	buf = i;
	j = 0;
	while (s[i++] == find[j++])
		if (find[j] == '\0')
			return ((char *)&s[buf]);
	return (NULL);
}
