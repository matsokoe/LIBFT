/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:30:21 by matsokoe          #+#    #+#             */
/*   Updated: 2019/06/17 16:49:47 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_first_space(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
		i++;
	return (i);
}

static size_t		ft_end_space(char const *str)
{
	size_t	i;
	size_t	count;
	size_t	len;

	len = ft_strlen(str);
	i = len - 1;
	if (len == 0)
		return (0);
	count = 0;
	while (i > 0 && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
	{
		count++;
		i--;
	}
	if (i == 0)
		return (0);
	return (count);
}

char				*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	end;

	if (s == NULL)
		return (NULL);
	i = ft_first_space(s);
	end = ft_end_space(s);
	len = ft_strlen(s);
	if (len - i <= 0)
		return (ft_strdup(""));
	j = 0;
	str = ft_strnew(len - i - end);
	if (!str)
		return (NULL);
	while (s[i] != '\0' && i < len - end)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	return (str);
}
