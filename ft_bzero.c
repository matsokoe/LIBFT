/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:10:50 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/15 16:04:39 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void	ft_bzero(void *s, size_t n)
{
	unsigned char *buf_s;

	buf_s = (unsigned char *)s;
	while (n > 0)
	{
		buf_s[n] = 0;
		n--;
	}
}

int		main(int argc, const char *argv[])
{
	void	*mem;

	alarm(5);
	if (argc == 1 || !(mem = malloc(sizeof(*mem) * 5)))
		return (0);
	if (atoi(argv[1]) == 1)
	{
		memset(mem, 'e', 5);
		ft_bzero(mem, 5);
		write(1, mem, 5);
	}
	else if (atoi(argv[1]) == 2)
	{
		memset(mem, 'e', 5);
		ft_bzero(mem, 0);
		write(1, mem, 5);
	}
	return (0);
}
