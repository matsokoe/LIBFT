/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:27:48 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/22 11:17:05 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	if (s != NULL)
		bzero(s, ft_strlen(s));
}

int		main(void)
{
	char *str;

	str = (char *)malloc(sizeof(char) * 6);
	if (str == NULL)
		return (0);
	ft_strcpy(str, "Mariam");
	ft_putstr(str);
	ft_putchar('\n');
	ft_strclr(str);
	if (str[ft_strlen(str)] == '\0')
		ft_putstr("c'est ok");
	return (0);
}
