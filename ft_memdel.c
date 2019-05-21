/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:27:12 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/21 16:39:04 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdel(void **ap)
{
	if (ap != NULL && *ap != NULL)
	{
		free (*ap);
		*ap = NULL;
	}
}

int 	main(int argc, char **argv)
{
	char *str;

	str = (char *)malloc(sizeof(char) * 5);
	if (str == NULL)
		return (0);
	ft_strcpy(str, "TOTO");
	ft_putstr(str);
	ft_memdel((void **)&str);
	if(str == NULL)
			ft_putstr("IL EST NUL");
	return (0);
}
