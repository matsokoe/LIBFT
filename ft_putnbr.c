/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:31:44 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/16 17:07:03 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unsitd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	unsigned int nbr;

	nbr = n;
	if (n < 0)
	{
		write(1, '-', 1);
		nbr = -n;
	}
	while (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10);
	}
	else
		ft_putchar(nbr % 10);
}
