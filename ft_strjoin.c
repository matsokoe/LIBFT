/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:30:08 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/27 10:28:29 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len_s1;
	int		len_s2;
	size_t	i;
	size_t	j;

	if (!s1 && !s2)
		return (0);
	i = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!(str = ft_strnew(len_s1 + len_s2 + 1)))
		return (0);
	while (s1)
	{
		str[i] = s1[i];
		i++;
	}
	i--;
	j = 0;
	while (s2)
		str[i++] = s2[j++];
	str[len_s1 + len_s2 + 1] = '\0';
	return (str);
}
