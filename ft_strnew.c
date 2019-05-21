/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:27:24 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/21 11:21:16 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*s;

	if ((s = ft_memalloc(size + 1)) == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = '\0';	
		i++;
	}
	return (s);
}
