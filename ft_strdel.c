/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:27:36 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/21 20:07:25 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdel(char **as)
{
	if (as != NULL && *as != NULL)
	{
		free(*as);
		*as = NULL;
	}
}

int		main(void)
{
	char *str;

	str = (char *)malloc(sizeof(char) * 7);
	if (str == NULL)
		return (0);
	ft_strcpy(str, "Hello");
	ft_putstr(str);
	ft_putchar('\n');
	ft_putchar('\n');
	ft_strdel(&str);
	if (str == NULL)
		ft_putstr("c'est nul");
	return (0);
}
