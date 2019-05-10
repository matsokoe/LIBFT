/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 15:08:02 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/08 16:52:56 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int s;
	int t;
	int temp;

	t = 0;
	if (to_find[t] == '\0')
		return (str);
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
			return (&str[temp]);
		s = temp;
		s++;
	}
	return (0);
}
