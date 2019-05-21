/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 15:08:02 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/21 10:18:48 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int s;
	int t;
	int temp;

	t = 0;
	if (to_find[t] == '\0')
		return ((char*)str);
	s = 0;
	while (str[s] != '\0')
	{
		t = 0;
		temp = s;
		while (to_find[t] != '\0' && str[s] != '\0' && str[s] == to_find[t])
		{
			t++;
			s++;
		}
		if (to_find[t] == '\0')
			return ((char*)&str[temp]);
		s = temp;
		s++;
	}
	return (0);
}
