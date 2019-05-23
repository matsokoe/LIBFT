/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:28:51 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/22 09:43:10 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (0);
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	return (0);
}

int		main(void)
{
	char *s1;
	char *s2;

	s1 = (char *)malloc(sizeof(char) + 1);
	s2 = (char *)malloc(sizeof(char) + 1);
	ft_strcpy(s1, "Coucou");
	ft_strcpy(s2, "coucou");
	ft_putstr(s1);
	ft_putchar('\n');
	ft_putstr(s2);
	ft_putchar('\n');
	ft_putnbr(ft_strequ(s1, s2));
	return (0);
}
