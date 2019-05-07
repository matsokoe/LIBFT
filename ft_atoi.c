/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 17:44:11 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/07 17:57:12 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(const char *str);
{
	int i;
	int result;
	int neg;

	i = 0;
	result = 0;
	neg = 1;
	if (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f' ||
		str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == "-")
		{

		}
	}
	if (str[i] > 9)
		nbr = nbr * 10 + str[i] - 48;
	
}
