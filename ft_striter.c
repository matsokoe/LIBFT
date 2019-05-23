/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:27:58 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/22 14:09:24 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	unsigned int i;

	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			f(&s[i]);
			i++;
		}
	}
}

int		main(void)
{
	char *s1;

	s1 = (char *)malloc(sizeof(char) + 1);
	ft_strcpy(s1, "LOL");
	ft_putstrr(s1);
	ft_putchar('\n');
	ft_striter(s1, &ft_putchar);
	return (0);
}
