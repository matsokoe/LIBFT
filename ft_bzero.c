/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:10:50 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/10 12:05:33 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		main()
{
	char a[50] = "Pluriel";
	char b[50] = " ";
	char c[50] = "\t\n\r\v\f";
	char d[50] = "box 99    bix";
	char e[50] = "        ddd       .. ";
	char f[50] = " o u   i777 ---___++ ";
	char g[50] = " 999999999    88-- ++";
	char h[50] = "9";
	char i[] = "-0";
	char j[50] = "3335";
	char a1[50] = "Pluriel";
	char b1[50] = " ";
	char c1[50] = "\t\n\r\v\f";
	char d1[50] = "box 99    bix";
	char e1[50] = "        ddd       .. ";
	char f1[50] = " o u   i777 ---___++ ";
	char g1[50] = " 999999999    88-- ++";
	char h1[50] = "9";
	char i1[] = "-0";
	char j1[50] = "3335";
	printf("---------------------TEST1---------------------\n");
//	printf("%s\n", ft_bzero(a, 1));
	printf("%s\n", bzero(a1, 1));
	printf("---------------------TEST2---------------------\n");
//	printf("%s\n", ft_bzero(b, 3));
	printf("%s\n", bzero(b1, 3));
	printf("---------------------TEST3---------------------\n");
//	printf("%s\n", ft_bzero(c, 5));
	printf("%s\n", bzero(c1, 5));
	printf("---------------------TEST4---------------------\n");
//	printf("%s\n", bzero(d, 4));
	printf("%s\n", bzero(d1, 4));
	printf("---------------------TEST5---------------------\n");
//	printf("%s\n", ft_bzero(e, 19));
	printf("%s\n", bzero(e1, 19));
	printf("---------------------TEST6---------------------\n");
//	printf("%s\n", ft_bzero(f, 8));
	printf("%s\n", bzero(f1, 8));
	printf("---------------------TEST7---------------------\n");
//	printf("%s\n", ft_bzero(g, 12));
	printf("%s\n", bzero(g1, 12));
	printf("---------------------TEST8---------------------\n");
//	printf("%s\n", ft_bzero(h, 3));
	printf("%s\n", bzero(h1, 3));
	printf("---------------------TEST9---------------------\n");
//	printf("%s\n", ft_bzero(i, 2));
	printf("%s\n", bzero(i1, 2));
	printf("---------------------TEST10---------------------\n");
//	printf("%s\n", ft_bzero(j, 0));
	printf("%s\n", bzero(j1, 0));
	return (0);
}
