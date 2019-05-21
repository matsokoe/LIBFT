/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:13:04 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/21 10:40:30 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *find, size_t len)
{
	size_t i;
	size_t j;
	size_t l;
	size_t k;

	i = 0;
	l = 0;
	if (find[i] == '\0')
		return ((char *)s1);
	while (s1[i] && l <= len)
	{
		j = 0;
		k = i;
		while (s1[i] && find[j] && s1[i] == find[j] && i < len)
		{
			i++;
			j++;
		}
		if (find[j] == '\0')
			return ((char *)&s1[k]);
		i = k;
		i++;
		l++;
	}
	return (NULL);
}
