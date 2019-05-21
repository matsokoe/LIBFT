/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:27:24 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/21 20:04:30 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;
	
	str = (char *)malloc(sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, size);
	return (str);
}

int		main()
{
	char *buf;

	buf = ft_strnew(6);
	ft_strcpy(buf, "Mariam");
	ft_putstr(buf);
	return (0);	
}
