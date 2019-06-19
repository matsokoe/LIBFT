/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 17:44:11 by matsokoe          #+#    #+#             */
/*   Updated: 2019/06/18 18:52:50 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long	result;
	int		i;
	int		neg;
	long	count;

	i = 0;
	result = 0;
	neg = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			neg = -1;
	while (str[i] >= 48 && str[i] <= 57)
	{
		count = result;
		result = result * 10 + str[i] - '0';
		if (count && (count ^ result) < 0)
			return ((neg == 1) ? -1 : 0);
		i++;
	}
	return ((int)result * neg);
}
